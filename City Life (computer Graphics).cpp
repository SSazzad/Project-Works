#include<windows.h>
#include<GL/glut.h>
#include <GL/glu.h>
#include<math.h>
#include <stdlib.h>
#include<stdio.h>
#include <iostream>

using namespace std;

float PI=3.1416;
float _move = 0.0f;
float bus_position2 = 0.0f;
float bus_speed2 = 0.04f;
float twicePi = 2.0f * PI;
float cloud_position1 = 0.0f;
float cloud_speed = 0.01f;
float ship_position2 = 0.0f;
float ship_speed2 = 0.03f;
float speed = 0.04f;


void Day() {
    glLoadIdentity();
    float x, y;
	int i;
	GLfloat radius;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

    glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();
	glMatrixMode(GL_MODELVIEW);

    glBegin(GL_QUADS);
	glColor3ub(9, 96, 249 );
	glVertex2f(-1.0f,-1.0f);
	glColor3ub(9, 209, 249 );
	glVertex2f(1.0f,-1.0f);
	glColor3ub(146, 116, 238);
	glVertex2f(1.0f,1.0f);
	glColor3ub(78, 214, 241);
	glVertex2f(-1.0f,1.0f);
	glEnd();

	//Sun
		glBegin(GL_TRIANGLE_FAN);
		glColor3ub(255,165,0);
        x=.3f; y=.75f; radius =.1f;

	//GLfloat radius = 0.8f; //radius
	twicePi = 2.0f * PI;

				glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}

	glEnd();

   //cloud
   glPushMatrix();
   glTranslatef(cloud_position1,0.0f, 0.0f);
  	x=-.78f;
	y=.7f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.7f;
	y=.77f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
         glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.64f;
	y=.85f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
       glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.68f;
	y=.71f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.6f;
	y=.75f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
       glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.55f;
	y=.8f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
       glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	glTranslatef(0.7f, 0.07f, 0.0f);
	x=-.78f;
	y=.7f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.7f;
	y=.77f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
       glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.64f;
	y=.85f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
       glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.68f;
	y=.71f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
         glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.6f;
	y=.75f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
         glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.55f;
	y=.8f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
         glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();

    	//buildings

	//building 1
	glPushMatrix();
    glBegin(GL_QUADS);
	glColor3ub(95,158,160);
	glVertex2f(-0.2f,-0.23f);
	glVertex2f(-0.2f,0.50f);
	glVertex2f(-0.05f,0.50f);
	glVertex2f(-0.05f,-0.23f);
	glEnd();

    glBegin(GL_QUADS);
	glVertex2f(-0.19f,.50f);
	glVertex2f(-0.19f,.65f);
	glVertex2f(-0.06f,.65f);
	glVertex2f(-0.06f,.50f);
	glEnd();

    glBegin(GL_QUADS);
	glVertex2f(-0.18f,.65f);
	glVertex2f(-0.18f,.75f);
	glVertex2f(-0.07f,.75f);
	glVertex2f(-0.07f,.65f);
	glEnd();

    glBegin(GL_QUADS);
	glVertex2f(-0.16f,.75f);
	glVertex2f(-0.16f,.80f);
	glVertex2f(-0.09f,.80f);
	glVertex2f(-0.09f,.75f);
	glEnd();

    glBegin(GL_QUADS);
	glVertex2f(-0.13f,.80f);
	glVertex2f(-0.13f,.90f);
	glVertex2f(-0.12f,.90f);
	glVertex2f(-0.12f,.80f);
	glEnd();
	//windows
    glBegin(GL_QUADS);
	glColor3ub(215, 211, 227 );
	glVertex2f(-0.12f,.76f);
	glVertex2f(-0.12f,.79f);
	glVertex2f(-0.13f,.79f);
	glVertex2f(-0.13f,.76f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(215, 211, 227 );
	glVertex2f(-0.12f,.66f);
	glVertex2f(-0.12f,.74f);
	glVertex2f(-0.13f,.74f);
	glVertex2f(-0.13f,.66f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(215, 211, 227 );
	glVertex2f(-0.12f,.63f);
	glVertex2f(-0.12f,.58f);
	glVertex2f(-0.13f,.58f);
	glVertex2f(-0.13f,.63f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(215, 211, 227 );
	glVertex2f(-0.12f,.56f);
	glVertex2f(-0.12f,.51f);
	glVertex2f(-0.13f,.51f);
	glVertex2f(-0.13f,.56f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(215, 211, 227 );
	glVertex2f(-0.12f,.49f);
	glVertex2f(-0.12f,.41f);
	glVertex2f(-0.13f,.41f);
	glVertex2f(-0.13f,.49f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(215, 211, 227 );
	glVertex2f(-0.12f,.39f);
	glVertex2f(-0.12f,.31f);
	glVertex2f(-0.13f,.31f);
	glVertex2f(-0.13f,.39f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(215, 211, 227);
	glVertex2f(-0.12f,.29f);
	glVertex2f(-0.12f,.21f);
	glVertex2f(-0.13f,.21f);
	glVertex2f(-0.13f,.29f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(215, 211, 227 );
	glVertex2f(-0.12f,.19f);
	glVertex2f(-0.12f,.11f);
	glVertex2f(-0.13f,.11f);
	glVertex2f(-0.13f,.19f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(215, 211, 227 );
	glVertex2f(-0.12f,.09f);
	glVertex2f(-0.12f,.01f);
	glVertex2f(-0.13f,.01f);
	glVertex2f(-0.13f,.09f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(215, 211, 227);
	glVertex2f(-0.12f,-.09f);
	glVertex2f(-0.12f,-.01f);
	glVertex2f(-0.13f,-.01f);
	glVertex2f(-0.13f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(215, 211, 227 );
	glVertex2f(-0.12f,-.19f);
	glVertex2f(-0.12f,-.11f);
	glVertex2f(-0.13f,-.11f);
	glVertex2f(-0.13f,-.19f);
	glEnd();

//building 2
    glBegin(GL_QUADS);
	glColor3ub(95,158,160 );
	glVertex2f(0.2f,-.23f);
	glVertex2f(0.2f,.50f);
	glVertex2f(0.05f,.50f);
	glVertex2f(0.05f,-.23f);
	glEnd();

    glBegin(GL_QUADS);
	glVertex2f(0.19f,.50f);
	glVertex2f(0.19f,.65f);
	glVertex2f(0.06f,.65f);
	glVertex2f(0.06f,.50f);
	glEnd();

    glBegin(GL_QUADS);
	glVertex2f(0.18f,.65f);
	glVertex2f(0.18f,.75f);
	glVertex2f(0.07f,.75f);
	glVertex2f(0.07f,.65f);
	glEnd();

    glBegin(GL_QUADS);
	glVertex2f(0.16f,.75f);
	glVertex2f(0.16f,.80f);
	glVertex2f(0.09f,.80f);
	glVertex2f(0.09f,.75f);
	glEnd();

    glBegin(GL_QUADS);
	glVertex2f(0.13f,.80f);
	glVertex2f(0.13f,.90f);
	glVertex2f(0.12f,.90f);
	glVertex2f(0.12f,.80f);
	glEnd();
    //window building2
    glBegin(GL_QUADS);
	glColor3ub(215, 211, 227 );
	glVertex2f(0.12f,.76f);
	glVertex2f(0.12f,.79f);
	glVertex2f(0.13f,.79f);
	glVertex2f(0.13f,.76f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(215, 211, 227 );
	glVertex2f(0.12f,.66f);
	glVertex2f(0.12f,.74f);
	glVertex2f(0.13f,.74f);
	glVertex2f(0.13f,.66f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(215, 211, 227 );
	glVertex2f(0.12f,.63f);
	glVertex2f(0.12f,.58f);
	glVertex2f(0.13f,.58f);
	glVertex2f(0.13f,.63f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(215, 211, 227 );
	glVertex2f(0.12f,.56f);
	glVertex2f(0.12f,.51f);
	glVertex2f(0.13f,.51f);
	glVertex2f(0.13f,.56f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(215, 211, 227 );
	glVertex2f(0.12f,.49f);
	glVertex2f(0.12f,.41f);
	glVertex2f(0.13f,.41f);
	glVertex2f(0.13f,.49f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(215, 211, 227 );
	glVertex2f(0.12f,.39f);
	glVertex2f(0.12f,.31f);
	glVertex2f(0.13f,.31f);
	glVertex2f(0.13f,.39f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(215, 211, 227 );
	glVertex2f(0.12f,.29f);
	glVertex2f(0.12f,.21f);
	glVertex2f(0.13f,.21f);
	glVertex2f(0.13f,.29f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(215, 211, 227 );
	glVertex2f(0.12f,.19f);
	glVertex2f(0.12f,.11f);
	glVertex2f(0.13f,.11f);
	glVertex2f(0.13f,.19f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(215, 211, 227 );
	glVertex2f(0.12f,.09f);
	glVertex2f(0.12f,.01f);
	glVertex2f(0.13f,.01f);
	glVertex2f(0.13f,.09f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(215, 211, 227 );
	glVertex2f(0.12f,-.09f);
	glVertex2f(0.12f,-.01f);
	glVertex2f(0.13f,-.01f);
	glVertex2f(0.13f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(215, 211, 227 );
	glVertex2f(0.12f,-.19f);
	glVertex2f(0.12f,-.11f);
	glVertex2f(0.13f,-.11f);
	glVertex2f(0.13f,-.19f);
	glEnd();

	//join
    glBegin(GL_LINES);
	glColor3ub(0.0,0.0,0.0);
	glVertex2f(0.05f,.32f);
	glVertex2f(-0.05f,.32f);
	glEnd();

    glBegin(GL_LINES);
	glColor3ub(0.0,0.0,0.0);
	glVertex2f(-0.05f,.32f);
	glVertex2f(-0.02f,.26f);
	glEnd();

    glBegin(GL_LINES);
	glColor3ub(0.0,0.0,0.0);
	glVertex2f(-0.02f,.26f);
	glVertex2f(0.0f,.32f);
	glEnd();

    glBegin(GL_LINES);
	glColor3ub(0.0,0.0,0.0);
	glVertex2f(0.0f,.32f);
	glVertex2f(0.02f,.26f);
	glEnd();

    glBegin(GL_LINES);
	glColor3ub(0.0,0.0,0.0);
	glVertex2f(0.02f,.26f);
	glVertex2f(0.05f,.32f);
	glEnd();

    glBegin(GL_LINES);
	glColor3ub(0.0,0.0,0.0);
	glVertex2f(-0.05f,.26f);
	glVertex2f(-0.02f,.32f);
	glEnd();

    glBegin(GL_LINES);
	glColor3ub(0.0,0.0,0.0);
	glVertex2f(-0.02f,.32f);
	glVertex2f(0.0f,.26f);
	glEnd();

    glBegin(GL_LINES);
	glColor3ub(0.0,0.0,0.0);
	glVertex2f(0.0f,.26f);
	glVertex2f(0.02f,.32f);
	glEnd();

    glBegin(GL_LINES);
	glColor3ub(0.0,0.0,0.0);
	glVertex2f(0.02f,.32f);
	glVertex2f(0.05f,.26f);
	glEnd();

    glBegin(GL_LINES);
	glColor3ub(0.0,0.0,0.0);
	glVertex2f(0.05f,.26f);
	glVertex2f(-0.05f,.26f);
	glEnd();



	//building3
    glBegin(GL_QUADS);
	glColor3ub(0,100,0);
	glVertex2f(0.98f,-.23f);
	glVertex2f(0.87f,-.23f);
    glVertex2f(0.87f,.79f);
	glVertex2f(0.98f,.79f);
	glEnd();
	//building3 window
	glPushMatrix();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.88f,.75f);
	glVertex2f(0.915f,.75f);
    glVertex2f(0.915f,.71f);
	glVertex2f(0.88f,.71f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.88f,.65f);
	glVertex2f(0.915f,.65f);
    glVertex2f(0.915f,.61f);
	glVertex2f(0.88f,.61f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.88f,.55f);
	glVertex2f(0.915f,.55f);
    glVertex2f(0.915f,.51f);
	glVertex2f(0.88f,.51f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.88f,.45f);
	glVertex2f(0.915f,.45f);
    glVertex2f(0.915f,.41f);
	glVertex2f(0.88f,.41f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.88f,.35f);
	glVertex2f(0.915f,.35f);
    glVertex2f(0.915f,.31f);
	glVertex2f(0.88f,.31f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.88f,.25f);
	glVertex2f(0.915f,.25f);
    glVertex2f(0.915f,.21f);
	glVertex2f(0.88f,.21f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.88f,.15f);
	glVertex2f(0.915f,.15f);
    glVertex2f(0.915f,.11f);
	glVertex2f(0.88f,.11f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.88f,.05f);
	glVertex2f(0.915f,.05f);
    glVertex2f(0.915f,.01f);
	glVertex2f(0.88f,.01f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.88f,-.05f);
	glVertex2f(0.915f,-.05f);
    glVertex2f(0.915f,-.09f);
	glVertex2f(0.88f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.88f,-.15f);
	glVertex2f(0.915f,-.15f);
    glVertex2f(0.915f,-.19f);
	glVertex2f(0.88f,-.19f);
	glEnd();

    //second row
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.935f,.75f);
	glVertex2f(0.97f,.75f);
    glVertex2f(0.97f,.71f);
	glVertex2f(0.935f,.71f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.935f,.65f);
	glVertex2f(0.97f,.65f);
    glVertex2f(0.97f,.61f);
	glVertex2f(0.935f,.61f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.935f,.55f);
	glVertex2f(0.97f,.55f);
    glVertex2f(0.97f,.51f);
	glVertex2f(0.935f,.51f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.935f,.45f);
	glVertex2f(0.97f,.45f);
    glVertex2f(0.97f,.41f);
	glVertex2f(0.935f,.41f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.935f,.35f);
	glVertex2f(0.97f,.35f);
    glVertex2f(0.97f,.31f);
	glVertex2f(0.935f,.31f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.935f,.25f);
	glVertex2f(0.97f,.25f);
    glVertex2f(0.97f,.21f);
	glVertex2f(0.935f,.21f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.935f,.15f);
	glVertex2f(0.97f,.15f);
    glVertex2f(0.97f,.11f);
	glVertex2f(0.935f,.11f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.935f,.05f);
	glVertex2f(0.97f,.05f);
    glVertex2f(0.97f,.01f);
	glVertex2f(0.935f,.01f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.935f,-.05f);
	glVertex2f(0.97f,-.05f);
    glVertex2f(0.97f,-.09f);
	glVertex2f(0.935f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.935f,-.15f);
	glVertex2f(0.97f,-.15f);
    glVertex2f(0.97f,-.19f);
	glVertex2f(0.935f,-.19f);
	glEnd();
	glPopMatrix();

	//building4
    glBegin(GL_QUADS);
	glColor3ub(160,82,45);
	glVertex2f(0.82f,-.23f);
	glVertex2f(0.71f,-.23f);
    glVertex2f(0.71f,.48f);
	glVertex2f(0.82f,.48f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(160,82,45 );
	glVertex2f(0.81f,.45f);
	glVertex2f(0.72f,.45f);
    glVertex2f(0.72f,.52f);
	glVertex2f(0.81f,.52f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(160,82,45);
	glVertex2f(0.80f,.52f);
	glVertex2f(0.73f,.52f);
    glVertex2f(0.73f,.59f);
	glVertex2f(0.80f,.59f);
	glEnd();
	//building4 windows
	//middle
	    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.76f,.57f);
	glVertex2f(0.77f,.57f);
    glVertex2f(0.77f,.51f);
	glVertex2f(0.76f,.51f);
	glEnd();
	    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.76f,.47f);
	glVertex2f(0.77f,.47f);
    glVertex2f(0.77f,.41f);
	glVertex2f(0.76f,.41f);
	glEnd();
	    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.76f,.37f);
	glVertex2f(0.77f,.37f);
    glVertex2f(0.77f,.31f);
	glVertex2f(0.76f,.31f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.76f,.27f);
	glVertex2f(0.77f,.27f);
    glVertex2f(0.77f,.21f);
	glVertex2f(0.76f,.21f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.76f,.17f);
	glVertex2f(0.77f,.17f);
    glVertex2f(0.77f,.11f);
	glVertex2f(0.76f,.11f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.76f,.07f);
	glVertex2f(0.77f,.07f);
    glVertex2f(0.77f,.01);
	glVertex2f(0.76f,.01f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.76f,-.03f);
	glVertex2f(0.77f,-.03f);
    glVertex2f(0.77f,-.09f);
	glVertex2f(0.76f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.76f,-.13f);
	glVertex2f(0.77f,-.13f);
    glVertex2f(0.77f,-.19f);
	glVertex2f(0.76f,-.19f);
	glEnd();
	//first row
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.72,.46f);
	glVertex2f(0.75,.46f);
    glVertex2f(0.75,.42f);
	glVertex2f(0.72,.42f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.72,.36f);
	glVertex2f(0.75,.36f);
    glVertex2f(0.75,.32f);
	glVertex2f(0.72,.32f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.72,.26f);
	glVertex2f(0.75,.26f);
    glVertex2f(0.75,.22f);
	glVertex2f(0.72,.22f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.72,.16f);
	glVertex2f(0.75,.16f);
    glVertex2f(0.75,.12f);
	glVertex2f(0.72,.12f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.72,.06f);
	glVertex2f(0.75,.06f);
    glVertex2f(0.75,.02f);
	glVertex2f(0.72,.02f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.72,-.04f);
	glVertex2f(0.75,-.04f);
    glVertex2f(0.75,-.08f);
	glVertex2f(0.72,-.08f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.72,-.14f);
	glVertex2f(0.75,-.14f);
    glVertex2f(0.75,-.18f);
	glVertex2f(0.72,-.18f);
	glEnd();
	//second row
	 glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.81,.46f);
	glVertex2f(0.78,.46f);
    glVertex2f(0.78,.42f);
	glVertex2f(0.81,.42f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.81,.36f);
	glVertex2f(0.78,.36f);
    glVertex2f(0.78,.32f);
	glVertex2f(0.81,.32f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.81,.26f);
	glVertex2f(0.78,.26f);
    glVertex2f(0.78,.22f);
	glVertex2f(0.81,.22f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.81,.16f);
	glVertex2f(0.78,.16f);
    glVertex2f(0.78,.12f);
	glVertex2f(0.81,.12f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.81,.06f);
	glVertex2f(0.78,.06f);
    glVertex2f(0.78,.02f);
	glVertex2f(0.81,.02f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.81,-.04f);
	glVertex2f(0.78,-.04f);
    glVertex2f(0.78,-.08f);
	glVertex2f(0.81,-.08f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.81,-.14f);
	glVertex2f(0.78,-.14f);
    glVertex2f(0.78,-.18f);
	glVertex2f(0.81,-.18f);
	glEnd();

	//building5
    glBegin(GL_QUADS);
	glColor3ub(72,61,139 );
	glVertex2f(0.67f,-.23f);
	glVertex2f(0.53f,-.23f);
    glVertex2f(0.53f,.30f);//30
	glVertex2f(0.67f,.30f);
	glEnd();
	//building5 window
    //first window
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.66f,.27f);
	glVertex2f(0.65f,.27f);
    glVertex2f(0.65f,.21f);
	glVertex2f(0.66f,.21f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.66f,.17f);
	glVertex2f(0.65f,.17f);
    glVertex2f(0.65f,.11f);
	glVertex2f(0.66f,.11f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.66f,.07f);
	glVertex2f(0.65f,.07f);
    glVertex2f(0.65f,.01);
	glVertex2f(0.66f,.01f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.66f,-.03f);
	glVertex2f(0.65f,-.03f);
    glVertex2f(0.65f,-.09f);
	glVertex2f(0.66f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.66f,-.13f);
	glVertex2f(0.65f,-.13f);
    glVertex2f(0.65f,-.19f);
	glVertex2f(0.66f,-.19f);
	glEnd();
    //second window
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.61f,.27f);
	glVertex2f(0.60f,.27f);
    glVertex2f(0.60f,.21f);
	glVertex2f(0.61f,.21f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.61f,.17f);
	glVertex2f(0.60f,.17f);
    glVertex2f(0.60f,.11f);
	glVertex2f(0.61f,.11f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.61f,.07f);
	glVertex2f(0.60f,.07f);
    glVertex2f(0.60f,.01);
	glVertex2f(0.61f,.01f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.61f,-.03f);
	glVertex2f(0.60f,-.03f);
    glVertex2f(0.60f,-.09f);
	glVertex2f(0.61f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.61f,-.13f);
	glVertex2f(0.60f,-.13f);
    glVertex2f(0.60f,-.19f);
	glVertex2f(0.61f,-.19f);
	glEnd();
    //third window
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.54f,.27f);
	glVertex2f(0.55f,.27f);
    glVertex2f(0.55f,.21f);
	glVertex2f(0.54f,.21f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.54f,.17f);
	glVertex2f(0.55f,.17f);
    glVertex2f(0.55f,.11f);
	glVertex2f(0.54f,.11f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.54f,.07f);
	glVertex2f(0.55f,.07f);
    glVertex2f(0.55f,.01);
	glVertex2f(0.54f,.01f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.54f,-.03f);
	glVertex2f(0.55f,-.03f);
    glVertex2f(0.55f,-.09f);
	glVertex2f(0.54f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.54f,-.13f);
	glVertex2f(0.55f,-.13f);
    glVertex2f(0.55f,-.19f);
	glVertex2f(0.54f,-.19f);
	glEnd();


	//building6
    glBegin(GL_QUADS);
	glColor3ub(0,100,0 );
	glVertex2f(0.465,-.23f);
	glVertex2f(0.27,-.23f);
    glVertex2f(0.27,.20);
	glVertex2f(0.465,.20);
	glEnd();

	//building6 windows
	glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.45,.17f);
	glVertex2f(0.42,.17f);
    glVertex2f(0.42,.13);
	glVertex2f(0.45,.13);
	glEnd();

    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.45,.07f);
	glVertex2f(0.42,.07f);
    glVertex2f(0.42,.03);
	glVertex2f(0.45,.03);
	glEnd();

    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215);
	glVertex2f(0.45,-.03f);
	glVertex2f(0.42,-.03f);
    glVertex2f(0.42,-.07);
	glVertex2f(0.45,-.07);
	glEnd();

    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215);
	glVertex2f(0.45,-.13f);
	glVertex2f(0.42,-.13f);
    glVertex2f(0.42,-.17);
	glVertex2f(0.45,-.17);
	glEnd();

	//second row

    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.285,.17f);
	glVertex2f(0.315,.17f);
    glVertex2f(0.315,.13);
	glVertex2f(0.285,.13);
	glEnd();

    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(0.285,.07f);
	glVertex2f(0.315,.07f);
    glVertex2f(0.315,.03);
	glVertex2f(0.285,.03);
	glEnd();

    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215  );
	glVertex2f(0.285,-.03f);
	glVertex2f(0.315,-.03f);
    glVertex2f(0.315,-.07);
	glVertex2f(0.285,-.07);
	glEnd();

    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215);
	glVertex2f(0.285,-.13f);
	glVertex2f(0.315,-.13f);
    glVertex2f(0.315,-.17);
	glVertex2f(0.285,-.17);
	glEnd();
	//building6 middle window
    glBegin(GL_QUADS);
	glColor3ub(245, 244, 251 );
	glVertex2f(0.36f,-.18f);
	glVertex2f(0.36f,-.12f);
	glVertex2f(0.37f,-.12f);
	glVertex2f(0.37f,-.18f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(245, 244, 251 );
	glVertex2f(0.36f,-.08f);
	glVertex2f(0.36f,-.02f);
	glVertex2f(0.37f,-.02f);
	glVertex2f(0.37f,-.08f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(245, 244, 251 );
	glVertex2f(0.36f,.08f);
	glVertex2f(0.36f,.02f);
	glVertex2f(0.37f,.02f);
	glVertex2f(0.37f,.08f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(245, 244, 251 );
	glVertex2f(0.36f,.18f);
	glVertex2f(0.36f,.12f);
	glVertex2f(0.37f,.12f);
	glVertex2f(0.37f,.18f);
	glEnd();
	////////////////////reverse building
	//building3
    glBegin(GL_QUADS);
	glColor3ub(128,0,0 );
	glVertex2f(-0.98f,-.23f);
	glVertex2f(-0.87f,-.23f);
    glVertex2f(-0.87f,.79f);
	glVertex2f(-0.98f,.79f);
	glEnd();
	//building3 window
	glPushMatrix();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.88f,.75f);
	glVertex2f(-0.915f,.75f);
    glVertex2f(-0.915f,.71f);
	glVertex2f(-0.88f,.71f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.88f,.65f);
	glVertex2f(-0.915f,.65f);
    glVertex2f(-0.915f,.61f);
	glVertex2f(-0.88f,.61f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.88f,.55f);
	glVertex2f(-0.915f,.55f);
    glVertex2f(-0.915f,.51f);
	glVertex2f(-0.88f,.51f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.88f,.45f);
	glVertex2f(-0.915f,.45f);
    glVertex2f(-0.915f,.41f);
	glVertex2f(-0.88f,.41f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.88f,.35f);
	glVertex2f(-0.915f,.35f);
    glVertex2f(-0.915f,.31f);
	glVertex2f(-0.88f,.31f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.88f,.25f);
	glVertex2f(-0.915f,.25f);
    glVertex2f(-0.915f,.21f);
	glVertex2f(-0.88f,.21f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.88f,.15f);
	glVertex2f(-0.915f,.15f);
    glVertex2f(-0.915f,.11f);
	glVertex2f(-0.88f,.11f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.88f,.05f);
	glVertex2f(-0.915f,.05f);
    glVertex2f(-0.915f,.01f);
	glVertex2f(-0.88f,.01f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.88f,-.05f);
	glVertex2f(-0.915f,-.05f);
    glVertex2f(-0.915f,-.09f);
	glVertex2f(-0.88f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.88f,-.15f);
	glVertex2f(-0.915f,-.15f);
    glVertex2f(-0.915f,-.19f);
	glVertex2f(-0.88f,-.19f);
	glEnd();

    //second row
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.935f,.75f);
	glVertex2f(-0.97f,.75f);
    glVertex2f(-0.97f,.71f);
	glVertex2f(-0.935f,.71f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.935f,.65f);
	glVertex2f(-0.97f,.65f);
    glVertex2f(-0.97f,.61f);
	glVertex2f(-0.935f,.61f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.935f,.55f);
	glVertex2f(-0.97f,.55f);
    glVertex2f(-0.97f,.51f);
	glVertex2f(-0.935f,.51f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.935f,.45f);
	glVertex2f(-0.97f,.45f);
    glVertex2f(-0.97f,.41f);
	glVertex2f(-0.935f,.41f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.935f,.35f);
	glVertex2f(-0.97f,.35f);
    glVertex2f(-0.97f,.31f);
	glVertex2f(-0.935f,.31f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.935f,.25f);
	glVertex2f(-0.97f,.25f);
    glVertex2f(-0.97f,.21f);
	glVertex2f(-0.935f,.21f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.935f,.15f);
	glVertex2f(-0.97f,.15f);
    glVertex2f(-0.97f,.11f);
	glVertex2f(-0.935f,.11f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.935f,.05f);
	glVertex2f(-0.97f,.05f);
    glVertex2f(-0.97f,.01f);
	glVertex2f(-0.935f,.01f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.935f,-.05f);
	glVertex2f(-0.97f,-.05f);
    glVertex2f(-0.97f,-.09f);
	glVertex2f(-0.935f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.935f,-.15f);
	glVertex2f(-0.97f,-.15f);
    glVertex2f(-0.97f,-.19f);
	glVertex2f(-0.935f,-.19f);
	glEnd();
	glPopMatrix();

	//building4
    glBegin(GL_QUADS);
	glColor3ub(0,128,128 );
	glVertex2f(-0.82f,-.23f);
	glVertex2f(-0.71f,-.23f);
    glVertex2f(-0.71f,.48f);
	glVertex2f(-0.82f,.48f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(0,128,128);
	glVertex2f(-0.81f,.45f);
	glVertex2f(-0.72f,.45f);
    glVertex2f(-0.72f,.52f);
	glVertex2f(-0.81f,.52f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(0,128,128 );
	glVertex2f(-0.80f,.52f);
	glVertex2f(-0.73f,.52f);
    glVertex2f(-0.73f,.59f);
	glVertex2f(-0.80f,.59f);
	glEnd();
	//building4 windows
	//middle
	    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.76f,.57f);
	glVertex2f(-0.77f,.57f);
    glVertex2f(-0.77f,.51f);
	glVertex2f(-0.76f,.51f);
	glEnd();
	    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.76f,.47f);
	glVertex2f(-0.77f,.47f);
    glVertex2f(-0.77f,.41f);
	glVertex2f(-0.76f,.41f);
	glEnd();
	    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.76f,.37f);
	glVertex2f(-0.77f,.37f);
    glVertex2f(-0.77f,.31f);
	glVertex2f(-0.76f,.31f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.76f,.27f);
	glVertex2f(-0.77f,.27f);
    glVertex2f(-0.77f,.21f);
	glVertex2f(-0.76f,.21f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.76f,.17f);
	glVertex2f(-0.77f,.17f);
    glVertex2f(-0.77f,.11f);
	glVertex2f(-0.76f,.11f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.76f,.07f);
	glVertex2f(-0.77f,.07f);
    glVertex2f(-0.77f,.01);
	glVertex2f(-0.76f,.01f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.76f,-.03f);
	glVertex2f(-0.77f,-.03f);
    glVertex2f(-0.77f,-.09f);
	glVertex2f(-0.76f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.76f,-.13f);
	glVertex2f(-0.77f,-.13f);
    glVertex2f(-0.77f,-.19f);
	glVertex2f(-0.76f,-.19f);
	glEnd();
	//first row
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.72,.46f);
	glVertex2f(-0.75,.46f);
    glVertex2f(-0.75,.42f);
	glVertex2f(-0.72,.42f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.72,.36f);
	glVertex2f(-0.75,.36f);
    glVertex2f(-0.75,.32f);
	glVertex2f(-0.72,.32f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.72,.26f);
	glVertex2f(-0.75,.26f);
    glVertex2f(-0.75,.22f);
	glVertex2f(-0.72,.22f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.72,.16f);
	glVertex2f(-0.75,.16f);
    glVertex2f(-0.75,.12f);
	glVertex2f(-0.72,.12f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.72,.06f);
	glVertex2f(-0.75,.06f);
    glVertex2f(-0.75,.02f);
	glVertex2f(-0.72,.02f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.72,-.04f);
	glVertex2f(-0.75,-.04f);
    glVertex2f(-0.75,-.08f);
	glVertex2f(-0.72,-.08f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.72,-.14f);
	glVertex2f(-0.75,-.14f);
    glVertex2f(-0.75,-.18f);
	glVertex2f(-0.72,-.18f);
	glEnd();
	//second row
	 glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.81,.46f);
	glVertex2f(-0.78,.46f);
    glVertex2f(-0.78,.42f);
	glVertex2f(-0.81,.42f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.81,.36f);
	glVertex2f(-0.78,.36f);
    glVertex2f(-0.78,.32f);
	glVertex2f(-0.81,.32f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.81,.26f);
	glVertex2f(-0.78,.26f);
    glVertex2f(-0.78,.22f);
	glVertex2f(-0.81,.22f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.81,.16f);
	glVertex2f(-0.78,.16f);
    glVertex2f(-0.78,.12f);
	glVertex2f(-0.81,.12f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.81,.06f);
	glVertex2f(-0.78,.06f);
    glVertex2f(-0.78,.02f);
	glVertex2f(-0.81,.02f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.81,-.04f);
	glVertex2f(-0.78,-.04f);
    glVertex2f(-0.78,-.08f);
	glVertex2f(-0.81,-.08f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.81,-.14f);
	glVertex2f(-0.78,-.14f);
    glVertex2f(-0.78,-.18f);
	glVertex2f(-0.81,-.18f);
	glEnd();

	//building5
    glBegin(GL_QUADS);
	glColor3ub(139,0,139 );
	glVertex2f(-0.67f,-.23f);
	glVertex2f(-0.53f,-.23f);
    glVertex2f(-0.53f,.30f);
	glVertex2f(-0.67f,.30f);
	glEnd();

	//building5 window
    //first window
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.66f,.27f);
	glVertex2f(-0.65f,.27f);
    glVertex2f(-0.65f,.21f);
	glVertex2f(-0.66f,.21f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.66f,.17f);
	glVertex2f(-0.65f,.17f);
    glVertex2f(-0.65f,.11f);
	glVertex2f(-0.66f,.11f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.66f,.07f);
	glVertex2f(-0.65f,.07f);
    glVertex2f(-0.65f,.01);
	glVertex2f(-0.66f,.01f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.66f,-.03f);
	glVertex2f(-0.65f,-.03f);
    glVertex2f(-0.65f,-.09f);
	glVertex2f(-0.66f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.66f,-.13f);
	glVertex2f(-0.65f,-.13f);
    glVertex2f(-0.65f,-.19f);
	glVertex2f(-0.66f,-.19f);
	glEnd();
    //second window
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.61f,.27f);
	glVertex2f(-0.60f,.27f);
    glVertex2f(-0.60f,.21f);
	glVertex2f(-0.61f,.21f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.61f,.17f);
	glVertex2f(-0.60f,.17f);
    glVertex2f(-0.60f,.11f);
	glVertex2f(-0.61f,.11f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.61f,.07f);
	glVertex2f(-0.60f,.07f);
    glVertex2f(-0.60f,.01);
	glVertex2f(-0.61f,.01f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.61f,-.03f);
	glVertex2f(-0.60f,-.03f);
    glVertex2f(-0.60f,-.09f);
	glVertex2f(-0.61f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.61f,-.13f);
	glVertex2f(-0.60f,-.13f);
    glVertex2f(-0.60f,-.19f);
	glVertex2f(-0.61f,-.19f);
	glEnd();
    //third window
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.54f,.27f);
	glVertex2f(-0.55f,.27f);
    glVertex2f(-0.55f,.21f);
	glVertex2f(-0.54f,.21f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.54f,.17f);
	glVertex2f(-0.55f,.17f);
    glVertex2f(-0.55f,.11f);
	glVertex2f(-0.54f,.11f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.54f,.07f);
	glVertex2f(-0.55f,.07f);
    glVertex2f(-0.55f,.01);
	glVertex2f(-0.54f,.01f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.54f,-.03f);
	glVertex2f(-0.55f,-.03f);
    glVertex2f(-0.55f,-.09f);
	glVertex2f(-0.54f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.54f,-.13f);
	glVertex2f(-0.55f,-.13f);
    glVertex2f(-0.55f,-.19f);
	glVertex2f(-0.54f,-.19f);
	glEnd();


	//building6
    glBegin(GL_QUADS);
	glColor3ub(75,0,130 );
	glVertex2f(-0.465,-.23f);
	glVertex2f(-0.27,-.23f);
    glVertex2f(-0.27,.20);
	glVertex2f(-0.465,.20);
	glEnd();

	//building6 windows
	glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.45,.17f);
	glVertex2f(-0.42,.17f);
    glVertex2f(-0.42,.13);
	glVertex2f(-0.45,.13);
	glEnd();

    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.45,.07f);
	glVertex2f(-0.42,.07f);
    glVertex2f(-0.42,.03);
	glVertex2f(-0.45,.03);
	glEnd();

    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215);
	glVertex2f(-0.45,-.03f);
	glVertex2f(-0.42,-.03f);
    glVertex2f(-0.42,-.07);
	glVertex2f(-0.45,-.07);
	glEnd();

    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215);
	glVertex2f(-0.45,-.13f);
	glVertex2f(-0.42,-.13f);
    glVertex2f(-0.42,-.17);
	glVertex2f(-0.45,-.17);
	glEnd();

	//second row

    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.285,.17f);
	glVertex2f(-0.315,.17f);
    glVertex2f(-0.315,.13);
	glVertex2f(-0.285,.13);
	glEnd();

    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215 );
	glVertex2f(-0.285,.07f);
	glVertex2f(-0.315,.07f);
    glVertex2f(-0.315,.03);
	glVertex2f(-0.285,.03);
	glEnd();

    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215  );
	glVertex2f(-0.285,-.03f);
	glVertex2f(-0.315,-.03f);
    glVertex2f(-0.315,-.07);
	glVertex2f(-0.285,-.07);
	glEnd();

    glBegin(GL_QUADS);
	glColor3ub(193, 186, 215);
	glVertex2f(-0.285,-.13f);
	glVertex2f(-0.315,-.13f);
    glVertex2f(-0.315,-.17);
	glVertex2f(-0.285,-.17);
	glEnd();
	//building6 middle
    glBegin(GL_QUADS);
	glColor3ub(245, 244, 251 );
	glVertex2f(-0.36f,-.18f);
	glVertex2f(-0.36f,-.12f);
	glVertex2f(-0.37f,-.12f);
	glVertex2f(-0.37f,-.18f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(245, 244, 251 );
	glVertex2f(-0.36f,-.08f);
	glVertex2f(-0.36f,-.02f);
	glVertex2f(-0.37f,-.02f);
	glVertex2f(-0.37f,-.08f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(245, 244, 251 );
	glVertex2f(-0.36f,.08f);
	glVertex2f(-0.36f,.02f);
	glVertex2f(-0.37f,.02f);
	glVertex2f(-0.37f,.08f);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(245, 244, 251 );
	glVertex2f(-0.36f,.18f);
	glVertex2f(-0.36f,.12f);
	glVertex2f(-0.37f,.12f);
	glVertex2f(-0.37f,.18f);
	glEnd();

	//field
	glPushMatrix();
    glBegin(GL_QUADS);
	glColor3ub(73, 252, 0 );
    glVertex2f(-1.0f, -0.23f);
    glColor3ub(36, 198, 78 );
    glVertex2f(-1.0f, -0.32f);
    glColor3ub(8, 147, 44 );
    glVertex2f(1.0f, -0.32f);
    glColor3ub(54, 186, 60 );
    glVertex2f(1.0f, -0.23f);
    glEnd();
    glPopMatrix();

    //river
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(18, 118, 246);
	glVertex2f(-1.0f,-0.32f);
	glColor3ub(102, 163, 241);
	glVertex2f(-1.0f,-0.59f);
	glColor3ub(18, 118, 246 );
	glVertex2f(1.0f,-0.59f);
	glColor3ub(102, 222, 241);
	glVertex2f(1.0f,-0.32f);
	glEnd();
    glPopMatrix();

    //Water bus
    glPushMatrix();
    glTranslatef(ship_position2,0.0f, 0.0f);

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
    glVertex2f(0.1f, -0.47f);
    glVertex2f(0.5f, -0.47f);
	glVertex2f(0.5f, -0.37f);
    glVertex2f(0.1f, -0.37f);
    glEnd();



    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(0.5f, -0.47f);
    glVertex2f(0.65f, -0.37f);
    glVertex2f(0.5f, -0.37f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(255,255,255);
    glVertex2f(0.16f, -0.37f);
    glVertex2f(0.42f, -0.37f);
    glVertex2f(0.42f, -0.27f);
    glVertex2f(0.16f, -0.27f);
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3ub(255,255,255);
    glVertex2f(0.42f, -0.27f);
    glVertex2f(0.42f, -0.37f);
    glVertex2f(0.52f, -0.37f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(255,255,255);
    glVertex2f(0.2f, -0.2f);
    glVertex2f(0.34f, -0.2f);
    glVertex2f(0.34f, -0.27f);
    glVertex2f(0.2f, -0.27f);
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3ub(255,255,255);
    glVertex2f(0.34f, -0.2f);
    glVertex2f(0.34f, -0.27f);
    glVertex2f(0.4f, -0.27f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(255,255,255);
    glVertex2f(0.22f, -0.12f);
    glVertex2f(0.29f, -0.12f);
    glVertex2f(0.29f, -0.2f);
    glVertex2f(0.22f, -0.2f);
    glEnd();

     glBegin(GL_TRIANGLES);
	glColor3ub(255,255,255);

    glVertex2f(0.29f, -0.12f);
    glVertex2f(0.29f, -0.2f);
    glVertex2f(0.32f, -0.2f);

    glEnd();
    //window
    glBegin(GL_QUADS);
	glColor3ub(32,178,170);
    glVertex2f(0.24f, -0.13f);
    glVertex2f(0.28f, -0.13f);
    glVertex2f(0.28f, -0.18f);
    glVertex2f(0.24f, -0.18f);
    glEnd();

    //second row
    glBegin(GL_QUADS);
    glVertex2f(0.22f, -0.21f);
    glVertex2f(0.26f, -0.21f);
    glVertex2f(0.26f, -0.26f);
    glVertex2f(0.22f, -0.26f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(0.28f, -0.21f);
    glVertex2f(0.32f, -0.21f);
    glVertex2f(0.32f, -0.26f);
    glVertex2f(0.28f, -0.26f);
    glEnd();

    //third row
    glBegin(GL_QUADS);
    glVertex2f(0.18f, -0.28f);
    glVertex2f(0.22f, -0.28f);
    glVertex2f(0.22f, -0.33f);
    glVertex2f(0.18f, -0.33f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(0.24f, -0.28f);
    glVertex2f(0.28f, -0.28f);
    glVertex2f(0.28f, -0.33f);
    glVertex2f(0.24f, -0.33f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(0.3f, -0.28f);
    glVertex2f(0.34f, -0.28f);
    glVertex2f(0.34f, -0.33f);
    glVertex2f(0.3f, -0.33f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(0.36f, -0.28f);
    glVertex2f(0.4f, -0.28f);
    glVertex2f(0.4f, -0.33f);
    glVertex2f(0.36f, -0.33f);
    glEnd();

    glPopMatrix();

//lamppost

    glBegin(GL_QUADS);
	glColor3ub(1.0f,1.0f,1.0f);
    glVertex2f(-0.79f, -0.59f);
    glVertex2f(-0.81f, -0.59f);
    glVertex2f(-0.81f, -0.40f);
    glVertex2f(-0.79f, -0.40f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-0.83f, -0.40f);
    glVertex2f(-0.77f, -0.40f);
    glVertex2f(-0.76f, -0.38f);
    glVertex2f(-0.78f, -0.35f);
    glVertex2f(-0.82f, -0.35f);
    glVertex2f(-0.84f, -0.38f);
	glEnd();

 //traffic light
    glBegin(GL_QUADS);
	glColor3ub(1.0f,1.0f,1.0f);
    glVertex2f(-0.01f, -0.59f);
    glVertex2f(0.01f, -0.59f);
    glVertex2f(0.01f, -0.40f);
    glVertex2f(-0.01f, -0.40f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-0.05f, -0.40f);
    glVertex2f(0.05f, -0.40f);
    glVertex2f(0.05f, -0.15f);
    glVertex2f(-0.05f, -0.15f);
    glEnd();

    //Green
    glPushMatrix();
    glTranslated(0.00,-0.35,0.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(0,100,0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.03;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
	glEnd();
	glPopMatrix();

	//Yellow
	glPushMatrix();
    glTranslated(0.00,-0.27,0.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(255,255,0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.03;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
	glEnd();
	glPopMatrix();

	//Red
	glPushMatrix();
    glTranslated(0.00,-0.19,0.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(255,0,0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.03;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
	glEnd();
	glPopMatrix();


//lamppost3
    glBegin(GL_QUADS);
	glColor3ub(1.0f,1.0f,1.0f);
    glVertex2f(0.79f, -0.59f);
    glVertex2f(0.81f, -0.59f);
    glVertex2f(0.81f, -0.40f);
    glVertex2f(0.79f, -0.40f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(0.83f, -0.40f);
    glVertex2f(0.77f, -0.40f);
    glVertex2f(0.76f, -0.38f);
    glVertex2f(0.78f, -0.35f);
    glVertex2f(0.82f, -0.35f);
    glVertex2f(0.84f, -0.38f);
    glEnd();




	//Sideroad1
	glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(-1.0f,-.62f);
	glVertex2f(-1.0f,-.59f);
	glVertex2f(-.8f,-.59f);
	glVertex2f(-.8f,-.62f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(.0f,.0f,.0f);
	glVertex2f(-.8f,-.62f);
	glVertex2f(-.8f,-.59f);
	glVertex2f(-.6f,-.59f);
	glVertex2f(-.6f,-.62f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(-.6f,-.62f);
	glVertex2f(-.6f,-.59f);
	glVertex2f(-.4f,-.59f);
	glVertex2f(-.4f,-.62f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(.0f,.0f,.0f);
	glVertex2f(-.4f,-.62f);
	glVertex2f(-.4f,-.59f);
	glVertex2f(-.2f,-.59f);
	glVertex2f(-.2f,-.62f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(-.2f,-.62f);
	glVertex2f(-.2f,-.59f);
	glVertex2f(0.0f,-.59f);
	glVertex2f(0.0f,-.62f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(.0f,.0f,.0f);
	glVertex2f(0.0f,-.62f);
	glVertex2f(0.0f,-.59f);
	glVertex2f(0.2f,-.59f);
	glVertex2f(0.2f,-.62f);
	glEnd();


	glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(.2f,-.62f);
	glVertex2f(.2f,-.59f);
	glVertex2f(.4f,-.59f);
	glVertex2f(.4f,-.62f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(.0f,.0f,.0f);
	glVertex2f(.4f,-.62f);
	glVertex2f(.4f,-.59f);
	glVertex2f(.6f,-.59f);
	glVertex2f(.6f,-.62f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(.6f,-.62f);
	glVertex2f(.6f,-.59f);
	glVertex2f(.8f,-.59f);
	glVertex2f(.8f,-.62f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(.0f,.0f,.0f);
	glVertex2f(.8f,-.62f);
	glVertex2f(.8f,-.59f);
	glVertex2f(1.0f,-.59f);
	glVertex2f(1.0f,-.62f);
	glEnd();


	//sideroad2
    glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(-1.0f,-.97f);
	glVertex2f(-1.0f,-1.0f);
	glVertex2f(-.8f,-1.0f);
	glVertex2f(-.8f,-.97f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(.0f,.0f,.0f);
	glVertex2f(-.8f,-.97f);
	glVertex2f(-.8f,-1.0f);
	glVertex2f(-.6f,-1.0f);
	glVertex2f(-.6f,-.97f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(-.6f,-.97f);
	glVertex2f(-.6f,-1.0f);
	glVertex2f(-.4f,-1.0f);
	glVertex2f(-.4f,-.97f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(.0f,.0f,.0f);
	glVertex2f(-.4f,-.97f);
	glVertex2f(-.4f,-1.0f);
	glVertex2f(-.2f,-1.0f);
	glVertex2f(-.2f,-.97f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(-.2f,-.97f);
	glVertex2f(-.2f,-1.0f);
	glVertex2f(.0f,-1.0f);
	glVertex2f(.0f,-.97f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(.0f,.0f,.0f);
	glVertex2f(.0f,-.97f);
	glVertex2f(.0f,-1.0f);
	glVertex2f(.2f,-1.0f);
	glVertex2f(.2f,-.97f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(.2f,-.97f);
	glVertex2f(.2f,-1.0f);
	glVertex2f(.4f,-1.0f);
	glVertex2f(.4f,-.97f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(.0f,.0f,.0f);
	glVertex2f(.4f,-.97f);
	glVertex2f(.4f,-1.0f);
	glVertex2f(.6f,-1.0f);
	glVertex2f(.6f,-.97f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(.6f,-.97f);
	glVertex2f(.6f,-1.0f);
	glVertex2f(.8f,-1.0f);
	glVertex2f(.8f,-.97f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(.0f,.0f,.0f);
	glVertex2f(.8f,-.97f);
	glVertex2f(.8f,-1.0f);
	glVertex2f(1.0f,-1.0f);
	glVertex2f(1.0f,-.97f);
	glEnd();



    //main road
    glBegin(GL_QUADS);
	glColor3ub(122, 132, 147);
	glVertex2f(-1.0f,-.62f);
	glVertex2f(-1.0f,-.97f);
	glVertex2f(1.0f,-.97f);
	glVertex2f(1.0f,-.62f);
	glEnd();

    //road div

    glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(-.8f,-.79f);
	glVertex2f(-.8f,-.81f);
	glVertex2f(-.6f,-.81f);
	glVertex2f(-.6f,-.79f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(-.4f,-.79f);
	glVertex2f(-.4f,-.81f);
	glVertex2f(-.2f,-.81f);
	glVertex2f(-.2f,-.79f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(.0f,-.79f);
	glVertex2f(.0f,-.81f);
	glVertex2f(.2f,-.81f);
	glVertex2f(.2f,-.79f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(.4f,-.79f);
	glVertex2f(.4f,-.81f);
	glVertex2f(.6f,-.81f);
	glVertex2f(.6f,-.79f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(.8f,-.79f);
	glVertex2f(.8f,-.81f);
	glVertex2f(1.0f,-.81f);
	glVertex2f(1.0f,-.79f);
	glEnd();

    //bus
    glPushMatrix();
	glTranslatef(_move, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
	glColor3ub(25,25,112 );
	glVertex2f(-.9f,-.45f);
	glVertex2f(-.9f,-.55f);
	glVertex2f(-.5f,-.55);
	glVertex2f(-.5f,-.55f);
	glVertex2f(-.5f,-.45);
	glEnd();

//window
    glBegin(GL_QUADS);
	glColor3ub(41, 181, 206);
	glVertex2f(-.87f,-.47f);
	glVertex2f(-.87f,-.53f);
	glVertex2f(-.82f,-.53f);
	glVertex2f(-.82f,-.47f);
	glEnd();

     glBegin(GL_QUADS);
	glColor3ub(41, 181, 206);
	glVertex2f(-.80f,-.47f);
	glVertex2f(-.80f,-.53f);
	glVertex2f(-.75f,-.53f);
	glVertex2f(-.75f,-.47f);
	glEnd();


     glBegin(GL_QUADS);
	glColor3ub(41, 181, 206);
	glVertex2f(-.73f,-.47f);
	glVertex2f(-.73f,-.53f);
	glVertex2f(-.68f,-.53f);
	glVertex2f(-.68f,-.47f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(41, 181, 206);
	glVertex2f(-.66f,-.47f);
	glVertex2f(-.66f,-.53f);
	glVertex2f(-.61f,-.53f);
	glVertex2f(-.61f,-.47f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(41, 181, 206);
	glVertex2f(-.59f,-.47f);
	glVertex2f(-.59f,-.53f);
	glVertex2f(-.51f,-.53f);
	glVertex2f(-.51f,-.47f);
	glEnd();
//body//
    glBegin(GL_QUADS);
	glColor3ub(135,206,235 );
	glVertex2f(-.9f,-.55f);
	glVertex2f(-.9f,-.65f);
	glVertex2f(-.5f,-.65);
	glVertex2f(-.5f,-.55f);
	glEnd();

//wheel
    glTranslatef(-.82f, -.65f, 0.0f);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3f(9, 9, 9 );
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.04;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }


	glEnd();
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3f(0, 0, 0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.02;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
	glEnd();

//Wheel 2
    glTranslatef(.25f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3f(16, 16, 15 );
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.04;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
	glEnd();
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3f(0, 0, 0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.02;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
	glEnd();
	glPopMatrix();

	//Car:

    glPushMatrix();
    glTranslatef(bus_position2,0.0f, 0.0f);

	glBegin(GL_QUADS);
	glColor3ub(128,0,0);
	glVertex2f(.93f,-.80f);
	glVertex2f(.58f,-.80f);
	glVertex2f(.53f,-.88f);
	glVertex2f(.94f,-.88f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3ub(138,43,226);
	glVertex2f(.61f,-.80f);
	glVertex2f(.90f,-.80f);
	glVertex2f(.87f,-.72f);
	glVertex2f(.69f,-.72f);
    glEnd();

    //window
    glBegin(GL_QUADS);
	glColor3ub(192,192,192);
	glVertex2f(.64f,-.80f);
	glVertex2f(.74f,-.80f);
	glVertex2f(.74f,-.73f);
	glVertex2f(.71f,-.73f);

	glEnd();

    glBegin(GL_QUADS);
	glColor3ub(192,192,192);
	glVertex2f(.77f,-.80f);
	glVertex2f(.88f,-.80f);
	glVertex2f(.85f,-.73f);
	glVertex2f(.77f,-.73f);

	glEnd();

	//wheel
    glTranslatef(.63f, -.89f, 0.0f);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3f(0, 0, 0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.04;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }


	glEnd();
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(16,16,15);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.02;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
	glEnd();

//Wheel 2
    glTranslatef(.25f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3f(0, 0, 0 );
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.04;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
	glEnd();
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3f(16,16,15);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.02;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
	glEnd();
	glPopMatrix();

	glFlush();
	glutSwapBuffers();
}

void night(){
	glLoadIdentity();

	float x, y;
	int i;
	GLfloat radius;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

    glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();
	glMatrixMode(GL_MODELVIEW);

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0 );
	glVertex2f(-1.0f,1.0f);
	glColor3ub(41, 21, 131 );
	glVertex2f(-1.0f,-1.0f);
	glColor3ub(0,0,0 );
	glVertex2f(1.0f,-1.0f);
	glColor3ub(42, 4, 69 );
	glVertex2f(1.0f,1.0f);
	glEnd();


	glPointSize(2);
	glBegin(GL_POINTS);
	glColor3f(1,1,1);
	glVertex2f(.9,.8); //virgo
	glVertex2f(.90,.73);
	glVertex2f(.73,.8);
	glVertex2f(.76,.84);
	glVertex2f(.62,.65);
	glVertex2f(.64,.8);
	glVertex2f(.57,.84);

	glVertex2f(.47,.98); //capricorn
	glVertex2f(.44,.75);
	glVertex2f(.46,.64);
	glVertex2f(.37,.77);
	glVertex2f(.32,.63);
	glVertex2f(.15,.7);
	glVertex2f(.2,.74);
	glVertex2f(.24,.77);
	glVertex2f(.2,.88);

	glVertex2f(.17,.96);//Leo
	glVertex2f(.1,.92);
	glVertex2f(.03,.83);
	glVertex2f(.08,.78);
	glVertex2f(.01,.81);
	glVertex2f(-.08,.65);
	glVertex2f(-.05,.6);
	glVertex2f(-.15,.53);
	glEnd();

	glTranslatef(-.7,0,0);
	glBegin(GL_POINTS);
	glVertex2f(.47,.98); //capricorn
	glVertex2f(.44,.75);
	glVertex2f(.46,.64);
	glVertex2f(.37,.77);
	glVertex2f(.32,.63);
	glVertex2f(.15,.7);
	glVertex2f(.2,.74);
	glVertex2f(.24,.77);
	glVertex2f(.2,.88);
	glEnd();
	glLoadIdentity();

	glTranslatef(-1.5,.1,0);
	glBegin(GL_POINTS);
	glColor3f(1,1,1);
	glVertex2f(.9,.8); //virgo
	glVertex2f(.77,.73);
	glVertex2f(.73,.8);
	glVertex2f(.76,.84);
	glVertex2f(.62,.65);
	glVertex2f(.64,.8);
	glVertex2f(.57,.84);
	glEnd();
	glLoadIdentity();

	glTranslatef(-1.0,-.4,0);
	glBegin(GL_POINTS);
	glColor3f(1,1,1);
	glVertex2f(.17,.96);//Leo
	glVertex2f(.1,.92);
	glVertex2f(.03,.83);
	glVertex2f(.08,.78);
	glVertex2f(.01,.81);
	glVertex2f(-.08,.65);
	glVertex2f(-.05,.6);
	glVertex2f(-.15,.53);
	glEnd();
	glLoadIdentity();

	//moon
		glBegin(GL_TRIANGLE_FAN);
		glColor3ub(202, 202, 202);
        x=.3f; y=.75f; radius =.1f;

	//GLfloat radius = 0.8f; //radius
	twicePi = 2.0f * PI;

				glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}

	glEnd();


	glPushMatrix();
    glTranslatef(cloud_position1,0.0f, 0.0f);

	//cloud 01 starts
	x=-.78f;
	y=.7f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(8, 8, 8);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.7f;
	y=.77f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(8, 8, 8);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.64f;
	y=.85f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
       glColor3ub(8, 8, 8);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.68f;
	y=.71f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
       glColor3ub(8, 8, 8);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.6f;
	y=.75f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
       glColor3ub(8, 8, 8);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.55f;
	y=.8f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(8, 8, 8);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	glTranslatef(0.7f, 0.07f, 0.0f);
	x=-.78f;
	y=.7f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(8, 8, 8);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.7f;
	y=.77f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
       glColor3ub(8, 8, 8);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.64f;
	y=.85f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(8, 8, 8);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.68f;
	y=.71f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(8, 8, 8);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.6f;
	y=.75f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(8, 8, 8);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.55f;
	y=.8f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(8, 8, 8);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glLoadIdentity();
 glPopMatrix();

	    	//buildings

	//building 1
	glPushMatrix();
    glBegin(GL_QUADS);
	glColor3ub(95,158,160);
	glVertex2f(-0.2f,-0.23f);
	glVertex2f(-0.2f,0.50f);
	glVertex2f(-0.05f,0.50f);
	glVertex2f(-0.05f,-0.23f);
	glEnd();

    glBegin(GL_QUADS);
	glVertex2f(-0.19f,.50f);
	glVertex2f(-0.19f,.65f);
	glVertex2f(-0.06f,.65f);
	glVertex2f(-0.06f,.50f);
	glEnd();

    glBegin(GL_QUADS);
	glVertex2f(-0.18f,.65f);
	glVertex2f(-0.18f,.75f);
	glVertex2f(-0.07f,.75f);
	glVertex2f(-0.07f,.65f);
	glEnd();

    glBegin(GL_QUADS);
	glVertex2f(-0.16f,.75f);
	glVertex2f(-0.16f,.80f);
	glVertex2f(-0.09f,.80f);
	glVertex2f(-0.09f,.75f);
	glEnd();

    glBegin(GL_QUADS);
	glVertex2f(-0.13f,.80f);
	glVertex2f(-0.13f,.90f);
	glVertex2f(-0.12f,.90f);
	glVertex2f(-0.12f,.80f);
	glEnd();
	//windows
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(-0.12f,.76f);
	glVertex2f(-0.12f,.79f);
	glVertex2f(-0.13f,.79f);
	glVertex2f(-0.13f,.76f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(-0.12f,.66f);
	glVertex2f(-0.12f,.74f);
	glVertex2f(-0.13f,.74f);
	glVertex2f(-0.13f,.66f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(-0.12f,.63f);
	glVertex2f(-0.12f,.58f);
	glVertex2f(-0.13f,.58f);
	glVertex2f(-0.13f,.63f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(-0.12f,.56f);
	glVertex2f(-0.12f,.51f);
	glVertex2f(-0.13f,.51f);
	glVertex2f(-0.13f,.56f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(-0.12f,.49f);
	glVertex2f(-0.12f,.41f);
	glVertex2f(-0.13f,.41f);
	glVertex2f(-0.13f,.49f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(-0.12f,.39f);
	glVertex2f(-0.12f,.31f);
	glVertex2f(-0.13f,.31f);
	glVertex2f(-0.13f,.39f);
	glEnd();
	glBegin(GL_QUADS);
	glVertex2f(-0.12f,.29f);
	glVertex2f(-0.12f,.21f);
	glVertex2f(-0.13f,.21f);
	glVertex2f(-0.13f,.29f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(-0.12f,.19f);
	glVertex2f(-0.12f,.11f);
	glVertex2f(-0.13f,.11f);
	glVertex2f(-0.13f,.19f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(-0.12f,.09f);
	glVertex2f(-0.12f,.01f);
	glVertex2f(-0.13f,.01f);
	glVertex2f(-0.13f,.09f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(-0.12f,-.09f);
	glVertex2f(-0.12f,-.01f);
	glVertex2f(-0.13f,-.01f);
	glVertex2f(-0.13f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(-0.12f,-.19f);
	glVertex2f(-0.12f,-.11f);
	glVertex2f(-0.13f,-.11f);
	glVertex2f(-0.13f,-.19f);
	glEnd();

//building 2
    glBegin(GL_QUADS);
	glColor3ub(95,158,160 );
	glVertex2f(0.2f,-.23f);
	glVertex2f(0.2f,.50f);
	glVertex2f(0.05f,.50f);
	glVertex2f(0.05f,-.23f);
	glEnd();

    glBegin(GL_QUADS);
	glVertex2f(0.19f,.50f);
	glVertex2f(0.19f,.65f);
	glVertex2f(0.06f,.65f);
	glVertex2f(0.06f,.50f);
	glEnd();

    glBegin(GL_QUADS);
	glVertex2f(0.18f,.65f);
	glVertex2f(0.18f,.75f);
	glVertex2f(0.07f,.75f);
	glVertex2f(0.07f,.65f);
	glEnd();

    glBegin(GL_QUADS);
	glVertex2f(0.16f,.75f);
	glVertex2f(0.16f,.80f);
	glVertex2f(0.09f,.80f);
	glVertex2f(0.09f,.75f);
	glEnd();

    glBegin(GL_QUADS);
	glVertex2f(0.13f,.80f);
	glVertex2f(0.13f,.90f);
	glVertex2f(0.12f,.90f);
	glVertex2f(0.12f,.80f);
	glEnd();
    //window building2
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19);
	glVertex2f(0.12f,.76f);
	glVertex2f(0.12f,.79f);
	glVertex2f(0.13f,.79f);
	glVertex2f(0.13f,.76f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(0.12f,.66f);
	glVertex2f(0.12f,.74f);
	glVertex2f(0.13f,.74f);
	glVertex2f(0.13f,.66f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(0.12f,.63f);
	glVertex2f(0.12f,.58f);
	glVertex2f(0.13f,.58f);
	glVertex2f(0.13f,.63f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(0.12f,.56f);
	glVertex2f(0.12f,.51f);
	glVertex2f(0.13f,.51f);
	glVertex2f(0.13f,.56f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(0.12f,.49f);
	glVertex2f(0.12f,.41f);
	glVertex2f(0.13f,.41f);
	glVertex2f(0.13f,.49f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(0.12f,.39f);
	glVertex2f(0.12f,.31f);
	glVertex2f(0.13f,.31f);
	glVertex2f(0.13f,.39f);
	glEnd();
	glBegin(GL_QUADS);
	glVertex2f(0.12f,.29f);
	glVertex2f(0.12f,.21f);
	glVertex2f(0.13f,.21f);
	glVertex2f(0.13f,.29f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(0.12f,.19f);
	glVertex2f(0.12f,.11f);
	glVertex2f(0.13f,.11f);
	glVertex2f(0.13f,.19f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(0.12f,.09f);
	glVertex2f(0.12f,.01f);
	glVertex2f(0.13f,.01f);
	glVertex2f(0.13f,.09f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(0.12f,-.09f);
	glVertex2f(0.12f,-.01f);
	glVertex2f(0.13f,-.01f);
	glVertex2f(0.13f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(0.12f,-.19f);
	glVertex2f(0.12f,-.11f);
	glVertex2f(0.13f,-.11f);
	glVertex2f(0.13f,-.19f);
	glEnd();

	//join
    glBegin(GL_LINES);
	glColor3ub(0.0,0.0,0.0);
	glVertex2f(0.05f,.32f);
	glVertex2f(-0.05f,.32f);
	glEnd();

    glBegin(GL_LINES);
	glColor3ub(0.0,0.0,0.0);
	glVertex2f(-0.05f,.32f);
	glVertex2f(-0.02f,.26f);
	glEnd();

    glBegin(GL_LINES);
	glColor3ub(0.0,0.0,0.0);
	glVertex2f(-0.02f,.26f);
	glVertex2f(0.0f,.32f);
	glEnd();

    glBegin(GL_LINES);
	glColor3ub(0.0,0.0,0.0);
	glVertex2f(0.0f,.32f);
	glVertex2f(0.02f,.26f);
	glEnd();

    glBegin(GL_LINES);
	glColor3ub(0.0,0.0,0.0);
	glVertex2f(0.02f,.26f);
	glVertex2f(0.05f,.32f);
	glEnd();

    glBegin(GL_LINES);
	glColor3ub(0.0,0.0,0.0);
	glVertex2f(-0.05f,.26f);
	glVertex2f(-0.02f,.32f);
	glEnd();

    glBegin(GL_LINES);
	glColor3ub(0.0,0.0,0.0);
	glVertex2f(-0.02f,.32f);
	glVertex2f(0.0f,.26f);
	glEnd();

    glBegin(GL_LINES);
	glColor3ub(0.0,0.0,0.0);
	glVertex2f(0.0f,.26f);
	glVertex2f(0.02f,.32f);
	glEnd();

    glBegin(GL_LINES);
	glColor3ub(0.0,0.0,0.0);
	glVertex2f(0.02f,.32f);
	glVertex2f(0.05f,.26f);
	glEnd();

    glBegin(GL_LINES);
	glColor3ub(0.0,0.0,0.0);
	glVertex2f(0.05f,.26f);
	glVertex2f(-0.05f,.26f);
	glEnd();



	//building3
    glBegin(GL_QUADS);
	glColor3ub(0,100,0);
	glVertex2f(0.98f,-.23f);
	glVertex2f(0.87f,-.23f);
    glVertex2f(0.87f,.79f);
	glVertex2f(0.98f,.79f);
	glEnd();
	//building3 window
	glPushMatrix();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19);
	glVertex2f(0.88f,.75f);
	glVertex2f(0.915f,.75f);
    glVertex2f(0.915f,.71f);
	glVertex2f(0.88f,.71f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(0.88f,.65f);
	glVertex2f(0.915f,.65f);
    glVertex2f(0.915f,.61f);
	glVertex2f(0.88f,.61f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(0.88f,.55f);
	glVertex2f(0.915f,.55f);
    glVertex2f(0.915f,.51f);
	glVertex2f(0.88f,.51f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(0.88f,.45f);
	glVertex2f(0.915f,.45f);
    glVertex2f(0.915f,.41f);
	glVertex2f(0.88f,.41f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(0.88f,.35f);
	glVertex2f(0.915f,.35f);
    glVertex2f(0.915f,.31f);
	glVertex2f(0.88f,.31f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(0.88f,.25f);
	glVertex2f(0.915f,.25f);
    glVertex2f(0.915f,.21f);
	glVertex2f(0.88f,.21f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(0.88f,.15f);
	glVertex2f(0.915f,.15f);
    glVertex2f(0.915f,.11f);
	glVertex2f(0.88f,.11f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(0.88f,.05f);
	glVertex2f(0.915f,.05f);
    glVertex2f(0.915f,.01f);
	glVertex2f(0.88f,.01f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(0.88f,-.05f);
	glVertex2f(0.915f,-.05f);
    glVertex2f(0.915f,-.09f);
	glVertex2f(0.88f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(0.88f,-.15f);
	glVertex2f(0.915f,-.15f);
    glVertex2f(0.915f,-.19f);
	glVertex2f(0.88f,-.19f);
	glEnd();

    //second row
    glBegin(GL_QUADS);
	glVertex2f(0.935f,.75f);
	glVertex2f(0.97f,.75f);
    glVertex2f(0.97f,.71f);
	glVertex2f(0.935f,.71f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(0.935f,.65f);
	glVertex2f(0.97f,.65f);
    glVertex2f(0.97f,.61f);
	glVertex2f(0.935f,.61f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(0.935f,.55f);
	glVertex2f(0.97f,.55f);
    glVertex2f(0.97f,.51f);
	glVertex2f(0.935f,.51f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(0.935f,.45f);
	glVertex2f(0.97f,.45f);
    glVertex2f(0.97f,.41f);
	glVertex2f(0.935f,.41f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(0.935f,.35f);
	glVertex2f(0.97f,.35f);
    glVertex2f(0.97f,.31f);
	glVertex2f(0.935f,.31f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(0.935f,.25f);
	glVertex2f(0.97f,.25f);
    glVertex2f(0.97f,.21f);
	glVertex2f(0.935f,.21f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(0.935f,.15f);
	glVertex2f(0.97f,.15f);
    glVertex2f(0.97f,.11f);
	glVertex2f(0.935f,.11f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(0.935f,.05f);
	glVertex2f(0.97f,.05f);
    glVertex2f(0.97f,.01f);
	glVertex2f(0.935f,.01f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(0.935f,-.05f);
	glVertex2f(0.97f,-.05f);
    glVertex2f(0.97f,-.09f);
	glVertex2f(0.935f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(0.935f,-.15f);
	glVertex2f(0.97f,-.15f);
    glVertex2f(0.97f,-.19f);
	glVertex2f(0.935f,-.19f);
	glEnd();
	glPopMatrix();

	//building4
    glBegin(GL_QUADS);
	glColor3ub(160,82,45);
	glVertex2f(0.82f,-.23f);
	glVertex2f(0.71f,-.23f);
    glVertex2f(0.71f,.48f);
	glVertex2f(0.82f,.48f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(160,82,45 );
	glVertex2f(0.81f,.45f);
	glVertex2f(0.72f,.45f);
    glVertex2f(0.72f,.52f);
	glVertex2f(0.81f,.52f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(160,82,45);
	glVertex2f(0.80f,.52f);
	glVertex2f(0.73f,.52f);
    glVertex2f(0.73f,.59f);
	glVertex2f(0.80f,.59f);
	glEnd();
	//building4 windows
	//middle
	    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(0.76f,.57f);
	glVertex2f(0.77f,.57f);
    glVertex2f(0.77f,.51f);
	glVertex2f(0.76f,.51f);
	glEnd();
	    glBegin(GL_QUADS);
	glVertex2f(0.76f,.47f);
	glVertex2f(0.77f,.47f);
    glVertex2f(0.77f,.41f);
	glVertex2f(0.76f,.41f);
	glEnd();
	    glBegin(GL_QUADS);
	glVertex2f(0.76f,.37f);
	glVertex2f(0.77f,.37f);
    glVertex2f(0.77f,.31f);
	glVertex2f(0.76f,.31f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(0.76f,.27f);
	glVertex2f(0.77f,.27f);
    glVertex2f(0.77f,.21f);
	glVertex2f(0.76f,.21f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(0.76f,.17f);
	glVertex2f(0.77f,.17f);
    glVertex2f(0.77f,.11f);
	glVertex2f(0.76f,.11f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(0.76f,.07f);
	glVertex2f(0.77f,.07f);
    glVertex2f(0.77f,.01);
	glVertex2f(0.76f,.01f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(0.76f,-.03f);
	glVertex2f(0.77f,-.03f);
    glVertex2f(0.77f,-.09f);
	glVertex2f(0.76f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(0.76f,-.13f);
	glVertex2f(0.77f,-.13f);
    glVertex2f(0.77f,-.19f);
	glVertex2f(0.76f,-.19f);
	glEnd();
	//first row
    glBegin(GL_QUADS);
	glVertex2f(0.72,.46f);
	glVertex2f(0.75,.46f);
    glVertex2f(0.75,.42f);
	glVertex2f(0.72,.42f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(0.72,.36f);
	glVertex2f(0.75,.36f);
    glVertex2f(0.75,.32f);
	glVertex2f(0.72,.32f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(0.72,.26f);
	glVertex2f(0.75,.26f);
    glVertex2f(0.75,.22f);
	glVertex2f(0.72,.22f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(0.72,.16f);
	glVertex2f(0.75,.16f);
    glVertex2f(0.75,.12f);
	glVertex2f(0.72,.12f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(0.72,.06f);
	glVertex2f(0.75,.06f);
    glVertex2f(0.75,.02f);
	glVertex2f(0.72,.02f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(0.72,-.04f);
	glVertex2f(0.75,-.04f);
    glVertex2f(0.75,-.08f);
	glVertex2f(0.72,-.08f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(0.72,-.14f);
	glVertex2f(0.75,-.14f);
    glVertex2f(0.75,-.18f);
	glVertex2f(0.72,-.18f);
	glEnd();
	//second row
	 glBegin(GL_QUADS);
	glVertex2f(0.81,.46f);
	glVertex2f(0.78,.46f);
    glVertex2f(0.78,.42f);
	glVertex2f(0.81,.42f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(0.81,.36f);
	glVertex2f(0.78,.36f);
    glVertex2f(0.78,.32f);
	glVertex2f(0.81,.32f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(0.81,.26f);
	glVertex2f(0.78,.26f);
    glVertex2f(0.78,.22f);
	glVertex2f(0.81,.22f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(0.81,.16f);
	glVertex2f(0.78,.16f);
    glVertex2f(0.78,.12f);
	glVertex2f(0.81,.12f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(0.81,.06f);
	glVertex2f(0.78,.06f);
    glVertex2f(0.78,.02f);
	glVertex2f(0.81,.02f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(0.81,-.04f);
	glVertex2f(0.78,-.04f);
    glVertex2f(0.78,-.08f);
	glVertex2f(0.81,-.08f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(0.81,-.14f);
	glVertex2f(0.78,-.14f);
    glVertex2f(0.78,-.18f);
	glVertex2f(0.81,-.18f);
	glEnd();

	//building5
    glBegin(GL_QUADS);
	glColor3ub(72,61,139 );
	glVertex2f(0.67f,-.23f);
	glVertex2f(0.53f,-.23f);
    glVertex2f(0.53f,.30f);//30
	glVertex2f(0.67f,.30f);
	glEnd();
	//building5 window
    //first window
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(0.66f,.27f);
	glVertex2f(0.65f,.27f);
    glVertex2f(0.65f,.21f);
	glVertex2f(0.66f,.21f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(0.66f,.17f);
	glVertex2f(0.65f,.17f);
    glVertex2f(0.65f,.11f);
	glVertex2f(0.66f,.11f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(0.66f,.07f);
	glVertex2f(0.65f,.07f);
    glVertex2f(0.65f,.01);
	glVertex2f(0.66f,.01f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(0.66f,-.03f);
	glVertex2f(0.65f,-.03f);
    glVertex2f(0.65f,-.09f);
	glVertex2f(0.66f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(0.66f,-.13f);
	glVertex2f(0.65f,-.13f);
    glVertex2f(0.65f,-.19f);
	glVertex2f(0.66f,-.19f);
	glEnd();
    //second window
    glBegin(GL_QUADS);
	glVertex2f(0.61f,.27f);
	glVertex2f(0.60f,.27f);
    glVertex2f(0.60f,.21f);
	glVertex2f(0.61f,.21f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(0.61f,.17f);
	glVertex2f(0.60f,.17f);
    glVertex2f(0.60f,.11f);
	glVertex2f(0.61f,.11f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(0.61f,.07f);
	glVertex2f(0.60f,.07f);
    glVertex2f(0.60f,.01);
	glVertex2f(0.61f,.01f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(0.61f,-.03f);
	glVertex2f(0.60f,-.03f);
    glVertex2f(0.60f,-.09f);
	glVertex2f(0.61f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(0.61f,-.13f);
	glVertex2f(0.60f,-.13f);
    glVertex2f(0.60f,-.19f);
	glVertex2f(0.61f,-.19f);
	glEnd();
    //third window
    glBegin(GL_QUADS);
	glVertex2f(0.54f,.27f);
	glVertex2f(0.55f,.27f);
    glVertex2f(0.55f,.21f);
	glVertex2f(0.54f,.21f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(0.54f,.17f);
	glVertex2f(0.55f,.17f);
    glVertex2f(0.55f,.11f);
	glVertex2f(0.54f,.11f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(0.54f,.07f);
	glVertex2f(0.55f,.07f);
    glVertex2f(0.55f,.01);
	glVertex2f(0.54f,.01f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(0.54f,-.03f);
	glVertex2f(0.55f,-.03f);
    glVertex2f(0.55f,-.09f);
	glVertex2f(0.54f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(0.54f,-.13f);
	glVertex2f(0.55f,-.13f);
    glVertex2f(0.55f,-.19f);
	glVertex2f(0.54f,-.19f);
	glEnd();


	//building6
    glBegin(GL_QUADS);
	glColor3ub(0,100,0 );
	glVertex2f(0.465,-.23f);
	glVertex2f(0.27,-.23f);
    glVertex2f(0.27,.20);
	glVertex2f(0.465,.20);
	glEnd();

	//building6 windows
	glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(0.45,.17f);
	glVertex2f(0.42,.17f);
    glVertex2f(0.42,.13);
	glVertex2f(0.45,.13);
	glEnd();

    glBegin(GL_QUADS);
	glVertex2f(0.45,.07f);
	glVertex2f(0.42,.07f);
    glVertex2f(0.42,.03);
	glVertex2f(0.45,.03);
	glEnd();

    glBegin(GL_QUADS);
	glVertex2f(0.45,-.03f);
	glVertex2f(0.42,-.03f);
    glVertex2f(0.42,-.07);
	glVertex2f(0.45,-.07);
	glEnd();

    glBegin(GL_QUADS);
	glVertex2f(0.45,-.13f);
	glVertex2f(0.42,-.13f);
    glVertex2f(0.42,-.17);
	glVertex2f(0.45,-.17);
	glEnd();

	//second row

    glBegin(GL_QUADS);
	glVertex2f(0.285,.17f);
	glVertex2f(0.315,.17f);
    glVertex2f(0.315,.13);
	glVertex2f(0.285,.13);
	glEnd();

    glBegin(GL_QUADS);
	glVertex2f(0.285,.07f);
	glVertex2f(0.315,.07f);
    glVertex2f(0.315,.03);
	glVertex2f(0.285,.03);
	glEnd();

    glBegin(GL_QUADS);
	glVertex2f(0.285,-.03f);
	glVertex2f(0.315,-.03f);
    glVertex2f(0.315,-.07);
	glVertex2f(0.285,-.07);
	glEnd();

    glBegin(GL_QUADS);
	glVertex2f(0.285,-.13f);
	glVertex2f(0.315,-.13f);
    glVertex2f(0.315,-.17);
	glVertex2f(0.285,-.17);
	glEnd();
	//building6 middle window
    glBegin(GL_QUADS);
	glVertex2f(0.36f,-.18f);
	glVertex2f(0.36f,-.12f);
	glVertex2f(0.37f,-.12f);
	glVertex2f(0.37f,-.18f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(0.36f,-.08f);
	glVertex2f(0.36f,-.02f);
	glVertex2f(0.37f,-.02f);
	glVertex2f(0.37f,-.08f);
	glEnd();
	glBegin(GL_QUADS);
	glVertex2f(0.36f,.08f);
	glVertex2f(0.36f,.02f);
	glVertex2f(0.37f,.02f);
	glVertex2f(0.37f,.08f);
	glEnd();
	glBegin(GL_QUADS);
	glVertex2f(0.36f,.18f);
	glVertex2f(0.36f,.12f);
	glVertex2f(0.37f,.12f);
	glVertex2f(0.37f,.18f);
	glEnd();
	////////////////////reverse building
	//building3
    glBegin(GL_QUADS);
	glColor3ub(128,0,0 );
	glVertex2f(-0.98f,-.23f);
	glVertex2f(-0.87f,-.23f);
    glVertex2f(-0.87f,.79f);
	glVertex2f(-0.98f,.79f);
	glEnd();
	//building3 window
	glPushMatrix();
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(-0.88f,.75f);
	glVertex2f(-0.915f,.75f);
    glVertex2f(-0.915f,.71f);
	glVertex2f(-0.88f,.71f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(-0.88f,.65f);
	glVertex2f(-0.915f,.65f);
    glVertex2f(-0.915f,.61f);
	glVertex2f(-0.88f,.61f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(-0.88f,.55f);
	glVertex2f(-0.915f,.55f);
    glVertex2f(-0.915f,.51f);
	glVertex2f(-0.88f,.51f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(-0.88f,.45f);
	glVertex2f(-0.915f,.45f);
    glVertex2f(-0.915f,.41f);
	glVertex2f(-0.88f,.41f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(-0.88f,.35f);
	glVertex2f(-0.915f,.35f);
    glVertex2f(-0.915f,.31f);
	glVertex2f(-0.88f,.31f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(-0.88f,.25f);
	glVertex2f(-0.915f,.25f);
    glVertex2f(-0.915f,.21f);
	glVertex2f(-0.88f,.21f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(-0.88f,.15f);
	glVertex2f(-0.915f,.15f);
    glVertex2f(-0.915f,.11f);
	glVertex2f(-0.88f,.11f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(-0.88f,.05f);
	glVertex2f(-0.915f,.05f);
    glVertex2f(-0.915f,.01f);
	glVertex2f(-0.88f,.01f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(-0.88f,-.05f);
	glVertex2f(-0.915f,-.05f);
    glVertex2f(-0.915f,-.09f);
	glVertex2f(-0.88f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(-0.88f,-.15f);
	glVertex2f(-0.915f,-.15f);
    glVertex2f(-0.915f,-.19f);
	glVertex2f(-0.88f,-.19f);
	glEnd();

    //second row
    glBegin(GL_QUADS);
	glVertex2f(-0.935f,.75f);
	glVertex2f(-0.97f,.75f);
    glVertex2f(-0.97f,.71f);
	glVertex2f(-0.935f,.71f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(-0.935f,.65f);
	glVertex2f(-0.97f,.65f);
    glVertex2f(-0.97f,.61f);
	glVertex2f(-0.935f,.61f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(-0.935f,.55f);
	glVertex2f(-0.97f,.55f);
    glVertex2f(-0.97f,.51f);
	glVertex2f(-0.935f,.51f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(-0.935f,.45f);
	glVertex2f(-0.97f,.45f);
    glVertex2f(-0.97f,.41f);
	glVertex2f(-0.935f,.41f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(-0.935f,.35f);
	glVertex2f(-0.97f,.35f);
    glVertex2f(-0.97f,.31f);
	glVertex2f(-0.935f,.31f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(-0.935f,.25f);
	glVertex2f(-0.97f,.25f);
    glVertex2f(-0.97f,.21f);
	glVertex2f(-0.935f,.21f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(-0.935f,.15f);
	glVertex2f(-0.97f,.15f);
    glVertex2f(-0.97f,.11f);
	glVertex2f(-0.935f,.11f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(-0.935f,.05f);
	glVertex2f(-0.97f,.05f);
    glVertex2f(-0.97f,.01f);
	glVertex2f(-0.935f,.01f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(-0.935f,-.05f);
	glVertex2f(-0.97f,-.05f);
    glVertex2f(-0.97f,-.09f);
	glVertex2f(-0.935f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(-0.935f,-.15f);
	glVertex2f(-0.97f,-.15f);
    glVertex2f(-0.97f,-.19f);
	glVertex2f(-0.935f,-.19f);
	glEnd();
	glPopMatrix();

	//building4
    glBegin(GL_QUADS);
	glColor3ub(0,128,128 );
	glVertex2f(-0.82f,-.23f);
	glVertex2f(-0.71f,-.23f);
    glVertex2f(-0.71f,.48f);
	glVertex2f(-0.82f,.48f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(0,128,128);
	glVertex2f(-0.81f,.45f);
	glVertex2f(-0.72f,.45f);
    glVertex2f(-0.72f,.52f);
	glVertex2f(-0.81f,.52f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(0,128,128 );
	glVertex2f(-0.80f,.52f);
	glVertex2f(-0.73f,.52f);
    glVertex2f(-0.73f,.59f);
	glVertex2f(-0.80f,.59f);
	glEnd();
	//building4 windows
	//middle
	    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19);
	glVertex2f(-0.76f,.57f);
	glVertex2f(-0.77f,.57f);
    glVertex2f(-0.77f,.51f);
	glVertex2f(-0.76f,.51f);
	glEnd();
	    glBegin(GL_QUADS);
	glVertex2f(-0.76f,.47f);
	glVertex2f(-0.77f,.47f);
    glVertex2f(-0.77f,.41f);
	glVertex2f(-0.76f,.41f);
	glEnd();
	    glBegin(GL_QUADS);
	glVertex2f(-0.76f,.37f);
	glVertex2f(-0.77f,.37f);
    glVertex2f(-0.77f,.31f);
	glVertex2f(-0.76f,.31f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(-0.76f,.27f);
	glVertex2f(-0.77f,.27f);
    glVertex2f(-0.77f,.21f);
	glVertex2f(-0.76f,.21f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(-0.76f,.17f);
	glVertex2f(-0.77f,.17f);
    glVertex2f(-0.77f,.11f);
	glVertex2f(-0.76f,.11f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(-0.76f,.07f);
	glVertex2f(-0.77f,.07f);
    glVertex2f(-0.77f,.01);
	glVertex2f(-0.76f,.01f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(-0.76f,-.03f);
	glVertex2f(-0.77f,-.03f);
    glVertex2f(-0.77f,-.09f);
	glVertex2f(-0.76f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(-0.76f,-.13f);
	glVertex2f(-0.77f,-.13f);
    glVertex2f(-0.77f,-.19f);
	glVertex2f(-0.76f,-.19f);
	glEnd();
	//first row
    glBegin(GL_QUADS);
	glVertex2f(-0.72,.46f);
	glVertex2f(-0.75,.46f);
    glVertex2f(-0.75,.42f);
	glVertex2f(-0.72,.42f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(-0.72,.36f);
	glVertex2f(-0.75,.36f);
    glVertex2f(-0.75,.32f);
	glVertex2f(-0.72,.32f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(-0.72,.26f);
	glVertex2f(-0.75,.26f);
    glVertex2f(-0.75,.22f);
	glVertex2f(-0.72,.22f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(-0.72,.16f);
	glVertex2f(-0.75,.16f);
    glVertex2f(-0.75,.12f);
	glVertex2f(-0.72,.12f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(-0.72,.06f);
	glVertex2f(-0.75,.06f);
    glVertex2f(-0.75,.02f);
	glVertex2f(-0.72,.02f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(-0.72,-.04f);
	glVertex2f(-0.75,-.04f);
    glVertex2f(-0.75,-.08f);
	glVertex2f(-0.72,-.08f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(-0.72,-.14f);
	glVertex2f(-0.75,-.14f);
    glVertex2f(-0.75,-.18f);
	glVertex2f(-0.72,-.18f);
	glEnd();
	//second row
	 glBegin(GL_QUADS);
	glVertex2f(-0.81,.46f);
	glVertex2f(-0.78,.46f);
    glVertex2f(-0.78,.42f);
	glVertex2f(-0.81,.42f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(-0.81,.36f);
	glVertex2f(-0.78,.36f);
    glVertex2f(-0.78,.32f);
	glVertex2f(-0.81,.32f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(-0.81,.26f);
	glVertex2f(-0.78,.26f);
    glVertex2f(-0.78,.22f);
	glVertex2f(-0.81,.22f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(-0.81,.16f);
	glVertex2f(-0.78,.16f);
    glVertex2f(-0.78,.12f);
	glVertex2f(-0.81,.12f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(-0.81,.06f);
	glVertex2f(-0.78,.06f);
    glVertex2f(-0.78,.02f);
	glVertex2f(-0.81,.02f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(-0.81,-.04f);
	glVertex2f(-0.78,-.04f);
    glVertex2f(-0.78,-.08f);
	glVertex2f(-0.81,-.08f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(-0.81,-.14f);
	glVertex2f(-0.78,-.14f);
    glVertex2f(-0.78,-.18f);
	glVertex2f(-0.81,-.18f);
	glEnd();

	//building5
    glBegin(GL_QUADS);
	glColor3ub(139,0,139 );
	glVertex2f(-0.67f,-.23f);
	glVertex2f(-0.53f,-.23f);
    glVertex2f(-0.53f,.30f);
	glVertex2f(-0.67f,.30f);
	glEnd();

	//building5 window
    //first window
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19 );
	glVertex2f(-0.66f,.27f);
	glVertex2f(-0.65f,.27f);
    glVertex2f(-0.65f,.21f);
	glVertex2f(-0.66f,.21f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(-0.66f,.17f);
	glVertex2f(-0.65f,.17f);
    glVertex2f(-0.65f,.11f);
	glVertex2f(-0.66f,.11f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(-0.66f,.07f);
	glVertex2f(-0.65f,.07f);
    glVertex2f(-0.65f,.01);
	glVertex2f(-0.66f,.01f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(-0.66f,-.03f);
	glVertex2f(-0.65f,-.03f);
    glVertex2f(-0.65f,-.09f);
	glVertex2f(-0.66f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(-0.66f,-.13f);
	glVertex2f(-0.65f,-.13f);
    glVertex2f(-0.65f,-.19f);
	glVertex2f(-0.66f,-.19f);
	glEnd();
    //second window
    glBegin(GL_QUADS);
	glVertex2f(-0.61f,.27f);
	glVertex2f(-0.60f,.27f);
    glVertex2f(-0.60f,.21f);
	glVertex2f(-0.61f,.21f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(-0.61f,.17f);
	glVertex2f(-0.60f,.17f);
    glVertex2f(-0.60f,.11f);
	glVertex2f(-0.61f,.11f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(-0.61f,.07f);
	glVertex2f(-0.60f,.07f);
    glVertex2f(-0.60f,.01);
	glVertex2f(-0.61f,.01f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(-0.61f,-.03f);
	glVertex2f(-0.60f,-.03f);
    glVertex2f(-0.60f,-.09f);
	glVertex2f(-0.61f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(-0.61f,-.13f);
	glVertex2f(-0.60f,-.13f);
    glVertex2f(-0.60f,-.19f);
	glVertex2f(-0.61f,-.19f);
	glEnd();
    //third window
    glBegin(GL_QUADS);
	glVertex2f(-0.54f,.27f);
	glVertex2f(-0.55f,.27f);
    glVertex2f(-0.55f,.21f);
	glVertex2f(-0.54f,.21f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(-0.54f,.17f);
	glVertex2f(-0.55f,.17f);
    glVertex2f(-0.55f,.11f);
	glVertex2f(-0.54f,.11f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(-0.54f,.07f);
	glVertex2f(-0.55f,.07f);
    glVertex2f(-0.55f,.01);
	glVertex2f(-0.54f,.01f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(-0.54f,-.03f);
	glVertex2f(-0.55f,-.03f);
    glVertex2f(-0.55f,-.09f);
	glVertex2f(-0.54f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(-0.54f,-.13f);
	glVertex2f(-0.55f,-.13f);
    glVertex2f(-0.55f,-.19f);
	glVertex2f(-0.54f,-.19f);
	glEnd();


	//building6
    glBegin(GL_QUADS);
	glColor3ub(75,0,130 );
	glVertex2f(-0.465,-.23f);
	glVertex2f(-0.27,-.23f);
    glVertex2f(-0.27,.20);
	glVertex2f(-0.465,.20);
	glEnd();

	//building6 windows
	glBegin(GL_QUADS);
	glColor3ub(217, 240, 19);
	glVertex2f(-0.45,.17f);
	glVertex2f(-0.42,.17f);
    glVertex2f(-0.42,.13);
	glVertex2f(-0.45,.13);
	glEnd();

    glBegin(GL_QUADS);
	glVertex2f(-0.45,.07f);
	glVertex2f(-0.42,.07f);
    glVertex2f(-0.42,.03);
	glVertex2f(-0.45,.03);
	glEnd();

    glBegin(GL_QUADS);
	glVertex2f(-0.45,-.03f);
	glVertex2f(-0.42,-.03f);
    glVertex2f(-0.42,-.07);
	glVertex2f(-0.45,-.07);
	glEnd();

    glBegin(GL_QUADS);
	glVertex2f(-0.45,-.13f);
	glVertex2f(-0.42,-.13f);
    glVertex2f(-0.42,-.17);
	glVertex2f(-0.45,-.17);
	glEnd();

	//second row

    glBegin(GL_QUADS);
	glVertex2f(-0.285,.17f);
	glVertex2f(-0.315,.17f);
    glVertex2f(-0.315,.13);
	glVertex2f(-0.285,.13);
	glEnd();

    glBegin(GL_QUADS);
	glVertex2f(-0.285,.07f);
	glVertex2f(-0.315,.07f);
    glVertex2f(-0.315,.03);
	glVertex2f(-0.285,.03);
	glEnd();

    glBegin(GL_QUADS);
	glVertex2f(-0.285,-.03f);
	glVertex2f(-0.315,-.03f);
    glVertex2f(-0.315,-.07);
	glVertex2f(-0.285,-.07);
	glEnd();

    glBegin(GL_QUADS);
	glVertex2f(-0.285,-.13f);
	glVertex2f(-0.315,-.13f);
    glVertex2f(-0.315,-.17);
	glVertex2f(-0.285,-.17);
	glEnd();
	//building6 middle
    glBegin(GL_QUADS);
	glVertex2f(-0.36f,-.18f);
	glVertex2f(-0.36f,-.12f);
	glVertex2f(-0.37f,-.12f);
	glVertex2f(-0.37f,-.18f);
	glEnd();
    glBegin(GL_QUADS);
	glVertex2f(-0.36f,-.08f);
	glVertex2f(-0.36f,-.02f);
	glVertex2f(-0.37f,-.02f);
	glVertex2f(-0.37f,-.08f);
	glEnd();
	glBegin(GL_QUADS);
	glVertex2f(-0.36f,.08f);
	glVertex2f(-0.36f,.02f);
	glVertex2f(-0.37f,.02f);
	glVertex2f(-0.37f,.08f);
	glEnd();
	glBegin(GL_QUADS);
	glVertex2f(-0.36f,.18f);
	glVertex2f(-0.36f,.12f);
	glVertex2f(-0.37f,.12f);
	glVertex2f(-0.37f,.18f);
	glEnd();


	//field
	glPushMatrix();
    glBegin(GL_QUADS);
	glColor3ub(73, 252, 0 );
    glVertex2f(-1.0f, -0.23f);
    glColor3ub(36, 198, 78 );
    glVertex2f(-1.0f, -0.32f);
    glColor3ub(8, 147, 44 );
    glVertex2f(1.0f, -0.32f);
    glColor3ub(54, 186, 60 );
    glVertex2f(1.0f, -0.23f);
    glEnd();
    glPopMatrix();

    //river
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(18, 118, 246);
	glVertex2f(-1.0f,-0.32f);
	glColor3ub(102, 163, 241);
	glVertex2f(-1.0f,-0.59f);
	glColor3ub(18, 118, 246 );
	glVertex2f(1.0f,-0.59f);
	glColor3ub(102, 222, 241);
	glVertex2f(1.0f,-0.32f);
	glEnd();
    glPopMatrix();

    //Water bus
    glPushMatrix();
    glTranslatef(ship_position2,0.0f, 0.0f);

	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
    glVertex2f(0.1f, -0.47f);
    glVertex2f(0.5f, -0.47f);
	glVertex2f(0.5f, -0.37f);
    glVertex2f(0.1f, -0.37f);
    glEnd();



    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(0.5f, -0.47f);
    glVertex2f(0.65f, -0.37f);
    glVertex2f(0.5f, -0.37f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(255,255,255);
    glVertex2f(0.16f, -0.37f);
    glVertex2f(0.42f, -0.37f);
    glVertex2f(0.42f, -0.27f);
    glVertex2f(0.16f, -0.27f);
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3ub(255,255,255);
    glVertex2f(0.42f, -0.27f);
    glVertex2f(0.42f, -0.37f);
    glVertex2f(0.52f, -0.37f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(255,255,255);
    glVertex2f(0.2f, -0.2f);
    glVertex2f(0.34f, -0.2f);
    glVertex2f(0.34f, -0.27f);
    glVertex2f(0.2f, -0.27f);
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3ub(255,255,255);
    glVertex2f(0.34f, -0.2f);
    glVertex2f(0.34f, -0.27f);
    glVertex2f(0.4f, -0.27f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(255,255,255);
    glVertex2f(0.22f, -0.12f);
    glVertex2f(0.29f, -0.12f);
    glVertex2f(0.29f, -0.2f);
    glVertex2f(0.22f, -0.2f);
    glEnd();

     glBegin(GL_TRIANGLES);
	glColor3ub(255,255,255);

    glVertex2f(0.29f, -0.12f);
    glVertex2f(0.29f, -0.2f);
    glVertex2f(0.32f, -0.2f);

    glEnd();
    //window
    glBegin(GL_QUADS);
	glColor3ub(217, 240, 19);
    glVertex2f(0.24f, -0.13f);
    glVertex2f(0.28f, -0.13f);
    glVertex2f(0.28f, -0.18f);
    glVertex2f(0.24f, -0.18f);
    glEnd();

    //second row
    glBegin(GL_QUADS);
    glVertex2f(0.22f, -0.21f);
    glVertex2f(0.26f, -0.21f);
    glVertex2f(0.26f, -0.26f);
    glVertex2f(0.22f, -0.26f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(0.28f, -0.21f);
    glVertex2f(0.32f, -0.21f);
    glVertex2f(0.32f, -0.26f);
    glVertex2f(0.28f, -0.26f);
    glEnd();

    //third row
    glBegin(GL_QUADS);
    glVertex2f(0.18f, -0.28f);
    glVertex2f(0.22f, -0.28f);
    glVertex2f(0.22f, -0.33f);
    glVertex2f(0.18f, -0.33f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(0.24f, -0.28f);
    glVertex2f(0.28f, -0.28f);
    glVertex2f(0.28f, -0.33f);
    glVertex2f(0.24f, -0.33f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(0.3f, -0.28f);
    glVertex2f(0.34f, -0.28f);
    glVertex2f(0.34f, -0.33f);
    glVertex2f(0.3f, -0.33f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(0.36f, -0.28f);
    glVertex2f(0.4f, -0.28f);
    glVertex2f(0.4f, -0.33f);
    glVertex2f(0.36f, -0.33f);
    glEnd();

    glPopMatrix();

    //lamppost

    glBegin(GL_QUADS);
	glColor3ub(1.0f,1.0f,1.0f);
    glVertex2f(-0.79f, -0.59f);
    glVertex2f(-0.81f, -0.59f);
    glVertex2f(-0.81f, -0.40f);
    glVertex2f(-0.79f, -0.40f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(217, 240, 19);
    glVertex2f(-0.83f, -0.40f);
    glVertex2f(-0.77f, -0.40f);
    glVertex2f(-0.76f, -0.38f);
    glVertex2f(-0.78f, -0.35f);
    glVertex2f(-0.82f, -0.35f);
    glVertex2f(-0.84f, -0.38f);
	glEnd();

 //traffic light
    glBegin(GL_QUADS);
	glColor3ub(1.0f,1.0f,1.0f);
    glVertex2f(-0.01f, -0.59f);
    glVertex2f(0.01f, -0.59f);
    glVertex2f(0.01f, -0.40f);
    glVertex2f(-0.01f, -0.40f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-0.05f, -0.40f);
    glVertex2f(0.05f, -0.40f);
    glVertex2f(0.05f, -0.15f);
    glVertex2f(-0.05f, -0.15f);
    glEnd();

    //Green
    glPushMatrix();
    glTranslated(0.00,-0.35,0.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(0,100,0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.03;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
	glEnd();
	glPopMatrix();

	//Yellow
	glPushMatrix();
    glTranslated(0.00,-0.27,0.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(255,255,0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.03;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
	glEnd();
	glPopMatrix();

	//Red
	glPushMatrix();
    glTranslated(0.00,-0.19,0.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(255,0,0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.03;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
	glEnd();
	glPopMatrix();


//lamppost3
    glBegin(GL_QUADS);
	glColor3ub(1.0f,1.0f,1.0f);
    glVertex2f(0.79f, -0.59f);
    glVertex2f(0.81f, -0.59f);
    glVertex2f(0.81f, -0.40f);
    glVertex2f(0.79f, -0.40f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(217, 240, 19);
    glVertex2f(0.83f, -0.40f);
    glVertex2f(0.77f, -0.40f);
    glVertex2f(0.76f, -0.38f);
    glVertex2f(0.78f, -0.35f);
    glVertex2f(0.82f, -0.35f);
    glVertex2f(0.84f, -0.38f);
    glEnd();


//Sideroad1
	glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(-1.0f,-.62f);
	glVertex2f(-1.0f,-.59f);
	glVertex2f(-.8f,-.59f);
	glVertex2f(-.8f,-.62f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(.0f,.0f,.0f);
	glVertex2f(-.8f,-.62f);
	glVertex2f(-.8f,-.59f);
	glVertex2f(-.6f,-.59f);
	glVertex2f(-.6f,-.62f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(-.6f,-.62f);
	glVertex2f(-.6f,-.59f);
	glVertex2f(-.4f,-.59f);
	glVertex2f(-.4f,-.62f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(.0f,.0f,.0f);
	glVertex2f(-.4f,-.62f);
	glVertex2f(-.4f,-.59f);
	glVertex2f(-.2f,-.59f);
	glVertex2f(-.2f,-.62f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(-.2f,-.62f);
	glVertex2f(-.2f,-.59f);
	glVertex2f(0.0f,-.59f);
	glVertex2f(0.0f,-.62f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(.0f,.0f,.0f);
	glVertex2f(0.0f,-.62f);
	glVertex2f(0.0f,-.59f);
	glVertex2f(0.2f,-.59f);
	glVertex2f(0.2f,-.62f);
	glEnd();



	glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(.2f,-.62f);
	glVertex2f(.2f,-.59f);
	glVertex2f(.4f,-.59f);
	glVertex2f(.4f,-.62f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(.0f,.0f,.0f);
	glVertex2f(.4f,-.62f);
	glVertex2f(.4f,-.59f);
	glVertex2f(.6f,-.59f);
	glVertex2f(.6f,-.62f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(.6f,-.62f);
	glVertex2f(.6f,-.59f);
	glVertex2f(.8f,-.59f);
	glVertex2f(.8f,-.62f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(.0f,.0f,.0f);
	glVertex2f(.8f,-.62f);
	glVertex2f(.8f,-.59f);
	glVertex2f(1.0f,-.59f);
	glVertex2f(1.0f,-.62f);
	glEnd();


	//sideroad2
    glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(-1.0f,-.97f);
	glVertex2f(-1.0f,-1.0f);
	glVertex2f(-.8f,-1.0f);
	glVertex2f(-.8f,-.97f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(.0f,.0f,.0f);
	glVertex2f(-.8f,-.97f);
	glVertex2f(-.8f,-1.0f);
	glVertex2f(-.6f,-1.0f);
	glVertex2f(-.6f,-.97f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(-.6f,-.97f);
	glVertex2f(-.6f,-1.0f);
	glVertex2f(-.4f,-1.0f);
	glVertex2f(-.4f,-.97f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(.0f,.0f,.0f);
	glVertex2f(-.4f,-.97f);
	glVertex2f(-.4f,-1.0f);
	glVertex2f(-.2f,-1.0f);
	glVertex2f(-.2f,-.97f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(-.2f,-.97f);
	glVertex2f(-.2f,-1.0f);
	glVertex2f(.0f,-1.0f);
	glVertex2f(.0f,-.97f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(.0f,.0f,.0f);
	glVertex2f(.0f,-.97f);
	glVertex2f(.0f,-1.0f);
	glVertex2f(.2f,-1.0f);
	glVertex2f(.2f,-.97f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(.2f,-.97f);
	glVertex2f(.2f,-1.0f);
	glVertex2f(.4f,-1.0f);
	glVertex2f(.4f,-.97f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(.0f,.0f,.0f);
	glVertex2f(.4f,-.97f);
	glVertex2f(.4f,-1.0f);
	glVertex2f(.6f,-1.0f);
	glVertex2f(.6f,-.97f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(.6f,-.97f);
	glVertex2f(.6f,-1.0f);
	glVertex2f(.8f,-1.0f);
	glVertex2f(.8f,-.97f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(.0f,.0f,.0f);
	glVertex2f(.8f,-.97f);
	glVertex2f(.8f,-1.0f);
	glVertex2f(1.0f,-1.0f);
	glVertex2f(1.0f,-.97f);
	glEnd();



    //main road
    glBegin(GL_QUADS);
	glColor3ub(122, 132, 147);
	glVertex2f(-1.0f,-.62f);
	glVertex2f(-1.0f,-.97f);
	glVertex2f(1.0f,-.97f);
	glVertex2f(1.0f,-.62f);
	glEnd();

    //road div

    glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(-.8f,-.79f);
	glVertex2f(-.8f,-.81f);
	glVertex2f(-.6f,-.81f);
	glVertex2f(-.6f,-.79f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(-.4f,-.79f);
	glVertex2f(-.4f,-.81f);
	glVertex2f(-.2f,-.81f);
	glVertex2f(-.2f,-.79f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(.0f,-.79f);
	glVertex2f(.0f,-.81f);
	glVertex2f(.2f,-.81f);
	glVertex2f(.2f,-.79f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(.4f,-.79f);
	glVertex2f(.4f,-.81f);
	glVertex2f(.6f,-.81f);
	glVertex2f(.6f,-.79f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(.8f,-.79f);
	glVertex2f(.8f,-.81f);
	glVertex2f(1.0f,-.81f);
	glVertex2f(1.0f,-.79f);
	glEnd();

  //bus1
    glPushMatrix();
	glTranslatef(_move, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
	glColor3ub(25,25,112 );
	glVertex2f(-.9f,-.45f);
	glVertex2f(-.9f,-.55f);
	glVertex2f(-.5f,-.55);
	glVertex2f(-.5f,-.55f);
	glVertex2f(-.5f,-.45);
	glEnd();

//window
    glBegin(GL_QUADS);
	glColor3ub(255,255,0);
	glVertex2f(-.87f,-.47f);
	glVertex2f(-.87f,-.53f);
	glVertex2f(-.82f,-.53f);
	glVertex2f(-.82f,-.47f);
	glEnd();

     glBegin(GL_QUADS);
	glColor3ub(255,255,0);
	glVertex2f(-.80f,-.47f);
	glVertex2f(-.80f,-.53f);
	glVertex2f(-.75f,-.53f);
	glVertex2f(-.75f,-.47f);
	glEnd();


     glBegin(GL_QUADS);
	glColor3ub(255,255,0);
	glVertex2f(-.73f,-.47f);
	glVertex2f(-.73f,-.53f);
	glVertex2f(-.68f,-.53f);
	glVertex2f(-.68f,-.47f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(255,255,0);
	glVertex2f(-.66f,-.47f);
	glVertex2f(-.66f,-.53f);
	glVertex2f(-.61f,-.53f);
	glVertex2f(-.61f,-.47f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(255,255,0);
	glVertex2f(-.59f,-.47f);
	glVertex2f(-.59f,-.53f);
	glVertex2f(-.51f,-.53f);
	glVertex2f(-.51f,-.47f);
	glEnd();
//body//
    glBegin(GL_QUADS);
	glColor3ub(135,206,235 );
	glVertex2f(-.9f,-.55f);
	glVertex2f(-.9f,-.65f);
	glVertex2f(-.5f,-.65);
	glVertex2f(-.5f,-.55f);
	glEnd();

//wheel
    glTranslatef(-.82f, -.65f, 0.0f);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3f(9, 9, 9 );
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.04;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }


	glEnd();
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3f(0, 0, 0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.02;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
	glEnd();

//Wheel 2
    glTranslatef(.25f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3f(16, 16, 15 );
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.04;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
	glEnd();
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3f(0, 0, 0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.02;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
	glEnd();
	glPopMatrix();

	//Car:

    glPushMatrix();
    glTranslatef(bus_position2,0.0f, 0.0f);

	glBegin(GL_QUADS);
	glColor3ub(128,0,0);
	glVertex2f(.93f,-.80f);
	glVertex2f(.58f,-.80f);
	glVertex2f(.53f,-.88f);
	glVertex2f(.94f,-.88f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3ub(138,43,226);
	glVertex2f(.61f,-.80f);
	glVertex2f(.90f,-.80f);
	glVertex2f(.87f,-.72f);
	glVertex2f(.69f,-.72f);
    glEnd();

    //window
    glBegin(GL_QUADS);
	glColor3ub(255,255,0);
	glVertex2f(.64f,-.80f);
	glVertex2f(.74f,-.80f);
	glVertex2f(.74f,-.73f);
	glVertex2f(.71f,-.73f);

	glEnd();

    glBegin(GL_QUADS);
	glColor3ub(255,255,0);
	glVertex2f(.77f,-.80f);
	glVertex2f(.88f,-.80f);
	glVertex2f(.85f,-.73f);
	glVertex2f(.77f,-.73f);

	glEnd();

	//wheel
    glTranslatef(.63f, -.89f, 0.0f);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3f(0, 0, 0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.04;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }


	glEnd();
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(16,16,15);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.02;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
	glEnd();

//Wheel 2
    glTranslatef(.25f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3f(0, 0, 0 );
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.04;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
	glEnd();
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3f(16,16,15);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.02;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
	glEnd();
	glPopMatrix();

	glFlush();
	glutSwapBuffers();
}

//Functions:


void updatebus1(int value) {

    if(_move-1.3 > 1.0)
    {
        _move = -1.0;
    }
    _move+= speed;

	glutPostRedisplay(); //Notify GLUT that the display has changed

	glutTimerFunc(100, updatebus1, 0); //Notify GLUT to call update again in 25 milliseconds
}
void updatebus2(int value) {

    if(bus_position2 <-2.0f)
        bus_position2 = 1.3f;

    bus_position2 -= bus_speed2;

	glutPostRedisplay();


	glutTimerFunc(100, updatebus2, 0);
}



//cloud
void cloud_update1(int value) {

    if(cloud_position1 >1.8)
        cloud_position1 = -1.0f;

    cloud_position1 += cloud_speed;

	glutPostRedisplay();


	glutTimerFunc(100, cloud_update1, 0);
}
//ship2
void ship_update2(int value) {

    if(ship_position2 >1.0)
        ship_position2 = -1.5f;

    ship_position2 += ship_speed2;

	glutPostRedisplay();


	glutTimerFunc(100, ship_update2, 0);
}




void handleKeypress(unsigned char key, int x, int y) {

	switch (key) {

case 'd':
    glutDisplayFunc(Day);
    glutPostRedisplay();
    break;

case 'n':
    glutDisplayFunc(night);
    glutPostRedisplay();
    break;


case 'r':
    bus_speed2 =0;
    speed = 0;

    break;

case 'g':

    speed = 0.04f;
    bus_speed2= 0.04f;
    break;


	}
	glutPostRedisplay();


}

int main(int argc, char** argv) {

    cout << endl << "*********** City Life ********************" << endl << endl;

    cout << "Press d : For day mood" << endl << endl;
    cout << "Press n : For night mood" << endl << endl;
    cout << "Press r : For red light" << endl << endl;
    cout << "Press g : For green light" << endl << endl;
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(800, 800);
	glutCreateWindow("City Life");
	glutDisplayFunc(Day);

    glutKeyboardFunc(handleKeypress);


    glutTimerFunc(100, updatebus1, 0);
    _move = 0.01f;

    glutTimerFunc(100, updatebus2, 0);
    bus_speed2 = 0.04f;


    glutTimerFunc(100, ship_update2, 0);
    ship_speed2 = 0.02f;

    glutTimerFunc(100, cloud_update1, 0);
    cloud_speed = 0.01f;

	glutMainLoop();
	return 0;
}



