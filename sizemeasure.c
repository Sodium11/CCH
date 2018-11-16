#include<stdio.h>

int main(){
int in;
while(1){
printf("%s","exit:-1 ");
scanf("%d",&in);
if(in==-1)break;
int i;
for(i=0;i<in;i++)
putchar('#');
}
return 0;
}
