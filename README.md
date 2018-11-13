# CCH
Character Control Header (in CUI)

CCH is a simple character controller in CUI.

instruction:
<dl>
CCH_init(int width,int height);//initialize screen (width x height)<br>
CCH_setChar(int x,int y,char character);//put "character" at (x,y)<br>
CCH_reset();//fill screen with blank character<br>
CCH_draw();//draw characters<br>
CCH_getWidth();//return the width of screen (int)<br>
CCH_getHeight();//return the height of screen (int)<br>
<li>CCH_end();//clear settings</li>
</dl>
