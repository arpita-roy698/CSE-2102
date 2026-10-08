#include <stdio.h>
int main()
{
    int A[20] = {15,25,35,45,55,65,75};
    int N =7,ITEM;
    for(int i=0;i<N;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\nEnter ITEM: ");
    scanf("%d",&ITEM);
    for(int i=N;i>0;i--){
        A[i]=A[i-1];
    }
    A[0]=ITEM;
    N=N+1;
    for(int i=0;i<N;i++)
    {
        printf("%d ",A[i]);
    }
}
