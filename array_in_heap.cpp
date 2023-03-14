#include<bits/stdc++.h>
using namespace std;
int main(){
    int A[4]={2,4,6,8};
    int *p;
    int i;
    p=new int[6];
    cin>>p[0];
    cin>>p[1];
    cin>>p[2];
    cin>>p[3];
    cin>>p[4];
    cin>>p[5];
    for(i=0;i<4;i++){
        cout<<A[i]<<" ";
        

    }
    cout<<endl;
    for(i=0;i<6;i++){
        cout<<p[i]<<" ";
    }
}