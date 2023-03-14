#include<stdio.h>
#include<stdlib.h>

struct Array 
{
    int A[12];
    int size;
    int length;
};
void display(struct Array arr)
{
    int i;
    printf("elements are \n");
    for(i=0;i<arr.length;i++)
    {
        printf("%d \t",arr.A[i]);
    }
    

}
int delete(struct Array *arr,int index)
{
    int x=0;
   
    if(index>=0 && index<arr->length){
        x=arr->A[index];
    for(int i=index;i<arr->length;i++)
    {
        arr->A[i]=arr->A[i+1];
       
        
    }
     arr->length--; 
        return x;
}
    return 0;
    
}
int main()
{
   struct Array arr1={{1,2,3,4,5,6,7,8,9},10,9};
   printf("%d \t",delete(&arr1,0));
   display(arr1);
   return 0;
}