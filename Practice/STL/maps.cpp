//
// Created by muhit on 9/27/25.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cout << "How many fruits you want to buy sir?>"<< '\n';
    cin >> N;

    cout << "Sir what is the first fruit you need?" << '\n';
    string f1;
    cin >> f1;
    // map<string, int> fruits;
    unordered_map<string, int> fruits;
    fruits[f1] = 0;
    int n1;
    cout << "How many ?" << '\n';
    cin >> n1;
    fruits[f1] = n1;


    cout << "Sir what is the second fruit you need?" << '\n';
    string f2;
    cin >> f2;
    fruits[f2] = 0;
    int n2;
    cout << "How many ?" << '\n';
    cin >> n2;
    fruits[f2] = n2;


    cout << "Sir what is the third fruit you need?" << '\n';
    string f3;
    cin >> f3;
    fruits[f3] = 0;
    int n3;
    cout << "How many ?" << '\n';
    cin >> n3;
    fruits[f3] = n3;

    cout << "Sir here is your fruit basket!" << '\n';

    for (auto x: fruits) {
        cout << x.first << " - > " << x.second << '\n';
    }
}