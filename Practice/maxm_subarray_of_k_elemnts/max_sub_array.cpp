//max_sub_array
#include <bits/stdc++.h>

using namespace std;

int maxSubArraySum(vector<int>& arr, int k){
	int n = arr.size();

	if(n < k){
		return -1;
	}

	int curr_sum = 0;

	for(int i = 0; i < k; i++){
		curr_sum+=arr[i];
	}

	int max_sum = curr_sum;

	int start = 0;
	int end = k;

	while(end<arr.size()){
		curr_sum+=arr[end]-arr[start];
		max_sum = max(max_sum, curr_sum);

		start++;
		end++;
	};

	return max_sum;

}


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