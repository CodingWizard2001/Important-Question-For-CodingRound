// You are climbing a staircase. It takes n steps to reach the top. Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

#include<iostream>
using namespace std;
int climbStairs(int n) {
    int prev1 = 1,prev2 = 1;
    for(int i = 2;i <= n;i++){
        const int dp = prev1 + prev2;
        prev1 = prev2;
        prev2 = dp;
    }
    return prev2;
}
int main(){
    int n;
    cout<<"Enter no. of steps : ";
    cin>>n;
    cout<<"No. of distinct ways : "<<climbStairs(n);
}