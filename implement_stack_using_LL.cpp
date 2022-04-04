void MyStack ::push(int x) 
{
    // Your Code
    StackNode *temp=new StackNode(x);
    temp->next=top;
    top=temp;
    
}

//Function to remove an item from top of the stack.
int MyStack ::pop() 
{
    // Your Code
    if(top==NULL)
    {
        return -1;
    }

    int num=top->data;
    top=top->next;
 
    return num;
}