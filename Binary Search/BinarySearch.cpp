// Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.

#include<iostream>
#include<vector>
using namespace std;
int search(vector<int>& nums, int target){
    int left = 0,right = nums.size() - 1;
    while(left < right){
        int mid = left + (right - left) / 2;
        if(nums[mid] == target) return mid;
        else if(nums[mid] < target) left = mid;
        else right = mid - 1; 
    }
    return -1;
}
int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    vector<int>nums;
    cout<<"Given input : ";
    for(int i = 0;i < size;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    int target;
    cout<<"Enter the value of target element : ";
    cin>>target;
    cout<<target<<"'s index is : "<<search(nums,target);
}