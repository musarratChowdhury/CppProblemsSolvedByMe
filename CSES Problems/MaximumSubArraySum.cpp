//
// Created by muhit on 12/11/24.
// https://cses.fi/problemset/task/1643

//Given an array of n integers, your task is to find the maximum sum of values in a contiguous, nonempty subarray.
//Input
//The first input line has an integer n: the size of the array.
//The second line has n integers x_1,x_2,\dots,x_n: the array values.
//Output
//Print one integer: the maximum subarray sum.
//Constraints
//
//1 \le n \le 2 \cdot 10^5
//-10^9 \le x_i \le 10^9
//
//Example
//Input:
//8
//-1 3 -2 5 3 -5 2 2

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int maxSum = INT_MIN;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + a[i];
        maxSum = max(sum, maxSum);
        if (sum < 0) {
            sum = 0;
        }
    }
    cout << maxSum << endl;
}
