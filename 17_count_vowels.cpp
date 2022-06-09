#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;

int count_vowels(string s)
{
int c=0;
string compare ="aeiou";
for (auto y:compare){
    for(auto x:s){
    if(x==y){c++;}}
}  
cout<< "Number of vowels = "<< c << endl; 
return 0;
}


int main(){

int n;
string word;
cin>>n;
getline(cin,word);
for( int i=0; i<n ;i++)
{
    getline(cin,word);
    count_vowels(word);
}

return 0;
}