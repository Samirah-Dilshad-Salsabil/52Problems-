#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;

int reverse_word(string s)
{
string new_word ="";
string reverse_words="";
for(auto x:s){new_word+=x;}   
for(int i= new_word.length()-1; i>=0 ; i--) {reverse_words+=new_word[i];}
cout<< reverse_words << endl;
return 0;
}


int main(){
int n;
cin>> n;
for( int i=0; i<n; i++){
    string word;
    cin>>word;
    reverse_word(word);
}
return 0;
}