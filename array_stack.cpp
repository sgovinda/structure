#include<iostream>
#include <cstring>
class array{
   public:
      array(int max_size){
         size = max_size; 
         arr = new int[size];
         head = -1;
         memset(arr,0,sizeof(int)*size);
      }
      ~array(){
         delete [] arr;
      }
      void PrintArray();
      void PushItem(int item);    /*Get tail node - complexity-O(1) */
      int PopItem();              /*Get head node - complexity-O(1) */
      void FindItem(int key);     /*Find node O(n)*/
   private:
      int size;
      int *arr;
      int head;
};

/*print all items in array*/
void
array::PrintArray(){
   int i;
   for(i=0;i<size;i++){
      std::cout << arr[i]  << "\t";
   }
   std::cout << "\n";
   std::cout << "head position - " << head << "\n";
}

/* Push item in the end */
void 
array::PushItem(int item){
   if(head == size - 1){
      std::cout << "Array is full.Item " << item << " cannot be added \n";
      return;
   }
   head++;
   arr[head] = item;
   return;
}

/* Pop item from the end */
int 
array::PopItem(){
   int temp;
   if(head != - 1){
      temp = arr[head];
      arr[head] = 0;
      head--;
      return temp;
   } 
   std::cout << "Array is empty.item cannot be popped \n";
   return -1;
}

void test_array(array &var){
   int i;
   for(i=133;i>11;i=i-7) {
      var.PushItem(i%23);
   }

}

int main(){
   array var(10);
   //var.PushItem(10);
//   var.PushItem(30);
   var.PrintArray();
   std::cout << "popped item - " << var.PopItem() << "\n";
   test_array(var);
   var.PrintArray();
   std::cout << "popped item - " << var.PopItem() << "\n";
   std::cout << "popped item - " << var.PopItem() << "\n";
   std::cout << "popped item - " << var.PopItem() << "\n";
   std::cout << "popped item - " << var.PopItem() << "\n";
   std::cout << "popped item - " << var.PopItem() << "\n";
   std::cout << "popped item - " << var.PopItem() << "\n";
   std::cout << "popped item - " << var.PopItem() << "\n";
   std::cout << "popped item - " << var.PopItem() << "\n";
   std::cout << "popped item - " << var.PopItem() << "\n";
   std::cout << "popped item - " << var.PopItem() << "\n";
   std::cout << "popped item - " << var.PopItem() << "\n";
   std::cout << "popped item - " << var.PopItem() << "\n";
   std::cout << "popped item - " << var.PopItem() << "\n";
   var.PrintArray();
}

