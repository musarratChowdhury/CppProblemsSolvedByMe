#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; // the number of songs
    cin >> n;
    int longest_seq = 0;
    int left = 0;
    unordered_set<int> seen;
    unordered_map<int, int> freq;
    freq.reserve(n);
    freq.max_load_factor(0.7);

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int right = 0; right < n; right++) {
        while(freq[arr[right]]>0) {
            freq[arr[left]]--;
            left++;
        }
        freq[arr[right]]++;
        longest_seq = max(longest_seq, right - left +1);
    }

    cout << longest_seq << endl;
    
    return 0;
}