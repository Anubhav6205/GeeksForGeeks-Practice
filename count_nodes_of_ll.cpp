/*Given a singly linked list. The task is to find the length of the linked list, where length is defined as the number of nodes in the linked list.*/
int getCount(struct Node* head)
    {
        int cnt=0;
        while(head!=NULL)
        {
            cnt++;
            head=head->next;
        }
        return cnt;
        
    }