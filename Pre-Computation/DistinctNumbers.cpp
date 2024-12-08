//
// Created by User on 11/10/2024.
//
#include <bits/stdc++.h>

using namespace std;

// Given array a of N integers. Given Q queries and in each query given L and R print sum of array elements from
// index L to R(L, R included)

//Constraints
// 1 <= N <= 10^5
// 1 <= a[i] <= 10^9
// 1 <= Q <= 10^5
// 1 <= L, R <= N
const int N = 2e5+10;
int a[N];


int main() {

    int n;
    cin >> n;

    set<int> distinctValues;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        distinctValues.insert(x);
    }

    cout << distinctValues.size() << endl;

}
