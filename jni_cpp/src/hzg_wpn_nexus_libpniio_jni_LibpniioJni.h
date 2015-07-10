/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class hzg_wpn_nexus_libpniio_jni_LibpniioJni */

#ifndef _Included_hzg_wpn_nexus_libpniio_jni_LibpniioJni
#define _Included_hzg_wpn_nexus_libpniio_jni_LibpniioJni
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     hzg_wpn_nexus_libpniio_jni_LibpniioJni
 * Method:    createFile
 * Signature: (Ljava/lang/String;Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_hzg_wpn_nexus_libpniio_jni_LibpniioJni_createFile
  (JNIEnv *, jclass, jstring, jstring);

/*
 * Class:     hzg_wpn_nexus_libpniio_jni_LibpniioJni
 * Method:    openFile
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_hzg_wpn_nexus_libpniio_jni_LibpniioJni_openFile
  (JNIEnv *, jclass, jstring);

/*
 * Class:     hzg_wpn_nexus_libpniio_jni_LibpniioJni
 * Method:    closeFile
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_hzg_wpn_nexus_libpniio_jni_LibpniioJni_closeFile
  (JNIEnv *, jclass, jlong);

/*
 * Class:     hzg_wpn_nexus_libpniio_jni_LibpniioJni
 * Method:    write
 * Signature: (JLjava/lang/String;IZ)V
 */
JNIEXPORT void JNICALL Java_hzg_wpn_nexus_libpniio_jni_LibpniioJni_write__JLjava_lang_String_2IZ
  (JNIEnv *, jclass, jlong, jstring, jint, jboolean);

/*
 * Class:     hzg_wpn_nexus_libpniio_jni_LibpniioJni
 * Method:    write
 * Signature: (JLjava/lang/String;JZ)V
 */
JNIEXPORT void JNICALL Java_hzg_wpn_nexus_libpniio_jni_LibpniioJni_write__JLjava_lang_String_2JZ
  (JNIEnv *, jclass, jlong, jstring, jlong, jboolean);

/*
 * Class:     hzg_wpn_nexus_libpniio_jni_LibpniioJni
 * Method:    write
 * Signature: (JLjava/lang/String;FZ)V
 */
JNIEXPORT void JNICALL Java_hzg_wpn_nexus_libpniio_jni_LibpniioJni_write__JLjava_lang_String_2FZ
  (JNIEnv *, jclass, jlong, jstring, jfloat, jboolean);

/*
 * Class:     hzg_wpn_nexus_libpniio_jni_LibpniioJni
 * Method:    write
 * Signature: (JLjava/lang/String;DZ)V
 */
JNIEXPORT void JNICALL Java_hzg_wpn_nexus_libpniio_jni_LibpniioJni_write__JLjava_lang_String_2DZ
  (JNIEnv *, jclass, jlong, jstring, jdouble, jboolean);

/*
 * Class:     hzg_wpn_nexus_libpniio_jni_LibpniioJni
 * Method:    write
 * Signature: (JLjava/lang/String;Ljava/lang/String;Z)V
 */
JNIEXPORT void JNICALL Java_hzg_wpn_nexus_libpniio_jni_LibpniioJni_write__JLjava_lang_String_2Ljava_lang_String_2Z
  (JNIEnv *, jclass, jlong, jstring, jstring, jboolean);

/*
 * Class:     hzg_wpn_nexus_libpniio_jni_LibpniioJni
 * Method:    write
 * Signature: (JLjava/lang/String;Lsun/nio/ch/DirectBuffer;I[SZ)V
 */
JNIEXPORT void JNICALL Java_hzg_wpn_nexus_libpniio_jni_LibpniioJni_write__JLjava_lang_String_2Lsun_nio_ch_DirectBuffer_2I_3SZ
  (JNIEnv *, jclass, jlong, jstring, jobject, jint, jshortArray, jboolean);

/*
 * Class:     hzg_wpn_nexus_libpniio_jni_LibpniioJni
 * Method:    write
 * Signature: (JLjava/lang/String;Lsun/nio/ch/DirectBuffer;I[IZ)V
 */
JNIEXPORT void JNICALL Java_hzg_wpn_nexus_libpniio_jni_LibpniioJni_write__JLjava_lang_String_2Lsun_nio_ch_DirectBuffer_2I_3IZ
  (JNIEnv *, jclass, jlong, jstring, jobject, jint, jintArray, jboolean);

/*
 * Class:     hzg_wpn_nexus_libpniio_jni_LibpniioJni
 * Method:    write
 * Signature: (JLjava/lang/String;Lsun/nio/ch/DirectBuffer;I[FZ)V
 */
JNIEXPORT void JNICALL Java_hzg_wpn_nexus_libpniio_jni_LibpniioJni_write__JLjava_lang_String_2Lsun_nio_ch_DirectBuffer_2I_3FZ
  (JNIEnv *, jclass, jlong, jstring, jobject, jint, jfloatArray, jboolean);

#ifdef __cplusplus
}
#endif
#endif
