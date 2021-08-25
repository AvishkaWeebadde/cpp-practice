#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> s(n), t(n);
  
  for(int i = 0; i < n; ++i)
  {
    cin >> s[i];
  }
  
  for(int i = 0; i < n; ++i)
  {
    cin >> t[i];
  }
  
  
    vector<int> memo = t;
    for(int i = 0; i < n*2; i++) memo[(i+1)%n] = min(memo[(i+1)%n], memo[i%n] + s[i%n]);
    for(int ans: memo) cout << ans << endl;
  
  return 0;
}