#include <bits/stdc++.h>
using namespace std;

// Function to count subarrays with at most k distinct elements
int atMost(vector<int>& nums, int k) {
    unordered_map<int, int> freq;
    int left = 0;
    int distinct = 0;
    int answer = 0;
    
    cout << "\n=== atMost(" << k << ") Simulation ===\n";
    cout << "Initial setup:\n";
    cout << "left = 0, right = 0\n";
    cout << "frequency map {}\n";
    cout << "distinct = 0\n";
    cout << "answer = 0\n\n";
    
    for (int right = 0; right < nums.size(); right++) {
        cout << "Step " << (right + 1) << ": right = " << right << ", element = " << nums[right] << "\n";
        
        // Add current element
        if (freq[nums[right]] == 0) {
            distinct++;
        }
        freq[nums[right]]++;
        
        cout << "Add " << nums[right] << " → freq {";
        bool first = true;
        for (auto& p : freq) {
            if (p.second > 0) {
                if (!first) cout << ", ";
                cout << p.first << ":" << p.second;
                first = false;
            }
        }
        cout << "}, distinct = " << distinct << "\n";
        
        // Shrink window if too many distinct elements
        while (distinct > k) {
            cout << "Too many! (>" << k << ") → shrink from left:\n";
            cout << "Remove " << nums[left] << " at left=" << left << " → ";
            
            freq[nums[left]]--;
            if (freq[nums[left]] == 0) {
                distinct--;
            }
            
            cout << "freq {";
            first = true;
            for (auto& p : freq) {
                if (p.second > 0) {
                    if (!first) cout << ", ";
                    cout << p.first << ":" << p.second;
                    first = false;
                }
            }
            cout << "} → distinct = " << distinct << "\n";
            
            left++;
            cout << "Move left=" << left << "\n";
        }
        
        // Count subarrays ending at current right
        int count = right - left + 1;
        answer += count;
        
        cout << "Now valid again with left=" << left << "\n";
        cout << "Window is [" << left << "," << right << "]\n";
        cout << "Count = (" << right << "-" << left << "+1) = " << count << "\n";
        cout << "answer = " << (answer - count) << "+" << count << " = " << answer << "\n";
        
        cout << "✅ Subarrays ending at " << right << ": ";
        for (int i = left; i <= right; i++) {
            cout << "[";
            for (int j = i; j <= right; j++) {
                cout << nums[j];
                if (j < right) cout << ",";
            }
            cout << "]";
            if (i < right) cout << ", ";
        }
        cout << "\n\n";
    }
    
    cout << "Final result: atMost(" << k << ") = " << answer << "\n";
    return answer;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // Example: nums = [1,2,1,2,3], k = 2
    vector<int> nums = {1, 2, 1, 2, 3};
    int k = 2;
    
    cout << "Input: nums = [1,2,1,2,3], k = " << k << "\n";
    
    int result = atMost(nums, k);
    
    cout << "\n=== Summary ===\n";
    cout << "Total subarrays with at most " << k << " distinct elements: " << result << "\n";
    
    // Also compute atMost(1) for comparison
    cout << "\n";
    int result1 = atMost(nums, 1);
    cout << "Total subarrays with at most 1 distinct element: " << result1 << "\n";
    
    cout << "\nSubarrays with exactly " << k << " distinct elements: " << (result - result1) << "\n";
    
    return 0;
}