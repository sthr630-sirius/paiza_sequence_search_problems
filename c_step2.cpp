#include<iostream>
using namespace std;
int main(){
    int n;
    int a;
    int ans;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a;
        if(a%2 == 1) ans = i+1;
    }

    cout << ans << endl;

    return 0;

}