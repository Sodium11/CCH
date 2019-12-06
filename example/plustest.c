#include"CGR+.h"

int main(){
CGR_init(51,30);

//arm
CGR_line(0,1,4,7,'&');

//face
CGR_square(10,2,5,5,'#');
CGR_square(20,2,5,5,'#');//eyes
CGR_line(9,9,12,12,'#');
CGR_line(12,12,20,12,'#');
CGR_line(20,12,23,9,'#');//mouth

//string
CGR_setString(0,0,9,"HelloCGR!");

CGR_setNumber(20,0,123);

//draw
CGR_draw();
CGR_end();
return 0;
}
