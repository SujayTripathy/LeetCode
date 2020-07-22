class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int noOfJewels=0;
        for(int i=0;i<S.size();i++){
            if(J.find(S[i])!=string::npos)
                noOfJewels++;
        }
        return noOfJewels;
    }
};
