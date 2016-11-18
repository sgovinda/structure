#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;
pthread_t thread[2];
int sum = 0;

void*
function(void *arg){
   int i;
   int offset = *((int *)arg);
   printf("offset = %d \n",*(int *)arg);
   for(i=0;i<1000000;i++){
      pthread_mutex_lock(&lock);
      sum = sum+offset;
      pthread_mutex_unlock(&lock);
   }
   printf("\n sum = %d \n",sum);
   pthread_exit(NULL);
}

void test(void* val){
   int offset = *((int *)val);
   printf("Inside test function.offset = %d \n",offset);
}

int main(){
   int ret;
   //int *offset = (int *)malloc(sizeof(int));
   int offset1;
   int offset2;

   offset1 = 1;
   test(&offset1);

   ret = pthread_create(&thread[0], NULL, &function,(void *)&offset1);
   if(ret!=0)
      printf("pthread create error \n");

   offset2 = -1;
   ret = pthread_create(&thread[1], NULL, &function,(void *)&offset2);
   if(ret!=0)
      printf("pthread create error \n");

   pthread_join(thread[0],NULL);
   pthread_join(thread[1],NULL);
   pthread_mutex_destroy(&lock);
   printf("Final sum = %d \n",sum);

   return 0;
}
