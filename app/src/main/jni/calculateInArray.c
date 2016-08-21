//
// Created by Administrator on 2016/8/20 0020.
//
#include<stdio.h>
#include<jni.h>
#include <android/log.h> //这句千万不要忘了
#define LOG_TAG "System.out"
#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__)
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)

JNIEXPORT jintArray JNICALL Java_com_example_zs_myapplication_JniDemos_claculateInArray
(JNIEnv *env, jobject clazz, jintArray src){

/*    jsize length = (*env)->GetArrayLength(env, src);
    jint* arrayPointer = (*env)->GetIntArrayElements(env,src,NULL);
    int i=0;
    for( i=0;i<length-1;i++){
    *//*    *(arrayPointer+i)+= *(arrayPointer+i+1);*//*
        *(arrayPointer+i)+= 10;
    }
    return arrayPointer;*/

    //jsize       (*GetArrayLength)(JNIEnv*, jarray);
    jsize length =(*env)->GetArrayLength(env,src);

    jint* arrayPointer =(*env)->GetIntArrayElements(env,src,NULL);
    int i;
    for(i = 0;i<length;i++){
        *(arrayPointer+i) += 10;
        LOGD("****&&&%d",*(arrayPointer+i));
    }
/*    LOGD("****&&&***************************************************************************");
    arrayPointer =(*env)->GetIntArrayElements(env,src,0);
    for(i = 0;i<length;i++){
      *//*  *(arrayPointer+i) += 10;*//*
        *//*    src[i]=0;*//*
        LOGD("****&&&%d\n",*(arrayPointer+i));
    }*/
    return src;

}
