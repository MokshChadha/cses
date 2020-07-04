#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n, minimize, temp;
vector<ll> apples;

void recursF(int i, ll s) {
  if (i == n) {
    ll x = s;
    ll y = temp - s;
    if (y > x) swap(x, y);
    minimize = min(x - y, minimize);
    return;
  }
  recursF(i + 1, s);
  recursF(i + 1, s + apples[i]);
}

int main() {
/*#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt", "w", stdout);
#endif*/
    cin >> n;
    apples = vector<ll>(n);
    for (int i = 0; i < n; i++) {
      cin >> apples[i];
      temp += apples[i];
    }
    minimize= temp;
    recursF(0, 0);
    cout << minimize << endl;
}


