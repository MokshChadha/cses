#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
/*#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt", "w", stdout);
#endif*/
    ll n; cin>>n;

    if(n==3 || n==2) cout<<"NO SOLUTION";
    else if(n==1) cout<<1;
    else{
        for(int i=1; i<=n; i++)
            if(!(i&1)) cout<<i<<" ";
         for(int i=1; i<=n; i++)
            if(i&1) cout<<i<<" ";
    }
}