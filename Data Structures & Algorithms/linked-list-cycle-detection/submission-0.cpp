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
    bool hasCycle(ListNode* head) {
        if(head == NULL){
            return false;
        }

        map<ListNode*, bool> m;
        ListNode* temp = head;
        while(temp != NULL){
            if(m[temp] == true){
                return true;
            }
            m[temp] = true;
            temp = temp->next;
        }
        return false;
    }
};
