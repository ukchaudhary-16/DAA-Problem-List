/*
    Problem Statement: You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).
    Find two lines that together with the x-axis form a container, such that the container contains the most water.

    Return the maximum amount of water a container can store.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxArea(vector<int>&height){
    int n=height.size();
    int i=0;
    int j=n-1;
    int area=0;

    while(i<j){
        int area1=min(height[i],height[j])*(j-i);
        if(area1>area){
            area=area1;
        }
        if(height[i]<height[j]){
            i++;
        }else{
            j--;
        }
    }
    return area;
}

int main(){
    vector<int> height={1,8,6,2,5,4,8,3,7};
    
    int ans=maxArea(height);
    cout<<ans;
    return 0;
                
}