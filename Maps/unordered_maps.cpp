#include<bits/stdc++.h>
using namespace std;

void printMap(map<int, string> m) {
    cout << "map size: " << m.size() << endl;

    for(auto &pair : m) {
        cout << pair.first << " " << pair.second << endl;
    }
}

int main() {
    map<int, string> myMap;

    myMap[2] = "hello"; // O(logN) where N is the number of elements
    myMap[33] = "test";
    myMap.insert({1, "world"});

    printMap(myMap);

    return 0;
};

