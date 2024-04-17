#include<vector>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> soult;
        pair<int,int> numbers;

        for(int i =0; i < nums.size();i++){
            for(int j =i + 1;j < nums.size();j++){
                if(nums[i] + nums[j] == target){
                    soult.push_back(i);
                    soult.push_back(j);
                }
            }

        }

  return soult;


    }
};
