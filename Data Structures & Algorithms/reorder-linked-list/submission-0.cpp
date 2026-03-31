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
    void reorderList(ListNode* head) {
        ListNode* temp = head;
        vector<ListNode*> nArray;
        
        while (temp) {
            nArray.push_back(temp);
            temp = temp->next;
        }

        bool backForth = true;
        int n = nArray.size();
        int fwd = 1; 
        int bwd = n - 1;

        ListNode* current = head; 

        for (int i = 0; i < n - 1; i++) {
            if (backForth) {
                current->next = nArray[bwd];
                bwd--;
            } else {
                current->next = nArray[fwd];
                fwd++;
            }     
            current = current->next;
            backForth = !backForth; 
        }
        current->next = nullptr;
    }
};
