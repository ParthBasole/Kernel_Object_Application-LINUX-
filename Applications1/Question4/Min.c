#include<limits.h> 
int Min(int arr[],int size)
{ int min=INT_MAX;
    for(int i=0;i<size;i++)
    { 
        min=((arr[i]<min)?(arr[i]):(min));
    }

return min;
}