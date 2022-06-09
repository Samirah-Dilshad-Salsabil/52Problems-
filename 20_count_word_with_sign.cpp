#include <iostream>
#include <sstream>
#include<string>
using namespace std;
 
int countWords(string str)
{
    stringstream s(str); // breaking into words
    string word; //store individual words
    int count = 0;
    while (s >> word)
        count++;
    return count;
}
int main()
{
    string s;
    getline(cin,s);
    cout << "Number of words: " << countWords(s);
    return 0;
}