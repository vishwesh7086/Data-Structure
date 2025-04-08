#include <stdio.h>
void insertion(int arr[],int *size);
void deletion(int arr[],int *size);
void linearsearch(int arr[],int *size);
void binarysearch(int arr[],int *size);
int main() {
 int arr[6],choice;
 for(int i=0;i<=5;i++){
     printf("enter the numbers in the array : ");
     scanf("%d",&arr[i]);
 }
  for(int i=0;i<=5;i++){
     printf(" %d ",arr[i]);
 }
 printf("\nMENU:\n1.\t Insertion\n2.\t Deletion\n3.\t Linear search\n4.\t Binary search");
 printf("\nEnter Choice : ");
 scanf("%d",&choice);
 switch(choice)
 {
     case 1:
     insertion(arr);
     break;
     case 2:
     deletion(arr);
     break;
     case 3:
     linearsearch(arr);
     break;
     case 4:
     binarysearch(arr);
     break;
     default:
     printf("wrong choice");
     
 }
    return 0;
}

void insertion(int arr[])
{
    int i,loc,val;
    printf(" \n before insertion  ");
     for(int i=0;i<=5;i++){
     printf(" %d ",arr[i]);
 }
   printf(" \n Enter the location for insertion : ");
    scanf("%d",&loc);
    printf(" \n Enter the value you want to enter : ");
    scanf("%d",&val);
    for(int i=5;i<loc;i--){
    arr[i+1]=arr[i];
    
    arr[i]=val;
     printf(" \n after insertion  ");
      for(int i=0;i<=5;i++){
     printf(" %d ",arr[i]);
      }
    
 }
   for(int i=0;i<=5;i++){
     printf(" %d ",arr[i]);
      }
}
void deletion(int arr[])
{
for(int i=0;i<=5;i++){
     printf(" %d ",arr[i]);
 }
}
void linearsearch(int arr[])
{
for(int i=0;i<=5;i++){
     printf(" %d ",arr[i]);
 }
}
void binarysearch(int arr[])
{
for(int i=0;i<=5;i++){
     printf(" %d ",arr[i]);
 }
} 