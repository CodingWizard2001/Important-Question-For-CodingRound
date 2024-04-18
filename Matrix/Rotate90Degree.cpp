// You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

#include<iostream>
#include<vector>
using namespace std;
void rotate(vector<vector<int>>& matrix){
    int n = matrix.size();
    // First Transpose
    for(int i = 0;i < n;i++){
        for(int j = (i + 1);j < n;j++){
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
    // Then Reverse
    for(int i = 0;i < n;i++){
        int j = 0,k = (n - 1);
        while(j < k){
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][k];
            matrix[i][k] = temp;
            j++;
            k--;
        }
    }
}
int main(){
    int row;
    cout<<"Enter no. of rows : ";
    cin>>row;
    vector<vector<int>> matrix;
    cout<<"Give input : ";
    for(int i = 0;i < row;i++){
        vector<int> v;
        for(int j = 0;j < row;j++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        matrix.push_back(v);
    }
    cout<<"Original Matrix : "<<endl;
    for(int i = 0;i < row;i++){
        for(int j = 0;j < row;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    rotate(matrix);
    cout<<"After rotating Matrix : "<<endl;
    for(int i = 0;i < row;i++){
        for(int j = 0;j < row;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}