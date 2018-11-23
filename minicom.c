#include<unistd.h>
#include"CCH+.h"

void numbox(int x,int y,int num,int len,char* desc){
CCH_setString(x,y,len,desc);
CCH_square(x,y+1,5,3,'#');
CCH_setNumber(x+1,y+2,num);
return;
}

int main(){
CCH_init(40,42);
int acc=0;
while(1){
CCH_reset();
CCH_setString(0,0,3,"ACC");
if(acc>=0&&acc<=255){
CCH_setNumber(1,2,acc);
}else{
CCH_setString(1,2,3,"ERR");
}
CCH_square(0,1,5,3,'#');
numbox(20,10,50,1,"!");
CCH_draw();
usleep(1000000);
acc++;
}
CCH_end();
}
