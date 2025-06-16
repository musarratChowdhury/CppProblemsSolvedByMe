#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int D, E;
	cin >> D >> E;
	
	int R1, R2;
	cin >> R1 >> R2;
	
	if((D+R1)>(E+R2)){
	    cout<<"Dominator";
	}else {
	    cout << "Everule";
	}

}