#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int main(){
    int n;
    int x, y;
    int k;
    cin >> n;
    vector<vector<int>> points;
    int ans;
    
    for(int i=0; i<n; i++){
        cin >> x >> y;
        points.push_back({x, y});
    }

    cin >> k;

    ans = 0;
    for(int i=0; i<n; i++){
        if(abs(points[n-1][0]-points[i][0])+abs(points[n-1][1]-points[i][1]) <= k) ans++;
    }

    cout << ans << endl;

    return 0;

}