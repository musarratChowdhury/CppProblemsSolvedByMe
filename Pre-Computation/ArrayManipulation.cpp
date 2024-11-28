// Starting with a 1-indexed array of zeros and a list of operations, for each operation add a value to each the array element between two given indices, inclusive. Once all operations have been performed, return the maximum value in the array.

// Example


// Queries are interpreted as follows:

//     a b k
//     1 5 3
//     4 8 7
//     6 9 1
// Add the values of  between the indices  and  inclusive:

// index->	 1 2 3  4  5 6 7 8 9 10
// 	[0,0,0, 0, 0,0,0,0,0, 0]
// 	[3,3,3, 3, 3,0,0,0,0, 0]
// 	[3,3,3,10,10,7,7,7,0, 0]
// 	[3,3,3,10,10,8,8,8,1, 0]
// The largest value is  after all operations are performed.

// Constraints
// 3 <= n <= 10^7
// 1 <= m <= 2 * 10^5
// 1 <= a <= b <= n
// 0 <= k <= 10^9

#include <bits/stdc++.h>

using namespace std;

// global array
const int N = 1e7+10;
long long int arr[N];

long arrayManipulation(int n, vector<vector<int>> queries) {
    int m = queries.size();
     while(m--){
        int a,b,k;

        a = queries[m][0];
        b = queries[m][1];
        k = queries[m][2];

       arr[a] += k;
       arr[b+1] -= k;
    }

    long long mx = -1;
    for(int i = 1; i<=n; ++i){
        arr[i] += arr[i-1];
        if(mx<arr[i]){
            mx = arr[i];
        }
    }
}

int main()
{
    int n,m;
    cin >> n >> m ;

    while(m--){
        int a,b,k;

        cin >> a >> b >> k ;

       arr[a] += k;
       arr[b+1] -= k;
    }

    long long mx = -1;
    for(int i = 1; i<=n; ++i){
        arr[i] += arr[i-1];
        if(mx<arr[i]){
            mx = arr[i];
        }
    }


    cout << mx << endl;
    // O (m*n )
    return 0;
}

