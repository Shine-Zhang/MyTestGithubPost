

/* DO NOT EDIT THIS FILE - it is machine generated */
#include<jni.h>
#include<stdio.h>
/* Header for class com_example_zs_myapplication_JniDemos */


/*
 * Class:     com_example_zs_myapplication_JniDemos
 * Method:    stringFromC
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_example_zs_myapplication_JniDemos_stringFromC
        (JNIEnv *env, jobject clazz){

    return (*env)->NewStringUTF(env,"hello world!");
}
