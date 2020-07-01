#include <bits/stdc++.h>

using namespace std;

int main() {
/*#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt", "w", stdout);
#endif*/

  string s, palindrome;
  cin >> s;
  vector<int> a(26);
  for (char c : s) a[c-'A']++;
  int odd = 0;
  for (int i = 0; i < 26; i++)
    odd += a[i] % 2;
  if (odd > 1) {
    cout << "NO SOLUTION\n";
    return 0;
  }
  for (int i = 0; i < 26; i++)
    if (!(a[i] % 2))
      for (int j = 0; j < a[i] / 2; j++)
        palindrome.push_back(i + 'A');
  for (int i = 0; i < 26; i++)
    if (a[i] % 2)
      for (int j = 0; j < a[i]; j++)
        palindrome.push_back(i + 'A');
  for (int i = 25; i >= 0; i--)
    if (!(a[i] % 2))
      for (int j = 0; j < a[i] / 2; j++)
        palindrome.push_back(i + 'A');
  cout << palindrome << "\n";
}