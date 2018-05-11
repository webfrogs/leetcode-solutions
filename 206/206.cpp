#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* newHead = NULL;
        ListNode* temp = NULL;

        ListNode* node = head;
        while(node != NULL) {
            temp = node->next;
            node->next = newHead;
            newHead = node;
            node = temp;
        }

        return newHead;
    }

    ListNode* reverseList2(ListNode* head) {
        return helper(head, NULL);
    }

    ListNode *helper(ListNode* current, ListNode* previous) {
        ListNode *reverse = NULL;
        if (current) {
            reverse = helper(current->next, current);
            current->next = previous;
        } else {
            reverse = previous;
        }
        return reverse;
    }
};


int main(int argc, char* argv[]) {
    return 0;
}

