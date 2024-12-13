//
// Created by User on 11/10/2024.
//
#include <bits/stdc++.h>

using namespace std;

// https://cses.fi/problemset/task/1091
const int N = 2e5+10;
int a[N];


int main() {

    int n, m;
    cin >> n >> m;

    vector<int> tickets(n);
    vector<int> customers(m);

    for(int i = 0; i < n; i++) {
        cin >> tickets[i];
    }
    for(int i = 0; i < m; i++) {
      cin >> customers[i];
    }

    sort(tickets.begin(), tickets.end());
    for(int i = 0; i < m; i++) {
      //need to check if a ticket exist in that price
      //range
      auto it = upper_bound(tickets.begin(), tickets.end(), customers[i]);
      if(it != tickets.begin()) {
          --it;
        cout << *it << endl;
        tickets.erase(it);
      }else cout << -1 << endl;
    }

}
