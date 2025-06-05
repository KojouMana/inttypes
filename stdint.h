#ifndef __COMPAT_STDINT_H
#define __COMPAT_STDINT_H

#undef __COMPAT_HAVE_STDINT_H

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
#define __COMPAT_HAVE_STDINT_H
#elif defined(_MSC_VER) && _MSC_VER >= 1600
#define __COMPAT_HAVE_STDINT_H
#elif defined(__MINGW32__) || defined(__MINGW64__)
#define __COMPAT_HAVE_STDINT_H
#endif

#ifdef __COMPAT_HAVE_STDINT_H

#include <stdint.h>

#else

#include <limits.h>
#include <wchar.h>

#if defined(_MSC_VER)

#if defined(_MSC_VER) && _MSC_VER < 1300
typedef signed char       int8_t;
typedef signed short      int16_t;
typedef signed int        int32_t;
typedef unsigned char     uint8_t;
typedef unsigned short    uint16_t;
typedef unsigned int      uint32_t;
#else
typedef signed __int8     int8_t;
typedef signed __int16    int16_t;
typedef signed __int32    int32_t;
typedef unsigned __int8   uint8_t;
typedef unsigned __int16  uint16_t;
typedef unsigned __int32  uint32_t;
#endif
typedef signed __int64    int64_t;
typedef unsigned __int64  uint64_t;

typedef int8_t    int_least8_t;
typedef int16_t   int_least16_t;
typedef int32_t   int_least32_t;
typedef int64_t   int_least64_t;
typedef uint8_t   uint_least8_t;
typedef uint16_t  uint_least16_t;
typedef uint32_t  uint_least32_t;
typedef uint64_t  uint_least64_t;

typedef int8_t    int_fast8_t;
typedef int16_t   int_fast16_t;
typedef int32_t   int_fast32_t;
typedef int64_t   int_fast64_t;
typedef uint8_t   uint_fast8_t;
typedef uint16_t  uint_fast16_t;
typedef uint32_t  uint_fast32_t;
typedef uint64_t  uint_fast64_t;

#if defined(WIN64) || defined(_WIN64) || defined(__WIN64) || defined(__WIN64__)
typedef signed __int64     intptr_t;
typedef unsigned __int64   uintptr_t;
#else
#if !defined(__midl) && (defined(_X86_) || defined(_M_IX86)) && _MSC_VER >= 1300
typedef __w64 signed int   intptr_t;
typedef __w64 unsigned int uintptr_t;
#else
typedef signed int         intptr_t;
typedef unsigned int       uintptr_t;
#endif
#endif

typedef int64_t   intmax_t;
typedef uint64_t  uintmax_t;

#if !defined(__cplusplus) || defined(__STDC_LIMIT_MACROS)

#define INT8_MIN     ((int8_t)_I8_MIN)
#define INT8_MAX     _I8_MAX
#define INT16_MIN    ((int16_t)_I16_MIN)
#define INT16_MAX    _I16_MAX
#define INT32_MIN    ((int32_t)_I32_MIN)
#define INT32_MAX    _I32_MAX
#define INT64_MIN    ((int64_t)_I64_MIN)
#define INT64_MAX    _I64_MAX
#define UINT8_MAX    _UI8_MAX
#define UINT16_MAX   _UI16_MAX
#define UINT32_MAX   _UI32_MAX
#define UINT64_MAX   _UI64_MAX

#define INT_LEAST8_MIN    INT8_MIN
#define INT_LEAST8_MAX    INT8_MAX
#define INT_LEAST16_MIN   INT16_MIN
#define INT_LEAST16_MAX   INT16_MAX
#define INT_LEAST32_MIN   INT32_MIN
#define INT_LEAST32_MAX   INT32_MAX
#define INT_LEAST64_MIN   INT64_MIN
#define INT_LEAST64_MAX   INT64_MAX
#define UINT_LEAST8_MAX   UINT8_MAX
#define UINT_LEAST16_MAX  UINT16_MAX
#define UINT_LEAST32_MAX  UINT32_MAX
#define UINT_LEAST64_MAX  UINT64_MAX

#define INT_FAST8_MIN    INT8_MIN
#define INT_FAST8_MAX    INT8_MAX
#define INT_FAST16_MIN   INT16_MIN
#define INT_FAST16_MAX   INT16_MAX
#define INT_FAST32_MIN   INT32_MIN
#define INT_FAST32_MAX   INT32_MAX
#define INT_FAST64_MIN   INT64_MIN
#define INT_FAST64_MAX   INT64_MAX
#define UINT_FAST8_MAX   UINT8_MAX
#define UINT_FAST16_MAX  UINT16_MAX
#define UINT_FAST32_MAX  UINT32_MAX
#define UINT_FAST64_MAX  UINT64_MAX

#if defined(WIN64) || defined(_WIN64) || defined(__WIN64) || defined(__WIN64__)
#define INTPTR_MIN   INT64_MIN
#define INTPTR_MAX   INT64_MAX
#define UINTPTR_MAX  UINT64_MAX
#else
#define INTPTR_MIN   INT32_MIN
#define INTPTR_MAX   INT32_MAX
#define UINTPTR_MAX  UINT32_MAX
#endif

#define INTMAX_MIN   INT64_MIN
#define INTMAX_MAX   INT64_MAX
#define UINTMAX_MAX  UINT64_MAX

#if defined(WIN64) || defined(_WIN64) || defined(__WIN64) || defined(__WIN64__)
#define PTRDIFF_MIN  _I64_MIN
#define PTRDIFF_MAX  _I64_MAX
#else
#define PTRDIFF_MIN  _I32_MIN
#define PTRDIFF_MAX  _I32_MAX
#endif

#define SIG_ATOMIC_MIN  INT_MIN
#define SIG_ATOMIC_MAX  INT_MAX

#ifndef SIZE_MAX
#if defined(WIN64) || defined(_WIN64) || defined(__WIN64) || defined(__WIN64__)
#define SIZE_MAX  _UI64_MAX
#else
#define SIZE_MAX  _UI32_MAX
#endif
#endif

#ifndef WCHAR_MIN
#define WCHAR_MIN  0
#endif
#ifndef WCHAR_MAX
#define WCHAR_MAX  _UI16_MAX
#endif

#define WINT_MIN  0
#define WINT_MAX  _UI16_MAX

#endif

#if !defined(__cplusplus) || defined(__STDC_CONSTANT_MACROS)

#define INT8_C(val)  val##i8
#define INT16_C(val) val##i16
#define INT32_C(val) val##i32
#define INT64_C(val) val##i64

#define UINT8_C(val)  val##ui8
#define UINT16_C(val) val##ui16
#define UINT32_C(val) val##ui32
#define UINT64_C(val) val##ui64

#define INTMAX_C   INT64_C
#define UINTMAX_C  UINT64_C

#endif

#elif defined(__GNUC__) || defined(__GNUG__)

#ifdef __INT8_TYPE__
typedef __INT8_TYPE__    int8_t;
#endif
#ifdef __INT16_TYPE__
typedef __INT16_TYPE__   int16_t;
#endif
#ifdef __INT32_TYPE__
typedef __INT32_TYPE__   int32_t;
#endif
#ifdef __INT64_TYPE__
typedef __INT64_TYPE__   int64_t;
#endif
#ifdef __UINT8_TYPE__
typedef __UINT8_TYPE__   uint8_t;
#endif
#ifdef __UINT16_TYPE__
typedef __UINT16_TYPE__  uint16_t;
#endif
#ifdef __UINT32_TYPE__
typedef __UINT32_TYPE__  uint32_t;
#endif
#ifdef __UINT64_TYPE__
typedef __UINT64_TYPE__  uint64_t;
#endif

typedef __INT_LEAST8_TYPE__    int_least8_t;
typedef __INT_LEAST16_TYPE__   int_least16_t;
typedef __INT_LEAST32_TYPE__   int_least32_t;
typedef __INT_LEAST64_TYPE__   int_least64_t;
typedef __UINT_LEAST8_TYPE__   uint_least8_t;
typedef __UINT_LEAST16_TYPE__  uint_least16_t;
typedef __UINT_LEAST32_TYPE__  uint_least32_t;
typedef __UINT_LEAST64_TYPE__  uint_least64_t;

typedef __INT_FAST8_TYPE__     int_fast8_t;
typedef __INT_FAST16_TYPE__    int_fast16_t;
typedef __INT_FAST32_TYPE__    int_fast32_t;
typedef __INT_FAST64_TYPE__    int_fast64_t;
typedef __UINT_FAST8_TYPE__    uint_fast8_t;
typedef __UINT_FAST16_TYPE__   uint_fast16_t;
typedef __UINT_FAST32_TYPE__   uint_fast32_t;
typedef __UINT_FAST64_TYPE__   uint_fast64_t;

#ifdef __INTPTR_TYPE__
typedef __INTPTR_TYPE__   intptr_t;
#endif
#ifdef __UINTPTR_TYPE__
typedef __UINTPTR_TYPE__  uintptr_t;
#endif

typedef __INTMAX_TYPE__   intmax_t;
typedef __UINTMAX_TYPE__  uintmax_t;

#if !defined(__cplusplus) || defined(__STDC_LIMIT_MACROS)

#ifdef __INT8_TYPE__
#define INT8_MIN    (-__INT8_MAX__ - 1)
#define INT8_MAX    __INT8_MAX__
#endif
#ifdef __UINT8_TYPE__
#define UINT8_MAX   __UINT8_MAX__
#endif
#ifdef __INT16_TYPE__
#define INT16_MIN   (-__INT16_MAX__ - 1)
#define INT16_MAX   __INT16_MAX__
#endif
#ifdef __UINT16_TYPE__
#define UINT16_MAX  __UINT16_MAX__
#endif
#ifdef __INT32_TYPE__
#define INT32_MIN   (-__INT32_MAX__ - 1)
#define INT32_MAX   __INT32_MAX__
#endif
#ifdef __UINT32_TYPE__
#define UINT32_MAX  __UINT32_MAX__
#endif
#ifdef __INT64_TYPE__
#define INT64_MIN   (-__INT64_MAX__ - 1)
#define INT64_MAX   __INT64_MAX__
#endif
#ifdef __UINT64_TYPE__
#define UINT64_MAX  __UINT64_MAX__
#endif

#define INT_LEAST8_MIN    (-__INT_LEAST8_MAX__ - 1)
#define INT_LEAST8_MAX    __INT_LEAST8_MAX__
#define INT_LEAST16_MIN   (-__INT_LEAST16_MAX__ - 1)
#define INT_LEAST16_MAX   __INT_LEAST16_MAX__
#define INT_LEAST32_MIN   (-__INT_LEAST32_MAX__ - 1)
#define INT_LEAST32_MAX   __INT_LEAST32_MAX__
#define INT_LEAST64_MIN   (-__INT_LEAST64_MAX__ - 1)
#define INT_LEAST64_MAX   __INT_LEAST64_MAX__
#define UINT_LEAST8_MAX   __UINT_LEAST8_MAX__
#define UINT_LEAST16_MAX  __UINT_LEAST16_MAX__
#define UINT_LEAST32_MAX  __UINT_LEAST32_MAX__
#define UINT_LEAST64_MAX  __UINT_LEAST64_MAX__

#define INT_FAST8_MIN     (-__INT_FAST8_MAX__ - 1)
#define INT_FAST8_MAX     __INT_FAST8_MAX__
#define INT_FAST16_MIN    (-__INT_FAST16_MAX__ - 1)
#define INT_FAST16_MAX    __INT_FAST16_MAX__
#define INT_FAST32_MIN    (-__INT_FAST32_MAX__ - 1)
#define INT_FAST32_MAX    __INT_FAST32_MAX__
#define INT_FAST64_MIN    (-__INT_FAST64_MAX__ - 1)
#define INT_FAST64_MAX    __INT_FAST64_MAX__
#define UINT_FAST8_MAX    __UINT_FAST8_MAX__
#define UINT_FAST16_MAX   __UINT_FAST16_MAX__
#define UINT_FAST32_MAX   __UINT_FAST32_MAX__
#define UINT_FAST64_MAX   __UINT_FAST64_MAX__

#ifdef __INTPTR_TYPE__
#define INTPTR_MIN    (-__INTPTR_MAX__ - 1)
#define INTPTR_MAX    __INTPTR_MAX__
#endif
#ifdef __UINTPTR_TYPE__
#define UINTPTR_MAX   __UINTPTR_MAX__
#endif

#define INTMAX_MIN   (-__INTMAX_MAX__ - 1)
#define INTMAX_MAX   __INTMAX_MAX__
#define UINTMAX_MAX  __UINTMAX_MAX__

#define PTRDIFF_MIN  (-__PTRDIFF_MAX__ - 1)
#define PTRDIFF_MAX  __PTRDIFF_MAX__

#define SIG_ATOMIC_MIN  __SIG_ATOMIC_MIN__
#define SIG_ATOMIC_MAX  __SIG_ATOMIC_MAX__

#ifndef SIZE_MAX
#define SIZE_MAX   __SIZE_MAX__
#endif

#ifndef WCHAR_MIN
#define WCHAR_MIN  __WCHAR_MIN__
#endif
#ifndef WCHAR_MAX
#define WCHAR_MAX  __WCHAR_MAX__
#endif

#define WINT_MIN   __WINT_MIN__
#define WINT_MAX   __WINT_MAX__

#endif

#if !defined(__cplusplus) || defined(__STDC_CONSTANT_MACROS)

#define INT8_C     __INT8_C
#define INT16_C    __INT16_C
#define INT32_C    __INT32_C
#define INT64_C    __INT64_C

#define UINT8_C    __UINT8_C
#define UINT16_C   __UINT16_C
#define UINT32_C   __UINT32_C
#define UINT64_C   __UINT64_C

#define INTMAX_C   __INTMAX_C
#define UINTMAX_C  __UINTMAX_C

#endif

#else

#error unsupported target

#endif

#endif

#endif
