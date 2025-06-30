#include <bits/stdc++.h>

using namespace std;

bool isPowerOf2(long long int x)
{
	if(x==0) return false;
	return (x & (x - 1)) == 0;
}

int main()
{
	//bitwise operation inputs
	int x, y;
	cin >> x >> y;

	cout << "The result of bit wise op is : " << endl;

	int result  =  x & y;


	cout << result << endl;
	cout << isPowerOf2(x);
}


