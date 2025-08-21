#include <iostream>
#include <stack>
using namespace std;

bool validParentheses(string s){
    stack<char> st;
    int i=0;
    int n=(int)s.size();

    while(i<n){
        if(!st.empty() && s[i]==')' && st.top()=='('){
            st.pop();
        }else if(!st.empty() && s[i]==']' && st.top()=='['){
            st.pop();
        }else if(!st.empty() && s[i]=='}' && st.top()=='{'){
            st.pop();
        }else{
            st.push(s[i]);
        }
        // advance to the next character to avoid infinite loop
        i++;
    }
    if(st.empty()){
        return true;
    }
    return false;
}
int main(){
    string s;
    cout<<"Enter the parentheses: ";
    cin>>s;

    bool res = validParentheses(s);
    cout << (res ? "Valid" : "Invalid") << endl;
    return 0;

}