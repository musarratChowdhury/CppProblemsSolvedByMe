#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int T;
    // cin >> T;

    vector<pair<string, int>> cart;

    cart.push_back(make_pair("mango",3));
    cart.push_back(make_pair("carrot",5));
    cart.push_back(make_pair("apple",4));
    cart.push_back(make_pair("banana",6));
    
    sort(cart.begin(), cart.end(), [](const auto &a, const auto &b){return a.second > b.second;});
    auto x = count_if(cart.begin(), cart.end(), [](auto &a){return a.second > 5;});

    for(auto &p : cart){
        cout << p.first << " -> " << p.second << '\n';
    }
    
    // while(T--){

    // } 

    return 0;
}