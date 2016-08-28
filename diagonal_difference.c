#include<stdlib.h>
#include<stdio.h>

int main(){

int n,r,c,d1,d2;
scanf("%d",&n);

int a[n][n];
for(r=0;r<n;r++){
    for(c=0;c<n;c++){
        scanf("%d",&a[r][c]);
    }
}
for(r=0,d1=0,d2=0;r<n;r++){
    d1=d1+a[r][r];
    d2=d2+a[r][n-1-r];
}
if(d1>d2){
    printf("%d",d1-d2);
}
else{
    printf("%d",d2-d1);
}
return 0;
}
