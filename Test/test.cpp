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
    
    int x = 100;
    //  cin >> x;
    //
    // cout<<x << endl;

    vector<int> v  = {3,2,2,3};
    removeElement(v, 3);
    return 0;

}

