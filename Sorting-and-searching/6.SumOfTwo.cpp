#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef tuple<int,int> ii;

int main() {
/*#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt", "w", stdout);
#endif*/
  ll n  , x;
  cin>>n>>x;
  vector<ii> valueAndIndex(n);
  ll temp;
  for(int i =0 ; i<n ; i++)
  {
    cin>>temp; 
    valueAndIndex[i] = {temp,i};
  }
 sort(valueAndIndex.begin(), valueAndIndex.end());
 ll i =0 ,j = n-1;
  while (j > i) {
    int sum = get<0>(valueAndIndex[i]) + get<0>(valueAndIndex[j]);
    if (sum == x) {
      cout << get<1>(valueAndIndex[i]) + 1 << " " << get<1>(valueAndIndex[j]) + 1 << "\n";
      return 0;
    }
    if (sum < x) i++;
    else j--;
  }
  cout << "IMPOSSIBLE\n";

}
