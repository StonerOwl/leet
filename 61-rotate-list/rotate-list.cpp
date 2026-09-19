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
    ListNode* rotateRight(ListNode* head, int k) {
    ListNode* temp = head;
    ListNode* start = head;
    ListNode* end = head;
    int count =0;
    while(temp != nullptr) {
    count++;
    temp = temp->next;
}
temp =head;


    if(head == nullptr){
        return nullptr;
    }
    if(head->next == nullptr){
        return head;
    }
   k = k%count;
    while(k !=0){
         while(end->next != nullptr){
        temp  = end;
        end = end->next;
    }
    temp->next = nullptr;
    end-> next = start;
    start = end;
    temp = start;
    k--;
    }
return start;
    }
};