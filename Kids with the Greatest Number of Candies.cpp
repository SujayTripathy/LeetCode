class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max=*max_element(candies.begin(),candies.end());
        vector<bool> truth;
        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies>=max){
                truth.push_back(true);
            }
            else{
                truth.push_back(false);
            }
        }
        return truth;
    }
};
