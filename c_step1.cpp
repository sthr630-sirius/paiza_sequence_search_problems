#include<iostream>
using namespace std;
int main(){
    int n;
    int a;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a;
        if(a%2 == 0){
            cout << i+1 << endl;
            break;
        }
    }

    return 0;

}