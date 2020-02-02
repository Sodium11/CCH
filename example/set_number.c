#include"../CGR+.h"
int main(){
CGR_init(10,10);
CGR_setNumber(0,0,12);
CGR_setNumber(0,1,4329);
CGR_setNumber(0,2,-123);
CGR_setNumber(0,3,24003590);
CGR_draw();
CGR_end();
return 0;
}
