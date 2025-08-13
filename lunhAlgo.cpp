/*
    Steps involved in the Luhn algorithm
    Step 1 - Starting from the rightmost digit, double the value of every second digit
    Step 2 -  If doubling of a number results in a two digit number convert into single digit
    Step 3 - Calculate the sum of the digits
    Step 4 - If the end result modulo with 10 results in 0 as remainder, it is valid
*/

#include <iostream>
#include <vector>
using namespace std;




int validCard(vector<int> &arr,int n){
    int sum=0;
    for(int i=n-2;i>=0;i-=2){
        arr[i]=arr[i]*2;
        if(arr[i]>9){
            arr[i]=arr[i]%10 + arr[i]/10;
        }
    }

    for(int i=0;i<n;i++){
        sum+= arr[i];
    }
    return sum;

}

bool valid(int n){
    if(n%10==0){
        return true;
    }
    return false;
}


int main(){
    cout<<"Enter the Digits of the Card"<<endl;
    string cardNumber;
    cin>> cardNumber;
    
    vector<int> arr;
    
    for(char c: cardNumber){
        arr.push_back(c-'0');
    }
    int a=arr.size();
    
    if(valid(validCard(arr,a))){
        cout<<"Valid Card Number";
    }else{
        cout<<"Invalid Card Number";
    }

}
// 79927398713