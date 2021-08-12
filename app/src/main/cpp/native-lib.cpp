#include <jni.h>
#include <string>
#include <nfiq2api.h>
using namespace std;
extern "C" JNIEXPORT jstring JNICALL
Java_com_example_aug12_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    string a = get();
    return env->NewStringUTF(a.c_str());
}