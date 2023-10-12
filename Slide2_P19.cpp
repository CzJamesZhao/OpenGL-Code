
// 引入GLUT库的头文件
#include <GL/glut.h>

// 定义显示函数
void display(){
    // 设置背景颜色为黑色（红、绿、蓝和透明度都为0）
    glClearColor(0.0, 0.0, 0.0, 0.0);
    // 清除颜色缓冲区，用于清屏
    glClear(GL_COLOR_BUFFER_BIT);

    // 开始绘制一个多边形（本例中为正方形）
    glBegin(GL_POLYGON);
        // 设置四个顶点的位置，从而定义一个正方形
        glVertex2f(-0.5, -0.5);  // 左下角
        glVertex2f(-0.5, 0.5);   // 左上角
        glVertex2f(0.5, 0.5);    // 右上角
        glVertex2f(0.5, -0.5);   // 右下角
    glEnd();  // 结束绘制多边形

    // 清空渲染管道，确保指令都被执行了
    glFlush();
}

// 主函数
int main(int argc, char** argv){
    // 初始化GLUT库
    glutInit(&argc, argv);
    // 创建一个名为"Square"的窗口
    glutCreateWindow("Square");
    // 设置display为窗口的显示函数，这意味着当需要绘制窗口时，display函数会被调用
    glutDisplayFunc(display);
    // 开始GLUT的主事件循环
    glutMainLoop();
}
