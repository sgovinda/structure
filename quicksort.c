#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

int
partition(int *arr,int start,int end){
   int pivot,pindex,temp,i;
   pivot = arr[end];
   pindex = start;
   for(i = start;i < end;i++){
      if(arr[i] <= pivot){
         temp = arr[i];
         arr[i] = arr[pindex];
         arr[pindex] = temp;
         pindex++;
      }
   }
   temp = arr[end];
   arr[end] = arr[pindex];
   arr[pindex] = temp;
   return pindex;
}

void
quicksort(int *arr,int start,int end){
   if(start < end){
      int index = partition(arr,start,end);
      quicksort(arr,start,index-1);
      quicksort(arr,index+1,end);
   }
}


void
merge(int *arr,int left_begin,int right_begin,int right_end) {
   int left_end = right_begin - 1;
   int num_elem = right_end - left_begin + 1;
   int new_arr[num_elem];
   int i = 0;

   while((left_begin <= left_end) && (right_begin <= right_end)){
     if(arr[left_begin] <= arr[right_begin]) {
        new_arr[i] = arr[left_begin];
        i++;
        left_begin++;
     } else {
        new_arr[i] = arr[right_begin];
        i++;
        right_begin++;
     }
   }
   while(left_begin <= left_end) {
         new_arr[i] = arr[left_begin];
         i++;
         left_begin++;
   }
   while(right_begin <= right_end) {
        new_arr[i] = arr[right_begin];
        i++;
        right_begin++;
   }

   for(i = num_elem-1;i >= 0;i--) {
      arr[right_end] = new_arr[i];
      right_end--;
   }
}

void
mergesort(int *arr,int left,int right){
   if(left < right){
      int mid = (left+right)/2;
      mergesort(arr,left,mid);
      mergesort(arr,mid+1,right);
      merge(arr,left,mid+1,right);
   }
} 


void
print_array(int *arr){
   int i=0;
   for(i = 0;i < SIZE;i++){
      printf("%d \t",arr[i]);
   }
}

int
main(){
   int arr[SIZE] = {3,7,1,9,4,8,45,3,5};
   //quicksort(arr,0,8);
   mergesort(arr,0,8);
   print_array(arr);
}
