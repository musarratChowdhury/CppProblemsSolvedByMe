#include<bits/stdc++.h>
using namespace std;


//insertion and access is both nlogn
//
int main() {
  map<int, string> m;
  m[1] = "Hello";
  m[2] = "World";
  m.insert({4, "masumvai"});

  map<int, string>::iterator it;

  for (it = m.begin(); it != m.end(); it++) {
    cout << it->first << " " << it->second << endl;
  }

  for(auto &pr : m) {
    cout << pr.first << " " << pr.second << endl;
  }

  m.find(3); //O(logN)

  return 0;
};