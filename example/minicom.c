#include<unistd.h>
#include"CGR+.h"

void numbox(int x,int y,int num,int len,char* desc){
CGR_setString(x,y,len,desc);
CGR_square(x,y+1,5,3,'#');
CGR_setNumber(x+1,y+2,num);
return;
}

int main(){
CGR_init(40,30);
int acc=0;
while(1){
CGR_reset();
CGR_setString(0,0,3,"ACC");
if(acc>=0&&acc<=255){
CGR_setNumber(1,2,acc);
}else{
CGR_setString(1,2,3,"ERR");
}
CGR_square(0,1,5,3,'#');
numbox(20,10,50,1,"!");
CGR_draw();
usleep(1000000);
acc++;
}
CGR_end();
}
