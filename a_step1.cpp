#include<iostream>
#include<vector>
using namespace std;
int main(){
  int n, k;
  int ans;
  cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];
  cin >> k;
  
  ans = 0;

  for (auto ai:a){
    if (k == ai) ans++;
  }

  cout << ans << endl;

  return 0;
}
