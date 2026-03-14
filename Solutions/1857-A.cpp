#include<iostream>
#include<cmath>
#include <vector>
using namespace std;
#include <string>
 
int main(){ 
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
   vector<int> a(n);
   int sum = 0;
   for(int i = 0 ; i < n ; i++){
    cin>>a[i];
    sum = sum + a[i];
   }
   if ( sum%2 == 0 ){
    cout<<"YES"<<endl;
   } else {
    cout<<"NO"<<endl;
   }
}
    return 0;
}
