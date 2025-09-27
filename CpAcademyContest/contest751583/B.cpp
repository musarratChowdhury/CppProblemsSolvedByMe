//
// Created by muhit on 9/27/25.
//
#include <bits/stdc++.h>
using namespace std;

string better_way(string &s) {

    int starting_pos = 0;
    while (s.find("na", starting_pos) != string::npos) {
        s.replace(starting_pos, 2, "nya");
        starting_pos+=3;
    }

    return s;
}

int main() {
    int N;
    string s;
    string f = "na";
    string r = "nya";

    cin >>N;
    cin >> s;

    string contiguous;

    for (int i = 0; i < N; i++) {
       contiguous.push_back(s[i]);
        if (contiguous.compare(f) == 0) {
            //replace with r;
            // cout << "replace" << '\n';
            // cout << s[i] << '\n';
            // cout << contiguous << '\n';
            s.insert(i,1,'y');
            i++;
            N++;
            contiguous.clear();
        } else {
            if (s[i] == 'n') {
                contiguous.clear();
                contiguous.push_back('n');
            }
        }
    }

    cout << s << '\n';
}