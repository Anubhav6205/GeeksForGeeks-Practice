/*Given a singly linked list of N nodes.
The task is to find the middle of the linked list. For example, if the linked list is
1-> 2->3->4->5, then the middle node of the list is 3.
If there are two middle nodes(in case, when N is even), print the second middle element.
For example, if the linked list given is 1->2->3->4->5->6, then the middle node of the list is 4.*/
class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        // Your code here
        int cnt=0;
        Node *temp=head;
        while(temp!=NULL)
        {
            cnt++;
            temp=temp->next;
            
        }
        cnt/=2;
        temp=head;
        while(cnt--)
        {
            temp=temp->next;
            
        }
        return temp->data;
    }
};