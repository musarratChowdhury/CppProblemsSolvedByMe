//
// Created by muhit on 9/27/25.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    string A = "abc";
    string B = "adA";

    cin >> A;
    cin >> B;

    for (auto &x: A) {
        x = tolower((unsigned char)x);
    }

    for (auto &x: B) {
       x = tolower((unsigned char)x);
    }

    if (A.compare(B)>0) {
        cout << 1 << endl;
    }
    else if (A.compare(B)<0) {

        cout << -1 << endl;
    }else {
        cout << 0 << endl;
    }
}