//
// Created by User on 5/10/2025.
//
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;// number of apartments;
    int m;// number of applicants;

    cin>>n >> m;
    vector<int> apartments(n,0);
    vector<int> applicants(m,0);
    cout<<"enter k"<<endl;
    int k; //accepatable range
    cin >> k;
    cout << "enter the apartments" << endl;
    for(int i =0; i<n; i++) {
        cin>> apartments[i];
    }

    cout << "Enter the applicants" << endl;
    for(int j = 0; j<m; j++) {
        cin >> applicants[j];
    }

    //now we will sort the arrays
    sort(apartments.begin(), apartments.end());
    sort(applicants.begin(), applicants.end());
    //now we will start the two pointer approach

    int l1 = 0, r1 = n-1;
    int l2 = 0, r2 = m-1;
    int matches = 0;
    while(l1<n && l2<m) {
        if(abs(apartments[l1]-applicants[l2])<=k) {
            l1++;
            l2++;
            matches++;
        }
        else if(apartments[l1]<applicants[l2]-k) {
            l1++;
        }else {
            l2++;
        }
    }

    cout << "matches : " << matches <<endl;
    return 0;
}