#include<bits/stdc++.h>
using namespace std;



int main(){
/*#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt", "w", stdout);
#endif*/
  long long int last, n; cin>>n;
  cin>>last;
  long long int temp, cost=0;
  for(int i =1; i<n; i++)
  {
    cin>>temp;
    if(last > temp) cost+= last-temp;
    else last= temp;
  }
  cout<<cost;
}