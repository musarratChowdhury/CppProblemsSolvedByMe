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
        int x3 = x2 + d;
        int y3 = y2;
        int x4 = x1 + d;
        int y4 = y2;


    }else if(abs(x1-x2) == abs(y1-y2)){
        //calculate the lenth from formula d = a*root(2)
        //then calc the coords
    }else{
        cout << -1 << endl;
    }
}