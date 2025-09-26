//
// Created by muhit on 19/9/25.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    //convert to binary;
    vector<int> bin_arr;
    while (N>0) {
        bin_arr.push_back(N%2);
        N/=2;
    }

    // reverse(bin_arr.begin(),bin_arr.end());
    int res = 0;
    for (int x:bin_arr) {
        if (x == 0) res++;
        else break;;
    }
    cout<<res<<endl;
}