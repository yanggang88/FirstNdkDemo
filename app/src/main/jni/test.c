#include<jni.h>
#include<stdio.h>
#include "com_example_admin_ndkdemo_JniTest.h"

JNIEXPORT jstring JNICALL Java_com_example_admin_ndkdemo_JniTest_getNativeString
  (JNIEnv *env, jclass jclass){
    return (*env) -> NewStringUTF(env,"This is my first NDK application!");
  }