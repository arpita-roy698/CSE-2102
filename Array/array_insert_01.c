#include <stdio.h>

int main(){

    int A[20] = {10,15,20,25,30,40,45,50};
    int N = 8, VALUE, ITEM;

    for(int i=0; i<N; i++){
        printf("%d ", A[i]);
    }

    printf("\nEnter VALUE and ITEM: ");
    scanf("%d %d", &VALUE, &ITEM);

    int LOC;

    for(int i=0; i<N; i++){
        if(A[i] == VALUE){
            LOC = i;
            break;
        }
    }

    printf("LOC = %d\n", LOC);

    // Shift elements
    for(int i=N-1; i>LOC; i--){
        A[i+1] = A[i];
    }

    // Insert ITEM after VALUE
    A[LOC+1] = ITEM;

    N = N + 1;

    for(int i=0; i<N; i++){
        printf("%d ", A[i]);
    }

    return 0;
}





