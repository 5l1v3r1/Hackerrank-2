#include<stdio.h>
#include<stdlib.h>

int main(){
int A[3],B[3];
int alice=0,bob=0,i=0,n=0;
scanf("%d%d%d%d%d%d",&A[i],&A[i+1],&A[i+2],&B[i],&B[i+1],&B[i+2]);
/*while(i<3){
    printf("%d -- %d\n",A[i],B[i]);
    i++;
}*/
while(i<3){
    if(A[i]>B[i]){
        alice++;
    }
    else if(A[i]<B[i]){
        bob++;
    }
    i++;
}
printf("%d %d",alice,bob);
return 0;
}
