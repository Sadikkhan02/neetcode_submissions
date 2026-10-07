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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> ans;
        for (ListNode* head : lists) { // Iterate through each row
      
        while (head) {
            ans.push_back(head->val);
            head = head->next;
            }
        }

        sort(ans.begin(), ans.end());
        ListNode* res = new ListNode(0);
        ListNode* curr = res;

        for(auto node: ans){
            curr->next = new ListNode(node);
            curr = curr -> next;
        }
        return res->next;
    }
};
