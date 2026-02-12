// Online C++ compiler to run C++ program online
#include <iostream>
#include <stack>
using namespace std;


class Solution {
public:
    bool isValid(string s) {
        stack <char> st;
        for(char c : s){
            if(c=='{' || c=='(' || c=='['){
                st.push(c);
            }else{
                if(st.empty()) return false;

                char top = st.top();
                st.pop();

                if((c==')' && top != '(') ||
                   (c=='}' && top != '{') ||
                   (c==']' && top != '[')){
                    return false;
                   }
            }
        }
        return st.empty();

    }
};


int main() {
    // Write C++ code here
    std::cout << "Enter here: ";
    
    string s;
    cin>>s;
    Solution A;
    bool b = A.isValid(s);
    cout<<b<<endl;

    return 0;
}