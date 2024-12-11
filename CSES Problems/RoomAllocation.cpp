#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;

  vector<pair<int, int>> customers(n);
  for (int i = 0; i < n; i++) {
    cin >> customers[i].first >> customers[i].second;
  }

  // O(n log n)
  sort(customers.begin(), customers.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
      if (a.first == b.first) return a.second < b.second;
      return a.first < b.first;
  });

  // O(log k)
  priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
  vector<int> result(n);

  int room_count = 0;

  for (int i = 0; i < n; i++) {
    int arrival = customers[i].first;
    int departure = customers[i].second;


    if (!pq.empty() && pq.top().first < arrival) {

      int room = pq.top().second;
      pq.pop();
      result[i] = room;
      pq.push({departure, room});
    } else {
      room_count++;
      result[i] = room_count;
      pq.push({departure, room_count});
    }
  }

  cout << room_count << "\n";
  for (int i = 0; i < n; i++) {
    cout << result[i] << " ";
  }
  cout << "\n";

  return 0;
}
