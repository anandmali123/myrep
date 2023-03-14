#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *p, *q;
    int i;
    p = new int[5];
    p[0]=1;p[1]=2;p[2]=3;p[3]=4;p[4]=5;
    q=new int[10];
    for(i=0;i<5;i++){
        q[i]=p[i];
    }
    delete []p;
    q[5]=12;q[6]=13;q[7]=11;q[8]=15;q[9]=16;
    for(i=0;i<10;i++){
        cout<<q[i]<<" ";
    }

}
