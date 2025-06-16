#include<bits/stdc++.h>

using namespace std;


int main ()
{

	int N;
	cin >> N;
	int heights[N];
	for (int i = 0; i < N; ++i)
	{
		/* code */
		cin >> heights[i];
		cout << heights[i] << " ";
	}

	cout << endl;
	int left_Max[N], right_Max[N];
	
	left_Max[0] = heights[0];

	cout << left_Max[0] << " ";

	for (int i = 1; i < N; ++i)
	{
		/* code */
		left_Max[i] = max(left_Max[i-1], heights[i]);
		cout << left_Max[i] << " "; 
	}

	cout << "valley_L ends" << endl;

	right_Max[N-1] = heights[N-1];
	for (int i = N - 2; i > 0; --i)
	{
		/* code */
		right_Max[i] = max(right_Max[i+1], heights[i]);
	}

	for (int i = 0; i < N; ++i)
	{
		/* code */
		cout << right_Max[i] << " ";
	}
	cout << "valley_R ends" << endl;

	int total_water_trapped = 0;
	for (int i = 0; i < N; ++i)
	{
		/* code */
		int min = min(left_Max[i], right_Max[i]);
		int water_trapped = min - heights[i];
		if(water_trapped>0){
			total_water_trapped+=water_trapped;
		}
	}

	cout << "total " << total_water_trapped << endl;

	return 0;
}