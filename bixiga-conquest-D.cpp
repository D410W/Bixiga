//#pragma once
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;

    cin >> n;

    string text = to_string(n);

    while (text.length() < 4) {
        text = "0"+text;
    }

    cout << text << endl;

    return 0;
}