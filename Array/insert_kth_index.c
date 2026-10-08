#include <stdio.h>
int main() {
    int A[20] = {10, 20, 30, 40, 50};
    int N=5,ITEM, K;
    for(int i = 0; i < N; i++) {
        printf("%d ",A[i]);
    }
    printf("\nEnter item: ");
    scanf("%d",&ITEM);
    printf("Enter index: ");
    scanf("%d",&K);
    for(int i=N;i>K;i--) {
        A[i]=A[i-1];
    }
    A[K]=ITEM;
    N=N+1;
    for(int i=0;i<N;i++) {
        printf("%d ",A[i]);
    }
    return 0;
}
