#ifndef CCH_H
#include"CCH.h"
#endif

#ifndef CCH_PLUS_H
#define CCH_PLUS_H

int abs(int n){
	return (n<0)?-n:n;
}

void CCH_line(int x1,int y1,int x2,int y2,char ch){
if(x1>x2){//swap
int z=x1;
x1=x2;
x2=z;
z=y1;
y1=y2;
y2=z;
}
int x=x1;
int y=y1;
int i;
CCH_setChar(x1,y1,ch);
CCH_setChar(x2,y2,ch);
for(i=0;i<x2-x1-1;i++){
x++;
y=((x-x1)*y2+(x2-x)*y1)/(x2-x1);
//printf("line(%d,%d)",x,y);
CCH_setChar(x,y,ch);
}
return;
}

void CCH_square(int x,int y,int width,int height,char ch){
if(x<0||y<0){
perror("invalid x,y");
exit(0);
}
int i;
for(i=0;i<width;i++)
	CCH_setChar(x+i,y,ch);
for(i=0;i<height;i++){
	CCH_setChar(x,y+i,ch);
	CCH_setChar(x+width-1,y+i,ch);
}
for(i=0;i<width;i++)
        CCH_setChar(x+i,y+height-1,ch);

return;
}

void CCH_setString(int x,int y,int len,char *str){
int i;
for(i=0;i<len;i++)
	CCH_setChar(x+i,y,str[i]);
return;
}

enum color{
RED,
GREEN,
YELLOW,
BLUE,
MAGENTA,
CYAN,
RESET
};

void CCH_color(int colormode){
switch(colormode){
case RED:
printf("\x1b[31m");
break;

case GREEN:
printf("\x1b[32m");
break;

case YELLOW:
printf("\x1b[33m");
break;

case BLUE:
printf("\x1b[34m");
break;

case MAGENTA:
printf("\x1b[35m");
break;

case CYAN:
printf("\x1b[36m");
break;

case RESET:
printf("\x1b[0m");
break;
}

}

#endif
