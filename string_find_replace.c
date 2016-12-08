#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/* write a method to replace all spaces in a given string by %20 */

void
find_replace_char(char *arr,char*rep_str){
   int len1 = strlen(arr);
   int len2 = strlen(rep_str); // length of replacing string 
   int i = 0,count = 0,j = 0;
   /* count the number of characters that needs to be replaced */
   while(i<len1){
      if(arr[i] == ' ')
         count++;
      i++;
   }

   /* calculating last index of new length */
   i = len1 + (count * (len2-1)) -1;
   arr[i+1] = '\0';

   /* converting length of given string to index */
   len1 = len1 -1;

   /*Rearrange the array*/
   while(i>=0){
      if(arr[len1] == ' ') { //replace character with new character
         j = len2-1;
         while(j>=0){
            arr[i] = rep_str[j];
            j--;
            i--;
         }
      } else {
         arr[i] = arr[len1];
         i--;
      }
      len1--;
   }
   printf("\nreplaced string %s \n",arr);
   return;
}


int
main(){
   char arr[50] = "sh y a m su n d ar ";
   //char arr[50] = " ";
   char rep_str[50] = "%20";
   //printf("Enter a string - ");
   //scanf("%s",arr);
   //fgets(arr,50,stdin);
   printf("\n%s \n",arr);
   //printf("Enter replacing string - ");
   //fgets(rep_str,50,stdin);
   printf("\n%s \n",rep_str);
   find_replace_char(arr,rep_str);
   printf("\nreplaced string %s \n",arr);

   return 0;


}
