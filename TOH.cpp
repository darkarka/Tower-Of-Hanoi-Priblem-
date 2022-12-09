#include<stdio.h>
#include<stdlib.h>
#define sc(a) scanf("%d",&a)

void TOH(int n, int A, int B, int C){
    if(n>0){
        TOH(n-1,A,C,B);
        printf("\nMove a Disc from %d to %d",A,C);
        TOH(n-1, B,A,C);
    }
}

int main(){
    int n;
    sc(n);
    int A;
    int B;
    int C;
    sc(A);
    sc(B);
    sc(C);

    TOH(n, A , B, C);

    return 0;

}