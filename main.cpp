#include <iostream>
using namespace std;

void multiplyMatrices(int** A, int** B, int** C, int r1, int c1, int c2) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            C[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int r1 = 2, c1 = 3, r2 = 3, c2 = 2;

    // Dynamic allocation of 2D arrays
    int** A = new int*[r1];
    int** B = new int*[r2];
    int** C = new int*[r1];

    for (int i = 0; i < r1; i++) A[i] = new int[c1];
    for (int i = 0; i < r2; i++) B[i] = new int[c2];
    for (int i = 0; i < r1; i++) C[i] = new int[c2];

    // Initialize matrices
    int count = 1;
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            A[i][j] = count++;

    count = 1;
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            B[i][j] = count++;

    multiplyMatrices(A, B, C, r1, c1, c2);

    cout << "Result Matrix:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    // Free memory
    for (int i = 0; i < r1; i++) delete[] A[i];
    for (int i = 0; i < r2; i++) delete[] B[i];
    for (int i = 0; i < r1; i++) delete[] C[i];
    delete[] A; delete[] B; delete[] C;

    return 0;
}
