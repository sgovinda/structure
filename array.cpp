#include<iostream>
#include <cstring>
class array{
   public:
      array(int max_size){
         size = max_size; 
         arr = new int[size];
         count = 0;
         memset(arr,0,sizeof(int)*size);
      }

      ~array(){
         delete [] arr;
      }

      array(const array& new_item)
         :size(new_item.size),
         count(new_item.count),
         arr(new int[new_item.size]) {
         std::copy(new_item.arr, new_item.arr + new_item.size, arr); 
      }

      void PrintArray(std::ostream& out);
      void DeleteItem(int key);            /*Delete first matching  node of a given key.complexity - O(n)*/
      void DeleteAllItem(int item);        /*Delete all occurunces of an item in array. complexity - O(n)*/
      void InsertItem(int item,int pos);   /*Insert item in given index.complexity - O(n)*/
   private:
      int size;
      int *arr;
      int count;
};

/*print all items in array*/
void
array::PrintArray(std::ostream& out){
   int i;
   for(i=0;i<count;i++){
      std::cout << arr[i]  << "\t";
   }
   std::cout << "\n";
   std::cout << "count - " << count << "\n";
}

/* insert item at given index */
void
array::InsertItem(int item,int pos){
   int temp;
   if((pos < 0) || (pos > size-1) || (pos > count)){
      std::cout<< "position " << pos << " out of range \n";
      return;
   }
   if(count  == size ){
      std::cout << "Array is full.Item - "<< item << " cannot be inserted \n";
      return;
   }
   /* Insert at front when array is empty - pos is 0 and count is 0
    * OR
    * Insert next to last element.Note:array is not full
    */
   if(((pos == 0) && (count == 0)) || ((count) && (pos == count))) {
      arr[pos] = item;
      count++;
      return;
   }
   for(temp = count-1; temp >= pos; temp-- ) {
      arr[temp+1] = arr[temp];
   }
   arr[pos] = item;
   count++;
   return;
}


/* Deletes first occurence of an item */
void 
array::DeleteItem(int item) {
   int i = 0;
   while(i <= count-1)
   {
      if(arr[i] == item)  {
         while(i < count-1){
            arr[i] = arr[i+1];
            i++;
         }
         count--;
         break;
      }
      i++;
   }
}

/* Delete all occurunces of an item in array */
void 
array::DeleteAllItem(int item) {
   int iterate = 0,mark = 0,detected = 0;
   int temp = count -1;
   while( iterate <= temp) {
      if(arr[iterate] == item) {
         if(!detected){
            mark = iterate;  /* Mark the first location of item in array */
            detected = 1;
         }
         count--;
      } else {
         arr[mark] = arr[iterate]; /* Move rest of the array backwards to fill removed item */
         mark++;
      }
      iterate++;
   }
}

void test_array(array &var){
   int i;
   for(i=133;i>11;i=i-7) {
      var.InsertItem(i,0);
   }
   var.PrintArray(std::cout);

}

void test_delete_all(){
   array var(6);
   var.InsertItem(7,0);
   var.InsertItem(7,0);
   var.InsertItem(7,0);
   var.InsertItem(3,3);
   var.InsertItem(7,4);
   var.InsertItem(7,5);
   var.PrintArray(std::cout);
   var.DeleteAllItem(7);
   var.PrintArray(std::cout);
}

int main(){
   array var(10);
   var.InsertItem(3,0);
   test_array(var);
   var.PrintArray(std::cout);
   var.InsertItem(7,0);
   var.InsertItem(8,2);
   var.InsertItem(7,3);
   var.InsertItem(16,3);
   var.InsertItem(19,5);
   var.InsertItem(23,5);
   var.InsertItem(20,6);
   var.PrintArray(std::cout);
   var.DeleteItem(19);
   var.PrintArray(std::cout);
   //var.DeleteAllItem(7);
   //var.PrintArray();
   //test_delete_all();
}

