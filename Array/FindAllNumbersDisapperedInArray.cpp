// Given an array nums of n integers where nums[i] is in the range [1, n], return an array of all the integers in the range [1, n] that do not appear in nums.


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>findDisappearedNumbers(vector<int>& nums){
    int n = nums.size();
    int i = 0;
    while(i < n){
        int currIdx = nums[i] - 1;
        if(nums[i] == nums[currIdx]) i++;
        else swap(nums[i],nums[currIdx]);
    }
    vector<int>ans;
    for(int i = 0;i < n;i++){
        if((i + 1 )!= nums[i]) ans.push_back(i + 1);
    }
    return ans;
}
int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    vector<int>nums;
    cout<<"Give input : ";
    for(int i = 0;i < size;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    vector<int>result = findDisappearedNumbers(nums);
    cout<<"Integers that do not appear are : ";
    for(int i = 0;i < result.size();i++){
        cout<<result[i]<<" ";
    }
}