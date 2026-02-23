#include<iostream>
#include<cmath>
#include <vector>
using namespace std;
#include <string>

int main(){ 

    int k , n , w ; 
    cin >> k >> n >> w;
    int borrow = ((w * (w+1) * k) / 2 ) - n;
    cout<<borrow<<endl;
    return 0;
}
