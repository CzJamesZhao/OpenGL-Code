#include <GL/glut.h> // 包含OpenGL GLUT库的头文件

void display() {
    glClearColor(0.0, 0.0, 0.0, 0.0); // 设置清除颜色为黑色（RGBA值，全透明）
    glClear(GL_COLOR_BUFFER_BIT); // 清除颜色缓冲区，使整个窗口变成清除颜色的背景
    glFlush(); // 强制刷新绘图命令，将缓冲区的内容显示在窗口上
}

int main(int argc, char** argv) {
    glutInit(&argc, argv); // 初始化GLUT库，处理命令行参数
    glutCreateWindow("Hello World!"); // 创建一个名为"Hello World!"的窗口
    glutDisplayFunc(display); // 设置绘图回调函数为display函数
    glutMainLoop(); // 进入GLUT的主事件循环，等待用户交互和事件
}


//GL_COLOR_BUFFER_BIT 是OpenGL中的一个缓冲区清除标志，
//用于指示要清除的缓冲区类型。具体来说，GL_COLOR_BUFFER_BIT 表示颜色缓冲区，即用于存储渲染图像颜色的缓冲区。

//glClearColor 函数用于设置清除颜色，其参数为四个浮点数，分别代表红色（R）、绿色（G）、蓝色（B）和 Alpha（A）通道的值。这四个参数的含义如下：
//第一个参数：红色（R）分量，通常在范围 [0.0, 1.0] 内。0.0 表示没有红色，1.0 表示最大强度的红色。
//第二个参数：绿色（G）分量，同样在范围 [0.0, 1.0] 内。0.0 表示没有绿色，1.0 表示最大强度的绿色。
//第三个参数：蓝色（B）分量，同样在范围 [0.0, 1.0] 内。0.0 表示没有蓝色，1.0 表示最大强度的蓝色。
//第四个参数：Alpha（A）通道，也在范围 [0.0, 1.0] 内。Alpha 通道通常用于控制图像的透明度。0.0 表示完全透明，1.0 表示完全不透明。

//int main(int argc, char** argv) 中的 int argc 和 char** argv 是主函数 main 的参数，它们在C和C++程序中用于接收命令行参数。
//int argc：这是一个整数（int），它表示命令行参数的数量。argc 是 "argument count" 的缩写，它告诉程序有多少个命令行参数传递给了程序。通常，argc 至少为1，因为第一个参数是程序的名称（可执行文件名）。
//char** argv：这是一个字符指针数组（char**），它用于存储命令行参数的实际值。argv 是 "argument vector" 的缩写，它是一个指向字符串数组的指针，其中每个字符串表示一个命令行参数。
