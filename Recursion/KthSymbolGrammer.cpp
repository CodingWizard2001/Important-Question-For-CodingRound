// We build a table of n rows (1-indexed). We start by writing 0 in the 1st row. Now in every subsequent row, we look at the previous row and replace each occurrence of 0 with 01, and each occurrence of 1 with 10. Given two integer n and k, return the kth (1-indexed) symbol in the nth row of a table of n rows.

#include<iostream>
using namespace std;
int KthGrammar(int n,int k){
    // Base Case
    if(n == 1) return 0;
    if(k % 2 == 0){ // K -> Even
        int ans = KthGrammar(n - 1,k / 2);
        return ans == 0 ? 1 : 0; // If even then flip
    }
    else return KthGrammar(n - 1,(k / 2) + 1);// K -> Odd
}
int main(){
    int n,k;
    cout<<"Enter the row no : ";
    cin>>n;
    cout<<"Enter the term no : ";
    cin>>k;
    cout<<n<<"th row & "<<k<<"th term's value : "<<KthGrammar(n,k);
} 