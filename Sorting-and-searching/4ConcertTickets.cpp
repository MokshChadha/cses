#include<bits/stdc++.h>
using namespace std;

int main() {
/*#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt", "w", stdout);
#endif*/
  int n, m, temp;
  cin >> n >> m;
  multiset<int, greater<int>> ticketPrice;
  while (n--) {
    cin >> temp;
    ticketPrice.insert(temp);
  }
  while (m--) {
    cin >> temp;
    auto it = ticketPrice.lower_bound(x);
    if (it == ticketPrice.end()) cout << "-1\n";
    else {
      cout << *it << endl;
      h.erase(it);
    }
  }
}