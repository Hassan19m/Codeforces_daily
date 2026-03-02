#include<iostream>
#include<cmath>
#include <vector>
using namespace std;
#include <string>
int main(){ 
int n;
cin>>n;
vector<int> p(n);
vector<int> q(n);
for ( int i = 0 ; i < n ; i++ ){
    cin>>p[i]>>q[i];
}
int rooms = 0;
for (int j = 0 ; j < n ; j++){
    if (q[j] - p[j] >=2){
        rooms++;
    }
}
cout<<rooms<<endl;
    return 0;
}
