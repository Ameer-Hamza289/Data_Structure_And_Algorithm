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
  ListNode *removeElements(ListNode *head, int val)
  {
    if (head == NULL)
      return NULL;
    ListNode *farzi = new ListNode(10);
    ListNode *t = farzi;
    t->next = head;
    while (t != NULL && t->next != NULL)
    {
      if (t->next->val == val)
      {
        t->next = t->next->next;
      }
      else
      {
        t = t->next;
      }
    }
    return farzi->next;
  }
};