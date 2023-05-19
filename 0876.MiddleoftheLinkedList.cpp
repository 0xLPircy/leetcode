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
class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {
        ListNode *current = head;
        int n = 0;
        while (current)
        {
            n++;
            current = current->next;
        }
        current = head;
        // printf("%d.  %d", n, n/2);
        for (int i = 0; i < n / 2; i++)
        {
            current = current->next;
        }
        return (current);
    }
};