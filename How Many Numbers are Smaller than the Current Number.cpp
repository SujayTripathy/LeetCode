class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> smaller;
        for(int i=0;i<nums.size();i++){
            smaller.push_back(0);
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]<nums[i])
                    smaller[i]++;
            }
            if(!i)
                continue;
                
            for(int j=i-1;j>=0;j--){
                if(nums[j]<nums[i])
                    smaller[i]++;
            }        
        }
        return smaller;
    }
};
