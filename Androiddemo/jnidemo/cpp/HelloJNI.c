#include <jni.h>
#include <stdio.h>
#include "com_by5388_jni_HelloJni.h"
/*
 * Class:     com_by5388_jni_HelloJni
 * Method:    sayHello
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_by5388_jni_HelloJni_sayHello(JNIEnv *env, jobject thisObject)
{
	printf("hello jni");
	return;
}
/*
*
*1、函数声明，固定格式：
 *              JNIEXPORT；
                返回类型：jstring；
                JNI调用：JNICALL；
                Java_完整类名_方法名：Java_Test_helloworld；
*2、函数参数：
            调用jni.h封装好的函数指针：JNIEnv；
            Java类本身：jobject；
            Java文件传入参数：jstring。


*第一步：编写带有native方法的Java类（Test.java），使用javac工具编译Java类（生成Test.class）；

 第二步：使用javah生成与native方法对应的头文件（Test.h）；

 第三步：使用C/C++实现相应的头文件（Test2.c），并编译为动态链接库（Test2.so）。
*
*
*
*/