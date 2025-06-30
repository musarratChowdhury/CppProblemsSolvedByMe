//https://codeforces.com/problemset/problem/1475/A
#include <bits/stdc++.h>

using namespace std;

bool isPowerOf2(long long int x)
{
	if(x==0) return false;
	return (x & (x - 1)) == 0;
}

int main()
{
	//number of test case
	int t;
	cin >> t;
	while(t>0){
		long long int x;
		cin >> x;
		if(isPowerOf2(x)){
			cout <<  "NO" << endl;
		}else {
			cout << "YES" << endl;
		}

		t--;
	}
}