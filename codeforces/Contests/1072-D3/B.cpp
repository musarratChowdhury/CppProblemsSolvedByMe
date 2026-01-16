#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    
    while (T--) {
        int s,m,k;
        cin >> s >> k >> m;
        int ans = 0;
        if (s>=k && k==m) {
            ans = k;
        }
        else if (s>=k && k>m) {
            ans = k%m;
        }else if (s>=k && k<m) {
            ans = m%k;
        }else if (s<k && k<m) {
            ans = (m%k)%s;
        }else {
            ans = 0;
        }
        cout << ans << endl;
    }
    
    return 0;
}