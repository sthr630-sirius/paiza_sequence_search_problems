#include<iostream>
#include<vector>
using namespace std;
int main(){
  int n, k;
  cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];
  cin >> k;
  for (int i=0; i<n; i++){
    if (a[i] == k){
      cout << i+1 << endl;
    }
  }

  return 0;
}
