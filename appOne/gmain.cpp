#include"libOne.h"
void gmain(){
    window(1000, 1000);
    while (notQuit){
        float vx = mathMouseX;
        float vy = mathMouseY;
        float mag = sqrt(vx * vx + vy * vy);
        clear(200);
        mathAxis(5.1f);
        strokeWeight(10);
        stroke(0);
        mathArrow(0, 0, vx, vy);
        mathLine(0, 0, vx, 0);
        mathLine(vx, 0, vx, vy);
        textSize(50);
        //textInfo
        textSize(50);
        text((let)"vec(" + vx + "," + vy + ")", 0, 50);
        text((let)"mag:" + mag, 0, 100);

    }
}
