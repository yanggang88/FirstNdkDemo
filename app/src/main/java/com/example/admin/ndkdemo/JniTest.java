package com.example.admin.ndkdemo;

/**
 * author : ygang
 * email : 1334045135@qq.com
 * date : 2019/3/19 10:51
 **/
public class JniTest {

    static {
        System.loadLibrary("JNITest");
    }

    //创建一个native 方法
    public native static String getNativeString();
}
