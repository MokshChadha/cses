#include<bits/stdc++.h>
using namespace std;

int main(){
   unsigned long long int n;
   scanf("%llu", &n);
   cout<<n<<" ";
   while(n!=1){
    if(n&1)  {
        n = n*3 +1;
        cout<<n<<" ";
    }
    n  = n/2;
    cout<<n<<" ";
    
   }
   return 0;  
}