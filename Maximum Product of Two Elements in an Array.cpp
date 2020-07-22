class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max1,max2=0;
        int index1=0;
        for(int i=0;i<nums.size();i++){
            int temp;
            if(nums[i]>max1){
                temp=max1;
                max1=nums[i];
                index1=i;
            }
            if(temp>max2)
                max2=temp;
            if(nums[i]>max2 && i!=index1)
                max2=nums[i];
        }
        return (max1-1)*(max2-1);
    }

};
