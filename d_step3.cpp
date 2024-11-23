#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n, k;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    cin >> k;

    sort(a.begin(), a.end());

    for(int i=0; i<n; i++){
        if(a[i] >= k){
            cout << a[i] << endl;
            break;
        } 
    }

    return 0;

}