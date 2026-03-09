//
// Created by user on 2026-03-09.
//

#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {

    unordered_map<string, vector<string>> result_map;

    for (auto s: strs) // O(n)
    {
        string key = s;
        sort(key.begin(), key.end()); // O(k log k) where k = length of string

        result_map[key].push_back(s); // O(1) for hashmap insertion
    }

    //Total = O(n * k * log k)

    vector<vector<string>> result;
    for (auto& pair : result_map)
    {
        result.push_back(pair.second);
    }

    return result;
}

vector<vector<string>> groupAnagrams_optimized(vector<string>& strs) {

    unordered_map<string, vector<string>> result_map;
    //we need a character frequency


    for (auto s: strs) // O(n)
    {
        vector<int> freq(26,0); //O(1)

        for (auto c : s) //O(k)
        {
            freq[c - 'a']++;
        }

        string key = "";

        for (int i = 0; i< 26;i++) //O(26)
        {
            key += to_string(freq[i])+"#";
        }

        result_map[key].push_back(s); // O(1)

        // then we will convert the freq array into string key

    }

    //Total = O(n * k)

    vector<vector<string>> result;
    for (auto& pair : result_map)
    {
        result.push_back(pair.second);
    }

    return result;
}

int main()
{
    vector<string> test1 = {"act","pots","tops","cat","stop","hat"};

    auto result1 = groupAnagrams_optimized(test1);
}