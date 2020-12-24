#include<stdio.h>
#include <stdlib.h>
#include<unistd.h>
#include<dlfcn.h>

int main()
{
 void *lib=NULL;
 printf("Library Loading....\n");
 //LoadLibrary()
 int (*fptr1)(int [],int,int);
 //int (*fptr2)(int,int);
 int arr[]={1,3,9,4,10,6};
 //void quickSort(int arr[], int low, int high) 
 
 lib=dlopen("./Library.so",RTLD_LAZY);
 
 if(lib==NULL)
 {
  printf("Unable to Link Library \n");  
  return -1;
 }
 fptr1=dlsym(lib,"quickSort");
 if(fptr1==NULL)
 {  
     printf("coudnt find function");
     return -1; 
}
fptr1(arr,0,5);


//int Search(int arr[],int start,int end,int a)

int (*fptr)(int [],int,int,int);
 fptr=dlsym(lib,"Search");
 if(fptr==NULL)
 {
     printf("coudnt find");
     return -1;
 }
 int index=0;  
 index=fptr(arr,0,6,9);
 
 printf("Index is : %d \n",index);
for(int i=0;i<6;i++)
{
 printf("%d ",arr[i]);
}

 /*printf("Loaded !\n");
 
 printf("addition is %d\n",ret);
//fptr=dlsym(lib,"add");
 fptr2=dlsym(lib,"sub"); 
 if(fptr2==NULL)
 {  
     printf("coudnt find function");
     return -1;
     
}     
 printf("Loaded !\n");
 
 ret=fptr2(val1,val2);
 
 printf("sub is %d \n",ret);
 
 
printf("\nUnlinked!");
while(1);*/
 dlclose(lib);
 return 0; 
}
