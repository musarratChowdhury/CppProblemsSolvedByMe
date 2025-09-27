#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //for pangram
    string input_s;
    getline(cin, input_s);

    vector<bool> seen(26, false);

    for (char input_: input_s) {
        if (isalpha(input_)) {
            char ch = tolower(input_);
            seen[ch - 'a'] = true;
        }
    }

    bool pangram = all_of(seen.begin(), seen.end(), [](bool v){return v;});

    if (pangram) {
        cout << "pangram" << '\n';
    }else {
        cout << "not pangram" << '\n';
    }

    return 0;
}
