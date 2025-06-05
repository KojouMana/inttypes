#ifndef __COMPAT_INTTYPES_H
#define __COMPAT_INTTYPES_H

#undef __COMPAT_HAVE_INTTYPES_H

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
#define __COMPAT_HAVE_INTTYPES_H
#elif defined(_MSC_VER) && _MSC_VER >= 1800
#define __COMPAT_HAVE_INTTYPES_H
#elif defined(__MINGW32__) || defined(__MINGW64__)
#define __COMPAT_HAVE_INTTYPES_H
#endif

#ifdef __COMPAT_HAVE_INTTYPES_H

#include <inttypes.h>

#else

#ifdef __cplusplus
extern "C" {
#endif

#include "stdint.h"

#if defined(_MSC_VER)

#if !defined(__cplusplus) || defined(__STDC_FORMAT_MACROS)

#define PRId8        "d"
#define PRIi8        "i"
#define PRIdLEAST8   "d"
#define PRIiLEAST8   "i"
#define PRIdFAST8    "d"
#define PRIiFAST8    "i"

#define PRId16       "hd"
#define PRIi16       "hi"
#define PRIdLEAST16  "hd"
#define PRIiLEAST16  "hi"
#define PRIdFAST16   "hd"
#define PRIiFAST16   "hi"

#if defined(_MSC_VER) && _MSC_VER < 1300
#define PRId32       "ld"
#define PRIi32       "li"
#define PRIdLEAST32  "ld"
#define PRIiLEAST32  "li"
#define PRIdFAST32   "ld"
#define PRIiFAST32   "li"
#else
#define PRId32       "I32d"
#define PRIi32       "I32i"
#define PRIdLEAST32  "I32d"
#define PRIiLEAST32  "I32i"
#define PRIdFAST32   "I32d"
#define PRIiFAST32   "I32i"
#endif

#define PRId64       "I64d"
#define PRIi64       "I64i"
#define PRIdLEAST64  "I64d"
#define PRIiLEAST64  "I64i"
#define PRIdFAST64   "I64d"
#define PRIiFAST64   "I64i"

#define PRIdMAX      "I64d"
#define PRIiMAX      "I64i"

#define PRIdPTR      "Id"
#define PRIiPTR      "Ii"

#define PRIo8        "o"
#define PRIu8        "u"
#define PRIx8        "x"
#define PRIX8        "X"
#define PRIoLEAST8   "o"
#define PRIuLEAST8   "u"
#define PRIxLEAST8   "x"
#define PRIXLEAST8   "X"
#define PRIoFAST8    "o"
#define PRIuFAST8    "u"
#define PRIxFAST8    "x"
#define PRIXFAST8    "X"

#define PRIo16       "ho"
#define PRIu16       "hu"
#define PRIx16       "hx"
#define PRIX16       "hX"
#define PRIoLEAST16  "ho"
#define PRIuLEAST16  "hu"
#define PRIxLEAST16  "hx"
#define PRIXLEAST16  "hX"
#define PRIoFAST16   "ho"
#define PRIuFAST16   "hu"
#define PRIxFAST16   "hx"
#define PRIXFAST16   "hX"

#if defined(_MSC_VER) && _MSC_VER < 1300
#define PRIo32       "lo"
#define PRIu32       "lu"
#define PRIx32       "lx"
#define PRIX32       "lX"
#define PRIoLEAST32  "lo"
#define PRIuLEAST32  "lu"
#define PRIxLEAST32  "lx"
#define PRIXLEAST32  "lX"
#define PRIoFAST32   "lo"
#define PRIuFAST32   "lu"
#define PRIxFAST32   "lx"
#define PRIXFAST32   "lX"
#else
#define PRIo32       "I32o"
#define PRIu32       "I32u"
#define PRIx32       "I32x"
#define PRIX32       "I32X"
#define PRIoLEAST32  "I32o"
#define PRIuLEAST32  "I32u"
#define PRIxLEAST32  "I32x"
#define PRIXLEAST32  "I32X"
#define PRIoFAST32   "I32o"
#define PRIuFAST32   "I32u"
#define PRIxFAST32   "I32x"
#define PRIXFAST32   "I32X"
#endif

#define PRIo64       "I64o"
#define PRIu64       "I64u"
#define PRIx64       "I64x"
#define PRIX64       "I64X"
#define PRIoLEAST64  "I64o"
#define PRIuLEAST64  "I64u"
#define PRIxLEAST64  "I64x"
#define PRIXLEAST64  "I64X"
#define PRIoFAST64   "I64o"
#define PRIuFAST64   "I64u"
#define PRIxFAST64   "I64x"
#define PRIXFAST64   "I64X"

#define PRIoMAX      "I64o"
#define PRIuMAX      "I64u"
#define PRIxMAX      "I64x"
#define PRIXMAX      "I64X"

#define PRIoPTR      "Io"
#define PRIuPTR      "Iu"
#define PRIxPTR      "Ix"
#define PRIXPTR      "IX"

#define SCNd8        "d"
#define SCNi8        "i"
#define SCNdLEAST8   "d"
#define SCNiLEAST8   "i"
#define SCNdFAST8    "d"
#define SCNiFAST8    "i"

#define SCNd16       "hd"
#define SCNi16       "hi"
#define SCNdLEAST16  "hd"
#define SCNiLEAST16  "hi"
#define SCNdFAST16   "hd"
#define SCNiFAST16   "hi"

#if defined(_MSC_VER) && _MSC_VER < 1300
#define SCNd32       "ld"
#define SCNi32       "li"
#define SCNdLEAST32  "ld"
#define SCNiLEAST32  "li"
#define SCNdFAST32   "ld"
#define SCNiFAST32   "li"
#else
#define SCNd32       "I32d"
#define SCNi32       "I32i"
#define SCNdLEAST32  "I32d"
#define SCNiLEAST32  "I32i"
#define SCNdFAST32   "I32d"
#define SCNiFAST32   "I32i"
#endif

#define SCNd64       "I64d"
#define SCNi64       "I64i"
#define SCNdLEAST64  "I64d"
#define SCNiLEAST64  "I64i"
#define SCNdFAST64   "I64d"
#define SCNiFAST64   "I64i"

#define SCNdMAX      "I64d"
#define SCNiMAX      "I64i"

#if defined(WIN64) || defined(_WIN64) || defined(__WIN64) || defined(__WIN64__)
#define SCNdPTR      "I64d"
#define SCNiPTR      "I64i"
#else
#define SCNdPTR      "Id"
#define SCNiPTR      "Ii"
#endif

#define SCNo8        "o"
#define SCNu8        "u"
#define SCNx8        "x"
#define SCNX8        "X"
#define SCNoLEAST8   "o"
#define SCNuLEAST8   "u"
#define SCNxLEAST8   "x"
#define SCNXLEAST8   "X"
#define SCNoFAST8    "o"
#define SCNuFAST8    "u"
#define SCNxFAST8    "x"
#define SCNXFAST8    "X"

#define SCNo16       "ho"
#define SCNu16       "hu"
#define SCNx16       "hx"
#define SCNX16       "hX"
#define SCNoLEAST16  "ho"
#define SCNuLEAST16  "hu"
#define SCNxLEAST16  "hx"
#define SCNXLEAST16  "hX"
#define SCNoFAST16   "ho"
#define SCNuFAST16   "hu"
#define SCNxFAST16   "hx"
#define SCNXFAST16   "hX"

#define SCNo32       "lo"
#define SCNu32       "lu"
#define SCNx32       "lx"
#define SCNX32       "lX"
#define SCNoLEAST32  "lo"
#define SCNuLEAST32  "lu"
#define SCNxLEAST32  "lx"
#define SCNXLEAST32  "lX"
#define SCNoFAST32   "lo"
#define SCNuFAST32   "lu"
#define SCNxFAST32   "lx"
#define SCNXFAST32   "lX"

#define SCNo64       "I64o"
#define SCNu64       "I64u"
#define SCNx64       "I64x"
#define SCNX64       "I64X"
#define SCNoLEAST64  "I64o"
#define SCNuLEAST64  "I64u"
#define SCNxLEAST64  "I64x"
#define SCNXLEAST64  "I64X"
#define SCNoFAST64   "I64o"
#define SCNuFAST64   "I64u"
#define SCNxFAST64   "I64x"
#define SCNXFAST64   "I64X"

#define SCNoMAX      "I64o"
#define SCNuMAX      "I64u"
#define SCNxMAX      "I64x"
#define SCNXMAX      "I64X"

#if defined(WIN64) || defined(_WIN64) || defined(__WIN64) || defined(__WIN64__)
#define SCNoPTR      "I64o"
#define SCNuPTR      "I64u"
#define SCNxPTR      "I64x"
#define SCNXPTR      "I64X"
#else
#define SCNoPTR      "Io"
#define SCNuPTR      "Iu"
#define SCNxPTR      "Ix"
#define SCNXPTR      "IX"
#endif

#endif

#define imaxabs _abs64

typedef struct {
   intmax_t quot;
   intmax_t rem;
} imaxdiv_t;

static
__inline
imaxdiv_t __cdecl imaxdiv(intmax_t numer, intmax_t denom) {

   imaxdiv_t result;

   result.quot = numer / denom;
   result.rem = numer % denom;

   if (numer < 0 && result.rem > 0) {
      // did division wrong; must fix up
      ++ result.quot;
      result.rem -= denom;
   }

   return result;
}

#define strtoimax _strtoi64
#define strtoumax _strtoui64

#define wcstoimax _wcstoi64
#define wcstoumax _wcstoui64

#elif defined(__GNUC__) || defined(__GNUG__)

#if !defined(__cplusplus) || defined(__STDC_FORMAT_MACROS)

#define PRId8        "hhd"
#define PRIi8        "hhi"
#define PRIdLEAST8   "hhd"
#define PRIiLEAST8   "hhi"
#define PRIdFAST8    "hhd"
#define PRIiFAST8    "hhi"

#define PRId16       "hd"
#define PRIi16       "hi"
#define PRIdLEAST16  "hd"
#define PRIiLEAST16  "hi"
#define PRIdFAST16   "hd"
#define PRIiFAST16   "hi"

#define PRId32       "d"
#define PRIi32       "i"
#define PRIdLEAST32  "d"
#define PRIiLEAST32  "i"
#define PRIdFAST32   "d"
#define PRIiFAST32   "i"

#define PRId64       "lld"
#define PRIi64       "lli"
#define PRIdLEAST64  "lld"
#define PRIiLEAST64  "lli"
#define PRIdFAST64   "lld"
#define PRIiFAST64   "lli"

#define PRIdMAX      "lld"
#define PRIiMAX      "lli"

#define PRIdPTR      "Id"
#define PRIiPTR      "Ii"

#define PRIo8        "hho"
#define PRIu8        "hhu"
#define PRIx8        "hhx"
#define PRIX8        "hhX"
#define PRIoLEAST8   "hho"
#define PRIuLEAST8   "hhu"
#define PRIxLEAST8   "hhx"
#define PRIXLEAST8   "hhX"
#define PRIoFAST8    "hho"
#define PRIuFAST8    "hhu"
#define PRIxFAST8    "hhx"
#define PRIXFAST8    "hhX"

#define PRIo16       "ho"
#define PRIu16       "hu"
#define PRIx16       "hx"
#define PRIX16       "hX"
#define PRIoLEAST16  "ho"
#define PRIuLEAST16  "hu"
#define PRIxLEAST16  "hx"
#define PRIXLEAST16  "hX"
#define PRIoFAST16   "ho"
#define PRIuFAST16   "hu"
#define PRIxFAST16   "hx"
#define PRIXFAST16   "hX"

#define PRIo32       "o"
#define PRIu32       "u"
#define PRIx32       "x"
#define PRIX32       "X"
#define PRIoLEAST32  "o"
#define PRIuLEAST32  "u"
#define PRIxLEAST32  "x"
#define PRIXLEAST32  "X"
#define PRIoFAST32   "o"
#define PRIuFAST32   "u"
#define PRIxFAST32   "x"
#define PRIXFAST32   "X"

#define PRIo64       "llo"
#define PRIu64       "llu"
#define PRIx64       "llx"
#define PRIX64       "llX"
#define PRIoLEAST64  "llo"
#define PRIuLEAST64  "llu"
#define PRIxLEAST64  "llx"
#define PRIXLEAST64  "llX"
#define PRIoFAST64   "llo"
#define PRIuFAST64   "llu"
#define PRIxFAST64   "llx"
#define PRIXFAST64   "llX"

#define PRIoMAX      "llo"
#define PRIuMAX      "llu"
#define PRIxMAX      "llx"
#define PRIXMAX      "llX"

#define PRIoPTR      "Io"
#define PRIuPTR      "Iu"
#define PRIxPTR      "Ix"
#define PRIXPTR      "IX"

#define SCNd8        "hhd"
#define SCNi8        "hhi"
#define SCNdLEAST8   "hhd"
#define SCNiLEAST8   "hhi"
#define SCNdFAST8    "hhd"
#define SCNiFAST8    "hhi"

#define SCNd16       "hd"
#define SCNi16       "hi"
#define SCNdLEAST16  "hd"
#define SCNiLEAST16  "hi"
#define SCNdFAST16   "hd"
#define SCNiFAST16   "hi"

#define SCNd32       "d"
#define SCNi32       "i"
#define SCNdLEAST32  "d"
#define SCNiLEAST32  "i"
#define SCNdFAST32   "d"
#define SCNiFAST32   "i"

#define SCNd64       "lld"
#define SCNi64       "lli"
#define SCNdLEAST64  "lld"
#define SCNiLEAST64  "lli"
#define SCNdFAST64   "lld"
#define SCNiFAST64   "lli"

#define SCNdMAX      "lld"
#define SCNiMAX      "lli"

#define SCNdPTR      "Id"
#define SCNiPTR      "Ii"

#define SCNo8        "hho"
#define SCNu8        "hhu"
#define SCNx8        "hhx"
#define SCNX8        "hhX"
#define SCNoLEAST8   "hho"
#define SCNuLEAST8   "hhu"
#define SCNxLEAST8   "hhx"
#define SCNXLEAST8   "hhX"
#define SCNoFAST8    "hho"
#define SCNuFAST8    "hhu"
#define SCNxFAST8    "hhx"
#define SCNXFAST8    "hhX"

#define SCNo16       "ho"
#define SCNu16       "hu"
#define SCNx16       "hx"
#define SCNX16       "hX"
#define SCNoLEAST16  "ho"
#define SCNuLEAST16  "hu"
#define SCNxLEAST16  "hx"
#define SCNXLEAST16  "hX"
#define SCNoFAST16   "ho"
#define SCNuFAST16   "hu"
#define SCNxFAST16   "hx"
#define SCNXFAST16   "hX"

#define SCNo32       "o"
#define SCNu32       "u"
#define SCNx32       "x"
#define SCNX32       "X"
#define SCNoLEAST32  "o"
#define SCNuLEAST32  "u"
#define SCNxLEAST32  "x"
#define SCNXLEAST32  "X"
#define SCNoFAST32   "o"
#define SCNuFAST32   "u"
#define SCNxFAST32   "x"
#define SCNXFAST32   "X"

#define SCNo64       "llo"
#define SCNu64       "llu"
#define SCNx64       "llx"
#define SCNX64       "llX"
#define SCNoLEAST64  "llo"
#define SCNuLEAST64  "llu"
#define SCNxLEAST64  "llx"
#define SCNXLEAST64  "llX"
#define SCNoFAST64   "llo"
#define SCNuFAST64   "llu"
#define SCNxFAST64   "llx"
#define SCNXFAST64   "llX"

#define SCNoMAX      "llo"
#define SCNuMAX      "llu"
#define SCNxMAX      "llx"
#define SCNXMAX      "llX"

#define SCNoPTR      "Io"
#define SCNuPTR      "Iu"
#define SCNxPTR      "Ix"
#define SCNXPTR      "IX"

#endif

#define imaxabs llabs

typedef lldiv_t imaxdiv_t;

#define imaxdiv lldiv

#define strtoimax strtoll
#define strtoumax strtoull

#define wcstoimax wcstoll
#define wcstoumax wcstoull

#else

#error unsupported target

#endif

#ifdef __cplusplus
}
#endif

#endif

#endif
