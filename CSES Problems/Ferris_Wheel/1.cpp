#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, x;
	cin >> n >> x;

	vector<int> weights;
	while(n>0){
		int w;
		cin >> w;
		weights.push_back(w);
		n--;
	}

	sort(weights.begin(), weights.end());

	long long int total_weight = 0;
	int gondola = 0;

	int A = 0;
	int B = weights.size()-1;

	while(A<=B) {
		if(weights[A] + weights[B] <= x) {
			A++;
			B--;
		}else {
			B--;
		}
		gondola++;
	}

	cout << gondola << "\n";
}