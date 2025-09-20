//max_sub_array
#include <bits/stdc++.h>

using namespace std;



int main()
{
	int N, K;
	cin >> N >> K;
	int testArr[N];
	for (int i = 0; i < N; ++i)
	{
		cin >> testArr[i];
	}
	
	int currSum = 0;
	int max_sum = INT_MIN;

	for(int i = 0; i < K; ++i) {
		currSum += testArr[i];
	}
	max_sum = max(currSum, max_sum);

	for(int i = K; i < N; ++i) {
		currSum+= testArr[i] - testArr[i - K];
		max_sum = max(currSum, max_sum);
	}

	cout << "Maximum Subarray Sum: " << max_sum << endl;
    return 0;
}