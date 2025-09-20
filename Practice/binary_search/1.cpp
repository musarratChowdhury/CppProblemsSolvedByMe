#include <bits/stdc++.h>

using namespace std;

bool does_exits(vector<int>&arr, int elem)
{
	int L = 0, R = arr.size() - 1;

	while(L<=R){
		int M = L + (R-L)/2;

		if(arr[M] == elem) return true;
		if(elem > arr[M]){
			//elem can be on the right side 
			L = M + 1;
		} else 
		{
			R = M - 1;
		}
	}

	return false;
}


int main()
{
	int n, s;
	cout << "please enter the size of the arr" << endl;
	cin >> n;
	vector<int> testArr(n);
	cout << "enter search element " << endl;
	cin >> s;

	for(int j = 0; j<n; j++){
		cin >> testArr[j];
	}

	for(auto& x:{3,4,5,77,99, 100})
		cout << does_exits(testArr, x) << endl;

	// cout << does_exits(testArr, s) << endl;
}