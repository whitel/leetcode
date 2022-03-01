/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
private:
    int getListLength(ListNode *head) {
        if(head == nullptr) 
            return 0;
        int length = 1;
        while(head->next) {
            head=head->next;
            length++;
        }
        return length;
    }
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lengthA = getListLength(headA);
        int lengthB = getListLength(headB);

        if(lengthA > lengthB){
            swap(headA, headB);
        }

        int distance = abs(lengthA - lengthB);

        while(distance--) {
            headB = headB->next;
        }

        while(headA != nullptr && headB != nullptr) {
            if(headA == headB)
                return headA;
            headA = headA->next;
            headB = headB->next;
        }
        return nullptr;
    }
};
