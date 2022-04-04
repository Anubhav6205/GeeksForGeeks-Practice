/*Given a linked list of N nodes. The task is to check if the linked list has a loop. Linked list can contain self loop*/
class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        // your code here
        if(head==NULL)
        {
            return false;
        }
        Node* slow=head;
        Node* fast=head;
        while(slow!=NULL &&fast!=NULL&& fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                return true;
            }
        }
        return false;
        
    }
    
};