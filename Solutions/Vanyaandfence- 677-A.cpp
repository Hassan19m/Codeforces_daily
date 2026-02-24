#include<iostream>
#include<cmath>
#include <vector>
using namespace std;
#include <string>
int main(){ 
   int n , h ;
   cin >> n >> h ;
   vector<int> a(n);
   for (int i = 0 ; i < n ; i ++){
    cin >> a[i] ;
   }
   int min = 0;
   for ( int j = 0 ; j < n ; j++){
    if(a[j]<=h){
        min++;
    }
   }
   min = (n-min)*2 + min;
   cout<<min<<endl;
    return 0;
}
