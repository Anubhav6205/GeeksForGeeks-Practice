/*An element is called a peak element if its value is not smaller than the value of its adjacent elements(if they exists).
Given an array arr[] of size N, find the index of any one of its peak elements.
Note: The generated output will always be 1 if the index that you return is correct. Otherwise output will be 0. 

*/
class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
       // Your code here
       int count=0;
   for(int i=0;i<n-1;i++){
       if(arr[i+1]>arr[i]){
           count=i+1;
       }
   }
   return count;
    }
};