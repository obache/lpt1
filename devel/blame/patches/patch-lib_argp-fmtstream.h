$NetBSD: patch-lib_argp-fmtstream.h,v 1.1 2012/07/03 18:11:38 joerg Exp $

--- lib/argp-fmtstream.h.orig	2006-11-18 10:07:43.000000000 +0000
+++ lib/argp-fmtstream.h
@@ -135,6 +135,7 @@ extern ssize_t argp_fmtstream_printf (ar
 				      const char *__fmt, ...)
      __attribute__ ((__format__ (printf, 2, 3)));
 
+#if 0
 extern int __argp_fmtstream_putc (argp_fmtstream_t __fs, int __ch);
 extern int argp_fmtstream_putc (argp_fmtstream_t __fs, int __ch);
 
@@ -145,6 +146,7 @@ extern size_t __argp_fmtstream_write (ar
 				      const char *__str, size_t __len);
 extern size_t argp_fmtstream_write (argp_fmtstream_t __fs,
 				    const char *__str, size_t __len);
+#endif
 
 /* Access macros for various bits of state.  */
 #define argp_fmtstream_lmargin(__fs) ((__fs)->lmargin)
@@ -154,6 +156,7 @@ extern size_t argp_fmtstream_write (argp
 #define __argp_fmtstream_rmargin argp_fmtstream_rmargin
 #define __argp_fmtstream_wmargin argp_fmtstream_wmargin
 
+#if 0
 /* Set __FS's left margin to LMARGIN and return the old value.  */
 extern size_t argp_fmtstream_set_lmargin (argp_fmtstream_t __fs,
 					  size_t __lmargin);
@@ -175,6 +178,7 @@ extern size_t __argp_fmtstream_set_wmarg
 /* Return the column number of the current output point in __FS.  */
 extern size_t argp_fmtstream_point (argp_fmtstream_t __fs);
 extern size_t __argp_fmtstream_point (argp_fmtstream_t __fs);
+#endif
 
 /* Internal routines.  */
 extern void _argp_fmtstream_update (argp_fmtstream_t __fs);
@@ -198,7 +202,11 @@ extern int __argp_fmtstream_ensure (argp
 #endif
 
 #ifndef ARGP_FS_EI
+#if defined(__GNUC__) && !defined(__GNUC_STDC_INLINE__)
 #define ARGP_FS_EI extern inline
+#else
+#define ARGP_FS_EI inline
+#endif
 #endif
 
 ARGP_FS_EI size_t
