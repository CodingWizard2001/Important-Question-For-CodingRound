// Given an integer, convert it to a roman numeral.
//              Symbol       Value
//              I             1
//              V             5
//              X             10
//              L             50
//              C             100
//              D             500
//              M             1000
#include<iostream>
#include<vector>
using namespace std;
string intToRoman(int num){
    vector<string> I = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
    vector<string> X = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
    vector<string> C = {"","C","CC","CCC","DC","D","DC","DCC","DCCC","CM"};
    vector<string> M = {"","M","MM","MMM"};

    return M[num / 1000] + C[(num % 1000) / 100] + X[(num % 100) / 10] + I[num % 10];
}
int main(){
    int num;
    cout<<"Enter the value of n : ";
    cin>>num;
    cout<<"In Roman it will be : "<<intToRoman(num);
}