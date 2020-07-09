#include<bits/stdc++.h>
using namespace std;

int main(){
   long long int n;
   cin>>n;
   unsigned long long sum =0;
   unsigned long long actualSum = n*(n+1)/2;
   n--;
   while(n--)
   {
    long long int temp; 
    cin>>temp;
    sum = sum +temp;
   }
   //missing number;
   cout<<(actualSum-sum);
   return 0;
}