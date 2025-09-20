//
// Created by muhit on 19/9/25.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T>0) {
        int X, Y;
        cin >> X >> Y;

        //after 1 minute temp increases by 1
        //after 3 min temp inc by 3 ...
        int mins = 0;
        while (X > Y) {
            mins++;

            Y+=(mins);
        }

        //result for each test case
        cout <<  mins << endl;

        T--;
    }
}