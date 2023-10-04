#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

	int main() {
    double sudut;
    double kecepatan;
    double jarak;
    
    cout << "Masukan Nilai Sudut: ";
    cin >> sudut;
    cout << "Masukan Nilai Kecepatan: ";
    cin >> kecepatan;
    jarak = sin(2 * sudut * 3.141 / 180) * 10;
    cout << "Jarak Adalah: ";
    cout << jarak << endl;
    return 0;
}

// The following implements type conversion functions.
string toString (double value) { //int also
    stringstream temp;
    temp << value;
    return temp.str();
}

int toInt (string text) {
    return atoi(text.c_str());
}

double toDouble (string text) {
    return atof(text.c_str());
}

