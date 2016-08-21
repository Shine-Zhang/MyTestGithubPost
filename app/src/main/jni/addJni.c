//
// Created by Administrator on 2016/8/20 0020.
//
#include<jni.h>
#include<stdio.h>

JNIEXPORT jint JNICALL Java_com_example_zs_myapplication_JniDemos_addJni
        (JNIEnv *env, jobject clazz, jint x, jint y){

    return x+y;
}
