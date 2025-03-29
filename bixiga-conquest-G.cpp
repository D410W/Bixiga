//#pragma once
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

vector<int> f(vector<int> x){
    vector<int> toReturn = {1, 1};

    x[0] = x[0] + x[1];

    toReturn[0] = x[1];

    toReturn[1] = x[0];

    return toReturn;
}

int main() {
    int n;
    cin >> n;

    vector<int> ans = {1,1};

    for (int i = 0; i < n; i++) {
        ans = f(ans);
    }

    cout << ans[0] << endl;

    return 0;
}