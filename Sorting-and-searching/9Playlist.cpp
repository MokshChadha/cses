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

  for(int i =0 ; i<n ; i++) cin>>a[i];

  ll i=0, j=0, maxSoFar=1;

  set<int> s;

  while(j<n)
  {
    if(s.count(a[j])){
      maxSoFar = max(maxSoFar, j-i);

      while(a[i]!=a[j]){
        s.erase(a[i++]);
      }
      i++;
  }
  else s.insert(a[j]);
  j++;
}
  maxSoFar = max(maxSoFar, j-i);
  cout<<maxSoFar<<"\n";
}
