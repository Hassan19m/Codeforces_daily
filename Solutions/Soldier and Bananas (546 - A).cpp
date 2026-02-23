#include<iostream>
#include<cmath>
#include <vector>
using namespace std;
#include <string>

int main(){ 
     int k , n , w ; 
    cin >> k >> n >> w;
    int total = (w * (w+1) * k) / 2 ;
    int borrow;
    if ( total <=n ){
         borrow = 0;
    } else {
        borrow = total - n;
    }
     cout<<borrow<<endl;
    return 0;
}
