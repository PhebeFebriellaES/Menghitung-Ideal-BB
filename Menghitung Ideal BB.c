#include <stdio.h>

// Fungsi untuk menghitung berat badan ideal
float hitungBeratIdeal(float tinggi, int usia) {
    float berat;
    if (usia < 40) {
        berat = (tinggi - 100) - (0.1 * (tinggi - 100));
    } else {
        berat = (tinggi - 100) - (0.15 * (tinggi - 100));
    }
    return berat;
}

int main() {
    int jumlah, usia;
    float tinggi, berat;
    
    // masukan jumlah data yang ingin dihitung
    printf("Masukkan jumlah orang: ");
    scanf("%d", &jumlah);

    // menggunakan for loop untuk menghitung setiap orang
    for (int i = 1; i <= jumlah; i++) {
        printf("\nData orang ke-%d\n", i);

        // Input tinggi dan usia
        printf("Masukkan tinggi badan (cm): ");
        scanf("%f", &tinggi);

        printf("Masukkan usia (tahun): ");
        scanf("%d", &usia);

        // Hitung berat ideal dengan fungsi
        berat = hitungBeratIdeal(tinggi, usia);

        // menampilkan berat badan ideal setiap orang
        printf("Berat badan ideal orang ke-%d adalah: %.2f kg\n", i, berat);
    }

    printf("\nSelesai menghitung berat badan ideal.Ideal berat badan kamu: \n");

    return 0;
}
