#include<bits/stdc++.h>
using namespace std;
struct Array
{
    /* data */
    int A[10];
    int size ;
    int length;
};
void Display(struct Array arr)
{
    int i;
    cout<<"\nElements are \n";
    for(i=0;i<arr.length;i++)
    cout<<arr.A[i];
}
void Append(struct Array *arr,int x)
{
    if(arr->length<arr->size)
    cout<<arr->A[arr->length++]=x;
}
void Insert(struct Array *arr,int index,int x)
{
    int i;
    if(index>=0 && index <=arr->length)
    {
        for(i=arr->length;i>index;i--)
          arr->A[i]=arr->A[i-1];
          arr->A[index]=x;
          arr->length++;
    }

}
int main()
{
    struct Array arr1={{2,3,4,5,6},10,5};
    cout<<Append(&arr1,10)<<endl;
    Insert(&arr1,0,12);
    Display(arr1);
    return 0;
}