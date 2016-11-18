#include<iostream>
#include <cstring>
class ArrayQueue{
   public:
      ArrayQueue(int max_size){
         size = max_size; 
         arr = new int[size];
         head = tail = 0;
         memset(arr,0,sizeof(int)*size);
      }

      ~ArrayQueue(){
         delete [] arr;
      }

      ArrayQueue(const ArrayQueue& copied_item)
         :size(copied_item.size),
         arr(new int[copied_item.size]) {
         std::copy(copied_item.arr, copied_item.arr + copied_item.size, arr); 
      }

      void PrintArray(std::ostream& out);
      void Enqueue(int item);    /*Enqueue item.complexity - O(1)*/
      int Dequeue();             /*Dequeue item.complexity - O(1)*/
   private:
      int size;
      int *arr;
      int head;
      int tail;
};

/*print all items in array*/
void
ArrayQueue::PrintArray(std::ostream& out){
   int i;
   if(head == tail) {
      std::cout << " Empty queue\n";
      return;
   }

   for(i=head; ((i+1)%(size-1)) != tail;i=((i+1)%(size-1))){
      std::cout << arr[i]  << "\t";
   }
   std::cout << "\n";
   std::cout << "head - " << head << "tail - " << tail << "\n";
}

/* insert item at given index */
void
ArrayQueue::Enqueue(int item){
   if(((head+1)%(size-1)) == tail){
      std::cout << "Queue is Full. Cannot Enqueue - " << item <<  "\n";
      return;
   }
   arr[head] = item;
   head = ((head+1)%(size-1));
}

/* insert item at given index */
int
ArrayQueue::Dequeue(){
   if(head == tail){
      std::cout << "Queue is Empty Cannot Dequeue \n";
      return -1;
   }
   int temp = arr[tail];
   tail = ((tail+1)%(size-1));
   return temp;
}

void
test_ArrayQueue(ArrayQueue &var){
   int i;
   for(i=133;i>11;i=i-7) {
   }
   var.PrintArray(std::cout);
}


int main(){
   ArrayQueue var(6);
//   test_ArrayQueue(var);
   var.Enqueue(20);
   var.Enqueue(30);
   var.Enqueue(40);
   var.Enqueue(50);
   var.Enqueue(60);
   var.PrintArray(std::cout);
   std::cout << "Dequeued item - " << var.Dequeue()  <<  "\n";
   std::cout << "Dequeued item - " << var.Dequeue()  <<  "\n";
   std::cout << "Dequeued item - " << var.Dequeue()  <<  "\n";
   var.PrintArray(std::cout);
   std::cout << "Dequeued item - " << var.Dequeue()  <<  "\n";
   var.PrintArray(std::cout);
}

