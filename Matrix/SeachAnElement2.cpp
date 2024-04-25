// Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties: Integers in each row are sorted in ascending from left to right. Integers in each column are sorted in ascending from top to bottom.

// You are given an m x n integer matrix matrix with the following two properties: Each row is sorted in non-decreasing order. The first integer of each row is greater than the last integer of the previous row. Given an integer target, return true if target is in matrix or false otherwise.

#include<iostream>
#include<vector>
using namespace std;
bool searchMatrix(vector<vector<int>>& matrix, int target){
    int left = 0,right = matrix[0].size() - 1;
    while(left < matrix.size() && right >= 0){
        if(matrix[left][right] == target) return true;
        else if(matrix[left][right] > target) --right;
        else left++;
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