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

    int length(ListNode* head){
        ListNode* temp = head;
        int cnt = 0;
        while(temp != NULL){
            cnt++;
            temp = temp->next;
        }
        return cnt;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL || head->next == NULL){
            return NULL;
        }
        int l = length(head);
        int position = l-n;
        if (position == 0) {
            return head->next;
        }
        ListNode* curr = head;
        ListNode* prev = NULL;
      int cnt = 0;
      while(cnt < position){
        prev = curr;
        curr = curr->next;
        cnt++;
      }
      prev -> next = curr->next;
      curr->next = NULL;
        return head;
    }
};
