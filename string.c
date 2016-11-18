#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>


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
   printf("size - %zd \n",strlen(dest));
   int i =0;
   while(src[i]!='\0' && i < n-1)
   {
      dest[i] = src[i];
      i++;
   }
   dest[i] = '\0';
   return dest;
}

int
main(){
   char str1[20] = "shyamsundar";
   char str2[20] = "sundar";
   printf("%s \n",my_strcpy(str1,str2));
   printf("%s \n",my_strncpy(str1,str2,4));
  // printf("%s \n",my_strcpy(str1,NULL));

}
