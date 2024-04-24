// The Tribonacci sequence Tn is defined as follows: T0 = 0, T1 = 1, T2 = 1, and Tn+3 = Tn + Tn+1 + Tn+2 for n >= 0. Given n, return the value of Tn.


#include<iostream>
using namespace std;
class Solution {
public:
    int tribonacci(int n) {
        int t0 = 0,t1 = 1,t2 = 1;
        if( n == 0) return t0;
        if(n == 1 || n == 2) return t1;
        for(int i = 3;i <= n;i++){
            int temp = t0 + t1 + t2;
            t0 = t1;
            t1 = t2;
            t2 = temp;
        }
        return t2;
    }
};
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    Solution solve;
    cout<<n<<"th tribonacci number : "<<solve.tribonacci(n);
}