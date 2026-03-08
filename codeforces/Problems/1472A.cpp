#include <bits//stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int w, h, n;
        cin >> w >> h >> n;

        int total_p = 1;
        while (total_p < n) {
            if (w % 2 == 0) {
                w /= 2;
                total_p *= 2;
            } else if (h % 2 == 0) {
                h /= 2;
                total_p *= 2;
            }
            if (w%2 == 1 && h%2 == 1)break;
        }

        if (total_p >= n) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}
