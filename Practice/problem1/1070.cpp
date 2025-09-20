//https://cses.fi/problemset/task/1070
#include <bits/stdc++.h>

using namespace std;

int main()
{
	long int N, Q;
	cin >> N >> Q;
	long long int A[N];
			long long int sum = 0;
	for (int i = 0; i < N ; ++i)
	{
		cin >> A[i];
		sum += A[i];
		A[i] = sum;
	}
	cout<< endl;
	for (int i = 0; i < Q; ++i)
	{
		int l,r;
		cin >> l >> r;
		cout<< A[r-1] - A[l] << endl;
	}
}