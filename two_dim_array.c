#include<stdio.h>
#include<stdlib.h>
#define ROW 5
#define COLOUMN 5

/* Write an algorithm such that if an element in an MxN matrix is 0, its entire row
 * and column are set to 0.
 */
void
modify_rowcoloumn_array(int arr[][COLOUMN]){
   int i = 0,j = 0,k = 0;
   for(i = 0;i < ROW;i++)
   {
      for(j=0;j<COLOUMN;j++){
         if( arr[i][j] == 0){
            for(k=0;k<ROW;k++){
               arr[k][j] = 0;
            }
            for(k=0;k<COLOUMN;k++){
               arr[i][k] = 0;
            }
            return;
         }
      }
   }
}

/*Given an image represented by an NxN matrix, where each pixel in the image is
 * 4 bytes, write a method to rotate the image by 90 degrees. Can you do this in
 * place?
 */
void
rotate_array(int arr[][COLOUMN]){
   if(ROW != COLOUMN) {
      printf("It is not a square matrix  \n");
      return;
   }
   int i = 0,j = 0,temp;
   for(i = 0;i <= (ROW-1)/2;i++)
   {
      for(j=0;j <= COLOUMN-1;j++){
         temp = arr[ROW-1-i][COLOUMN-1-j];
         arr[ROW-1-i][COLOUMN-1-j] = arr[i][j];
         arr[i][j] = temp;
      }
   }
}

void
fill_array(int arr[][COLOUMN],int row,int coloumn){
   int i = 0,j = 0,num = 1;
   for(i = 0;i < row;i++)
   {
      for(j=0;j<coloumn;j++){
         arr[i][j] = num;
         num++;
      }
   }
}


void
print_array(int arr[][COLOUMN],int row,int coloumn){
   int i = 0,j = 0;
   for(i = 0;i < row;i++)
   {
      for(j=0;j<coloumn;j++){
         printf("%d \t",arr[i][j]);
      }
      printf("\n");
   }
}

int 
main(){
   int arr[ROW][COLOUMN];
   int arr1[ROW][COLOUMN];
   fill_array(arr,ROW,COLOUMN);
   print_array(arr,ROW,COLOUMN);
   rotate_array(arr);
   printf("\n\n");
   print_array(arr,ROW,COLOUMN);
   printf("\n\n");
   fill_array(arr1,ROW,COLOUMN);
   print_array(arr1,ROW,COLOUMN);
   printf("\n\n");
   arr1[2][1] = 0;
   modify_rowcoloumn_array(arr1);
   print_array(arr1,ROW,COLOUMN);
   return 0;
}
