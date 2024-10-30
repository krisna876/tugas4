#include <stdio.h>

int main() {
    int N;

    // Input nilai N
    printf("Masukkan nilai N: ");
    scanf("%d", &N);

    // Proses berdasarkan kondisi
    if (N > 50) {
        N = N - 25;
    } else {
        N = N + 10;
    }

    // Output nilai N
    printf("Nilai N setelah proses: %d\n", N);

    return 0;
}
