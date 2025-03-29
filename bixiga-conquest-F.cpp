//#pragma once
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

void bubbleSort(vector<string>& v) {
    for (int i = v.size()-1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (v[j].length() > v[j+1].length()) {
                swap(v[j], v[j+1]);
            }
        }
    }
}

int main() {
    int n;

    cin >> n;

    vector<string> strings(n);

    for (int i = 0; i < n; i++){
        cin >> strings[i];
    }

    bubbleSort(strings);

    string ans;

    for (string i : strings) {
        ans += i;
    }

    cout << ans << endl;

    return 0;
}