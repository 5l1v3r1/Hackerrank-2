#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct time{
int hour;
int minute;
int second;
char c[4];
};
int main(){
struct time when;
scanf("%d:%d:%d%s",&when.hour,&when.minute,&when.second,&when.c);
if(!strcmp(when.c,"PM") && when.hour != 12)when.hour+=12;
if(!strcmp(when.c,"AM") && when.hour == 12)when.hour = 0;
printf("%02d:%02d:%02d\n",when.hour,when.minute,when.second);
return 0;
}
