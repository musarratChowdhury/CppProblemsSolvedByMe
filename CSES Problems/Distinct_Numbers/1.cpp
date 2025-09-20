#include <bits/stdc++.h>
#define ll long long;

using namespace std;



int main()
{
	ios::sync_with_stdio(false);  // 🚀 Fast IO
    cin.tie(nullptr);        
	int n;
	cin >> n;

	set<long long int> set;

	for(int i = 0; i< n; ++i){
		long long int x;
		cin >> x;
		set.insert(x);
	};

	cout << set.size() << "\n";
	return 0;
}