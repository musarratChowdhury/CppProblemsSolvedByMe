#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    string s;
    cin >> s;

    unordered_map<string, int> s_map;

    for (int i = 0; i < N - 1; i++)
    {
        string two_Gram = s.substr(i,2);
        if(s_map.count(two_Gram)==0){
            s_map[two_Gram] = 1;
        }else{
            s_map[two_Gram]++;
        }
    }

    vector<pair<string, int>> vec(s_map.begin(), s_map.end());

    sort(vec.begin(), vec.end(), [](const pair<string, int> &a, const pair<string, int> &b) 
    {return a.second > b.second;});

    cout << vec[0].first << endl;

    return 0;
}