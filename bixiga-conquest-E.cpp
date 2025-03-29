//#pragma once
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int bytes[8];

    for (int i = 0; i < 8; i++){
        cin >> bytes[i];
    }

    for (int i = 0; i < 8; i++) {
        if (bytes[i] == 9) {
            cout << 'F' << endl;
            break;
        }
        if (i == 7) {
            cout << 'S' << endl;
        }
    }

    return 0;
}