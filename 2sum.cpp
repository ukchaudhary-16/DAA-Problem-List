/*
    Problem Statement: Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
    You may assume that each input would have exactly one solution, and you may not use the same element twice.
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> &arr,int target){
    vector<int>ans;
    int n=arr.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                ans.push_back(i);
                ans.push_back(j);
                break;
            }
        }
    }
    return {ans};
}

int main(){
    // sample array =[2,7,11,15], target number = 9
    vector<int> arr;
    int n,target;
    cout<<"Enter the size of array";
    cin>>n;
    cout<<"Enter the elements of array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the target:";
    cin>>target;

    twoSum(arr,target);
}