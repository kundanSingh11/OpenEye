#include <jni.h>


extern "C"
JNIEXPORT jint JNICALL
Java_com_ignyte_openeye_utils_NativeCaller_getVersion(JNIEnv *env, jclass type) {
    return 1;
}extern "C"
JNIEXPORT void JNICALL
Java_com_ignyte_openeye_utils_NativeCaller_process(JNIEnv *env, jclass type) {

}