//
// Created by User on 11/10/2024.
//
#include <bits/stdc++.h>

using namespace std;

//Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

//Example 1:
//
//Input: nums = [1,2,3,1]
//
//Output: true
//
//Explanation:
//
//The element 1 occurs at the indices 0 and 3.
//
//Example 2:
//
//Input: nums = [1,2,3,4]
//
//Output: false
//
//Explanation:
//
//All elements are distinct.
//
//Example 3:
//
//Input: nums = [1,1,1,3,3,4,3,2,4,2]
//
//Output: true
//
//
//
//Constraints:
//
//1 <= nums.length <= 10^5
//-10^9 <= nums[i] <= 10^9

const int N = 1e5+10;
int a[N];
int pf[N];

bool containsDuplicate(vector<int>& nums) {
      unordered_set<int> tracker;
        for (int num : nums) {
            if (tracker.count(num) > 0) { // Duplicate found
                return true;
            }
            tracker.insert(num);
        }
        return false;
}

int main() {
    vector<int> nums;
    nums = vector<int>{1,2,3,4,5,6,7,7,8,9};
    cout << containsDuplicate(nums) << endl;

    //TIME COMPLEXITY
    // O(N)

}
