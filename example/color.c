#include "../CGR+.h"
int main(){
CGR_init(10,10);
CGR_setColor(9,9,RED);
CGR_setChar(9,9,'!');
CGR_draw();
CGR_end();
return 0;
}
