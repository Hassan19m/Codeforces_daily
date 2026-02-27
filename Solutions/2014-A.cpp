#include<iostream>
#include<cmath>
#include <vector>
using namespace std;
#include <string>
int main(){ 
   int t;
   cin>>t;
   for(int p = 1;p<=t;p++){
   int n , k;
   cin>>n>>k;
   vector<int> a(n);
   for ( int j = 0 ; j < n ; j++){
    cin>>a[j];
   }
   int taken = 0 , given = 0;
   for ( int i = 0 ; i < n ; i++){
    if ( a[i]>=k ){
        taken = taken + a[i];
    }
    if (a[i]==0&&taken>0){
        given = given + 1;
        taken--;
    }
   }
   cout<<given<<endl;
   }
    return 0;
}
