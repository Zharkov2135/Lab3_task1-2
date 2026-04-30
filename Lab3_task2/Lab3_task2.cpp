#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int m, n;
    cout << "Vvedit m (<=4): ";
    cin >> m;
    cout << "Vvedit n (<6): ";
    cin >> n;

    if (m < 1) m = 1;
    if (m > 4) m = 4;
    if (n < 1) n = 1;
    if (n > 5) n = 5;

    double A[4][6];
    double B[6][4];

    cout << "\nVvedit elementy matrytsi A(" << m << "x" << n << "):\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "A[" << i << "][" << j << "] = ";
            cin >> A[i][j];
        }
    }

    // Transponuvannia: B(n x m)
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            B[j][i] = A[i][j];
        }
    }

    cout << "\nMatrytsia A:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << setw(8) << fixed << setprecision(2) << A[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "\nTransponovana matrytsia B:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << setw(8) << fixed << setprecision(2) << B[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
