/*
 // Copyright (c) 2015-2018 Pierre Guillot.
 // For information on usage and redistribution, and for a DISCLAIMER OF ALL
 // WARRANTIES, see the file, "LICENSE.txt," in this distribution.
*/


/*******************************************************************************
 The block below describes the properties of this module, and is read by
 the Projucer to automatically generate project code that uses it.
 For details about the syntax and how to create or use a module, see the
 JUCE Module Format.txt file.


 BEGIN_JUCE_MODULE_DECLARATION

  ID:               juce_libpd
  vendor:           pierreguillot
  version:          0.0.1
  name:             JUCE libpd classes
  description:      The Pure Data core with the libpd wrapper
  website:          https://github.com/pierreguillot/juce_libpd
  license:          MIT

  searchpaths:      libpd/pure-data/src libpd/libpd_wrapper libpd/libpd_wrapper/util
  linuxLibs:        m dl pthread
  windowsLibs:      pthreadVC2 ws2_32

 END_JUCE_MODULE_DECLARATION

*******************************************************************************/


#pragma once
#define JUCE_LIBPD_H_INCLUDED

#ifdef __cplusplus
extern "C"
{
#endif
    
//==============================================================================
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-variable"
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wcomma"
#elif defined (__GNUC__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#elif defined (_MSC_VER)
#pragma warning (push)
#pragma warning (disable: 4091 4100 4996 )
#endif

//==============================================================================
/** Config: JUCE_LIBPD_EXTRA
    This can be used to disable Pure Data extra libraries.
*/
#ifndef JUCE_LIBPD_EXTRA
 #define JUCE_LIBPD_EXTRA 1
#endif

/** Config: JUCE_LIBPD_UTILS
    This can be used to disable the libpd utils.
*/
#ifndef JUCE_LIBPD_UTILS
 #define JUCE_LIBPD_UTILS 0
#endif

/** Config: JUCE_LIBPD_MULTI
    This can be used to disable the libpd multi instance support.
*/
#ifndef JUCE_LIBPD_MULTI
 #define JUCE_LIBPD_MULTI 1
#endif

/** Config: JUCE_LIBPD_LOCAL
    This can be used to disable the LC_NUMERIC number format to the default C
    locale.
*/
#ifndef JUCE_LIBPD_LOCAL
 #define JUCE_LIBPD_LOCAL 1
#endif

//==============================================================================

    //==============================================================================
#define PD 1
#define USEAPI_DUMMY 1
#define PD_INTERNAL 1
    
#if JUCE_LIBPD_EXTRA
#define LIBPD_EXTRA 1
#endif
    
#if JUCE_LIBPD_MULTI
#define PDINSTANCE 1
#define PDTHREADS 1
#endif
    
#if PD_LOCALE == 0
#define LIBPD_NO_NUMERIC 1
#endif
    
#if JUCE_WINDOWS
#define WINVER 0x502
#define WIN32 1
#define _WIN32 1
    
#if JUCE_64BIT
#define PD_LONGINTTYPE long long
#endif
    
#if JUCE_MSVC
#define HAVE_STRUCT_TIMESPEC 1
#define _CRT_SECURE_NO_WARNINGS 1
#endif
    
#elif JUCE_MAC || JUCE_LINUX
#define HAVE_LIBDL 1
#define HAVE_UNISTD_H 1
    
#endif

#include "libpd/libpd_wrapper/z_libpd.h"

//==============================================================================
#ifdef __clang__
#pragma clang diagnostic pop
#elif defined (__GNUC__)
#pragma GCC diagnostic pop
#elif defined (_MSC_VER)
#pragma warning (pop)
#endif

#ifdef __cplusplus
}
#endif
