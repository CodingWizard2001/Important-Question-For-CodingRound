// Given an array nums of size n, return the majority element.

#include<iostream>
#include<vector>
using namespace std;
int majorityElement(vector<int>& nums){
    int ans;
    int count = 0;
    for(int num : nums){
        if(count == 0) ans = num;
        count += num == ans ? 1 : -1;
    }
    return ans;
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
    cout<<"Majority element is : "<<majorityElement(nums);
}