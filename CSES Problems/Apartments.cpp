//
// Created by User on 11/10/2024.
//
#include <bits/stdc++.h>

using namespace std;

// https://cses.fi/problemset/task/1084

const int N = 2e5+10;
int a[N];


int main() {

    // number of applicants = n;
    // number of free apartments = m;
    // maximum allowed difference = k;

    int n, m, k;
    cin >> n >> m >> k;

    vector<int> applicants(n);
    vector<int> freeApartments(m);

    for(int i = 0; i < n; i++) {
        cin >> applicants[i];
    }

    for(int i = 0; i < m; i++) {
        cin >> freeApartments[i];
    }

    sort(applicants.begin(), applicants.end()); // n (log n)
    sort(freeApartments.begin(), freeApartments.end()); // m (log m)

    int i = 0, j = 0;
    int matches = 0;

    while(i < n && j < m) {
        if(applicants[i] - k > freeApartments[j]) {
            j++;
        }
        else if(applicants[i] + k < freeApartments[j]) {
            i++;
        }else {
            i++;
            j++;
            matches++;
        }
    }

    cout << matches << endl;
}
