#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;

int main()
{
/*#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt", "w", stdout);
#endif*/
  ll n; cin>>n;
  map<ll, ll> m;
  while(n--)
  {
    ll temp; 
    cin>>temp;
    m[temp]++;
  }
  cout<<m.size();
}