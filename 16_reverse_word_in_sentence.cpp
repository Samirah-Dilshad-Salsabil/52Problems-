#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;

string reverse_word(string s)
{
string new_sentence="";
string new_word ="";
string reverse_word="";
for(auto x:s){
    if(x==' '){
        for(int i= new_word.length()-1; i>=0 ; i--) {reverse_word+=new_word[i];}
        new_sentence= new_sentence + reverse_word + " "; 
        new_word="";
        reverse_word="";
    }
    else{new_word+=x;}
}   
for(int i= new_word.length()-1; i>=0 ; i--) {reverse_word+=new_word[i];}
new_sentence= new_sentence + reverse_word + " "; 
return new_sentence;
}


int main(){
int n;
string word;
cin>>n;
getline(cin,word);
for( int i=0; i<n ;i++)
{
    getline(cin,word);
    cout<< reverse_word(word)<< endl;
}
return 0;
}