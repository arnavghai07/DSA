class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {

        if (head == NULL || head->next == NULL)
            return head;

        ListNode* temp = head;
        int count = 1;

        while (temp->next != NULL) {
            temp = temp->next;
            count++;
        }

        k = k % count;

        if (k == 0)
            return head;

        temp->next = head;

        for (int i = 0; i < count - k; i++) {
            temp = temp->next;
        }

        head = temp->next;

        temp->next = NULL;

        return head;
    }
};