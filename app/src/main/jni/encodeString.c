//
// Created by Administrator on 2016/8/20 0020.
//
#include<stdio.h>
#include<jni.h>
#include<stdlib.h>
#include <android/log.h>

/**
 * 把一个jstring转换成一个c语言的char* 类型.
 */
char* _JString2CStr(JNIEnv* env, jstring jstr) {
    char* rtn = NULL;
    jclass clsstring = (*env)->FindClass(env, "java/lang/String");
    jstring strencode = (*env)->NewStringUTF(env,"GB2312");
    jmethodID mid = (*env)->GetMethodID(env, clsstring, "getBytes", "(Ljava/lang/String;)[B");
    jbyteArray barr = (jbyteArray)(*env)->CallObjectMethod(env, jstr, mid, strencode); // String .getByte("GB2312");
    jsize alen = (*env)->GetArrayLength(env, barr);
    jbyte* ba = (*env)->GetByteArrayElements(env, barr, JNI_FALSE);
    if(alen > 0) {
        rtn = (char*)malloc(alen+1); //"\0"
        memcpy(rtn, ba, alen);
        rtn[alen]=0;
    }
    (*env)->ReleaseByteArrayElements(env, barr, ba,0);
    return rtn;
}
JNIEXPORT jstring JNICALL Java_com_example_zs_myapplication_JniDemos_encodeString
        (JNIEnv *env, jobject clazz,jstring src){
    char *srcString = _JString2CStr(env,src);
    int len = strlen(srcString);
    int i=0;
    for( i=0;i<len;i++){
//        LOGI("%c\n",*(srcString+i));
        *(srcString+i)+=1;
    }
    return (*env)->NewStringUTF(env,srcString);
}