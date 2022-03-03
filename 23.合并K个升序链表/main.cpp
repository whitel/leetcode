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
private:
    ListNode* mergeTwoLists(ListNode *a, ListNode *b) {
        if((!a) || (!b))
            return a ? a : b;
        ListNode *head = new ListNode(0);
        ListNode *tail = head;
        while(a && b) {
            if(a->val < b->val){
                tail->next = a;
                a = a->next;
            } else {
                tail->next = b;
                b = b->next;
            }
            tail = tail->next;
        }
        tail->next = (a ? a : b);
        return head->next;
    }
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode &ans = nullptr;
        for (int i = 0; i < lists.size(); i++) 
            ans = mergeTwoLists(ans, lists[i]);
        return ans;
    }
};
