#include<bits/stdc++.h>
using namespace std;
typedef tuple<int,int> ii ;
typedef long long ll;

int main() {
/*#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt", "w", stdout);
#endif*/
  ll n; cin>>n;
  vector<ii> movieTimings(n);
  ll x,y;
  for(ll i =0 ; i<n ; i++)
  {
    cin>>x>>y;
    movieTimings[i] = {y,x};
  }
  sort(movieTimings.begin(), movieTimings.end());
  ll count =0  , soFar =0;

  for(ii z:movieTimings){
    tie(y,x) = z;
    if(x>=soFar) {soFar= y; count++;}

  }

  cout<<count<<"\n";
  
}