#include <stdio.h>

int fact( int val)
{ int sum=0,ret=0;
    
for(int i=1;i<val;i++)
{
 ret=val%i;
 if(!ret)
 { sum=i+sum;     
}
    
}
printf("Sum of factors is : %d \n",sum);
    return sum;
}
