
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        int i = 0;
        for(int j = 1; j< nums.size();j++){

            if(nums[i] != nums[j]){
                i++;
                nums[i] = nums[j];
            }
        }
        return i+1;
    }
};

int main() {
    // Write C++ code here
    std::cout << "Enter size of an array: ";
    
    int s;
    cin>>s;

    int n;
    vector<int> nums;

    for(int i = 0; i<s;i++){
        cin>>n;
        nums.push_back(n);
    }

    Solution A;
    int out = A.removeDuplicates(nums);
    
    // for (int i : out){
        cout << "output: " << out <<endl;
    // }
    return 0;
}