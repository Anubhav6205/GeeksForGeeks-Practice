/*Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.*/

    int countZero = 0, countOne = 0, countTwo = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] == 0)
            countZero++;
        else if(a[i] == 1)
            countOne++;
        else
            countTwo++;
    }
    for(int i = 0; i < n; i++)
    {
        if(countZero != 0)
        {
            a[i] = 0;
            countZero--;
        }
        else if(countOne != 0)
        {
            a[i] = 1;
            countOne--;
        }
        else if(countTwo != 0)
        {
            a[i] = 2;
            countTwo--;
        }
    }