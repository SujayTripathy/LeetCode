class Solution {
public:
    int subtractProductAndSum(int n) {
        string strn=to_string(n);
        int sum=0;
        int product=1;
        for(int i=0;i<strn.size();i++){
            product*=int(strn[i])-48;
            sum+=int(strn[i])-48;
        }
        return (product-sum);
    }
};
