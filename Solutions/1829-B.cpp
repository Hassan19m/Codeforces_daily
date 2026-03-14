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
   for(int i = 0 ; i < n ; i++){
    cin>>a[i];
   }
   int len = 0 , length = 0;
   for(int i = 0 ; i < n ; i++){
    if(a[i]==0){
        len++;
    }
    length = max(len , length);
    if(a[i]==1){
        len = 0;
    }
   }
   cout<<length<<endl;
}
 
    return 0;
}
