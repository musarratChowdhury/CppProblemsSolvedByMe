//
// Created by muhit on 19/9/25.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T>0) {
        int n;
        cin >> n;
        vector<int> nums(n);
        // 2 3 5 = 10 EVEN = odd + even + odd
        // 2 3 2 = 7 ODD = even + odd + even
        for (int i=0; i<n; i++) {
            cin >> nums[i];
        }

        int sum = 0;
        int numb_odds = 0;
        for (int j:nums) {
            if (j%2!=0) numb_odds++;
            sum+=j;
        }

        if (sum%2==0 && numb_odds!=0 && numb_odds%2==0 && numb_odds!=n) {
            cout<< "YES" <<endl;
        }else if (sum%2!=0) {
            cout<< "YES" <<endl;
        }else {
            cout<< "NO" << endl;
        }
        T--;
    }
}