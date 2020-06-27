#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
using namespace std;
typedef long long ll;
#define Mod 1000000007

int main() {
/* #ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt", "w", stdout);
#endif*/
  ll n; cin>>n;
  ll result =1 ;
  while(n--)
  {
  	result = (2*(result%Mod))%Mod;
  }
cout<<result;
}