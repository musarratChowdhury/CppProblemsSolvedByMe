//
// Created by User on 5/17/2025.
//
#include <bits/stdc++.h>

using namespace std;

int main(){
    // https://codeforces.com/problemset/problem/1541/A
    // int n = 5;
    int n;
    int t; //number of test case
    // int arr[n] = {1,2,3,4,5};

    cin >> t ;

    for(int j=0;j<t;j++) {
        cin >> n;

        int arr[n];

        for(int k=0;k<n;k++) {
           arr[k] = k+1;
        }

        for(int i=0;i<n-1;i+=2) {
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }

        if(n%2!=0) {
            int temp = arr[n-1];
            arr[n-1] = arr[n-2];
            arr[n-2] = temp;
        }
        for(int k=0;k<n;k++) {
            cout << arr[k] << " ";
        }

        cout << endl;
    }
}
