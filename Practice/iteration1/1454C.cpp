//
// Created by muhit on 2/14/2026.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);

        int last_pos = 0;
        int last_el =  arr[0];
        int first_el_in_arr = arr[0];
        int last_el_in_arr = arr[n-1];
        unordered_set<int> curr_stack;
        unordered_map<int, vector<int>> last_pos_map;

        for (int i =  0;i<n;i++) {
            cin>>arr[i] ;
        }

        for (int i = 0; i<n; i++) {
            curr_stack.insert(arr[i]);

            if (curr_stack.count(arr[i])==0) {
                //found new element
                curr_stack.clear();
                last_pos_map[last_el].push_back(last_pos);
                last_pos = 0;
            }else {
                last_el = arr[i];
                last_pos = i;
            }
        }

        //now we will run another for loop to find out the number with lowest  occ in the last_pos_map
    }
}