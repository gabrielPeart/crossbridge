//                     DO NOT EDIT THIS FILE
//
//  This file has been generated by the script core/avmfeatures.as,
//  from a set of configuration parameters in that file.
//
//  If you feel you need to make changes below, instead edit the configuration
//  file and rerun it to get a new version of this file.
//
//  This Source Code Form is subject to the terms of the Mozilla Public
//  License, v. 2.0. If a copy of the MPL was not distributed with this
//  file, You can obtain one at http://mozilla.org/MPL/2.0/.

#include "avmplus.h"

#ifdef AVMSHELL_BUILD

// The string avmfeatures contains the names of all features that were enabled
// when the program was compiled.  Each feature name is terminated by a semicolon.
const char * const avmfeatures = ""
  #if AVMSYSTEM_32BIT
    "AVMSYSTEM_32BIT;"
  #endif
  #if AVMSYSTEM_64BIT
    "AVMSYSTEM_64BIT;"
  #endif
  #if AVMSYSTEM_UNALIGNED_INT_ACCESS
    "AVMSYSTEM_UNALIGNED_INT_ACCESS;"
  #endif
  #if AVMSYSTEM_UNALIGNED_FP_ACCESS
    "AVMSYSTEM_UNALIGNED_FP_ACCESS;"
  #endif
  #if AVMSYSTEM_BIG_ENDIAN
    "AVMSYSTEM_BIG_ENDIAN;"
  #endif
  #if AVMSYSTEM_LITTLE_ENDIAN
    "AVMSYSTEM_LITTLE_ENDIAN;"
  #endif
  #if AVMSYSTEM_DOUBLE_MSW_FIRST
    "AVMSYSTEM_DOUBLE_MSW_FIRST;"
  #endif
  #if AVMSYSTEM_IA32
    "AVMSYSTEM_IA32;"
  #endif
  #if AVMSYSTEM_AMD64
    "AVMSYSTEM_AMD64;"
  #endif
  #if AVMSYSTEM_ARM
    "AVMSYSTEM_ARM;"
  #endif
  #if AVMSYSTEM_PPC
    "AVMSYSTEM_PPC;"
  #endif
  #if AVMSYSTEM_SPARC
    "AVMSYSTEM_SPARC;"
  #endif
  #if AVMSYSTEM_MIPS
    "AVMSYSTEM_MIPS;"
  #endif
  #if AVMSYSTEM_SH4
    "AVMSYSTEM_SH4;"
  #endif
  #if AVMSYSTEM_UNIX
    "AVMSYSTEM_UNIX;"
  #endif
  #if AVMSYSTEM_MAC
    "AVMSYSTEM_MAC;"
  #endif
  #if AVMSYSTEM_WIN32
    "AVMSYSTEM_WIN32;"
  #endif
  #if AVMSYSTEM_SYMBIAN
    "AVMSYSTEM_SYMBIAN;"
  #endif
  #if AVMFEATURE_DEBUGGER
    "AVMFEATURE_DEBUGGER;"
  #endif
  #if AVMFEATURE_DEBUGGER_STUB
    "AVMFEATURE_DEBUGGER_STUB;"
  #endif
  #if AVMFEATURE_ALLOCATION_SAMPLER
    "AVMFEATURE_ALLOCATION_SAMPLER;"
  #endif
  #if AVMFEATURE_VTUNE
    "AVMFEATURE_VTUNE;"
  #endif
  #if AVMFEATURE_SHARK
    "AVMFEATURE_SHARK;"
  #endif
  #if AVMFEATURE_JIT
    "AVMFEATURE_JIT;"
  #endif
  #if AVMFEATURE_HALFMOON
    "AVMFEATURE_HALFMOON;"
  #endif
  #if AVMFEATURE_FLOAT
    "AVMFEATURE_FLOAT;"
  #endif
  #if AVMFEATURE_ALCHEMY_POSIX
    "AVMFEATURE_ALCHEMY_POSIX;"
  #endif
  #if AVMFEATURE_OSR
    "AVMFEATURE_OSR;"
  #endif
  #if AVMFEATURE_COMPILEPOLICY
    "AVMFEATURE_COMPILEPOLICY;"
  #endif
  #if AVMFEATURE_AOT
    "AVMFEATURE_AOT;"
  #endif
  #if AVMFEATURE_BUFFER_GUARD
    "AVMFEATURE_BUFFER_GUARD;"
  #endif
  #if AVMFEATURE_ABC_INTERP
    "AVMFEATURE_ABC_INTERP;"
  #endif
  #if AVMFEATURE_WORDCODE_INTERP
    "AVMFEATURE_WORDCODE_INTERP;"
  #endif
  #if AVMFEATURE_THREADED_INTERP
    "AVMFEATURE_THREADED_INTERP;"
  #endif
  #if AVMFEATURE_SELFTEST
    "AVMFEATURE_SELFTEST;"
  #endif
  #if AVMFEATURE_EVAL
    "AVMFEATURE_EVAL;"
  #endif
  #if AVMFEATURE_TELEMETRY
    "AVMFEATURE_TELEMETRY;"
  #endif
  #if AVMFEATURE_TELEMETRY_SAMPLER
    "AVMFEATURE_TELEMETRY_SAMPLER;"
  #endif
  #if AVMFEATURE_PROTECT_JITMEM
    "AVMFEATURE_PROTECT_JITMEM;"
  #endif
  #if AVMFEATURE_SHARED_GCHEAP
    "AVMFEATURE_SHARED_GCHEAP;"
  #endif
  #if AVMFEATURE_USE_SYSTEM_MALLOC
    "AVMFEATURE_USE_SYSTEM_MALLOC;"
  #endif
  #if AVMFEATURE_CPP_EXCEPTIONS
    "AVMFEATURE_CPP_EXCEPTIONS;"
  #endif
  #if AVMFEATURE_INTERIOR_POINTERS
    "AVMFEATURE_INTERIOR_POINTERS;"
  #endif
  #if AVMFEATURE_HEAP_ALLOCA
    "AVMFEATURE_HEAP_ALLOCA;"
  #endif
  #if AVMFEATURE_OVERRIDE_GLOBAL_NEW
    "AVMFEATURE_OVERRIDE_GLOBAL_NEW;"
  #endif
  #if AVMFEATURE_MEMORY_PROFILER
    "AVMFEATURE_MEMORY_PROFILER;"
  #endif
  #if AVMFEATURE_CACHE_GQCN
    "AVMFEATURE_CACHE_GQCN;"
  #endif
  #if AVMFEATURE_VALGRIND
    "AVMFEATURE_VALGRIND;"
  #endif
  #if AVMFEATURE_SAFEPOINTS
    "AVMFEATURE_SAFEPOINTS;"
  #endif
  #if AVMFEATURE_INTERRUPT_SAFEPOINT_POLL
    "AVMFEATURE_INTERRUPT_SAFEPOINT_POLL;"
  #endif
  #if AVMFEATURE_SWF12
    "AVMFEATURE_SWF12;"
  #endif
  #if AVMFEATURE_SWF13
    "AVMFEATURE_SWF13;"
  #endif
  #if AVMFEATURE_SWF14
    "AVMFEATURE_SWF14;"
  #endif
  #if AVMFEATURE_SWF15
    "AVMFEATURE_SWF15;"
  #endif
  #if AVMFEATURE_SWF16
    "AVMFEATURE_SWF16;"
  #endif
  #if AVMFEATURE_SWF17
    "AVMFEATURE_SWF17;"
  #endif
  #if AVMFEATURE_SWF18
    "AVMFEATURE_SWF18;"
  #endif
  #if AVMFEATURE_SWF19
    "AVMFEATURE_SWF19;"
  #endif
  #if AVMFEATURE_SWF20
    "AVMFEATURE_SWF20;"
  #endif
  #if AVMTWEAK_SIN_COS_NONFINITE
    "AVMTWEAK_SIN_COS_NONFINITE;"
  #endif
  #if AVMTWEAK_EPOC_EMULATOR
    "AVMTWEAK_EPOC_EMULATOR;"
  #endif
  #if AVMTWEAK_EXACT_TRACING
    "AVMTWEAK_EXACT_TRACING;"
  #endif
  #if AVMTWEAK_SELECTABLE_EXACT_TRACING
    "AVMTWEAK_SELECTABLE_EXACT_TRACING;"
  #endif
  #if AVMTWEAK_HEAP_GRAPH
    "AVMTWEAK_HEAP_GRAPH;"
  #endif
;

#endif // AVMSHELL_BUILD
