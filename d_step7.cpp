#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    int k;
    cin >> n;
    vector<pair<string, int>> results(n);
    
    for(int i=0; i<n; i++){
        cin >> results[i].first >> results[i].second;
    }

    cin >> k;

    for(int i=0; i<n; i++){
        if(results[i].second >= k) cout << results[i].first << endl;
    }

    return 0;

}