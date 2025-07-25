#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>temp;
        for(int i=0;i<nums.size();i++){
            if (nums[i]!=0){
                temp.push_back(nums[i]);
            }
        }
            for (int i=0;i<nums.size();i++){
                if(i<temp.size()){
                    nums[i]=temp[i];
                }
                else {nums[i]=0;}
            }
        }
        
    
};


class Solution {
public:
    void moveZeroes(std::vector<int>& nums) {
        int j = -1;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                j = i;
                break;
            }
        }

        // If no zeros were found, j will be -1.
        // The array is already correct, so we can stop.
        if (j == -1) {
            return;
        }

        // This part will now only run if a zero was actually found.
        for (int i = j + 1; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[j], nums[i]);
                j++;
            }
        }
    }
};