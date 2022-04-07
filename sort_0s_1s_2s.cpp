/*Given a linked list of N nodes where nodes can contain values 0s, 1s, and 2s only. The task is to segregate 0s, 1s, and 2s linked list such that all zeros segregate to head side, 2s at the end of the linked list, and 1s in the mid of 0s and 2s.*/
class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        int zero=0,one=0,two=0;
        Node* temp=head;
        while(temp!=NULL)
        {
            if(temp->data==0)
            {
                zero++;
            }
            else if(temp->data==1)
            {
                one++;
            }
            else if(temp->data==2)
            {
                two++;
            }
            temp=temp->next;
        }
        temp=head;
        while(temp!=NULL)
        {
            if(zero!=0)
            {
                zero--;
                temp->data=0;
                
            }
            else if(one!=0)
            {
                
                one--;
                temp->data=1;
                
            }
            else if(two!=0)
            {
                two--;
                temp->data=2;
                
            }
            temp=temp->next;
            
        }
        return head;
        
        // Add code here
        
    }
};