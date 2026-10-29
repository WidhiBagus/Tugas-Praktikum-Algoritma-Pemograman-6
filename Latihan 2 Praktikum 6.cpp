#include <iostream>
using namespace std;

int main() {
    int nilai;
    int kehadiran;

    cout << "Masukkan nilai ujian (0-100): ";
    cin >> nilai;
    cout << "Masukkan persentase kehadiran (0-100): ";
    cin >> kehadiran;

    if (nilai >= 0 && nilai <= 100 && kehadiran >= 0 && kehadiran <= 100) {
        // IF luar: cek kehadiran
        if (kehadiran >= 75) {
            // IF dalam: cek nilai
            if (nilai >= 85) {
                cout << "LULUS dengan predikat A" << endl;
            } else if (nilai >= 70) {
                cout << "LULUS dengan predikat B" << endl;
            } else if (nilai >= 60) {
                cout << "LULUS dengan predikat C" << endl;
            } else {
                cout << "TIDAK LULUS (nilai kurang dari 60)" << endl;
            }
        } else {
            cout << "TIDAK LULUS (kehadiran kurang dari 75%)" << endl;
        }
    } else {
        cout << "Input tidak valid!" << endl;
    }

    return 0;
}
