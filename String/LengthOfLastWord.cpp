// Given a string s consisting of words and spaces, return the length of the last word in the string.

#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.length() - 1;
        while (i >= 0 && s[i] == ' ') --i;
        const int lastIndex = i;
        while (i >= 0 && s[i] != ' ') --i;
        return lastIndex - i;
    }
};
int main(){
    string s;
    cout<<"Enter string : ";
    getline(cin,s);
    Solution solve;
    cout<<"The length of the last word in the string is : "<<solve.lengthOfLastWord(s);
}