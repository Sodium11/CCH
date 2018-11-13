#include<stdio.h>
#include"CCH.h"
int main(){
CCH_init(50,10);
char dir=' ';

int x=0,y=0;
do{
CCH_reset();
CCH_setChar(x,y,'a');
CCH_update();
dir=getchar();
switch(dir){
case'u':
if(y>0)y--;
break;

case'd':
if(y<CCH_getHeight()-1)y++;
break;

case'l':
if(x>0)x--;
break;

case'r':
if(x<CCH_getWidth()-1)x++;
break;


}
}while(dir!='e');
CCH_end();
return 0;
}
