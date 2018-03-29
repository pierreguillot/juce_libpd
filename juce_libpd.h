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

  dependencies:
  linuxLibs:        m dl pthread
  windowsLibs:      pthreadVC2 ws2_32

 END_JUCE_MODULE_DECLARATION

*******************************************************************************/


#pragma once
#define JUCE_LIBPD_H_INCLUDED

//==============================================================================
#ifdef _MSC_VER
 #pragma warning (push)
 #pragma warning (disable: 4091 4100 4996 )
#endif

#if JUCE_CLANG
 #pragma clang diagnostic push
 #pragma clang diagnostic ignored "-Wunused-variable"
 #pragma clang diagnostic ignored "-Wunused-parameter"
#endif

#if JUCE_GCC
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wunused-variable"
    #pragma GCC diagnostic ignored "-Wunused-parameter"
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
 #define JUCE_LIBPD_UTILS 1
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
#if JUCE_MSVC
 #pragma warning (pop)
#endif

#if JUCE_CLANG
 #pragma clang diagnostic pop
#endif

#if JUCE_GCC
 #pragma GCC diagnostic pop
#endif
