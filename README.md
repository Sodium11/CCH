# CGR
Character Graphic Renderer(in CUI)

CGR is a simple character controller in CUI.

instruction:
<dl>
<li>CGR_init(int width,int height);   //initialize screen (width x height)</li>
<li>CGR_setChar(int x,int y,char character);   //put "character" at (x,y)</li>
<li>CGR_reset();   //fill screen with blank character</li>
<li>CGR_draw();   //draw characters</li>
<li>CGR_getWidth();   //return the width of screen (int)</li>
<li>CGR_getHeight();   //return the height of screen (int)</li>
<li>CGR_end();   //clear settings</li>
</dl>
