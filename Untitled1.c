#include<stdio.h>
int main()
{

    int N=8,i,j,temp;
    int arr[8]= {5,45,12,7,2,1,21,9};
    for(j=0; j<(N-1); j++)
    {
        for(i=0; i<(N-1); i++)
        {
            if(arr[i]>arr[i+1])
            {
                temp = arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            };
        };
    };
    for(i=0; i<N; i++)
    {
        printf("%d,",arr[i]);
    };
    return 0;
};
