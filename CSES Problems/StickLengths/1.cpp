#include <bits/stdc++.h>

using namespace std;



int main()
{
	std::vector<long> v;

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
	// for (int i = 0; i < N; ++i)
	// {
	// 	/* code */
	// 	cout << v[i] << " ";
	// }
	// cout << " " << endl;

	int median = v[ceil(N/2)];

	long min_cost = 0;
	for (int i = 0; i < N; ++i)
	{
		/* code */
		min_cost+=abs(v[i] - median);
	}

	cout<<min_cost<<endl;
}