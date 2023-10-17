// 引入GLUT库的头文件
#include <GL/glut.h>

// display函数负责执行OpenGL绘图命令
void display() {
    // 定义一个2D点数组，表示正方形的四个顶点
    GLfloat v[4][2] = { {-0.5, -0.5},{-0.5, 0.5},{ 0.5, 0.5}, {0.5, -0.5} };
    
    // 设置清屏时使用的颜色为红色
    glClearColor(1.0, 0.0, 0.0, 0.0);
    
    // 执行清屏操作
    glClear(GL_COLOR_BUFFER_BIT);
    
    // 设置接下来绘图使用的颜色为黄色
    glColor3f(1.0, 1.0, 0.0);
    
    // 设置线的宽度为6像素
    glLineWidth(6);
    
    // 开始绘制一个闭合的线段
    glBegin(GL_LINE_LOOP);
    
    // 使用定义的四个顶点进行绘制
    glVertex2fv(v[0]);
    glVertex2fv(v[1]);
    glVertex2fv(v[2]);
    glVertex2fv(v[3]);
    
    // 结束绘图命令
    glEnd();
    
    // 确保所有OpenGL绘图命令都被执行
    glFlush();
}

// 主程序入口
int main(int argc, char** argv) {
    // 初始化GLUT库
    glutInit(&argc,argv);
    
    // 创建一个名为"Square Lines"的窗口
    glutCreateWindow("Square Lines");
    
    // 注册display函数为窗口的绘图回调函数
    glutDisplayFunc(display);
    
    // 启动GLUT的事件处理循环
    glutMainLoop();
}
