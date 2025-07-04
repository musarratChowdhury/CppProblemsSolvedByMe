#include <bits/stdc++.h>

using namespace std;

//for leet code submission
int trap(vector<int>& height) {
    int N = height.size();
    if (N == 0) return 0;

    vector<int> valley_L(N);
    vector<int> valley_R(N);

    valley_L[0] = height[0];
    for (int i = 1; i < N; ++i) {
        valley_L[i] = max(valley_L[i - 1], height[i]);
    }

    valley_R[N - 1] = height[N - 1];
    for (int i = N - 2; i >= 0; --i) {
        valley_R[i] = max(valley_R[i + 1], height[i]);
    }

    int sum = 0;
    for (int i = 0; i < N; ++i) {
        int min_H = min(valley_L[i], valley_R[i]);
        int tw = min_H - height[i];
        if (tw > 0) sum += tw;
    }

    return sum;
}


int main()
{
	int N;
	cin >> N;
	int heights[N];
	for (int i = 0; i < N; ++i)
	{
		cin >> heights[i];
	}
	
	//left max m
	int valley_L[N];
	int valley_R[N];
	valley_L[0] = heights[0];
	valley_R[N-1] = heights[N-1];

	cout << valley_L[0] << " "; 
	for (int i = 1; i < N; ++i)
	{
		valley_L[i] = max(valley_L[i - 1], heights[i]);
		cout<<valley_L[i]<<" ";
	}
	cout<< "valley_L ends"<< endl;

	for (int i = N-2; i > 0; --i)
	{
		valley_R[i] = max(valley_R[i + 1], heights[i]);
		cout<<valley_R[i]<< " ";
	}

	int sum = 0;

	for (int i = 0; i < N; ++i)
	{
		int min_H = min(valley_L[i], valley_R[i]);
		int tw = min_H - heights[i];
		if(tw < 0) continue;
		sum += tw;
	}

	cout << endl;

	cout << "Total trapped water: "<< sum << endl;
    return 0;
}