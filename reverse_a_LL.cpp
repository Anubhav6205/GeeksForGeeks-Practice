/*
Given a linked list of N nodes. The task is to reverse this list.*/
struct Node* reverseList(struct Node *head)
    {
        struct Node* current=head;
        struct Node* prev=NULL;
        struct Node* forward=NULL;
        while(current!=NULL)
        {
            forward=current->next;
            current->next=prev;
            prev=current;
            current=forward;
        }
        head=prev;
        return head;
        
    }