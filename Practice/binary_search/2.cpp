#include <bits/stdc++.h>

using namespace std;


bool does_exits(vector<int>& arr, int elem)
{
	int l, r;
	l = 0;
	r = arr.size() - 1;

	sort(arr.begin(), arr.end());

	while(l<=r){
		int mid = l + (r-l)/2;

		if(arr[mid] == elem) return true;
		else if(elem > arr[mid]) {
			l = mid + 1;
		}else{
			r = mid - 1;
		}
	}

	return false;
}

int main()
{
	int x, y;
	cin >> x >> y;

	vector<int> testArr(x);

	for(int i = 0; i<x; i++){
		cin >> testArr[i];
	}

	for(auto& x : {2,3,4,5,6})
		cout << does_exits(testArr, x) << " " ;


	return 0;
}