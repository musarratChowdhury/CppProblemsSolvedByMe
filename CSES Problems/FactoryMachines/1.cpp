#include <bits/stdc++.h>
#define ll long long;

using namespace std;



int main()
{
	//the number of machines = n
	//the number of products = t

	int n, t;
	cin >> n >> t;
	//array for machine times
	vector<int> machine_times;
	map<int, int> pairs;
	int total_time = 0;

	for (int i = 0; i < n; ++i)
	{
		/* code */
		int x;
		cin >> x;
		machine_times.push_back(x);
		pairs[x] = 0;
	};
	//
	sort(machine_times.begin(), machine_times.end());

	// Brute force approach
	// while(t>0){
	//
	// 	for (int i = 0; i < machine_times.size(); ++i)
	// 	{
	// 		if(i == machine_times.size()-1) {
	// 			pairs[machine_times[i]] += machine_times[i];
	// 			break;
	// 		}
	// 		/* code */
	// 		int t1 = pairs[machine_times[i]] + machine_times[i];
	// 		int t2 = pairs[machine_times[i+1]] + machine_times[i+1];
	//
	// 		if(t1 <= t2){
	// 			pairs[machine_times[i]] += machine_times[i];
	// 			break;
	// 		}
	// 	}
	//
	//
	// 	t--;
	// };

	// int max_time = 0;
	// for (auto& [machine, time] : pairs) {
	// 	if(time>max_time) {
	// 		max_time = time;
	// 	}
 //        cout << machine << " => " << time << "\n";
 //    }
 //
	// cout << max_time << "\n";


	long long int high = 1e18;
	long long int low = 0;

	while(low < high) {
		long long mid = (low + high) / 2;

		long long total_products = 0;

		for (int i = 0; i < machine_times.size(); ++i) {
			total_products += floor(mid/machine_times[i]);

			if(total_products >= t) break;
		}

		if(total_products >= t) high = mid;
		else low = mid + 1;
	}

	cout << high << "\n";

	//total time will be max value of the pairs for each machine

}