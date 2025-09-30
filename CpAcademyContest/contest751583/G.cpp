#include <bits/stdc++.h>
using namespace std;

int count_v(string& s){
    unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};

    int count = 0;
    for(char& c : s){
        if(vowels.count(c)) count++;
    }
    return count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N = 3;

    vector<int> counter;
    string s;

    for(int i = 0; i < N; i++){
        getline(cin, s);

         counter.push_back(count_v(s));
    }

    if(counter[0] == 5 && counter[1]==7 && counter[2] == 5){
        cout << "YES" << '\n';
    }else {
        cout << "NO" << '\n';
    }

    
    
    return 0;
}