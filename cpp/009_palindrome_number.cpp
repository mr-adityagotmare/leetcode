// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


class Solution {
public:
    bool isPalindrome(int x) {

        int temp = x;
        long reverse = 0;

        if(x<0){
            return false;
        }

        while (temp != 0){
             reverse = (reverse*10)+(temp%10);
             temp = temp/10;
        }
        return ((int) reverse==abs(x));
   
        
    }
};

int main() {
    // Write C++ code here
    std::cout << "Enter here: ";
    
    int s;
    cin>>s;
    Solution A;
    bool b = A.isPalindrome(s);
    if(b){
        cout<<"This is Palindrome"<<endl;
    }else{
        cout<<"This is not Palindrome"<<endl;
    }
    cout<<b<<endl;

    return 0;
}