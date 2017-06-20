#测试使用

## lib的生成：

1. 安装win32交叉编译链
sudo apt-get install mingw32 mingw32-binutils mingw32-runtime
make CROSS_COMPILE=i586-mingw32msvc-

2.生成micropython的库文件

	在microPython的windows目录下，使用make lib CROSS_COMPILE=i586-mingw32msvc-,即可生成
3.测试
使用编译命令：i586-mingw32msvc-gcc libtest.c -o main.exe -L./ -llibmicropython


即可生成执行程序
