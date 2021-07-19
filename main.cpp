#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

void dis()
{
    glBegin(GL_LINES); //
    glColor3f(0,0,0);
    glVertex2f(-0.88f,-0.80f);
    glVertex2f(0.88f,-0.80f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.4,0.4,0.3);
    glVertex2f(-0.67f,-0.80f);
    glVertex2f(-0.67f,-0.20f);
    glVertex2f(0.67f,-0.20f);
    glVertex2f(0.67f,-0.80f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.4,0.5,0.5);
    glVertex2f(-0.67f,-0.80f);
    glVertex2f(-0.67f,-0.77f);
    glVertex2f(-0.82f,-0.77f);
    glVertex2f(-0.82f,-0.80f);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-0.58f,-0.65f);
    glVertex2f(-0.25f,-0.65f);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-0.58f,-0.65f);
    glVertex2f(-0.58,-0.40f);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-0.25f,-0.65f);
    glVertex2f(-0.25f,-0.40f);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-0.25,-0.40f);
    glVertex2f(-0.58,-0.40f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(0.1,0.9,0.9);
    glVertex2f(-0.57f,-0.65f);
    glVertex2f(-0.25f,-0.65f);
    glVertex2f(-0.25,-0.40f);
    glVertex2f(-0.57f,-0.40f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-0.25,-0.60);
    glVertex2f(-0.58,-0.60);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-0.41,-0.65);
    glVertex2f(-0.41,-0.40);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-0.43,-0.50);
    glVertex2f(-0.55,-0.50);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-0.45,-0.48);
    glVertex2f(-0.43,-0.50);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-0.45,-0.52);
    glVertex2f(-0.43,-0.50);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-0.43,-0.623);
    glVertex2f(-0.55,-0.623);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-0.45,-0.643);
    glVertex2f(-0.43,-0.623);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-0.45,-0.603);
    glVertex2f(-0.43,-0.623);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(0,-0.80);
    glVertex2f(0,-0.20);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-0.20,-0.77f);
    glVertex2f(-0.20,-0.80f);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-0.20,-0.77f);
    glVertex2f(0,-0.77f);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-0.20,-0.80f);
    glVertex2f(0,-0.80f);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(0,-0.80f);
    glVertex2f(0,-0.77f);
    glEnd();

    glBegin(GL_LINES); //
    glColor3f(0,0,0);
    glVertex2f(-0.88f,-0.80f);
    glVertex2f(0.88f,-0.80f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-0.20,-0.30f);
    glVertex2f(-0.05,-0.30f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-0.05,-0.30f);
    glVertex2f(-0.05,-0.77f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-0.20,-0.30f);
    glVertex2f(-0.20,-0.77f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex2f(-0.05,-0.32f);
    glVertex2f(-0.05,-0.75f);
    glVertex2f(-0.18,-0.75f);
    glVertex2f(-0.18,-0.32f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.1,0.1,0.2);
    glVertex2f(-0.05,-0.33f);
    glVertex2f(-0.05,-0.74f);
    glVertex2f(-0.18,-0.74f);
    glVertex2f(-0.18,-0.33f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.1,0.9,0.9);
    glVertex2f(-0.075,-0.35f);
    glVertex2f(-0.075,-0.37f);
    glVertex2f(-0.16,-0.37f);
    glVertex2f(-0.16,-0.35f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.1,0.9,0.9);
    glVertex2f(-0.075,-0.45f);
    glVertex2f(-0.075,-0.47f);
    glVertex2f(-0.16,-0.47f);
    glVertex2f(-0.16,-0.45f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.1,0.9,0.9);
    glVertex2f(-0.075,-0.54f);
    glVertex2f(-0.075,-0.56f);
    glVertex2f(-0.16,-0.56f);
    glVertex2f(-0.16,-0.54f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.1,0.9,0.9);
    glVertex2f(-0.075,-0.62f);
    glVertex2f(-0.075,-0.64f);
    glVertex2f(-0.16,-0.64f);
    glVertex2f(-0.16,-0.62f);
    glEnd();


    /* glBegin(GL_LINES);
     glColor3f(1,1,1);
     glVertex2f(-0.075,-0.62f); //Door Handle
     glVertex2f(-0.075,-0.64f);
     glEnd();*/

    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex2f(-0.80,-0.19f);
    glVertex2f(-0.80,-0.20f);
    glVertex2f(0.80,-0.20f);
    glVertex2f(0.80,-0.19f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex2f(-0.82,-0.19f);
    glVertex2f(-0.82,-0.18f);
    glVertex2f(0.82,-0.18f);
    glVertex2f(0.82,-0.19f);
    glEnd();

    /*glBegin(GL_TRIANGLES);
    glColor3f(0.4,0.4,0.3);
    glVertex2f(-0.82,-0.19f);
    glVertex2f(-0.40,0.10f);
    glVertex2f(-0.0,-0.19f);
    glEnd();*/




    glBegin(GL_TRIANGLES);
    glColor3f(0.4,0.4,0.3);
    glVertex2f(-0.82,-0.18f);
    glVertex2f(0.00,0.30f);
    glVertex2f(0.82,-0.18f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-0.82,-0.18f);
    glVertex2f(0.00,0.30f);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.82,-0.18f);
    glVertex2f(0.82,-0.18f);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.00,0.30f);
    glVertex2f(0.82,-0.18f);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3f(0.4,0.4,0.3);
    glVertex2f(-0.40,0.1f);
    glVertex2f(0.0,-0.18f);
    glVertex2f(-0.82,-0.18f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-0.40,0.1f);
    glVertex2f(0.0,-0.18f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(0.5,0.7,0.7);
    glVertex2f(0.1,-0.8f);
    glVertex2f(0.6,-0.8f);
    glVertex2f(0.6,-0.3f);
    glVertex2f(0.1,-0.3f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(0.1,-0.4f);
    glVertex2f(0.6,-0.4f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(0.1,-0.6f);
    glVertex2f(0.6,-0.6f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(0.1,-0.5f);
    glVertex2f(0.6,-0.5f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(0.1,-0.75f);
    glVertex2f(0.6,-0.75f);
    glEnd();

}

void display()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); //(R,G,B,A) //background white korte shob 1, A-> Alpha value //set bckgrnd clr
    glClear(GL_COLOR_BUFFER_BIT); //drawing space e kisu clear korar jonno //clean the drawing space

    //glScaled(-1,1,0);
    dis();
    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);  //to infrom the windows that it is an openGL application //windows sent this information to GPU
    glutCreateWindow("Test"); //Window er name
    glutInitWindowSize(320, 320);
    glutDisplayFunc(display);    //call back funtion, calls another function and it is also a function
    glutMainLoop();
    return 0;
}
