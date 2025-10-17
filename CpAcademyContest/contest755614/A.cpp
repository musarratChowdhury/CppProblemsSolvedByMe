#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int Q;
    cin >> Q;

    map<string,int> m;
    while(Q--){
        int T;
        cin >> T;
        if(T == 1){
            string name;
            cin >> name;
            int marks;
            cin >> marks;

            if(m.find(name)==m.end()){
                m.insert(make_pair(name, marks));
            }
            else{
                m[name]+=marks;
            }

        }
        else if(T == 2){
            string name;
            cin >> name;

            m.erase(name);
        }else {
            string name;
            cin >> name;

            cout << m[name] << '\n';
        }
    }

    
    return 0;
}