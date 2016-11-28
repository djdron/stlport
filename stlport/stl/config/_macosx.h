#define _STLP_PLATFORM "Mac OS X"

#if defined (__BIG_ENDIAN__)
#  define _STLP_BIG_ENDIAN 1
#elif defined (__LITTLE_ENDIAN__)
#  define _STLP_LITTLE_ENDIAN 1
#endif

#ifndef _STLP_USE_GLIBC
#  define _STLP_USE_GLIBC 1
#endif

#ifndef _STLP_USE_STDIO_IO
#  define _STLP_USE_UNIX_IO
#endif

#define _STLP_USE_UNIX_IO

/* If not explicitly specified otherwise, work with threads
 */
#if !defined(_STLP_NO_THREADS) && !defined(_REENTRANT)
#  define _REENTRANT
#endif

#if defined(_REENTRANT) && !defined(_PTHREADS)
# define _PTHREADS
#endif

#ifdef __UCLIBC__ /* uClibc 0.9.27 */
#  define _STLP_USE_UCLIBC 1
#  if !defined(__UCLIBC_HAS_WCHAR__)
#    ifndef _STLP_NO_WCHAR_T
#      define _STLP_NO_WCHAR_T
#    endif
#    ifndef _STLP_NO_NATIVE_MBSTATE_T
#      define _STLP_NO_NATIVE_MBSTATE_T
#    endif
#    ifndef _STLP_NO_NATIVE_WIDE_STREAMS
#      define _STLP_NO_NATIVE_WIDE_STREAMS
#    endif
#  endif /* __UCLIBC_HAS_WCHAR__ */
   /* Hmm, bogus _GLIBCPP_USE_NAMESPACES seems undefined... */
#  define _STLP_VENDOR_GLOBAL_CSTD 1
#endif


#if defined(_PTHREADS)
#  define _STLP_THREADS
#  define _STLP_PTHREADS
#endif