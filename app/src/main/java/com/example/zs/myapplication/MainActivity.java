package com.example.zs.myapplication;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }

    public void helloJni(View view){
        JniDemos jniDemos = new JniDemos();
        String hello = jniDemos.stringFromC();
        Toast.makeText(this,"jni 太坑："+hello,Toast.LENGTH_SHORT).show();
    }

    public void encodeString(View view){
        JniDemos jniDemos = new JniDemos();
        String encode = jniDemos.encodeString("abcd");
        Toast.makeText(this,"jni 太坑："+encode,Toast.LENGTH_SHORT).show();
    }

   public void addJni(View view){
        JniDemos jniDemos = new JniDemos();
        int hello = jniDemos.addJni(100,203);
        Toast.makeText(this,"jni 太坑："+hello,Toast.LENGTH_SHORT).show();
    }

    public void claculateInArray(View view){
        JniDemos jniDemos = new JniDemos();
        int[] test =new int[]{1,2,3,4,5,6};
        int[] result =  jniDemos.claculateInArray(test);
        Toast.makeText(this,"jni 太坑："+result[0]+"--"+result[1]+"--"+result[2],Toast.LENGTH_SHORT).show();
    }

    public void intMethod(View view){

        JniDemos jniDemos = new JniDemos();
        int[] test =new int[]{1,2,3,4,5,6};
        int[] result =  jniDemos.claculateInArray(test);
        Toast.makeText(this,"jni 太坑："+result[0]+"--"+result[1]+"--"+result[2],Toast.LENGTH_SHORT).show();

    }
}
