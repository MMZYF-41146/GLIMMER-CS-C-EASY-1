# GLIMMER-CS-C-EASY-1
THEFIRSTQUESTION

## part1_了解C语言配置文件

### 一、 什么是 GCC，什么是 MinGW？它的作用是什么？
- **GCC (GNU Compiler Collection)**：它是 Linux 系统下最核心的编译器套件，主要负责把我们写的 C/C++ 代码“翻译”成电脑能看懂的二进制机器码。
- **MinGW (Minimalist GNU for Windows)**：因为 Windows 系统本身没有 GCC，MinGW 就是把 GCC 移植到 Windows 系统上的一个工具集，让我们在 Windows 电脑上也能用 GCC 编译代码。
- **作用**：它们都是编译器。我们在 VS Code 里敲的代码只是一堆文本，必须通过 GCC/MinGW 编译之后，才能生成 `.exe` 可执行文件并运行。

### 二、 c_cpp_properties.json, launch.json, tasks.json 分别有什么作用？
在 VS Code 这个编辑器里，这三个文件是 C/C++ 插件的“大管家”：
1. **`c_cpp_properties.json`**：负责**代码提示**。告诉 VS Code 我们的 C 语言标准库头文件放在哪里，这样我们在敲代码时才能有正确的自动补全和语法检查。
2. **`tasks.json`**：负责**编译**。它相当于一个任务清单，告诉 VS Code 应该怎么调用 GCC 把我们的 `.c` 文件编译成 `.exe`。
3. **`launch.json`**：负责**调试**。它告诉 VS Code 应该怎么启动我们的程序进行调试，比如配置用 gdb 调试器、使用外部控制台还是内置终端、程序路径在哪里等。

### 三、 为什么要下载 C 语言的插件，它的作用是什么？
因为 VS Code 本质上只是一个**轻量级的代码文本编辑器**（类似高级记事本），它本身并不懂 C 语言。下载 C/C++ 插件后，它就相当于给编辑器装上了“C语言大脑”：
- 它为我们提供了语法高亮（代码有颜色）、代码智能补全（打几个字母就能提示全名）、错误波浪线提示，以及将 VS Code 与底层的编译器和调试器（GCC/GDB）连接起来的能力，让我们可以一键编译和调试。

### 四、



### 五、 学习思考
1. Linux与 Windows的区别：Linux像毛胚房，只有黑窗口。Windows像精装房。
2. Linux优势：它是服务器之王，可以直接摸到底层，开源免费，极其稳定。
3. 源文件与头文件举例：源文件（hello.c）头文件（stdio.h）。
