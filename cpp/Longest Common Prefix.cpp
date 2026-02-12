
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty())  return "";
        string st = strs[0];
        
        for(int i=0; i<strs.size();i++){
            int j = 0;
            while(j<st.length() && j<strs[i].length() && st[j] == strs[i][j]){
                j++;
            }
            st = st.substr(0,j);
            if(st.empty()) return "";
        }
        return st;
    }
};

int main() {
    // Write C++ code here
    std::cout << "Enter size of an array: ";
    
    int n;
    cin>>n;
    string s;
    vector<string> str;

    for(int i = 0; i<n;i++){
        cout << "Enter string "<< i+1<<" :";
        cin>>s;
        cout<<endl;
        str.push_back(s);
    }
    Solution A;
    string out = A.longestCommonPrefix(str);
    
        cout << "Comman prefix: " << out <<endl;
    return 0;
}

