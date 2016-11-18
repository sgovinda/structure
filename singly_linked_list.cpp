#include<iostream>

class LinkedList{
public:
   LinkedList():
      head(nullptr),
      tail(nullptr){}
   ~LinkedList(){
      Node *temp;
      while( head!=NULL ) {
         temp = head;
         head = head->next;
         delete temp;
      }
      tail = NULL;
   }
   /* copy constructor */
   LinkedList(const LinkedList& new_item):
      head(nullptr),
      tail(nullptr){
         Node *temp = new_item.head;
         Node *node;
         if(temp)
            head = node = new Node();
         while(temp != NULL){
            node->item = temp->item;
            if(temp->next) {
               node->next = new Node();
               node = node->next;
            } else {
               tail = node;
            }
            temp = temp->next;
         }
   }
   void InsertFront(int key);       /*Insert a node in head of the list*/
   void InsertBack(int key);        /*Insert a node in end of the list*/
   int TopBack();                  /*Get tail node - complexity-O(1) */
   int TopFront();                 /*Get head node - complexity-O(1) */
   void PopBack();                  /*Remove the first element in list.complexity-O(n)*/
   void PopFront();                 /*Remove the first element in list.complexity-O(1) */
   void DeleteNode(int key);        /*Delete first matching  node of a given key.complexity-O(n)*/
   void PrintList(std::ostream& out);
private:
   struct Node {
      int item;
      Node *next;
      Node():
         item(-1),
         next(nullptr) {}
      Node(int key):
         item(key),
         next(nullptr) {}
   };
   Node *head;
   Node *tail;
};

/*Insert a node in head of the list*/
void
LinkedList::InsertFront(int key) {
   Node *node = new Node(key);
   if(!node)
   {
      std::cout << "ERR: Failed to allocate new node \n";
      return;
   }
   if(head != NULL){
      node->next = head;
   } else {
      tail = node;
   }
   head = node;
}

/*Insert a node in end of the list*/
void
LinkedList::InsertBack(int key) {
   Node *node = new Node(key);
   if(!node)
   {
      std::cout << "ERR: Failed to allocate new node \n";
      return;
   }
   if(!head) {
      head = node;
   } else {
      tail->next = node;
   }
   tail = node;
}

/*Get tail node - complexity-O(1) */
int 
LinkedList::TopBack(){
   if(!tail) {
      std::cout << "ERR: List is empty\n";
      return -1;
   }
   return tail->item;
}

/*Get head node - complexity-O(1) */
int 
LinkedList::TopFront(){
   if(!head) {
      std::cout << "ERR: List is empty\n";
      return -1;
   }
   return head->item;
}

/* Remove the first element in list.  complexity-O(n) */
void 
LinkedList::PopBack(){
   if(!tail){
      std::cout << "ERR: List is empty to PopBack \n";
      return;
   }
   if(head == tail)
   {
      std::cout << "popback item is - " << head->item << "\n";
      delete head;
      head = tail = NULL;
      return;
   }
   Node *temp = head;
   while(temp->next!=tail) {
      temp = temp->next;
   }
   std::cout << "popback item is - " << tail->item << "\n";
   delete tail;
   tail = temp;
   tail->next = NULL;
   return;
}

/* Remove the first element in list.  complexity-O(1) */
void 
LinkedList::PopFront(){
   if(!head){
      std::cout << "ERR: List is empty to Popfront \n";
      return;
   }
   if(head == tail)
      tail = NULL;
   std::cout << "popfront  item is - " << head->item << "\n";
   Node *temp = head;
   head = head->next;
   delete temp;
   return;
}

/*Delete first matching  node of a given key*/
void 
LinkedList::DeleteNode(int key) {
   Node *node,*prev;
   node = head;
   while(node != NULL){
      if(node->item == key)
         break;
      prev = node;
      node = node->next;
   }
   if(node == NULL)
   {
      std::cout << "Item not found in list \n";
      return;
   }
   if(node == head){
      if(node == tail){
         std::cout << " Deleting Node with item " << node->item  << " - only node available in list \n";
         delete node;
         head = tail = NULL;
         return;
      }
      prev = head;
      head = head->next;
      std::cout << " Deleting Node with item " << prev->item  << " - head node of list\n";
      delete prev;
      return;
   }
   if(node == tail){
      prev->next = NULL;
      std::cout << " Deleting Node with item " << tail->item  << " - tail node of list\n";
      delete tail;
      tail = prev;
      return;
   }
   prev->next = node->next;
   std::cout << " Deleting Node with item " << node->item  << " -  middle  node of list\n";
   delete node;
   return;
}

/*Print whole list*/
void
LinkedList::PrintList(std::ostream& out) {
   Node *temp = head;
    while( temp != NULL ) {
      std::cout << temp->item << "\t";
      temp = temp->next;
   }  
   std::cout << "\n";
}

/* Test code */
void
testlist( LinkedList &new_list ){
   new_list.InsertFront(10);
   new_list.PrintList(std::cout);
   new_list.InsertFront(50);
   new_list.PrintList(std::cout);
   new_list.InsertFront(20);
   new_list.PrintList(std::cout);
   new_list.InsertBack(60);
   new_list.PrintList(std::cout);
   std::cout << "last node - " << new_list.TopBack() << "\n";
   std::cout << "First  node - " << new_list.TopFront() << "\n";
   new_list.PrintList(std::cout);
   new_list.PopBack();
   new_list.PrintList(std::cout);
   new_list.PopFront();
   new_list.PrintList(std::cout);
   new_list.PopFront();
   new_list.PrintList(std::cout);
   new_list.PopFront();
   new_list.PrintList(std::cout);
   new_list.InsertBack(60);
   new_list.PrintList(std::cout);
   new_list.InsertFront(10);
   new_list.PrintList(std::cout);
   new_list.DeleteNode(60);
   new_list.PrintList(std::cout);
   new_list.InsertBack(60);
   new_list.PrintList(std::cout);
   new_list.InsertFront(70);
   new_list.PrintList(std::cout);
   new_list.DeleteNode(10);
   new_list.PrintList(std::cout);
}

void
insert_random_nos(LinkedList &new_list){
   int i;
   for(i=133;i>11;i=i-7) {
      new_list.InsertFront(i%23);
   }
}


int main() {
   LinkedList new_list;
   new_list.InsertFront(70);
   testlist(new_list);
   insert_random_nos(new_list);
   LinkedList y(new_list);
   new_list.PrintList(std::cout);
   y.PrintList(std::cout);
}
