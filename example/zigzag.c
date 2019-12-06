#include<stdio.h>
#include"CCH.h"


int main(){
const int width=100;
const int height=10;
CCH_init(width,height);
int x=0;
int y=0;
for(y=0;y<height;y++){
	for(x=0;x<width;x++){
	CCH_setChar(x,y,(x%2==0)?'/':'\\');
	}
}
CCH_draw();
CCH_end();
}
