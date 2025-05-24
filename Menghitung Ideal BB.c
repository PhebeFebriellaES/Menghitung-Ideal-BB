#include <stdio.h>

// Fungsi untuk menghitung berat ideal
float hitungBeratIdeal(float tinggi, int usia) {
    if (usia < 40) {
        return (tinggi - 100) - 0.1 * (tinggi - 100);
    } else {
        return (tinggi - 100) - 0.15 * (tinggi - 100);
    }
}

int main() {
    int jumlah, usia;
    float tinggi, berat;

    printf("Masukkan jumlah orang: ");
    scanf("%d", &jumlah);

    // FOR LOOP untuk input dan proses beberapa orang
    for (int i = 1; i <= jumlah; i++) {
        printf("\nData orang ke-%d\n", i);

        // Input tinggi
        printf("Masukkan tinggi badan (cm): ");
        scanf("%f", &tinggi);

        // Memvalidasi Usia menggunakan while loop (usia harus > 0)
        printf("Masukkan usia (tahun): ");
        scanf("%d", &usia);
        while (usia <=  0) {
            printf("Usia yang kamu masukan tidak Valid. Coba ulang Kembali!: ");
            scanf("%d", &usia);
        }

        // Menghitung dan Menampilkan berat ideal
        berat = hitungBeratIdeal(tinggi, usia);
        printf("Berat badan ideal orang ke-%d adalah: %.2f kg\n", i, berat);
    }

    printf("\nSelesai menghitung semua data.\n");

    return 0;
}
