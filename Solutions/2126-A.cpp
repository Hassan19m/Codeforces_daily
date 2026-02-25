#include<iostream>
#include<cmath>
#include <vector>
using namespace std;
#include <string>

int main(){ 
   int t;
   cin>>t;
   for(int p = 1;p<=t;p++){
    int x ;
    cin>>x;
    int rem;
    int y = x;
    while(x>0){
        rem= x%10;
        y = min(y , rem);
     x = x / 10;
    }
    cout<<y<<endl;
   }
    return 0;
}
