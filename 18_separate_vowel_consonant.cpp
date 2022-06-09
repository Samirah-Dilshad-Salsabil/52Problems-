#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;

int count_vowels_consonant(string s)
{
string compare1 ="aeiou";
string compare2= "bcdfghjklmnpqrstvwxyz";
string vowels="";
string consonant="";
for (auto y:s){
    for(auto x:compare1){
    if(x==y) vowels+=x; }}
for (auto z:s){
    for(auto x:compare2){
    if(x==z)consonant+=x;}}  
cout<< vowels << "\n" << consonant << endl;
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
    count_vowels_consonant(word);
}

return 0;
}