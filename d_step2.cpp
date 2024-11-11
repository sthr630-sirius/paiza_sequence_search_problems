#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n, k;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a.at(i);
    cin >> k;
    k--;

    sort(a.begin(), a.end(), greater<>());
    cout << a.at(k) << endl;

    return 0;

}