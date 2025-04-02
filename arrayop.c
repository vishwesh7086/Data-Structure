#include <stdio.h>
void insertion(int arr[]);
void deletion(int arr[]);
void linearsearch(int arr[]);
void binarysearch(int arr[]);
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
     for(i=0;i<=5;i++){
     printf(" %d ",arr[i]);
 }
   printf(" \n Enter the location for insertion : ");
    scanf("%d",&loc);
    printf(" \n Enter the value you want to enter : ");
    scanf("%d",&val);
    for(i=5;i<loc;i--){
    arr[i+1]=arr[i];
    
    arr[i]=val;
     printf(" \n after insertion  ");
      for(i=0;i<=5;i++){
     printf(" %d ",arr[i]);
      }
    
 }
   for(i=0;i<=5;i++){
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