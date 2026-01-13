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

        if (n == 2) {
            cout << 2 << endl;
        }
        else if (n == 3) {
            cout << 3 << '\n';
        }
        else if (n > 2 && n%2==0) {
            cout << 0 << endl;
        }else if (n>2 && n%2 ==1) {
            cout << 1 << endl;
        }

    }
    
    return 0;
}