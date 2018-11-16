#include<unistd.h>
#include"CCH.h"
int main(){
CCH_init(10,10);
int x=0;
while(x<10){
CCH_reset();
CCH_setChar(x,0,'a');
CCH_draw();
usleep(1000000);
x++;
}
CCH_end();
return 0;
}
