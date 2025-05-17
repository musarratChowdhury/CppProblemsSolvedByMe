#include <bits/stdc++.h>
using namespace std;

int main()
{
	cout << "Hello world" << endl;
	int n;
	cin >> n;
	cout << "Now enter the numbers" << endl;

	vector<int> arr(n);

	for (int i = 0; i < n; i++)
	{
		/* code */
		cin >> arr[i];
	}

	if (n < 2)
		return arr[0];
	for (int i = 1; i < n; i++)
	{
		arr[i] = arr[i - 1] + arr[i];
	}

	cout << "after pre sum" << endl;

	for (int j = 0; j < n; j++)
	{
		cout << arr[j] << " ";
	}
}
