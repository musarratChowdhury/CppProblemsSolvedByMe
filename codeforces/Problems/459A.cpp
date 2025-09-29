//
// Created by User on 9/28/2025.
//
//https://codeforces.com/problemset/problem/459/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    //check if they are diagonal of square

    //check if they can be a length of a square
    if (x1 == x2 || y1 == y2){
        int d = max(abs(x1-x2), abs(y1-y2));

        if(x1 == x2){
            cout << x1 + d << " " << y1 << " " << x2+d << " " << y2 << endl;
        }else {
            cout << x1 <<" "<< y1+d <<" "<< x2 <<" "<< y2+d << endl;
        }

    }else if(abs(x1-x2) == abs(y1-y2)){
        //calculate the lenth from formula d = a*root(2)
        //then calc the coords
        cout << x1 <<" "<< y2 <<" "<< x2 <<" "<< y1 << endl;
    }else{
        cout << -1 << endl;
    }
}