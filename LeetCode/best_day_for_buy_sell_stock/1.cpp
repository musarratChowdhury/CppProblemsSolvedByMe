#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;
	cin >> N;
	int testArr[N];
	for (int i = 0; i < N; ++i)
	{
		cin >> testArr[i];
	}
	
	int b, s;
	int max_prof=0;
	b = testArr[0];
	for (int i = 1; i < N; ++i)
	{
		s = testArr[i];
		int p = s - b;
		if(p<0){
			b = s;
		}else {
			max_prof = max(max_prof, p);
		}
	}

	cout << "Maximum profit: " << max_prof << endl;
    return 0;
}