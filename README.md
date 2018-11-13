# CCH
Character Control Header (in CUI)

CCH is a simple character controller in CUI.

instruction:
CCH_init(int width,int height);//initialize screen (width x height)
CCH_setChar(int x,int y,char character);//put "character" at (x,y)
CCH_reset();//fill screen with blank character
CCH_draw();//draw characters
CCH_getWidth();//return the width of screen (int)
CCH_getHeight();//return the height of screen (int)
CCH_end();//clear settings
