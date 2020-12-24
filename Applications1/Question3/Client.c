#include<stdio.h>
#include <stdlib.h>
#include<unistd.h>
#include<dlfcn.h>

int main()
{
 void *lib=NULL;
 printf("Library Loading....\n");
  int (*fptr1)(int);
 int val1=10,val2=13,ret=0;
 
 lib=dlopen("./Perfectn.so",RTLD_LAZY);
 
 if(lib==NULL)
 {
  printf("Unable to Link Library \n");  
  return -1;
 }
 fptr1=dlsym(lib,"prefn");
 if(fptr1==NULL)
 {  
     printf("coudnt find function");
     return -1;
     
}
ret=fptr1(21);
 if(ret)
     printf("its a perfect number");
 else
     printf("not a perfect number");
 dlclose(lib);
 return 0; 
}
