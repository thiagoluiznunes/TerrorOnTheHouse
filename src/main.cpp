/*
Author: Thiago Luiz Nunes
Project: CG-TerrorProject
*/
#include "CG-Functions.h"
#include <iostream>

int main(int argc, char *argv[]) {

  glutInit(&argc, argv);
  // glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH | GLUT_RGB);
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
  //Specifies the initial position
  glutInitWindowPosition(10,10);
  //Specifies the size at pixels; width and height
  glutInitWindowSize(1024,720);
  //Create the window with described name
  glutCreateWindow("Hello darkness");

  /*Callback functions*/
  //Responsible by to draw the window if necessery
  glutDisplayFunc(drawing);
  //Responsible by window resizing
  glutReshapeFunc(reshapeWindow);
  //Responsible by keyboard event
  glutKeyboardFunc(simpleKeyboard);
  //Responsible by special keyboard event
  glutSpecialFunc(specialKeyboad);
  // Responsible by mouse button events
  glutMouseFunc(clickEventMouse);
  //Responsible by mouse movement event when clicked
  // glutMotionFunc();
  //Responsible by mouse movement event
  glutPassiveMotionFunc(mousePassiveMotion);
  //Responsible for when the mouse enters or leaves the window
  glutEntryFunc(mouseEntry);
  //Responsible when there is not events
  // glutIdleFunc();

  initializes();
  glEnable(GL_DEPTH_TEST);

  //From the moment this function is called, the program
  //control is transferred to GLUT, beginning the management events.
  glutMainLoop();

  return 0;
}
