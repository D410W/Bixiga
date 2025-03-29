//#pragma once
#include <iostream>
#include <cmath>

using namespace std;

int f(int x){
    return (pow(x,2)) + (2*x) + (3); // x²+2x+3
}

int main() {
    int t;

    cin >> t;

    cout << f(f(f(t)+t)+f(f(t))) << endl; // f(f(f(t)+t)+f(f(t))) 

    return 0;
}