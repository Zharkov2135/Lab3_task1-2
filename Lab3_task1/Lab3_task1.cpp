#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cout << "Vvedit n (rekomendovano 7): ";
    cin >> n;

    double* x = new double[n];

    cout << "Vvedit " << n << " elementiv masyvu:\n";
    for (int i = 0; i < n; i++) {
        cout << "x[" << i << "] = ";
        cin >> x[i];
    }

    int i0, i1;
    cout << "Vvedit pochatkovyi indeks i0: ";
    cin >> i0;
    cout << "Vvedit kintsevyi indeks i1: ";
    cin >> i1;

    if (i0 < 0) i0 = 0;
    if (i1 >= n) i1 = n - 1;
    if (i0 > i1) { int t = i0; i0 = i1; i1 = t; }

    double mn = x[i0];
    int pos = i0;

    cout << "\nPromizhni znachennia:\n";
    cout << " i   x[i]       min        pos\n";
    cout << "--------------------------------\n";

    for (int i = i0; i <= i1; i++) {
        if (x[i] < mn) {
            mn = x[i];
            pos = i;
        }
        cout << setw(2) << i << "  "
            << setw(8) << fixed << setprecision(2) << x[i] << "  "
            << setw(8) << mn << "  "
            << setw(3) << pos << "\n";
    }

    cout << "\nMin element = " << mn << "\n";
    cout << "Nomer elementa (1..n) = " << (pos + 1) << "\n";
    cout << "Indeks (0..n-1) = " << pos << "\n";

    delete[] x;
    return 0;
}
#include <iostream>
#include <iomanip>
using namespace std;


