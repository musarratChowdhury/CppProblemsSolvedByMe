//
// Created by User on 11/10/2024.
//
#include <bits/stdc++.h>

using namespace std;

// Given array a of N integers. Given Q queries and in each query given L and R print sum of array elements from
// index L to R(L, R included)

//Constraints
// 1 <= N <= 10^5
// 1 <= a[i] <= 10^9
// 1 <= Q <= 10^5
// 1 <= L, R <= N
const int N = 1e5+10;
int a[N];

long long sumOfArrayElements(int L, int R, int arr[]) {
  long long sum = 0;
  for (int i = L; i <= R; i++) {
    sum+=arr[i];
  }
  return sum;
}

int main() {

  int n;
  cin >> n;

  cout << "Now enter the elements of the array : " << endl;

  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }

  cout << "Enter the number of queries : " << endl;

  int q;
  cin >> q;


  while(q--) {
    int l, r;
    cout <<  "Enter L & R : " << endl;
    cin >> l >> r;
    long long sum = sumOfArrayElements(l, r, a);
    cout << sum << endl;
  }

  //TIME COMPLEXITY
  // O(N) + O(Q*N)

}
