#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;

int count_repeating_letter(string s, string occurance)
{
int c=0; //count the last word
string new_sentence ="";
for(auto x:s) // iterate through every letter
{
    if(x==occurance[0]){c++;}
}
return c;
}


int main(){
string sentence;
string letter;
getline(cin,sentence);
cin>> letter; 
int count= count_repeating_letter(sentence,letter);
if(count!=0){
    cout << "Occurance of '" << letter << "' in '" << sentence << "' = " << count;
}
else{
    cout << "'" << letter << "' is not present" ;
}


return 0;
}