#include<bits/stdc++.h>
using namespace std;
struct Array
{
    /* data */
    int A[6];
    int size;
    int length;
};
void display(struct Array arr){
      int i=0;
      for ( i = 0; i <arr.length; i++)
      {
         cout<<arr.A[i]<<"\t"; 
      }
      
}
void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;

}
int LinearSearch(struct Array *arr,int key)
{   
    for(int i=0;i<arr->length;i++)
    {
        if(key ==arr->A[i]){
            swap(&arr->A[i],&arr->A[0]);
            return i;
        }
       
    }
     return -1;
}
int main(){
    struct Array arr1={{1,2,3,4,5},6,5};
    cout<<LinearSearch(&arr1,5)<<endl;
    display(arr1);
}
