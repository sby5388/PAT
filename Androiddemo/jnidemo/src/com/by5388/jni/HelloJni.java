package com.by5388.jni;

/**
 * jniDemo https://blog.csdn.net/huachao1001/article/details/53906237
 *
 * @author by5388
 * @date 2018/8/24 10:57
 */
public class HelloJni {
    static {
        System.loadLibrary("HelloJNI");
    }

    public native void sayHello();

    public static void main(String[] args) {
        new HelloJni().sayHello();
    }


    //正确的
    //javah -classpath D:\ideaJava\jnidemo\out\production\jnidemo com.by5388.jni.HelloJni

    //--- 这个 可以指定生成的目录
    //javah -classpath D:\ideaJava\jnidemo\out\production\jnidemo  -d  .\cpp  com.by5388.jni.HelloJni
    //javah  -jni -classpath D:\ideaJava\jnidemo\out\production\jnidemo  -d  .\cpp  com.by5388.jni.HelloJni

    //生成.o
    //E:\win8soft\devc\Dev-Cpp\MinGW64\bin\gcc.exe
    //gcc -c cpp/HelloJNI.c


    //gcc -Wl,--add-stdcall-alias -shared -o hello.dll HelloJNI.o
    //D:\ideaJava\jnidemo\cpp>gcc -Wl,--add-stdcall-alias -shared -o HelloJNI.dll HelloJNI.o


}
