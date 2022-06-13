/*You are given an array arr of size N. You need to push the elements of the array into a stack and then print them while popping.*/
stack<int>_push(int arr[],int n)
{
   //return a stack with all elements of arr inserted in it
   stack<int>x;
   for(int i=0;i<n;i++)
   {
       x.push(arr[i]);
   }
   return x;
}

/* _pop function to print elements of the stack
   remove as well
*/
void _pop(stack<int> s)
{
    //print top and pop for each element until it becomes empty
    while(s.size()!=0)
    {
        int top=s.top();
        cout<<top<<" ";
        s.pop();
    }
}