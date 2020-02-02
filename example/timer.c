#include<unistd.h>
#include"../CGR+.h"
int main(){
CGR_init(10,10);
while(1)
for(int x=100;x<120;x++){
CGR_reset();
CGR_setNumber(0,0,x);
CGR_setChar(0,1,'s');
CGR_draw();
usleep(1000000);
}
CGR_end();
return 0;
}
