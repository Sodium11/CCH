//Character Control Header  by Sodium11.for.gitserver@gmail.com
#ifndef CCH_H
#define CCH_H
#include<stdio.h>
#include<stdlib.h>
#define LINE_FEED '\n'

int CCH_width;
int CCH_height;
char *CCHScreen;

void CCH_reset(){
int x,y;
for(y=0;y<CCH_height;y++){
        for(x=0;x<CCH_width;x++){
        CCHScreen[x+y*CCH_width]=' ';
        }
}
}

void CCH_init(int width,int height){
CCH_width=width;
CCH_height=height;
CCHScreen=(char *)malloc(CCH_width*CCH_height);
if(CCHScreen==NULL){
perror("CCHScreen definition error.");
exit(0);
}
CCH_reset();
}

void CCH_setChar(int x,int y,char character){
if(x<0||y<0||x>=CCH_width||y>=CCH_height){
perror("invalid position");
exit(0);
}
CCHScreen[x+y*CCH_width]=character;
return;
}

void CCH_update(){
//top border
int i;
for(i=0;i<CCH_width;i++){
putchar('#');
}
putchar(LINE_FEED);

//draw
int x,y;
for(y=0;y<CCH_height;y++){
	for(x=0;x<CCH_width;x++){
	putchar(CCHScreen[x+y*CCH_width]);
	}
putchar(LINE_FEED);
}

//bottom border
for(i=0;i<CCH_width;i++){
putchar('#');
}
putchar(LINE_FEED);
}

void CCH_end(){
free(CCHScreen);
return;
}

int CCH_getWidth(){
return CCH_width;
}

int CCH_getHeight(){
return CCH_height;
}
#endif

