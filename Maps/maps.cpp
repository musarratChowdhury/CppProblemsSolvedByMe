#include<bits/stdc++.h>
using namespace std;

int main() {
  map<int, string> m;
  m[1] = "Hello";
  m[2] = "World";
  m.insert({4, "masumvai"});

  map<int, string>::iterator it;

  for (it = m.begin(); it != m.end(); it++) {
    cout << it->first << " " << it->second << endl;
  }

  return 0;
};