#include<bits/stdc++.h>
using namespace std;
struct Array{
    int A[9];
    int size ;
    int length;
};
void display(struct Array *arr){
    for(int i=0;i<arr->length;i++){
        cout<<" "<<arr->A[i];
    }
}
int issorted(struct Array *arr){
    for(int i=0;i<arr->length-1;i++){
        if(arr->A[i]>arr->A[i+1])
             return 0;
                 }
                 return 1;
}
int main(){
    struct Array array1={{1,2,3,4,6,5,7,8,9},9,9};
    cout<<issorted(&array1)<<endl;
    display(&array1);
    return 0;
}