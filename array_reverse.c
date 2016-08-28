#include<stdio.h>
#include<stdlib.h>

int main(){
int n,i,j,temp;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
j=n-1;
i=0;
while(i<j){
    temp = arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    i++;
    j--;
}
for(i=0;i<n;i++){
    printf("%d ",arr[i]);
}
return 0;
}
