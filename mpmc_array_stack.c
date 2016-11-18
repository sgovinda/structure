#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#define MAX_SIZE 100000000 

int head = -1;
int prod_head = -1;
int cons_head = -1;
int arr[MAX_SIZE];
pthread_t thread[2];

int cas(int* dest, int oldvalue, int newvalue){  
    printf("(%d,%d,%d)",*dest,oldvalue,newvalue);  
    /* int cas(int dest, int oldvalue, int newvalue){ */  
    /* int cas(int dest, int newvalue, int oldvalue){ */  
    int result= 1;/* 1 shows that cas succeeded and 0 shows that it failed  */  
    /* btw need to set cc for flag clobbering !  */  
    __asm__ __volatile__(  
            "movl %2, %%eax\n\t"  
            "movl %3, %%ebx\n\t"  
            "movl %0, %%ecx\n\t"  
            "LOCK\n\t"  
            "CMPXCHG %%ebx, (%%ecx)\n\t"  /* should LOCK be on the same line  */  
            "jz DONE\n\t"  
            "movl $0, %1\n\t "  
            "DONE: \n\t"  
            :"=m"(dest),"=g"(result)  
            :"g" (oldvalue),"g" (newvalue),"m"(dest)  
            :"%eax","%ebx","ecx","cc"  
            );  
    printf("(%d,%d,%d)",*dest,oldvalue,newvalue);  
    return result;   
}

void* 
push(void *arg){
   int item = 0;
   while(item<MAX_SIZE) {
      int temp_head = cons_head;
      if(head+1 == MAX_SIZE){
         printf("stack full \n");
         continue;
      }
      prod_head++;
      cas(&cons_head, temp_head, prod_head)
      arr[prod_head] = item;
      item++;
   }
   pthread_exit(NULL);
}

void* 
pop(void *arg){
   int item = 0;
   while(item<MAX_SIZE) {
      if(head == -1){
         printf("stack is empty \n");
         break;
      }
      head--;
      item++;
   }
   pthread_exit(NULL);
}

void print_stack(){
   int i = 0;
   for(i = 0;i <= head;i++){
      printf("%d \t",arr[i]);
   }
   printf("\n");
}


int 
main()
{

   pthread_create(&thread[0],NULL,&push,NULL);
   pthread_create(&thread[1],NULL,&pop,NULL);
   pthread_join(thread[0],NULL);
   pthread_join(thread[1],NULL);
   printf("head - %d \n",head);
   //print_stack();
}
