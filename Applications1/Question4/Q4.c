#include<stdio.h>
#include <stdlib.h>
#include<unistd.h>
#include<dlfcn.h>

int main()
{
    void *lib=NULL;
    printf("Library Loading... \n");
    int (*fptr)(int [],int);
    int arr[]={5,6,1,6,3,8,5,1,10};
    lib=dlopen("./Max.so",RTLD_LAZY);
    if(lib==NULL)
    {
        printf("couldnt find the SO file \n");
    }
   fptr=dlsym(lib,"Max");
   if (fptr==NULL)
   {
       printf("coudnt find function in the SO file \n");
   }
   printf("Max value of given array : %d \n",fptr(arr,(sizeof(arr)/sizeof(arr[0]))));
   dlclose(lib);
    lib=dlopen("./Min.so",RTLD_LAZY);
    if(lib==NULL)
    {
        printf("couldnt find the SO file \n");
    }
   fptr=dlsym(lib,"Min");
   if (fptr==NULL)
   {
       printf("coudnt find function in the SO file \n");
   }
   printf("Min value of given array : %d \n",fptr(arr,(sizeof(arr)/sizeof(arr[0]))));
   dlclose(lib);
   return 0;



}