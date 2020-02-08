#ifndef CGR_PLUS_H
#define CGR_PLUS_H


#include<stdio.h>
#include<stdlib.h>
#define SCREEN_SPLITTER '='
#define LINE_FEED '\n'

int CGR_width;
int CGR_height;
char *CGRScreen;
int *CGRColormap;

void CGR_reset(){
int x,y;
for(y=0;y<CGR_height;y++){
        for(x=0;x<CGR_width;x++){
        CGRScreen[x+y*CGR_width]=' ';
        }
}
}

//new! start
enum color{
BLACK,
RED,
GREEN,
YELLOW,
BLUE,
MAGENTA,
CYAN,
WHITE,
DEFAULT_COLOR
};

void CGR_colorreset(){
int x,y;
for(y=0;y<CGR_height;y++){
        for(x=0;x<CGR_width;x++){
        CGRColormap[x+y*CGR_width]=DEFAULT_COLOR;
        }
}
}

void CGR_colormode(int colormode){
switch(colormode){
case BLACK:
printf("\x1b[30m");
break;

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

case WHITE:
printf("\x1b[37m");
break;

case DEFAULT_COLOR:
printf("\x1b[39m");
break;
}

}
//new! end

void CGR_init(int width,int height){
CGR_width=width;
CGR_height=height;
CGRScreen=(char *)malloc(CGR_width*CGR_height);
if(CGRScreen==NULL){
perror("CGRScreen definition error.");
exit(0);
}
CGR_reset();

//new! start
CGRColormap=(int *)malloc(CGR_width*CGR_height);
if(CGRColormap==NULL){
perror("CGRColormap difinition error.");
exit(0);
}
CGR_colorreset();
//new! end

}

char CGR_getChar(int x,int y){
if(x<0||y<0||x>=CGR_width||y>=CGR_height){
perror("invalid position");
return -1;
}
return CGRScreen[x+y*CGR_width];
}

int CGR_setChar(int x,int y,char character){
if(x<0||y<0||x>=CGR_width||y>=CGR_height){
perror("invalid position");
return -1;
}
CGRScreen[x+y*CGR_width]=character;
return 0;
}

//new! start
char CGR_getColor(int x,int y){
if(x<0||y<0||x>=CGR_width||y>=CGR_height){
perror("invalid position");
return -1;
}
return CGRColormap[x+y*CGR_width];
}

int CGR_setColor(int x,int y,int color){
if(x<0||y<0||x>=CGR_width||y>=CGR_height){
perror("invalid position");
return -1;
}
CGRColormap[x+y*CGR_width]=color;
return 0;
}
//new! end

void CGR_draw(){
//top border
int i;
CGR_colormode(DEFAULT_COLOR);//new! line
for(i=0;i<CGR_width;i++){
putchar(SCREEN_SPLITTER);
}
putchar(LINE_FEED);

//draw
int x,y;
for(y=0;y<CGR_height;y++){
	for(x=0;x<CGR_width;x++){
	CGR_colormode(CGRColormap[x+y*CGR_width]);//new! line
	putchar(CGRScreen[x+y*CGR_width]);
	}
putchar(LINE_FEED);
}

//bottom border
CGR_colormode(DEFAULT_COLOR);//new! line
for(i=0;i<CGR_width;i++){
putchar(SCREEN_SPLITTER);
}
putchar(LINE_FEED);
}

void CGR_end(){
free(CGRScreen);
return;
}

int CGR_getWidth(){
return CGR_width;
}

int CGR_getHeight(){
return CGR_height;
}



#endif
