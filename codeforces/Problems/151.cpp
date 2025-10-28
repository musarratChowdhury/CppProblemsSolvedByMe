#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, k, l, c, d, p, nl, np;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int total_ml = k * l;
    int total_lime_slices = c*d;

    vector<int> collection = {total_ml/nl, total_lime_slices, p/np};
    sort(collection.begin(), collection.end());

    int result = collection[0]/n;

    cout << result << '\n';
    
    return 0;
}