#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A[] = {1,45,24,7};
    int i;
    int max = 0;
    int min;

    for (i = 0; i < 4; i++)
    {
        if (A[i] >max)
        {
            max=A[i];
        }
    }
    cout << "maximum number is"<<max<<endl;
    for(i=0;i<4;i++){
        if(A[i]<A[1]){
            min=A[i];
        }
    }
    cout<<"minimum number is" <<min;
}