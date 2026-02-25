#include<iostream>
#include<cmath>
#include <vector>
using namespace std;
#include <string>
int main(){ 
   int n ;
   cin>> n;
   vector <int> a(n);
   for(int i = 0 ; i < n ; i++){
    cin>>a[i];
   }
   bool flag = true;
   for(int j = 0 ; j< n; j++){
    if(a[j]==1){
        cout<<"HARD"<<endl;
        flag = false;
        break;
    }
   }
   if(flag==true){
    cout<<"EASY"<<endl;
   }
    return 0;
}
