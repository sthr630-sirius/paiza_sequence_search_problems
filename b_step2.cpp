#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int a_min, a_max;
    vector<int> a(10);
    for(int i=0; i<10; i++) cin >> a[i];

    a_max = *max_element(a.begin(), a.end());
    a_min = *min_element(a.begin(), a.end());

    cout <<  a_max << " " << a_min << endl;
    
    return 0;
}