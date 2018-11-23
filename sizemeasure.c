
#include<stdio.h>

int main(){
int width,height;
int in;
while(1){//width
printf("\n%s","if one line is filled with '#'  type 0 ");
scanf("%d",&in);
if(in<=0)break;
int i;
for(i=0;i<in;i++)
putchar('#');
width=in;
}
while(1){//height
printf("%s\n","if there is only one line which is filled with '#'  type 0 ");
scanf("%d",&in);
if(in<=0)break; 
int i;
for(i=0;i<width;i++)
putchar('#');
for(i=0;i<width;i++)
putchar('#');
for(i=0;i<in-3;i++)
printf("%s","#\n");
height=in;
}
printf("width:%d height:%d\n",width,height);
return 0;
}
