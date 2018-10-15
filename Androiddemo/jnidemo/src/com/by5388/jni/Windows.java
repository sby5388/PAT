package com.by5388.jni;

/**
 * 参考教程：https://blog.csdn.net/java2010czp/article/details/7460237
 * @author by5388
 * @date 2018/8/24 16:39
 */
public class Windows {

    public native void showWindow(String message);

    static {
        System.loadLibrary("MyWindows");
    }

    public static void main(String[] args) {
        new Windows().showWindow("window");
    }
}
