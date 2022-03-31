/*Write a program to implement a Stack using Array. Your task is to use the class as shown in the comments in the code editor and complete the functions push() and pop() to implement a stack. */
void MyStack :: push(int x)
{
    // Your Code
   arr[++top]=x;
}

//Function to remove an item from top of the stack.
int MyStack :: pop()
{
    // Your Code 
    if(top==-1)
    {
        return -1;
    }
    return arr[top--];
    
}