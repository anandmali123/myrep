#include<bits/stdc++.h>
using namespace std;
struct Array {
    int A[9];
    int size;
    int length;
};
void display(struct Array *arr){
    for(int i=0;i<arr->length;i++){
       cout<<arr->A[i];
    }

}
void reverse(struct Array *arr){
    int *B;
    int i,j;
    B=new int[9];
    for(i=0,j=arr->length-1;j>=0;i++,j--){
        B[i]=arr->A[j];
    }
    for(i=0;i<arr->length;i++){
        arr->A[i]=B[i];
    }
    


}
void swap(int *x,int *y){
    int temp;
    temp=*x;
    *y=*x;
    *x=temp;

}
void reverse2(struct Array *arr){
    int i,j;
    for(i=0,j=arr->length-1;i<j;i++,j--){
        swap(&arr->A[i],&arr->A[j]);
        
    }
}
int main(){
    struct Array array1={{1,2,3,4,5,6,7,8,9},9,9};
    reverse2(&array1);
    display(&array1);
}