#include<stdio.h>
#include<stdlib.h>

int main(){
int n,i,pos=0,neg=0,zer=0;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
    if (a[i]>0){
        pos++;
    }
    else if(a[i]<0){
        neg++;
    }
    else{
        zer++;
    }
}
printf("%f\n%f\n%f",(float)pos/n,(float)neg/n,(float)zer/n);
return 0;
}
