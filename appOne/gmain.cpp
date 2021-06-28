#include"libOne.h"
void gmain() {
    window(1000, 1000);
    angleMode(DEGREES);
    float x, y, angle;
    while (notQuit) {
        clear(0, 50, 0);
        mathAxis(5.1f, 255);

        x = mathMouseX;
        y = mathMouseY;
        angle = atan2(y, x);

        strokeWeight(10);
        stroke(128);
        mathArrow(0, 0, x, y);
        stroke(255, 255, 200);
        if (angle > 0) {
            mathArc(0, angle, 0.5f);
        }
        else {
            mathArc(0, 180, 0.5f);
            mathArc(180, 180 + angle, 0.5f);
        }

        textSize(50);
        fill(160);
        text((let)"x=" + x, 0, 50);
        text((let)"y=" + y, 0, 100);
        fill(255, 255, 200);
        text((let)"atan2(y,x)=" + angle, 0, 150);
        
        float r = sqrt(x * x + y * y);
        fill(255, 200, 200);
        text((let)"asin(y/r)=" + asin(y / r), 0, 200);
        text((let)"acos(x/r)=" + acos(x / r), 0, 250);
        text((let)"atan(y/x)=" + atan(y / x), 0, 300);
        text((let)"angle=" + angle, 0, 350);

        fill(224, 225, 204);
        if (angle > 0) {
            text((let)"É∆=" + angle, 0, 1000);
        }
        else if (angle == -180) {
            text((let)"É∆=" + 180, 0, 1000);
        }
        else {
            text((let)"É∆=" + (360 + angle), 0, 1000);
        }
    }
}