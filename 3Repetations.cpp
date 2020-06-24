#include<bits/stdc++.h>
using namespace std;

int main(){
/*#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt", "w", stdout);
#endif*/
   char str[1000009];
   cin>>str;
   long long int currentMax=1, maxSoFar=1;
   long long int length =strlen(str);
   for(int  i =1; i<length; i++) {
    if(!(str[i]^str[i-1])) currentMax++;
    else{
        if(currentMax > maxSoFar)
        {
            maxSoFar  =  currentMax;
            currentMax =1;
        }
        currentMax =1;
    }

   }
   maxSoFar = maxSoFar>currentMax ? maxSoFar:currentMax;
   cout<<maxSoFar;
   return 0;
}