#include<iostream>
#include<cmath>
#include <vector>
using namespace std;
#include <string>
int main(){ 
   int t;
   cin>>t;
   for(int p = 1;p<=t;p++){
    long long n ,  k;
    cin>>n>>k;
    if ( k%2 ==0){
        if(n%2==0){
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    } else {
        if((n-k)%2!=0 && n%2!=0){
            cout<<"NO"<<endl;
        } else {
            cout<<"YES"<<endl;
        }
    }   
}
    return 0;
}
