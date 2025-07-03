#include <bits/stdc++.h>

using namespace std;

int main()
{
	//number of children, n
	//maximum allowed weight, x
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

	// for(auto& w: weights){
	// 	cout << w << "\n";
	// 	total_weight += w;
	// 	if(total_weight <= x)
	// 	{
	// 		//do nothing
	// 	}
	// 	else{
	// 		gondola++;
	// 		total_weight = 0;
	// 		total_weight += w;
	// 	}
	// }

	for (int i = 0; i < weights.size(); ++i)
	{
		if(i == weights.size() - 1){
			gondola++;
			break;
		}
		total_weight += weights[i];
		if(total_weight + weights[i+1]  > x){
			gondola++;
			total_weight = 0;
		}else{
			//
		}
	}

	cout << gondola << "\n";
}