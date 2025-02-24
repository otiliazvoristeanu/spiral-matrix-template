#include <iostream>
#include "spiral.h"

using namespace std;

#define MAX 100

int main() {
    int n;
    cin >> n;  // Read matrix size (must be odd)
    int mat[MAX][MAX];

    // Read matrix elements
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> mat[i][j];

    // Call the function to print the matrix in a spiral order
    spiralPrint(n, mat);

    return 0;
}
