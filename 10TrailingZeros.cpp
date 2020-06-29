#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
using namespace std;
typedef long long ll;
#define Mod 1000000007

int main() {
/*#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt", "w", stdout);
#endif*/
	ll n,zeros=0 ,k=5;
	cin>>n;
	if(n==k){
		cout<<1;
		return 0;
	}
	while(k<n){
	zeros+= n/k ;
	k =k *5;
	}
cout<<zeros;

}