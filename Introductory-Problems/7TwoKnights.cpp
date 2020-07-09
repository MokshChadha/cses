#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll twoKnights(ll i)
{
	ll a = i * i * (i * i - 1) / 2;
    ll b = 2 * (i - 2) * (2 * (i - 4) + 6);
    return a-b;
}

int main() {
/*#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt", "w", stdout);
#endif*/
  int n;
  cin >> n;
  for (ll i = 1; i <= n; i++) cout<<twoKnights(i)<<"\n";
  return 0;
}