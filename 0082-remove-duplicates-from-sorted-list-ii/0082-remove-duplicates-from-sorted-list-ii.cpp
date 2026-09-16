class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {

        if (head == nullptr || head->next == nullptr)
            return head;

        ListNode dummy(0);
        dummy.next = head;

        ListNode* first = &dummy;
        ListNode* second = head;

        while (second != nullptr) {

            if (second->next != nullptr &&
                second->val == second->next->val) {

                int duplicate = second->val;

                while (second != nullptr &&
                       second->val == duplicate) {
                    second = second->next;
                }

                first->next = second;
            }
            else {
                first = second;
                second = second->next;
            }
        }

        return dummy.next;
    }
};