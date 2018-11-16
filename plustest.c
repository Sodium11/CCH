#include"CCH+.h"

int main(){
CCH_init(51,30);

//arm
CCH_line(0,1,4,7,'&');

//face
CCH_square(10,2,5,5,'#');
CCH_square(20,2,5,5,'#');//eyes
CCH_line(9,9,12,12,'#');
CCH_line(12,12,20,12,'#');
CCH_line(20,12,23,9,'#');//mouth

//string
CCH_setString(0,0,9,"HelloCCH!");

//draw
CCH_draw();
CCH_end();
return 0;
}
