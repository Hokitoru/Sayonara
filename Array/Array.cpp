#include <iostream>
#include <string>

int main()
{
    using namespace std;
    setlocale(0, "");

    int size = 10;
    int mas0[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    short mas1[10] = { 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
    long mas2[10] = { 21, 22, 23, 24, 25, 26, 27, 28, 29, 30 };
    bool mas3[10] = { 1, 0, 1, 0, 1, 0, 1, 0, 1, 0 };
    char mas4[10] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'q', 'd' };
    double mas5[10] = { 0.111, 0.222, 0.333, 0.444, 0.555, 0.666, 0.777, 0.888, 0.999, 1.111 };
    float mas6[10] = { 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1 };
    string mas7[10] = { "qw", "qe", "qr", "qt", "qa", "qs", "qd", "qf", "qg", "qh" };

    for (int i = 0; i < size; i++) {
        cout << mas0[i] << endl;
    }

    for (int i = 0; i < size; i++) {
        cout << mas1[i] << endl;
    }

    for (int i = 0; i < size; i++) {
        cout << mas2[i] << endl;
    }

    for (int i = 0; i < size; i++) {
        cout << mas3[i] << endl;
    }

    for (int i = 0; i < size; i++) {
        cout << mas4[i] << endl;
    }

    for (int i = 0; i < size; i++) {
        cout << mas5[i] << endl;
    }

    for (int i = 0; i < size; i++) {
        cout << mas6[i] << endl;
    }

    for (int i = 0; i < size; i++) {
        cout << mas7[i] << endl;
    }


}