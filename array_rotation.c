#include<stdio.h>
#include<stdlib.h>

int main(){

    int n,k,q,i,j,tmp;
    scanf("%d %d %d",&n,&k,&q);
    int a[n],m[q];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<q;i++){
        scanf("%d",&m[i]);
    }
    for(i=0,j=1;i<k;i++,j++){
        tmp=a[i];
        a[i]=a[n-j];

    }


    for(i=0;i<q;i++){
        printf("%d\n",a[m[i]])
    }

    return 0;
    }
