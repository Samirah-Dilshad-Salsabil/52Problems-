//permutaion of a sentence
#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
struct detail
{
    int freq;
};

int count_word(string s)
{
int c=1; //count the last word
string new_sentence ="";
for(auto x:s) // iterate through every letter
{
    if(x==' '){c++;}
}
return c;
}
ll factorial(ll k) {
  if (k> 1) {
      return k * factorial(k - 1);
  }
  else{
      return 1;
  }
}

int count_duplicate_word(string s)
{ 
    char words[100][100];  
    int i = 0, j = 0, k, length, count;  
    int factorial_multiple=1; 
    for(k=0; s[k]!='\0'; k++){  // \0 It is used to determinate the end of C-style strings.
           
        if(s[k] != ' ' && s[k] != '\0'){  
            words[i][j++] = s[k];  
        }  
        else{  
            words[i][j] = '\0';  
            i++;  
            j = 0;  
        }  
    }  
    length = i+1;
    
    struct detail so[length];
    for(i = 0; i < length; i++){  
        count = 1;  
        for(j = i+1; j < length; j++){  
           if(strcmp(words[i], words[j]) == 0 && (strcmp(words[j],"0") != 0)){  
               count++;  
               //Set words[j] to 0 to avoid printing visited word  
               strcpy(words[j],"0");  
           }   
        }
        so[i].freq = count;
       factorial_multiple=factorial_multiple* factorial(so[i].freq);

    } 
return factorial_multiple;
}


int main(){
string sentence;
getline(cin,sentence);
int Num_of_word= count_word(sentence);
int Num_of_word_factorial= factorial(Num_of_word);
int Duplicate_word_factorial= count_duplicate_word(sentence);

int permutation = Num_of_word_factorial/Duplicate_word_factorial;
cout << 1 << "/" << permutation;

return 0;
}

