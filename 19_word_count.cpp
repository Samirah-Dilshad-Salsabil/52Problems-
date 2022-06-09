#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;

int count_word(string s)
{
int c=1;
for(auto x:s){
    if(x==' ')c++;
}   
return c;
}

int main(){
int n;
string word;
cin>>n;
getline(cin,word);
for( int i=0; i<n ;i++)
{
    getline(cin,word);
    cout<<"Count = "<<count_word(word)<< endl;
}

return 0;
}