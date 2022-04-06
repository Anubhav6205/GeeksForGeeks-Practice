/*Given a linked list consisting of L nodes and given a number N. The task is to find the Nth node from the end of the linked list.*/
int getNthFromLast(Node *head, int n)
{
       // Your code here
       Node* temp=head;
       int count=0;
       while(temp!=NULL)
       {
           count++;
           temp=temp->next;
       }
       temp=head;
       if(n>count)
       {
           return -1;
       }
       count-=n;
       
       while(count--)
       {
           temp=temp->next;
       }
       return temp->data;
}