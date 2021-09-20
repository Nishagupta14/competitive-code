Method 1 : Two Pointer Solution

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if(head == NULL)
            return head;
 
        ListNode *slow = head;
        ListNode *fast = head;
        
        while(fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        return slow;
    }
};
Method 2 : By Counting Total Nodes

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *temp = head;
        int count = 0;
		
        while(temp != NULL)
        {
            count++;
            temp=temp->next;
        }
		
        temp = head;
		
        for(int i = 0; i < count/2; i++)
            temp = temp->next;
		
        return temp;
    }
};