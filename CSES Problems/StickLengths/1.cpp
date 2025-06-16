#include <bits/stdc++.h>

using namespace std;



int main()
{
	std::vector<int> v;

	int N;
	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		/* code */
		int x;
		cin >> x;
		v.push_back(x);
	}

	

	sort(v.begin(), v.end());
	for (int i = 0; i < N; ++i)
	{
		/* code */
		cout << v[i] << " ";
	}
	cout << " " << endl;
}