#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#define CLEAR_BIT(num,bit)  (num & (~(1 << bit)))
#define SET_BIT(num,bit)  (num | (1 << bit))
#define TOGGLE_BIT(num,bit)  (num ^ (1 << bit)) 

int
count_ones(uint32_t val){
   int i;
   int count = 0;
   int size = sizeof(val);
   size = size * 8;
   for(i=0;i <= (size-1);i++){
      if(val & (1 << i))
         count++;
   }
   return count;
}

int
main(){
   uint32_t val = 7;
   printf("number of one's = %d \n",count_ones(val));
   printf("clearing bit 1 in number %d =  %d \n",val,CLEAR_BIT(val,1)); 
   val = val ^ (1 << 1);
   printf("val = %d \n",val);
   val = val ^ (1 << 1);
   printf("Set bit 3 in number %d =  %d \n",val,SET_BIT(val,3)); 
}
