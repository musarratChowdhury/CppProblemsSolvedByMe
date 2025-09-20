#include<iostream>
using namespace std;

int main(){
    int n,m=0,k,j;
    cout << "enter the number of array : ";
    cin >> n;
    int ara[n];
    for (int i = 0 ; i<n ;i++){
        cin >> ara[i];
    }
    cout << "enter the value you want to search : ";
    cin >> j;
    cout << "\n" << "enter the value you want to put if found : ";
    cin >> k;
    cout << endl;

    for (int i = 0 ; i<n ;i++){
        if(ara[i]==j){
            m++;
            cout << i << ",";
            ara[i]=k;
        }
    }
    cout << endl;
    if (m==0){
        cout << "not found" << endl;
    }
    else {
        cout << "found" << endl;
    }
    cout << " the frequency is of " << k << " is " << m << endl;

    for (int i = 0 ; i<n ;i++){
        cout  << ara[i] << ",";
    }

    return 0;

}