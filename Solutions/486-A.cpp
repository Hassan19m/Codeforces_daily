#include<iostream>
#include<cmath>
#include <vector>
using namespace std;
#include <string>

int main(){ 

long long n;
cin>>n;
long long a = n / 2;
long long b = a + 1;
long long sum;
if ( n%2 ==0 ){
    sum = n/2;
} else {
    sum = a*a - b*b + a;
}
cout<<sum<<endl;

    return 0;
}
