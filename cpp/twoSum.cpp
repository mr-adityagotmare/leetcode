
// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> number;
        int first;
            for (int i = 0; i < nums.size(); i++) {
                first = nums[i];
                for(int j =i+1; j<nums.size();j++){
                    if(j<nums.size()){
                    //   checknumber  = first + nums[j+1];
                    if(nums[j] == target-nums[i]){
                         number.push_back(i);
                         number.push_back(j);
                         return number;
                    } 
                    }
                }    }
        return number;
    }
};



int main() {
    // Write C++ code here
    std::cout << "Enter size of an array: ";
    
    int s;
    cin>>s;

    std::cout << "Enter target: ";
    int t;
    cin>>t;
    int n;
    vector<int> nums;

    for(int i = 0; i<s;i++){
        cin>>n;
        nums.push_back(n);
    }
    Solution A;
    vector<int> out = A.twoSum(nums,t);
    
    for (int i : out){
        cout << i <<" ";
    }
    return 0;
}