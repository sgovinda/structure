#include<iostream>
class BinarySearchTree{
public:
   BinarySearchTree():root(nullptr){}

   ~BinarySearchTree(){}

   struct Node{
      int item;
      struct Node *left;
      struct Node *right;
      struct Node* CreateNewNode(int item) {
         struct Node *temp = new NODE();
         temp->item = item;
         temp->left = NULL;
         temp->right = NULL;
      }
   };

private:
   void* InOrder(struct Node*);
   void* PreOrder(struct Node*);
   void* PostOrder(struct Node*);
   void FindItem(int item);
   struct Node* root;
};

/* Inorder traversal - left_child---parent---right_child */
void*
BinarySearchTree::InOrder(struct Node* node){
   if(node == NULL){
      return NULL;
   }
   InOrder(node->left);
   std::cout << node->item << "\t";
   InOrder(node->right);
}

/* Preorder traversal parent---left_child---right_child */
void*
BinarySearchTree::PreOrder(struct Node* node){
   if(node == NULL){
      return NULL;
   }
   std::cout << node->item << "\t";
   PreOrder(node->left);
   PreOrder(node->right);
}

/* Postorder traversal left_child---right_child---parent */
void*
BinarySearchTree::PostOrder(struct Node* node){
   if(node == NULL){
      return NULL;
   }
   PostOrder(node->left);
   PostOrder(node->right);
   std::cout << node->item << "\t";
}

void
BinarySearchTree::FindItem(int item){

}

/* Insert item in tree */
void
BinarySearchTree::InsertItem(struct Node* root,int item){
   if(root == NULL){
      return CreateNewNode(item);
   }
   if(item < root->left->item)   root->left = InsertItem(root->left);
   else if(item > root->right->item)   root->right = InsertItem(root->right);
}

int
main(){
   BinarySearchTree var;
}
