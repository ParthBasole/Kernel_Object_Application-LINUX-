 
int Max(int arr[],int size)
{ int max=0;
    for(int i=0;i<size;i++)
    { 
        max=((arr[i]>max)?(arr[i]):(max));
    }

return max;
} 
