

#ifndef ALGORITHMS_LISTNODE_H
#define ALGORITHMS_LISTNODE_H


class ListNode {
private:
         int val;
public:
        int getVal();
        ListNode *next;
        ListNode();
        ListNode(int x);
        ListNode(int x, ListNode *next);


};

ListNode* sortList(ListNode* head);

#endif //ALGORITHMS_LISTNODE_H
