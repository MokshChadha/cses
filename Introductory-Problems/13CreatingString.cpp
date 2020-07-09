#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
#define all(v) v.begin(),v.end()

int main() {
/*#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt", "w", stdout);
#endif*/
string s;
cin>>s;
sort(all(s)); //sort that maximum permutations can be recieved
vector<string> v;
do
{
  v.push_back(s);
}
while(next_permutation(all(s))); 

cout<<v.size()<<endl;
for(int i =0 ; i<v.size(); i++) cout<<v[i]<<"\n";

}


