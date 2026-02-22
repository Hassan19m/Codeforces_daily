#include<iostream>
#include<cmath>
#include <vector>
using namespace std;
#include <string>

int main(){ 
    int n;
    cin>>n;
    vector<char> s(n);
    for(int i = 0; i<n ; i++){
        cin>>s[i];
    }
    int j = 0 , c_1 = 0 , c_2 = 0;
    while (s[j]!='\0'){
        if(s[j]=='A'){
            c_1++;
        } else if(s[j]=='D') {
            c_2++;
        }
        j++;
    }
    if(c_1 > c_2){
        cout<<"Anton"<<endl;
    } else if (c_1 == c_2){
        cout<<"Friendship"<<endl;
    } else if(c_1 < c_2) {
        cout<<"Danik"<<endl;
    }


    return 0;
}
