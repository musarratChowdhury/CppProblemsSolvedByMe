#include <bits//stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        int total_w = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            total_w += arr[i];
        }

map<int, int> onesfreq;
        map<int, int> twosfreq;
        map<int, int> freq;

        for (int i = 0; i < n; i++) {
            if (arr[i] == 1) {
                onesfreq[arr[i]]++;
            }
            if (arr[i] == 2) {
                twosfreq[arr[i]]++;
            }
        }

        if (total_w %2 != 0) {
            cout << "NO" << endl;
        }else {
            if (twosfreq.size()>0 && onesfreq.size()>0 && onesfreq.size() == twosfreq.size()) {
                cout << "YES" << endl;
            } else if (twosfreq.size()==0 && n%2==0) {
                cout << "YES" << endl;
            }else if (onesfreq.size() == 0 && n%2==0) {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }

    }
}
