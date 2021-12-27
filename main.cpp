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

void initLighting()
{
    //glMaterialfv(GL_FRONT,GL_AMBIENT,yellow);
    //glMaterialfv(GL_FRONT,GL_SPECULAR,yellow);
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT7);

    glLightfv(GL_LIGHT7,GL_AMBIENT,qAmb);
    glLightfv(GL_LIGHT7,GL_DIFFUSE,qDif);
    glLightfv(GL_LIGHT7,GL_SPECULAR,qSpec);
    //glMaterialfv(GL_FRONT,GL_DIFFUSE,yellow);
}
void myinit()
{
   glClearColor(0.0,0.0,0.0,0.0); //backgroundcolor is green
   //gluOrtho2D(0,699,0,699);
   glPointSize(1.0);
   glLineWidth(2.0);

}

void background()
{
    glBegin(GL_QUADS);
      glColor3f(0.0,0.00,0.00);
      glVertex3f(-01.00,01.00,1);
      glColor3f(.20,0.0,0.70);
      glVertex3f(01.00,1.00,1);
      glColor3f(0,0.0,0.0);
      glVertex3f(1.00,-1.00,1);
      glColor3f(.70,.10,.20);
      glVertex3f(-1.00,-1.00,1);
    glEnd();
}

//Perubahan Anantha Tisa Audrian (E1E119019)
void orbit()
{
glColor3f(0.5,0.5,0.5);


int i=0;
for(i=0;i<8;i++){
glPushMatrix();
if(i==5)
{glRotatef(45,1.0,0.0,0.0);}
else
{glRotatef(63,1.0,0.0,0.0);}
glScalef(sc[i],sc[i],sc[i]);
glBegin(GL_POINTS);
double ang1=0.0;
  int i=0;
  for(i=0;i<300;i++)
  {glVertex2d(cos(ang1),sin(ang1));
   ang1+=ang;  }
glEnd();
glPopMatrix();
}
}
