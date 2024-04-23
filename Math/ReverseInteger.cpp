// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

#include<iostream>
#include<climits>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        long ans = 0;
        while(x != 0){
            int digit = x % 10;
            ans = ans * 10 + digit;
            x /= 10;
        }
        return (ans < INT_MIN || ans > INT_MAX) ? 0 : ans;
    }
};
int main(){
    int x;
    cout<<"Enter the value of X : ";
    cin>>x;
    Solution solve;
    cout<<"Reverse form of "<<x<<" will be : "<<solve.reverse(x);
} 