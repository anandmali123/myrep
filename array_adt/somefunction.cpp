#include<bits/stdc++.h>
using namespace std;
struct Array{
    int A[12];
    int length;
    int size;
};
void display(struct Array *arr){
    cout<<"elements are \n";
    for(int i=0;i<arr->length;i++){
        cout<<arr->A[i]<<"\t";
    }
   
}

void set1(struct Array *arr,int index,int x){
   if(index>=0 && index <arr->length ){
       arr->A[index]=x;
   }
   
}
int max(struct Array *arr){
    int max=arr->A[0];
    for(int i=1;i<arr->length;i++){
        if(arr->A[i]>max){
            max=arr->A[i];
            
        }
       
    }
    return max;
   
}
int min(struct Array *arr){
    int min=arr->A[0];
    for(int i=1;i<arr->length;i++){
        if(arr->A[i]<min){
            min=arr->A[i];
           
        }
       
    }
    return min;
}
int sum(struct Array *arr){
    int sum1=0;
    for(int i=0;i<arr->length;i++){
        sum1+=arr->A[i];
    }
    return sum1;
}
int get(struct Array *arr,int index){
    if(index>=0 && index<arr->length){
        return arr->A[index];
    }
    return 0;
}
float avg(struct Array *arr){
   return (float)sum(arr)/arr->length;
}
int main(){
    struct Array Array1={{12,15,7,4,8,25,16},7,7};
    set1(&Array1,6,1);
   cout<<min(&Array1)<<endl;
   cout<<max(&Array1)<<endl;
   cout<<sum(&Array1)<<endl;
   cout<<get(&Array1,6)<<endl;
   cout<<avg(&Array1)<<endl;
   display(&Array1);

}