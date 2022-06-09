#include <bits/stdc++.h> 
using namespace std;

int prime_number(int range1, int range2){
int count_prime=0;
for(int i=range1; i<range2 ; i++){
    if(i==1)continue;
    if(i==2)count_prime+=1;
    int c=0;
    for(int j=2; j<i; j++){
        if(i%j==0)c++;}
    if(c==0)count_prime+=1;}
return count_prime;
}

int main(){
int n,num1,num2;
cin>> n;
for( int i=0; i<n; i++){
    cin>>num1>> num2;
    cout<< prime_number(num1,num2)<< endl;}
return 0;
}