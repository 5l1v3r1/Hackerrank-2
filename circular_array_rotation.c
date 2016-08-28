#include<stdio.h>

int main(){
    int n,k,q,i,j;
    scanf("%d %d %d",&n,&k,&q);
    int a[n],m[q],temp[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<q;i++){
        scanf("%d",&m[i]);
    }
    if(n<k){
        i=n%k;
        //i=n-k;
    }
    else{
        i=k%n;
        i=i-1;
    }
    j=0;
    while(i<n && j<n){
        temp[j]=a[i];
        if(i==(n-1)){
            i=-1;
        }
        i++;
        j++;
    }
    for(i=0;i<q;i++){
        printf("%d\n",temp[m[i]]);
    }
    return 0;
}
