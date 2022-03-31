/*Implement a Queue using 2 stacks s1 and s2 .
A Query Q is of 2 Types
(i) 1 x (a query of this type means  pushing 'x' into the queue)
(ii) 2   (a query of this type means to pop element from queue and print the poped element)*/

stack<int>s2;
void StackQueue :: push(int x)
{
    // Your Code
    s1.push(x);
}

//Function to pop an element from queue by using 2 stacks.
int StackQueue :: pop()
{
        // Your Code    
        if(s1.empty()==true)
        {
            return -1;
        }
        while(s1.empty()!=true)
        {
            s2.push(s1.top());
            s1.pop();
        }
        int answer=s2.top();
        s2.pop();https://practice.geeksforgeeks.org/problems/queue-using-two-stacks/1/?page=1&difficulty[]=-1&difficulty[]=0&category[]=Stack&sortBy=submissions#
        while(s2.empty()!=true)
        {
            s1.push(s2.top());
            s2.pop();
        }
        return answer;
}