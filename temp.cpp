#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> a(10);

    a = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    auto itr = a.begin();

    cout << "op:" << a[2] << endl;
    cout << "at:" << a.at(2) << endl;

    cout << &*itr << endl;
    cout << *itr << endl;

    itr++;
    cout << &*itr << endl;
    cout << *itr << endl;

    itr = itr + 3;
    cout << &*itr << endl;
    cout << *itr << endl;

    return 0;

}