#include <bits/stdc++.h>
#define ll long long;

using namespace std;



int main()
{
	int t;//number of test case
	cin >> t;

	while(t>0){
		int n; //number of rows;

		cin >> n;
		cin.ignore();

		vector<int> note_pos;
		while(n>0){
			string line;
			getline(cin, line);
			for (size_t i = 0; i < line.length(); ++i) {
    			if(line[i] == '#'){
    				note_pos.push_back(i);
    			}
			}

			--n;
		}

		for (int i = note_pos.size() - 1; i >= 0; --i)
		{
			cout << note_pos[i] + 1 << " ";
		}	

		--t;
	}

	return 0;
}