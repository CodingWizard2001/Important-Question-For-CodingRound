// You are given an m x n integer matrix matrix with the following two properties: Each row is sorted in non-decreasing order. The first integer of each row is greater than the last integer of the previous row. Given an integer target, return true if target is in matrix or false otherwise.

#include<iostream>
#include<vector>
using namespace std;
bool searchMatrix(vector<vector<int>>& matrix, int target){
    if(matrix.empty()) return false;
    int n = matrix.size();
    int m = matrix[0].size();
    int l = 0,r = m * n;
    while(l < r){
        int m = (l + r) / 2;
        const int i = m / n;
        const int j = m % n;
        if(matrix[i][j] == target) return true;
        else if(matrix[i][j] < target) l = (m + 1);
        else r = m;
    }
    return false;
}
int main(){
    int row,col;
    cout<<"Enter no. of rows : ";
    cin>>row;
    cout<<"Enter no. of cols : ";
    cin>>col;
    vector<vector<int>> matrix;
    cout<<"Give input : ";
    for(int i = 0;i < row;i++){
        vector<int> v;
        for(int j = 0;j < col;j++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        matrix.push_back(v);
    }
    int target;
    cout<<"Enter the target : ";
    cin>>target;
    if(searchMatrix(matrix,target)) cout<<"Founded";
    else cout<<"Not found";
}