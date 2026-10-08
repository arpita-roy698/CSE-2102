#include<stdio.h>
int main()
{
    int A[10]={10,15,20,25,30,35,40,45};
    int N=8,VALUE,ITEM,LOC;
    for(int i=0;i<N;i++){
        printf("%d ", A[i]);
    }
    printf("\nEnter VALUE and ITEM: ");
    scanf("%d %d",&VALUE,&ITEM);
    for(int i=0;i<N;i++){
        if(A[i]==VALUE){
            LOC=i;
            break;
        }
    }
    printf("%d\n",LOC);
    for(int i=N-1;i>=LOC;i--){
        A[i+1]=A[i];
    }
    A[LOC]=ITEM;
    N=N+1;
    for(int i=0;i<N;i++){
         printf("%d ", A[i]);
    }
    return 0;
}

