#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    int a_min, a_max;
    cin >> n;
    vector<int> a(n);

    for(int i=0; i<n; i++) cin >> a[i];

    a_min = *min_element(a.begin(), a.end());
    a_max = *max_element(a.begin(), a.end());

    cout << a_max << " " << a_min << endl;

    return 0;

}