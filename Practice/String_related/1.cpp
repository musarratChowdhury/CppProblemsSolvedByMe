#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
	//we would like to take a line as input and print its characters!
	//we will calculate the number of vowels in every line.
	// we will take a number of test cases as input;
	int number_of_test_case;
	cout << "please enter the number of test case : " << endl;
	cin>>number_of_test_case;

	char vowels[5] = {'a', 'e', 'i', 'o', 'u'};

	while(number_of_test_case> 0){
		string sample1;
		cin.ignore();
		getline(cin, sample1);

		int vowel_count = 0;

		for (int i = 0; i < 5; ++i)
		{
			for (int j = 0; j < sample1.length(); ++j)
			{
				if(sample1[j] == vowels[i]){
					vowel_count++;
				}
			}
		}

		cout << vowel_count << endl;

		number_of_test_case--;
	}
}