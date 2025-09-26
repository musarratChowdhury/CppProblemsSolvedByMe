#include <bits/stdc++.h>

using namespace std;
int removeElement(vector<int>& nums, int val) {
    vector<int> unexpectedNums;
    vector<int> result;
    int s = 0;

    for(int i = 0; i<nums.size(); i++){
        if(nums[i]==val) unexpectedNums.push_back(nums[i]);
        else result.push_back(nums[i]);
    };

    s = result.size();

    for(int i = 0; i<unexpectedNums.size(); i++){
        result.push_back(unexpectedNums[i]);
    }
    nums = result;
    return s;
}

int main(){
   //given a string , find the first non-repeating character in it:
    string input  = "loveleetcode";
    string input2 = "loveleetcode";

    map<char, int> charMap;

    for (auto c : input) {
       charMap[c]++;
    }

    for (int i=0; i<input.size(); i++) {
        if (charMap[input[i]]==1){
            cout<<input[i]<<" ";
            break;
        }
    }

    return 0;
}

