#include<iostream>
#include<vector>
using namespace std;
int main(){
  int n, k;
  int idx;
  cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];
  cin >> k;
  idx = -1;
  for (int i=0; i<n; i++){
    if (k == a[i]){
      idx = i;
      break;
    }
  }
  
  cout << idx+1 << endl;
  return 0;
  
}
