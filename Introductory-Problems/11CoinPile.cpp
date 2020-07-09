#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007

int main() {
/*#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt", "w", stdout);
#endif*/
 ll testcase; cin>>testcase;
 while(testcase--)
 {
 	ll a,b;
 	cin>>a>>b;
 	ll x = 2*a-b;
 	ll y = 2*b-a;
 	if(x>=0 && y>=0 && x%3==0 && y%3==0) cout<<"YES\n";
 	else cout<<"NO\n";
 }
}
