#include <stdio.h>
//#incl
#include<dlfcn.h>
int prefn( int val)
{ void *lib=NULL;
 printf("Library Loading....\n");
  int (*fptr1)(int);
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
ret=fptr1(val);

if(val==ret)
    return 1;
 
 return 0;
}
