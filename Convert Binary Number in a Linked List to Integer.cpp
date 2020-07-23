/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        vector<int> binary;
        int sum=0;
        for(ListNode* i=head;i!=nullptr;i=i->next){
            binary.push_back(i->val);
        }
        for(int i=0;i<binary.size();i++){
           sum +=binary[i]*pow(2,binary.size()-i-1);
        }
        return sum;
    }
};
