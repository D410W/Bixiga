//#pragma once
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int score;

    static int novice = 40;
    static int intermediate = 70;
    static int advanced = 90;

    cin >> score;

    if (score < novice){
        cout << (novice - score) << endl;
    } else if (score < intermediate){
        cout << (intermediate - score) << endl;
    } else if (score < advanced){
        cout << (advanced - score) << endl;
    } else {
        cout << "expert" << endl;
    }

    return 0;
}