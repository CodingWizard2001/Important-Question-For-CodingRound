// Given an integer n, return the number of trailing zeroes in n!.

#include<iostream>
using namespace std;
class Solution {
public:
    int trailingZeroes(int n) {
        return n == 0 ? 0 : (n / 5) + trailingZeroes(n / 5);
    }
};
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    Solution solve;
    cout<<"The number of trailing zeroes in "<<n<<"!"<<" will be : "<<solve.trailingZeroes(n);
}