#ifndef _SVA_JNI_H
#define _SVA_JNI_H

#include <android/log.h>

#define _ANDROID_LOG_	// ����� �α׸� ��´�.

#ifdef _ANDROID_LOG_
	#define LOG_TAG	"ffmpeg" // �α� ����� ���� �±�
	#define LOG		__android_log_write
	#define PRINT	__android_log_print
#endif

#endif // _SVA_JNI_H
