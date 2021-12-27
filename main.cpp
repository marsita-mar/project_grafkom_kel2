//Marsita Harim (E1E120014)
#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>
#include <GL/glut.h>
#include<math.h>
#include<time.h>
#include<windows.h>
#define PI 3.14
float angleMoon=0.0, angleEarth=0.0,angleAstroid=0.0,
                  angleMars=0.0,
                   angleMercury=0.0,
                   angleVenus=0.0,
                   angleJupiter=0.0,
                   angleSaturn=0.0,
                   angleUranus=30.0,
                   angleNeptune=60.0;
GLfloat sx=0.2,sy=0.2,sz=0.2;
int planet1;
GLfloat black[]={0.0f,0.0f,0.0f,1.0f};
GLfloat white[]={1.0f,1.0f,1.0f,1.0f};
GLfloat blue[]={0.0f,0.0f,0.9f,1.0f};
GLfloat er[]={0.0f,5.0f,0.9f,1.0f};
GLfloat yellow[]={0.7f,0.2f,0.0f,1.0f};
GLfloat qAmb[]={0.1,0.1,0.1,1.0};
GLfloat qDif[]={1.0,1.0,1.0,1.0};
GLfloat qSpec[]={.50,.50,.50,.10};
GLfloat qPos[]={0,0,0,0.1};
GLfloat sc[8]={0.295 , 0.40,0.50, 0.60,0.80,1.0,1.05,1.13};
double ang=2*PI/300;
double angular=2*PI/50;