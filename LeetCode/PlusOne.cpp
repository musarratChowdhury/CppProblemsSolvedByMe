//
// Created by User on 12/16/2024.
//
//https://leetcode.com/problems/plus-one/

//Edge Cases to consider :
//[9] -> [1,0]
//[9,9] -> [1,0,0]
//[9,8,9] -> [9,0,0]
#include <bits/stdc++.h>

using namespace std;
vector<int> plusOne(vector<int>& digits) {
    int theLastDigit = digits[digits.size()-1];
    if(theLastDigit != 9){
        digits[digits.size()-1] = theLastDigit + 1;
    }else{
        int i = digits.size()-1;
        while(i>=0){
            digits[i]+=1;
            if (digits[i]!=10) break;
            i--;
        }
        for(int i=0; i<digits.size(); i++) {
            if (i==0 && digits[i]==10) {
                digits[i] = 1;
                digits.push_back(0);
            }
            else if (digits[i]==10) {
                digits[i] = 0;
            }
        }
    }
    return digits;
}

int main(){

    int x = 100;
    //  cin >> x;
    //
    // cout<<x << endl;

    vector<int> v  = {9,8,9};
    vector<int> result = plusOne(v);
    return 0;

}