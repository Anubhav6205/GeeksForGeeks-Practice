/*Given an array of size N consisting of only 0's and 1's. The array is sorted in such a manner that all the 1's are placed first and then they are followed by all the 0's. Find the count of all the 0's.*/

class Solution{   
public:
    int countZeroes(int arr[], int n) {
        // code here
        sort(arr,arr+n);
        int count=0,i;
        for(i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                count++;
            }
            if(arr[i]==1)
            {
                goto label;
            }
        }
        label:
        return count;
    }
};