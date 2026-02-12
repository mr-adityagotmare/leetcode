#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        int sc,nextsc;
        for(int i=0; i<s.size();i++){
            if(i+1<s.size()){
                sc = s[i];
                nextsc = s[i+1];
                
                if(getvalue(sc) < getvalue(nextsc))
                {
                    sum += getvalue(nextsc)-getvalue(sc);
                    i++;
                }else{
                    sum += getvalue(sc);
                }
            }else{
                sc = s[i];
                    sum += getvalue(sc);                    
            }
            }
            return sum;
          }
          
          int getvalue(char c){
              switch(c){
                  case 'M': return 1000;
                  case 'D': return 500;
                  case 'C': return 100;
                  case 'L': return 50;
                  case 'X': return 10;
                  case 'V': return 5;
                  case 'I': return 1;
                  default: return 0; 
              }

          }
};

int main() {
    // Write C++ code here
    std::cout << "Enter here: ";
    
    string s;
    cin>>s;
    Solution A;
    int n = A.romanToInt(s);
    cout<<n<<endl;

    return 0;
}