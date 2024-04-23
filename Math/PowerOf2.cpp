// Given an integer n, return true if it is a power of two. Otherwise, return false.

#include<iostream>
using namespace std;
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0) return false;
        return (n & (n - 1)) == 0;
    }
};
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    Solution solve;
    if(solve.isPowerOfTwo(n)) cout<<n<<" is power of 2";
    else cout<<n<<" is not power of 2";
}