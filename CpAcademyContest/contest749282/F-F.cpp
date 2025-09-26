//
// Created by muhit on 19/9/25.
//
// 0,  2,  4,  6,  8,  n = 0
// 20, 22, 24, 26, 28, n = 1
// 40, 42, 44, 46, 48, n = 2
// 60, 62, 64, 66, 68, n = 3
// 80, 82, 84, 86, 88, n = 4
// 200, 202, 204, 206, 208 n = 10
// 220, 222, 224, 226, 228, n = 11
// 240, 242, 264, 246, 248, n = 12
// 260, 262, 264, 266, 268, n = 13
// 280, 282, 284, 286, 288, n = 14
// 400, 402, 404, 406, 408, n = 20
// in every 20th number (20th excluded), there is only 5 like this
// so if n is 8, 5 + 3
// 5th means 8
// then we have 20, 22, 24
// every 5th pos is +20;
// so suppose n = 25; which means 25/5 = 5 => 5*20 =
// x = 8 m*2 + (20 * n), n should start from 0;
// x = 6 m*2 + (20 * n),
// x = 4 m*2 + (20 * n),
// x = 2 m*2 + (20 * n),
// x = 0 m*2 + (20 * n)
// for 30 it is 6 dividing by 5 we get;
// but it would be correct if it was n =10;
// Input = 8;
// rem = input%5 = 3 = m; (can be 1, 2, 3, 4, 0)
// res = input/5 = 1 = n;
// condition is all digits should be even number, 0 also;
// constraint 10 ^ 12;

#include<bits/stdc++.h>
using namespace std;


int rem_arr[5] = {8, 0, 2, 4, 6};
long long int formula(long long int input) {
    long long int rem = input%5;
    long long int res = input/5;

    return rem_arr[rem] +(20 *res);
}

int main() {

    long long int input;
    cin >> input;

    cout << formula(input) << endl;
    // cout << "Hello world!" << endl;
    return 0;
}