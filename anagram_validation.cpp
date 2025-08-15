// Problem Statement: Given two strings s and t, return true if t is an anagram of s, and false otherwise

#include <iostream>
#include <algorithm>
using namespace std;

bool isValid(string s,string t){
    // approach 1
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s!=t){
        return false;
    }
    return true;

    // approach 2
    int n;
    if(s.size()>t.size()){
        n=s.size();
    }else{
        n=t.size();
    }

    for(int i=0;i<n;i++){
        if(s[i]!=t[i]){
            return false;
        }
    }
    return false;
}

int main(){
    string s,t;
    cout<<"Enter the first string: ";
    cin>> s;
    cout<<"Enter the second string: ";
    cin>> t;

    isValid(s,t);
}