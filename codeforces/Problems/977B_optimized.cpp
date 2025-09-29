#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    string s;
    cin >> N >> s;

    unordered_map<string, int> freq;
    freq.reserve(N); // Avoid rehashing

    // Track the most frequent bigram on the fly
    string best_bigram;
    int max_freq = 0;

    for (int i = 0; i < N - 1; ++i) {
        string bigram = s.substr(i, 2);
        int count = ++freq[bigram]; // Increment and get new count
        if (count > max_freq) {
            max_freq = count;
            best_bigram = bigram;
        }
    }

    cout << best_bigram << '\n';
    return 0;
}