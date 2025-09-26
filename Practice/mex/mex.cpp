//
// Created by muhit on 9/26/25.
//

#include <bits/stdc++.h>
using namespace std;

int give_me_mex(vector<int> const &A) {
    set<int> B(A.begin(), A.end());

    int result = 0;
    while (B.count(result)) {
        ++result;
    }
    //time complexity is O (N log N)

    return result;
}


int main() {
    int arr[] = {1, 2, 3, 4, 5};

    //the mex of this array is 0;

    int arr2[] = {2, 34, 40, 55};

    //the mex of this array is 0;

    int arr3[] = {100, 34, 40, 55};

    //the mex of this array is 0;

    int x[] = {0, 1, 2, 3, 4, 5, 6, 7};
    vector<int> y = {0, 1, 5, 4, 4, 7, 3};
    //the mex of this array will be 8, which is equal to N(size of the array);

    vector<int> arr4 = {2,2,2,2,2,2,2,3,3,3,3,3,3,3,3,3,0,0,0,0,1,4,6};

    cout << give_me_mex(arr4) << endl;

    cout << give_me_mex(y) << endl;
}

