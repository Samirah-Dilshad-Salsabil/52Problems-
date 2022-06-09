#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;

int count_letter(string s)
{
string compare ="abcdefghijklmnopqrstuvwxyz";
for (auto y:compare){
    int c=0;
    for(auto x:s){
    if(x==y)c++;
    }
    if(c!=0) cout<< y << " = " << c<< endl;
}   
return 0;
}


int main(){
int n;
cin>> n;
for( int i=0; i<n; i++){
    string word;
    cin>>word;
    count_letter(word);
}

return 0;
}