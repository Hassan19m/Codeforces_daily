#include<iostream>
#include<cmath>
#include <vector>
using namespace std;
#include <string>
 
int main(){ 
bool flag = true;  
      string s , t ;
      cin>>s;
      cin>>t;
      if(s.size()!=t.size()){
        cout<<"NO"<<endl;
        flag = false;
      } else {
        for ( int j = 0 ; j < s.size() ; j++){
        if ( s[j] != t[s.size() - 1 - j]){
            cout<<"NO"<<endl;
            flag = false;
            break;
        }
      }
      }      
      if (flag!=false){
        cout<<"YES"<<endl;
      }
    return 0;
}
