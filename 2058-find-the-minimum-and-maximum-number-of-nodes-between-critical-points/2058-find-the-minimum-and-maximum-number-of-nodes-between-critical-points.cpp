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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int first = -1;
        int prevc = -1;

        int mindist = INT_MAX;
        int maxdist = -1;

        ListNode* prev = head;
        ListNode* curr = head -> next;
        
        int pos = 1;

        while(curr != NULL && curr->next != NULL){
            ListNode* next = curr->next;

            bool iscritical = (curr->val > prev->val && curr->val > next->val) || (curr->val < prev->val && curr->val < next->val);

            if(iscritical){
                if(first == -1){
                    first = pos;
                }
                else{
                    mindist = min(mindist, pos - prevc);

                    maxdist = max(maxdist, pos - first);
                }
                prevc = pos;
            }
            prev = curr;
            curr = next;
            pos++;
        }
        if (first == -1 || mindist == INT_MAX) {
            return {-1, -1};
        }
        return {mindist, maxdist};

    }
};