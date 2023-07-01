

#include "ListNode.h"

ListNode::ListNode() : val(0), next(nullptr){
}

ListNode::ListNode(int x) : val(x), next(nullptr) {}

ListNode::ListNode(int x, ListNode *next): val(x), next(next) {}

int ListNode::getVal() {
    return val;
}

ListNode *sortList(ListNode *head) {
    if(head == nullptr)
        return nullptr;
    ListNode *tmp = head, *el = head, *btw = nullptr;

    while(tmp->next != nullptr){
        if(el->getVal() > tmp->next->getVal()){
            if(btw == nullptr)
                btw = el;
            else{
                btw->next = el;
            }
        }
    }
}




