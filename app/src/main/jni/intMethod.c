//
// Created by Administrator on 2016/8/20 0020.
//
#include<stdio.h>
#include<jni.h>
#include <android/log.h> //这句千万不要忘了
#define LOG_TAG "System.out"
#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__)
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)
JNIEXPORT jintArray JNICALL Java_cn_itcast_ndk3_DataProvider_intMethod
        (JNIEnv * env, jobject obj, jintArray arr){
    // 1.获取到 arr的大小

    int len = (*env)->GetArrayLength(env, arr);
    LOGI("len=%d", len);

    if(len==0){
        return arr;
    }
    //取出数组中第一个元素的内存地址
    jint* p = (*env)-> GetIntArrayElements(env,arr,0);
    int i=0;
    for(;i<len;i++){
        LOGI("len=%ld", *(p+i));//取出的每个元素
        *(p+i) += 5; //取出的每个元素加五
    }
    return arr;
}
