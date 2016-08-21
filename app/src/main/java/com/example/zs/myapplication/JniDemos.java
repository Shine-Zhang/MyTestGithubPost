package com.example.zs.myapplication;

/**
 * Created by Administrator on 2016/8/20 0020.
 */
public class JniDemos {
    static {
        System.loadLibrary("YanboberJniLibName");   //defaultConfig.ndk.moduleName
    }
    public native int addJni(int x,int y);
    public native String stringFromC();
    public native String encodeString(String src);
    public native int[]  claculateInArray(int[] src);
    public native void intMethod();
}
