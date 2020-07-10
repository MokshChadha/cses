#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int main() {
/*#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt", "w", stdout);
#endif*/
  int n, m, k;
  cin >> n >> m >> k;
  vi a(n), b(m);
  for (int i = 0; i < n; i++) cin >> a[i];
  for (int i = 0; i < m; i++) cin >> b[i];
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  
  int i = 0, j=0, c=0;
  while (i < n && j < m)
    if (a[i] + k < b[j]) i++;
    else if (a[i] - k > b[j]) j++;
    else { i++; j++; c++; }
  cout << c << endl;
}