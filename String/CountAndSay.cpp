// Given a positive integer n, return the nth term of the count-and-say sequence.

#include<iostream>
#include<string>
using namespace std;
string countAndSay(int n){
    if(n == 1) return "1";
    string ans =  countAndSay(n - 1);
    string s = "";
    int freq = 1;
    char ch = ans[0];
    for(int i = 1;i < ans.length();i++){
        char dh = ans[i];
        if(ch == dh) freq++;
        else{
            s += (to_string(freq) + ch);
            freq = 1;
            ch = dh;
        }
    }
    s += (to_string(freq) + ch);
    return s;
}
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<n<<"th term of the count-and-say sequence will be : "<<countAndSay(n);
}