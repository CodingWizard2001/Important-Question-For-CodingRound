// Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

// Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.

#include<iostream>
#include<vector>
using namespace std;
int search(vector<int>& nums, int target){
    int l = 0,r = nums.size() - 1;
    while(l <= r){
        const int m = (l + r) / 2;
        if(nums[m] == target) return m;
        if(nums[l] <= nums[m]){
            if(nums[l] <= target && target < nums[m]) r = m - 1;
            else l = m + 1;
        }
        else{
            if(nums[m] < target && target <= nums[r]) l = m + 1;
            else r = m - 1;
        }
    }
    return -1;
}
void rotateArray(vector<int>& nums, int l,int r){
    while(l < r) swap(nums[l++],nums[r--]);
}
void rotate(vector<int>& nums, int k) {
    int n = nums.size() - 1;
    k %= n;
    rotateArray(nums,0,n);
    rotateArray(nums,0,k - 1);
    rotateArray(nums,k,n);
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
    rotate(nums,2); // Rotate array
    cout<<"After rotating : ";
    for(int i = 0;i < size;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    int target;
    cout<<"Enter the value of target element : ";
    cin>>target;
    cout<<target<<" found at index : "<<search(nums,target);
}