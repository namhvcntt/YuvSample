/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_avatarcn_yuv_YuvUtil */

#ifndef _Included_com_avatarcn_yuv_YuvUtil
#define _Included_com_avatarcn_yuv_YuvUtil
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_avatarcn_yuv_YuvUtil
 * Method:    NV21ToI420
 * Signature: ([B[BII)I
 */
JNIEXPORT jint JNICALL Java_com_avatarcn_yuv_YuvUtil_NV21ToI420
        (JNIEnv *, jobject, jbyteArray, jbyteArray, jint, jint);

/*
 * Class:     com_avatarcn_yuv_YuvUtil
 * Method:    RotateI420
 * Signature: ([B[BIII)I
 */
JNIEXPORT jint JNICALL Java_com_avatarcn_yuv_YuvUtil_RotateI420
        (JNIEnv *, jobject, jbyteArray, jbyteArray, jint, jint, jint);

/*
 * Class:     com_avatarcn_yuv_YuvUtil
 * Method:    ScaleI420
 * Signature: ([BII[BIII)I
 */
JNIEXPORT jint JNICALL Java_com_avatarcn_yuv_YuvUtil_ScaleI420
        (JNIEnv *, jobject, jbyteArray, jint, jint, jbyteArray, jint, jint, jint);

/*
 * Class:     com_avatarcn_yuv_YuvUtil
 * Method:    MirrorI420
 * Signature: ([BII[B)I
 */
JNIEXPORT jint JNICALL Java_com_avatarcn_yuv_YuvUtil_MirrorI420
        (JNIEnv *, jobject, jbyteArray, jint, jint, jbyteArray);

/*
 * Class:     com_avatarcn_yuv_YuvUtil
 * Method:    CropI420
 * Signature: ([BII[BIIII)I
 */
JNIEXPORT jint JNICALL Java_com_avatarcn_yuv_YuvUtil_CropI420
        (JNIEnv *, jobject, jbyteArray, jint, jint, jbyteArray, jint, jint, jint, jint);

/*
 * Class:     com_avatarcn_yuv_YuvUtil
 * Method:    I420ToNV21
 * Signature: ([B[BII)I
 */
JNIEXPORT jint JNICALL Java_com_avatarcn_yuv_YuvUtil_I420ToNV21
        (JNIEnv *, jobject, jbyteArray, jbyteArray, jint, jint);

#ifdef __cplusplus
}
#endif
#endif