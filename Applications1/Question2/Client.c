#include<stdio.h>
#include <stdlib.h>
#include<unistd.h>
#include<dlfcn.h>

int main()
{
 void *lib=NULL;
 printf("Library Loading....\n");
 //LoadLibrary()
 int (*fptr1)(int);
 //int (*fptr2)(int,int);
 int val1=10,val2=13,ret=0;
 
 lib=dlopen("./Runner.so",RTLD_LAZY);
 
 if(lib==NULL)
 {
  printf("Unable to Link Library \n");  
  return -1;
 }
 fptr1=dlsym(lib,"fact");
 if(fptr1==NULL)
 {  
     printf("coudnt find function");
     return -1;
     
}
ret=fptr1(28);
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
