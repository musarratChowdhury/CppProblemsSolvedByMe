#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target) {
    map<int, int> m;
    vector<int> result;
    for (int i = 0; i < nums.size(); i++) {
        if (m.find(nums[i]) != m.end()) {
            result.push_back(i);
            result.push_back(m[nums[i]]);
            return result;
        }
        m[target - nums[i]] = i;
    }
    return result;
}
int main() {
    vector<int> test = {-2,7,11,15};
    int target = 9;

    twoSum(test, target);

    return 0;
};

