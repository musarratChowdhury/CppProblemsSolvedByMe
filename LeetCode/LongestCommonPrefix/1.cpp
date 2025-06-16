#include <bits/stdc++.h>

using namespace std;

string longestCommonPrefix(vector<string>& strs) {
   int n = strs.size();
   string minLengthStr = strs[0];
	int minLength = minLengthStr.length();
    for (const auto& s : strs) {
        if(s.length() < minLengthStr.length())
        {
        	minLengthStr = s;
        	minLength = s.length();
        }
    }

    string streak="";
    int j = 0;
    bool flag = true;
    for(int i = 0; i < minLength && flag; i++){
    	char currTarget = strs[j][i];
    	while(j<n && flag){
   	   		if(strs[j][i] == currTarget){
   	   			flag = true;
   	   		}else{
   	   			flag = false;
   	   		}
   	   		// cout << endl;
   	   		j++;
    	}
    	if(flag){
    		streak+=currTarget;
    		// cout << streak << endl;
    	}
    	
    	j=0;
    }
    return streak;
}

int main()
{
	vector<string> strs;;

	int n;
	cout << "Enter number of strings: ";
	cin >> n;

	string input;

 	cin.ignore();

    cout << "Enter " << n << " strings:\n";
	for (int i = 0; i < n; ++i)
	{
		getline(cin, input);
		strs.push_back(input);
	}

	cout << longestCommonPrefix(strs) << endl;
}