#include<unistd.h>
#include"CGR.h"
int main(){
CGR_init(10,10);
while(1)
for(int x=0;x<10;x++){
CGR_reset();
CGR_setChar(x,0,'a');
CGR_draw();
usleep(500000);
}
CGR_end();
return 0;
}
