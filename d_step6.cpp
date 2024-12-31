#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    vector<vector<int>> points;
    int x, y;
    int xs, xt, ys, yt;
    bool h, v;
    int ans;

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x >> y;
        points.push_back({x, y});
    }

    cin >> xs >> xt;
    cin >> ys >> yt;

    ans =0;

    for(int i=0; i<n; i++){
        x = points[i][0];
        y = points[i][1];
        h = (ys <= y) && (y <= yt);
        v = (xs <= x) && (x <= xt);

        if(h && v) ans++;
    }

    cout << ans << endl;

    return 0;

}