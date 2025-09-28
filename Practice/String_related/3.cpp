#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s = "My Name is Khan";

    //manipulation

    s.append("appended string");

    cout << s << endl;

    s.rfind("Khan");

    s.replace(4, 2, "Hello");

    cout << s << endl;

    transform(s.begin(), s.end(), s.begin(), ::tolower);
    // s.erase(remove_if(s.begin(), s.end(), [](char c){return toupper(c)!=c ;}), s.end());
    transform(s.begin(), s.end(), s.begin(),
                   [](unsigned char c){ return std::tolower(c); });

    
                   
    cout << s << endl;
    return 0;
}