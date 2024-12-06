/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* result = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* actual_node = result;
    int sum, carry = 0;

    while (l1 || l2 || carry) {
        sum = carry;
        if (l1) {
            sum += l1->val;
            l1 = l1->next;
        }
        if (l2) {
            sum += l2->val;
            l2 = l2->next;
        }
        carry = sum / 10;
        sum %= 10;
        actual_node->val = sum;
        if (l1 || l2 || carry)
            actual_node->next =
                (struct ListNode*)malloc(sizeof(struct ListNode));
        else
            actual_node->next = NULL;
        actual_node = actual_node->next;
    }

    return (result);
}
