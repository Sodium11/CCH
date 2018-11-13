# CCH
Character Control Header (in CUI)

CCH is a simple character controller in CUI.

instruction:
<dl>
<li>CCH_init(int width,int height);//initialize screen (width x height)</li><br>
<li>CCH_setChar(int x,int y,char character);//put "character" at (x,y)</li><br>
<li>CCH_reset();//fill screen with blank character</li><br>
<li>CCH_draw();//draw characters</li><br>
<li>CCH_getWidth();//return the width of screen (int)</li><br>
<li>CCH_getHeight();//return the height of screen (int)</li><br>
<li>CCH_end();//clear settings</li>
</dl>
