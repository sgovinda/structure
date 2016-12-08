#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#include<stdbool.h>
#include<stdint.h>


char*
my_strcpy(char*dest, const char*src){
   assert(dest!=NULL && src!=NULL);
   int i =0;
   while(src[i]!='\0')
   {
      dest[i] = src[i];
      i++;
   }
   dest[i] = '\0';
   return dest;
}

char*
my_strncpy(char*dest, const char*src, int n){
   assert(dest!=NULL && src!=NULL);
   int i =0;
   while(i<n && src[i] != '\0')
   {
      dest[i] = src[i];
      i++;
   }
   dest[i] = '\0';
   return dest;
}

int
my_strlen(const char*str){
   assert(str!=NULL);
   int i = 0;
   while(str[i] != 0){
      i++;
   }
   return i;
}

char*
my_strupr(char*str){
   assert(str!=NULL);
   int i = 0;
   while(str[i]!=0){
      str[i] = str[i] - 32;
      i++;
   }
   return str;
}

char*
my_strlwr(char*str){
   assert(str!=NULL);
   int i = 0;
   while(str[i]!=0){
      str[i] = str[i] + 32;
      i++;
   }
   return str;
}

char*
my_strcat(char* str1,const char* str2)
{
   assert(str1!=NULL && str2!=NULL);
   int len,i = 0;
   len = strlen(str1);
   while(str2[i] != '\0') {
      str1[len] = str2[i];
      i++;
      len++;
   }
   str1[len] = '\0';
   return str1;
}

char*
my_strncat(char* str1,const char* str2,int n)
{
   assert(str1!=NULL && str2!=NULL);
   int len,i = 0;
   len = strlen(str1);
   while(str2[i] != '\0' && i<n) {
      str1[len] = str2[i];
      i++;
      len++;
   }
   str1[len] = '\0';
   return str1;
}

char*
my_reverse(char* str){
   assert(str!=NULL);
   int len = strlen(str);
   int n = len-1;
   int i = 0;
   char temp;
   while(i<n){
      temp = str[i];
      str[i] = str[n];
      str[n] = temp;
      i++;
      n--;
   }
   return str;
}

char*
my_reverse1(char* str){
   assert(str!=NULL);
   if(*str == '\0')
      return str;
   char *end = str + strlen(str) -1;
   char *start = str;
   char temp;
   while(start < end){
      temp = *start;
      *start = *end;
      *end = temp;
      start++;
      end--;
   }
   return str;
}

/* Given two strings, write a method to decide 
 * if one is a permutation of the other
 */
bool
is_permutation(char *str1,char *str2){
   assert((str1 != NULL) && (str2!= NULL));
   char arr1[256];
   char arr2[256];
   memset(arr1,'\0',256);
   memset(arr2,'\0',256);
   uint8_t index;
   while((*str1 != '\0') && (*str2 != '\0')) {
      index = *str1 - 0;
      arr1[index]++;
      index = *str2 - 0;
      arr2[index]++;
      str1++;
      str2++;
   }
   if((*str1) || (*str2))
      return false;

   int i = 0;
   while(i < 256){
      if(arr1[i] != arr2[i])
         return false;
      i++;
   }
   return true;
}

int
main(){
   char *str1 = malloc(sizeof(char)*30);
   char str2[10] = "sundar";
   char str3[10] = "\0";
   char arr1[7];
   bool arr2[7];
   /* size of bool array is same as char array */
   printf("size of bool array %lu , size of char array %lu \n",sizeof(arr2),sizeof(arr1));
   printf("%s \n",my_strcpy(str1,str2));
   printf("%s \n",my_strncpy(str1,str2,15));
   printf("length %d \n",my_strlen(str1));
   printf("%s \n",my_strupr(str2));
   printf("%s \n",my_strlwr(str2));
   printf("%s \n",my_strcat(str1,str2));
   printf("%s \n",my_strncat(str1,str2,5));
   printf("reverse of %s  - %s \n",str2,my_reverse(str2));
   printf("reverse of %s  - %s \n",str2,my_reverse1(str3));
   char string1[15] = "ssss";
   char string2[15] = "ssso";
   is_permutation(string1,string2) ? printf("given two strings - %s  &  %s are permutation of each other \n",string1,string2) :
                                     printf("given two strings - %s  &  %s are not permutation of each other \n",string1,string2);
   free(str1);
   return 0;
}
