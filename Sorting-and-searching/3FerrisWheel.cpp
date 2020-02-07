#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;

int main() {
/*#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt", "w", stdout);
#endif*/

ll n,x;
cin>>n>>x;
ll arr[n];
for(int i =0 ; i<n; i++) cin>>arr[i];

sort(arr,arr+n);

ll i=0,j=n-1;

ll count=0;

while(i<=j){
  if(arr[i]+arr[j]>x) j--;
  else{
    i++;
    j--;
  }
  count++;
}

cout<<count<<"\n";

  
}