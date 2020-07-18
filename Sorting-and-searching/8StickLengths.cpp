#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef tuple<int,int> ii;

int main() {
/*#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt", "w", stdout);
#endif*/
  ll n;
  cin>>n;
  std::vector<int> a(n);
  for(int i =0 ; i<n ; i++)
  {
    cin>>a[i];
  }
  sort(a.begin(), a.end());

  ll m = a[n/2];

  ll s =0 ;
  for(int i =0 ; i<n; i++) s = s+ abs(a[i]-m);
  cout<<s<<"\n";

}
