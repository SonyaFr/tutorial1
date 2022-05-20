/*
    Copyright 2010 Etay Meiri
    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.
    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
    Tutorial 01 - Create a window
*/

#include <GL/freeglut.h>


static void RenderSceneCB()
{
    glClear(GL_COLOR_BUFFER_BIT); // очистка буфера кадра
    glutSwapBuffers(); //функция просит GLUT поменять фоновый буфер и буфер кадра местами
}

static void InitializeGlutCallbacks()
{
    glutDisplayFunc(RenderSceneCB); //функция отображения на экран (RenderSceneCB)
}


int main(int argc, char** argv)
{
    glutInit(&argc, argv); //инициализируем GLUT
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA); //GLUT_DOUBLE включает двойную буферизацию,  GLUT_RGBA-буфер цвета
    glutInitWindowSize(1024, 768); //параметры окна
    glutInitWindowPosition(100, 100); //позиция окна
    glutCreateWindow("Tutorial 01"); //заголовок окна

    InitializeGlutCallbacks();

    glClearColor(0.94f, 0.5f, 0.5f, 0.0f); //устанавливает цвет (LightCoral)

    glutMainLoop(); //вызов передаёт контроль GLUT'у, который теперь начнёт свой собственный цикл

    return 0;
}