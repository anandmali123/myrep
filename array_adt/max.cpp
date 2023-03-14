#include<bits/stdc++.h>
using namespace std;
struct Array{
    int A[12];
    int length;
    int size;
};
int max(struct Array *arr){
    int max=arr->A[0];
    int i;
    for( i=0;i<arr->length;i++){
        if(arr->A[i]>max)
           max=arr->A[i];
           
    }
    return arr->A[i];
    
}


int main(){
    struct Array Arr[]={1,2,78,45,95,56,322,1000};
    cout<<max(&Arr[8]);
    
    
     
    
    
}