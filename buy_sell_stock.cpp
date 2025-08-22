/*
    Problem Statement: You are given an array prices where prices[i] is the price of a given stock on the ith day.
    You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
    Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
    Example : [7,1,5,3,6,4]
*/



#include <iostream>
#include <vector>

using namespace std;

int maxProfit(vector<int>&prices,int n){
    int minPrice=prices[0];
    int maxProfit=0;
    int profit;

    for(int i=0;i<n;i++){
        if(minPrice>prices[i]){
            minPrice=prices[i];
        }else{
            profit = prices[i]-minPrice;
        }if(profit>maxProfit){
            maxProfit=profit;
        }
    }
    return maxProfit;
}

int main(){
    int n;
    cin>>n;
    vector<int> prices(n);
    cout<<"Enter the prices of Stock:"<<endl;

    for(int i=0;i<n;i++){
        cin>>prices[i];
    }

    int ans=maxProfit(prices,n);
    cout<<ans;
}