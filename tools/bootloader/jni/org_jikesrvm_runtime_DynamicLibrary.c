/*
 *  This file is part of the Jikes RVM project (http://jikesrvm.org).
 *
 *  This file is licensed to You under the Eclipse Public License (EPL);
 *  You may not use this file except in compliance with the License. You
 *  may obtain a copy of the License at
 *
 *      http://www.opensource.org/licenses/eclipse-1.0.php
 *
 *  See the COPYRIGHT.txt file distributed with this work for information
 *  regarding copyright ownership.
 */

/*****************************************************************
 * JNI functions to support OnLoad
 */

/* Java includes */
#include <jni.h>

/* generated class header */
#include "org_jikesrvm_runtime_DynamicLibrary.h"

extern JNIIMPORT struct JavaVM_ sysJavaVM;

typedef JNIEXPORT jint (JNICALL *JNI_OnLoad)(struct JavaVM_ *vm, void *reserved);

/*
 * Class:     org.jikesrvm.runtime.DynamicLibrary
 * Method:    runJNI_OnLoad
 * Signature: (Lorg/vmmagic/unboxed/Address;)I
 */
JNIEXPORT jint JNICALL Java_org_jikesrvm_runtime_DynamicLibrary_runJNI_1OnLoad(JNIEnv *env,
    jclass clazz,
    jobject JNI_OnLoadAddress) {
  return ((JNI_OnLoad)JNI_OnLoadAddress)(&sysJavaVM, NULL);
}
