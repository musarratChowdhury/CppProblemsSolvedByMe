
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        
        bool hasAP = false;
        unordered_set<int> all(arr.begin(), arr.end());
        
        for (int i = 0; i < n && !hasAP; i++) {
            for (int j = i + 1; j < n && !hasAP; j++) {
                int expected = 2 * arr[j] - arr[i];
                if (all.count(expected)) {
                    hasAP = true;
                    break;
                }
            }
        }
        
        cout << (hasAP ? "NO" : "YES") << '\n';
    }
    
    return 0;
}
