/*************************************************************************
	> File Name: 2.LinkList.cpp
	> Author: 王钰泽
	> Mail: 6357####2@
	> Created Time: 2019年01月31日 星期四 17时36分48秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

typedef struct LinkNode {
    int data;
    struct LinkNode *next;
} *LinkList, LinkNode;

LinkNode *getNewNode(int value) {
    LinkNode *p = (LinkNode *)malloc(sizeof(LinkNode));
    p->data = value;
    p->next = NULL;
    return p;
}

LinkNode *insert(LinkList l, int value, int ind) {
    LinkNode ret, *p = &ret;
    ret.next = l;
    while (ind--) {
        p = p->next;
        if (p == NULL) return l;
    }
    LinkNode *new_node = getNewNode(value);
    new_node->next = p->next;
    p->next = new_node;
    return ret.next;
}

LinkNode *erase(LinkList l, int ind) {
    LinkNode ret, *p = &ret;
    ret.next = l;
    while (ind--) {
        p = p->next;
        if (p == NULL) return l;
    }
    if (p->next == NULL) return l;
    LinkNode *q = p->next;
    p->next = p->next->next;
    free(q);
    return ret.next;
}

void clear(LinkList head) {
    if (head == NULL) return ;
    LinkNode *p = head, *q;
    while (p) {
        q = p;
        p = p->next;
        free(q);
    }
    return ;

}
int main() {




    return 0;
}
