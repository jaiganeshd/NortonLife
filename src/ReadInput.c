#include <stdio.h>
#include <string.h>
#include<stdlib.h>

#define DATA_SIZE 1000
int main() 
{
   FILE *fp;
   char path[100]="generated/";
   char fileName[20];

   printf("Enter the file name \n");
   scanf("%s",fileName);
 
   fp = fopen(strcat(path,fileName), "w+");

   if(fp==NULL)
   {
        printf("Error creating file!!!");
        return 0;
   }
   
   char ch = getchar();
    printf("File created successfully: \n");
    
    char fileData[DATA_SIZE];
    printf("Enter the file data : \n");
    fgets(fileData, DATA_SIZE, stdin);
    fputs(fileData, fp);

   fclose(fp);
}