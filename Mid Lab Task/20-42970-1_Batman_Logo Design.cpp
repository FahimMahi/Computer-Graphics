#include <bits/stdc++.h>
#include <GL/gl.h>
#include <GL/glut.h>
using namespace std;


void batmanLogo() {
    glClear(GL_COLOR_BUFFER_BIT);

    for (int x = 0; x < 20; x += 20) {
        for (int y = 20; y < 440; y += 20) {
            if (y == 20) glColor3f(0.0, 0.0, 0.0);
            else if (y == 40 or y == 380 or y == 400) glColor3f(1.0, 1.0, 0.0);
            else glColor3f(0.0, 0.0, 0.0);
            glBegin(GL_POLYGON);
            glVertex2i(x, y);
            glVertex2i(x + 20, y);
            glVertex2i(x + 20, y + 20);
            glVertex2i(x, y + 20);
            glEnd();
        }
    }

    int downBL = 8, downYL = 2, lineBL = 15, whiteUP = 6, upBL = 8;
    int UWH = 0, K = 20, M = 400, DBL = 0, UBL = 0, DWH = 0, flag = 0;
    for (int x = 20; x < 280; x += 20) {
        int DYL = 0, LBL = 0;
        for (int y = 20; y < 440; y += 20) {
            if (y == 20 and DBL < downBL) {
                glColor3f(0.0, 0.0, 0.0);
                glBegin(GL_POLYGON);
                glVertex2i(x, y);
                glVertex2i(x + 20, y);
                glVertex2i(x + 20, y + 20);
                glVertex2i(x, y + 20);
                glEnd();
                DBL++;
            }
            else if (y == 20 and UWH <= whiteUP) {
                UWH++;
                y += K;
                K += 20;
                glColor3f(0.0, 0.0, 0.0);
                glBegin(GL_POLYGON);
                glVertex2i(x, y);
                glVertex2i(x + 20, y);
                glVertex2i(x + 20, y + 20);
                glVertex2i(x, y + 20);
                glEnd();
            }
            else if (DYL < downYL){
                glColor3f(1.0, 1.0, 0.0);
                glBegin(GL_POLYGON);
                glVertex2i(x, y);
                glVertex2i(x + 20, y);
                glVertex2i(x + 20, y + 20);
                glVertex2i(x, y + 20);
                glEnd();
                DYL++;
            }
            else if (LBL < lineBL) {
                glColor3f(0.0, 0.0, 0.0);
                glBegin(GL_POLYGON);
                glVertex2i(x, y);
                glVertex2i(x + 20, y);
                glVertex2i(x + 20, y + 20);
                glVertex2i(x, y + 20);
                glEnd();
                LBL++;
                if (LBL == lineBL and flag) {
                    glBegin(GL_POLYGON);
                    glVertex2i(x - 20, y);
                    glVertex2i(x, y);
                    glVertex2i(x, y + 20);
                    glVertex2i(x - 20, y + 20);
                    glEnd();
                    flag = 0;
                }
            }
            else if (y == 420 and UBL < upBL) {
                glColor3f(0.0, 0.0, 0.0);
                glBegin(GL_POLYGON);
                glVertex2i(x, y);
                glVertex2i(x + 20, y);
                glVertex2i(x + 20, y + 20);
                glVertex2i(x, y + 20);
                glEnd();
                UBL++;
            }
            else {
                if (x >= 160 and y == M) {
                    glColor3f(0.0, 0.0, 0.0);
                    glBegin(GL_POLYGON);
                    glVertex2i(x, y);
                    glVertex2i(x + 20, y);
                    glVertex2i(x + 20, y + 20);
                    glVertex2i(x, y + 20);
                    glEnd();
                    M -= 20;
                    break;
                }
                glColor3f(1.0, 1.0, 0.0);
                glBegin(GL_POLYGON);
                glVertex2i(x, y);
                glVertex2i(x + 20, y);
                glVertex2i(x + 20, y + 20);
                glVertex2i(x, y + 20);
                glEnd();
            }
        }
        if (x == 20) downYL += 2, lineBL -= 1;
        else if (x == 40)  downYL += 1, lineBL -= 6;
        else if (x == 60)  downYL -= 1;
        else if (x == 80)  downYL -= 1, lineBL += 1;
        else if (x == 100) downYL -= 2, lineBL += 3;
        else if (x == 120) downYL += 1, lineBL = 14, flag = 1;
        else if (x >= 160)  lineBL -= 2;
    }

    downBL = 8, downYL = 2, lineBL = 15, whiteUP = 6, upBL = 8;
    UWH = 0, K = 20, M = 400, DBL = 0, UBL = 0, DWH = 0, flag = 0;
    for (int x = 0; x > -260; x -= 20) {
        int DYL = 0, LBL = 0;
        for (int y = 20; y < 440; y += 20) {
            if (y == 20 and DBL < downBL) {
                glColor3f(0.0, 0.0, 0.0);
                glBegin(GL_POLYGON);
                glVertex2i(x, y);
                glVertex2i(x - 20, y);
                glVertex2i(x - 20, y + 20);
                glVertex2i(x, y + 20);
                glEnd();
                DBL++;
            }
            else if (y == 20 and UWH < whiteUP) {
                UWH++;
                y += K;
                K += 20;
                glColor3f(0.0, 0.0, 0.0);
                glBegin(GL_POLYGON);
                glVertex2i(x, y);
                glVertex2i(x - 20, y);
                glVertex2i(x - 20, y + 20);
                glVertex2i(x, y + 20);
                glEnd();
            }
            else if (DYL < downYL){
                glColor3f(1.0, 1.0, 0.0);
                glBegin(GL_POLYGON);
                glVertex2i(x, y);
                glVertex2i(x - 20, y);
                glVertex2i(x - 20, y + 20);
                glVertex2i(x, y + 20);
                glEnd();
                DYL++;
            }
            else if (LBL < lineBL) {
                glColor3f(0.0, 0.0, 0.0);
                glBegin(GL_POLYGON);
                glVertex2i(x, y);
                glVertex2i(x - 20, y);
                glVertex2i(x - 20, y + 20);
                glVertex2i(x, y + 20);
                glEnd();
                LBL++;
                if (LBL == lineBL and flag) {
                    glBegin(GL_POLYGON);
                    glVertex2i(x + 20, y);
                    glVertex2i(x, y);
                    glVertex2i(x, y + 20);
                    glVertex2i(x + 20, y + 20);
                    glEnd();
                    flag = 0;
                }
            }
            else if (y == 420 and UBL < upBL) {
                glColor3f(0.0, 0.0, 0.0);
                glBegin(GL_POLYGON);
                glVertex2i(x, y);
                glVertex2i(x - 20, y);
                glVertex2i(x - 20, y + 20);
                glVertex2i(x, y + 20);
                glEnd();
                UBL++;
            }
            else {
                if (x <= -140 and y == M) {
                    glColor3f(0.0, 0.0, 0.0);
                    glBegin(GL_POLYGON);
                    glVertex2i(x, y);
                    glVertex2i(x - 20, y);
                    glVertex2i(x - 20, y + 20);
                    glVertex2i(x, y + 20);
                    glEnd();
                    M -= 20;
                    break;
                }
                glColor3f(1.0, 1.0, 0.0);
                glBegin(GL_POLYGON);
                glVertex2i(x, y);
                glVertex2i(x - 20, y);
                glVertex2i(x - 20, y + 20);
                glVertex2i(x, y + 20);
                glEnd();
            }
        }
        if (x == 0) downYL += 2, lineBL -= 1;
        else if (x == -20)  downYL += 1, lineBL -= 6;
        else if (x == -40)  downYL -= 1;
        else if (x == -60)  downYL -= 1, lineBL += 1;
        else if (x == -80)  downYL -= 2, lineBL += 3;
        else if (x == -100) downYL += 1, lineBL = 14, flag = 1;
        else if (x <= -140) lineBL -= 2;
    }

    int FLAG = 0;
    for (int x = 280; x < 320; x += 20) {
        if (FLAG == 1) FLAG = 20;
        for (int y = 140 + FLAG; y < 280; y += 20) {
            if (x == 280 and y != 140) glColor3f(1.0, 1.0, 0.0);
            else glColor3f(0.0, 0.0, 0.0);
            glBegin(GL_POLYGON);
            glVertex2i(x, y);
            glVertex2i(x + 20, y);
            glVertex2i(x + 20, y + 20);
            glVertex2i(x, y + 20);
            glEnd();
        }
        if (FLAG == 0) {
            glColor3f(0.0, 0.0, 0.0);
            glBegin(GL_POLYGON);
            glVertex2i(x, 280);
            glVertex2i(x + 20, 280);
            glVertex2i(x + 20, 300);
            glVertex2i(x, 300);
            glEnd();
        }
        FLAG++;
    }

    FLAG = 0;
    for (int x = -260; x > -300; x -= 20) {
        if (FLAG == 1) FLAG = 20;
        for (int y = 140 + FLAG; y < 280; y += 20) {
            if (x == -260 and y != 140) glColor3f(1.0, 1.0, 0.0);
            else glColor3f(0.0, 0.0, 0.0);
            glBegin(GL_POLYGON);
            glVertex2i(x, y);
            glVertex2i(x - 20, y);
            glVertex2i(x - 20, y + 20);
            glVertex2i(x, y + 20);
            glEnd();
        }
        if (FLAG == 0) {
            glColor3f(0.0, 0.0, 0.0);
            glBegin(GL_POLYGON);
            glVertex2i(x, 280);
            glVertex2i(x - 20, 280);
            glVertex2i(x - 20, 300);
            glVertex2i(x, 300);
            glEnd();
        }
        FLAG++;
    }

    glFlush ();
}

void myInit() {
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluOrtho2D(0.0, 600.0, 0.0, 600.0);
}

void myInit2() {
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluOrtho2D(-320.0, 340.0, 0, 460.0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(700,450);
    glutInitWindowPosition (730,250);
    glutCreateWindow ("20-42970-1_Batman_Logo Design");
    glutDisplayFunc(batmanLogo);
    myInit2();
    glutMainLoop();
    return 0;
}
