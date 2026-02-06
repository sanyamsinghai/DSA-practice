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
    ListNode* middleNode(ListNode* head) {

        // using 2 pass
        ListNode* temp = head;
        int size = 0;
        while (temp != NULL) {
            size++;
            temp = temp->next;
        }
        temp = head;
        int middle = size / 2;
        for (int i = 0; i < middle; i++) {
            temp = temp->next;
        }
        return temp;
    }
};