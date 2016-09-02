/* include/do-not-use-config.h.  Generated from do-not-use-config.h.in by configure.  */
/* include/do-not-use-config.h.in.  Generated from configure.ac by autoheader.  */

/* Build AIGLX loader */
/* #undef AIGLX */

/* Default base font path */
#define BASE_FONT_PATH "/usr/X11/lib/X11/fonts"

/* Support BigRequests extension */
#define BIGREQS 1

/* Define to 1 if `struct sockaddr_in' has a `sin_len' member */
#define BSD44SOCKETS 1

/* Builder address */
#define BUILDERADDR "xorg@lists.freedesktop.org"

/* Builder string */
#define BUILDERSTRING ""

/* Default font path */
#define COMPILEDDEFAULTFONTPATH "/usr/X11/lib/X11/fonts/misc/,/usr/X11/lib/X11/fonts/TTF/,/usr/X11/lib/X11/fonts/OTF,/usr/X11/lib/X11/fonts/Type1/,/usr/X11/lib/X11/fonts/100dpi/,/usr/X11/lib/X11/fonts/75dpi/,/Library/Fonts,/System/Library/Fonts"

/* Support Composite Extension */
/* #undef COMPOSITE */

/* Use the D-Bus input configuration API */
/* #undef CONFIG_DBUS_API */

/* Use the HAL hotplug API */
/* #undef CONFIG_HAL */

/* Define to one of `_getb67', `GETB67', `getb67' for Cray-2 and Cray-YMP
   systems. This function is required for `alloca.c' support on those systems.
   */
/* #undef CRAY_STACKSEG_END */

/* System is BSD-like */
#define CSRG_BASED 1

/* Simple debug messages */
/* #undef CYGDEBUG */

/* Debug window manager */
/* #undef CYGMULTIWINDOW_DEBUG */

/* Debug messages for window handling */
/* #undef CYGWINDOWING_DEBUG */

/* Define to 1 if using `alloca.c'. */
/* #undef C_ALLOCA */

/* Support Damage extension */
#define DAMAGE 1

/* Support DBE extension */
#define DBE 1

/* Use ddxBeforeReset */
/* #undef DDXBEFORERESET */

/* Use OsVendorFatalError */
/* #undef DDXOSFATALERROR */

/* Use OsVendorInit */
#define DDXOSINIT 1

/* Use OsVendorVErrorF */
/* #undef DDXOSVERRORF */

/* Use GetTimeInMillis */
/* #undef DDXTIME */

/* Enable debugging code */
/* #undef DEBUG */

/* Default library install path */
/* #undef DEFAULT_LIBRARY_PATH */

/* Default log location */
/* #undef DEFAULT_LOGPREFIX */

/* Default module search path */
/* #undef DEFAULT_MODULE_PATH */

/* Support DGA extension */
/* #undef DGA */

/* Support DPMS extension */
/* #undef DPMSExtension */

/* Built-in output drivers (none) */
/* #undef DRIVERS */

/* Default DRI driver path */
#define DRI_DRIVER_PATH "/usr/X11/lib/dri"

/* Build Extended-Visual-Information extension */
#define EVI 1

/* Build FontCache extension */
/* #undef FONTCACHE */

/* Build GLX extension */
#define GLXEXT 1

/* Support XDM-AUTH*-1 */
#define HASXDMAUTH 1

/* System has /dev/xf86 aperture driver */
/* #undef HAS_APERTURE_DRV */

/* Cygwin has /dev/windows for signaling new win32 messages */
/* #undef HAS_DEVWINDOWS */

/* Have the 'getdtablesize' function. */
#define HAS_GETDTABLESIZE 1

/* Have the 'getifaddrs' function. */
#define HAS_GETIFADDRS 1

/* Have the 'getpeereid' function. */
#define HAS_GETPEEREID 1

/* Have the 'getpeerucred' function. */
/* #undef HAS_GETPEERUCRED */

/* Have the 'mmap' function. */
#define HAS_MMAP 1

/* Define to 1 if NetBSD built-in MTRR support is available */
/* #undef HAS_MTRR_BUILTIN */

/* MTRR support available */
/* #undef HAS_MTRR_SUPPORT */

/* Support SHM */
#define HAS_SHM 1

/* Have the 'strlcpy' function */
#define HAS_STRLCPY 1

/* Use Windows sockets */
/* #undef HAS_WINSOCK */

/* Define to 1 if you have `alloca', as a function or macro. */
#define HAVE_ALLOCA 1

/* Define to 1 if you have <alloca.h> and it should be used (not on Ultrix).
   */
#define HAVE_ALLOCA_H 1

/* Define to 1 if you have the <asm/mtrr.h> header file. */
/* #undef HAVE_ASM_MTRR_H */

/* Define to 1 if you have the `authdes_create' function. */
/* #undef HAVE_AUTHDES_CREATE */

/* Define to 1 if you have the `authdes_seccreate' function. */
/* #undef HAVE_AUTHDES_SECCREATE */

/* Has backtrace support */
#define HAVE_BACKTRACE 1

/* Define to 1 if you have the <byteswap.h> header file. */
/* #undef HAVE_BYTESWAP_H */

/* Have the 'cbrt' function */
#define HAVE_CBRT 1

/* Define to 1 if you have the `clock_gettime' function. */
/* #undef HAVE_CLOCK_GETTIME */

/* Define to 1 if you have the <dbm.h> header file. */
/* #undef HAVE_DBM_H */

/* Have D-Bus support */
/* #undef HAVE_DBUS */

/* Define to 1 if you have the <dirent.h> header file, and it defines `DIR'.
   */
#define HAVE_DIRENT_H 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you don't have `vprintf' but do have `_doprnt.' */
/* #undef HAVE_DOPRNT */

/* Have execinfo.h */
#define HAVE_EXECINFO_H 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the `geteuid' function. */
#define HAVE_GETEUID 1

/* Define to 1 if you have the `getisax' function. */
/* #undef HAVE_GETISAX */

/* Define to 1 if you have the `getopt' function. */
#define HAVE_GETOPT 1

/* Define to 1 if you have the `getopt_long' function. */
#define HAVE_GETOPT_LONG 1

/* Define to 1 if you have the `getuid' function. */
#define HAVE_GETUID 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Has version 2.2 (or newer) of the drm library */
/* #undef HAVE_LIBDRM_2_2 */

/* Define to 1 if you have the `m' library (-lm). */
#define HAVE_LIBM 1

/* Define to 1 if you have the `ws2_32' library (-lws2_32). */
/* #undef HAVE_LIBWS2_32 */

/* Define to 1 if you have the `link' function. */
#define HAVE_LINK 1

/* Define to 1 if you have the <linux/agpgart.h> header file. */
/* #undef HAVE_LINUX_AGPGART_H */

/* Define to 1 if you have the <linux/apm_bios.h> header file. */
/* #undef HAVE_LINUX_APM_BIOS_H */

/* Define to 1 if you have the <linux/fb.h> header file. */
/* #undef HAVE_LINUX_FB_H */

/* Define to 1 if you have the <machine/mtrr.h> header file. */
/* #undef HAVE_MACHINE_MTRR_H */

/* Define to 1 if you have the `memmove' function. */
#define HAVE_MEMMOVE 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `memset' function. */
#define HAVE_MEMSET 1

/* Define to 1 if you have the `mkstemp' function. */
#define HAVE_MKSTEMP 1

/* Define to 1 if you have the <ndbm.h> header file. */
#define HAVE_NDBM_H 1

/* Define to 1 if you have the <ndir.h> header file, and it defines `DIR'. */
/* #undef HAVE_NDIR_H */

/* Define to 1 if you have the <rpcsvc/dbm.h> header file. */
/* #undef HAVE_RPCSVC_DBM_H */

/* Define to 1 if you have the <SDL/SDL.h> header file. */
/* #undef HAVE_SDL_SDL_H */

/* Define to 1 if the system has the type `socklen_t'. */
#define HAVE_SOCKLEN_T 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strchr' function. */
#define HAVE_STRCHR 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strrchr' function. */
#define HAVE_STRRCHR 1

/* Define to 1 if you have the `strtol' function. */
#define HAVE_STRTOL 1

/* Define to 1 if SYSV IPC is available */
#define HAVE_SYSV_IPC 1

/* Define to 1 if you have the <sys/agpio.h> header file. */
/* #undef HAVE_SYS_AGPIO_H */

/* Define to 1 if you have the <sys/dir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_DIR_H */

/* Define to 1 if you have the <sys/io.h> header file. */
/* #undef HAVE_SYS_IO_H */

/* Define to 1 if you have the <sys/linker.h> header file. */
/* #undef HAVE_SYS_LINKER_H */

/* Define to 1 if you have the <sys/memrange.h> header file. */
/* #undef HAVE_SYS_MEMRANGE_H */

/* Define to 1 if you have the <sys/ndir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_NDIR_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/vm86.h> header file. */
/* #undef HAVE_SYS_VM86_H */

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the `vprintf' function. */
#define HAVE_VPRINTF 1

/* Define to 1 if you have the `vsnprintf' function. */
#define HAVE_VSNPRINTF 1

/* Define to 1 if you have the `walkcontext' function. */
/* #undef HAVE_WALKCONTEXT */

/* Built-in input drivers (none) */
/* #undef IDRIVERS */

/* Support IPv6 for TCP connections */
#define IPv6 1

/* Build kdrive ddx */
/* #undef KDRIVEDDXACTIONS */

/* Build fbdev-based kdrive server */
/* #undef KDRIVEFBDEV */

/* Build Kdrive X server */
/* #undef KDRIVESERVER */

/* Build VESA-based kdrive servers */
/* #undef KDRIVEVESA */

/* Support os-specific local connections */
/* #undef LOCALCONN */

/* Support MIT Misc extension */
#define MITMISC 1

/* Support MIT-SHM extension */
#define MITSHM 1

/* Have monotonic clock from clock_gettime() */
/* #undef MONOTONIC_CLOCK */

/* Build Multibuffer extension */
/* #undef MULTIBUFFER */

/* Disable some debugging code */
#define NDEBUG 1

/* Do not have 'strcasecmp'. */
/* #undef NEED_STRCASECMP */

/* Need XFree86 helper functions */
/* #undef NEED_XF86_PROTOTYPES */

/* Need XFree86 typedefs */
/* #undef NEED_XF86_TYPES */

/* Define to 1 if modules should avoid the libcwrapper */
#define NO_LIBCWRAPPER 1

/* Use an empty root cursor */
/* #undef NULL_ROOT_CURSOR */

/* Operating System Name */
#define OSNAME "Darwin 9.8.0 Power Macintosh"

/* Operating System Vendor */
#define OSVENDOR ""

/* Name of package */
#define PACKAGE "xorg-server"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "https://bugs.freedesktop.org/enter_bug.cgi?product=xorg"

/* Define to the full name of this package. */
#define PACKAGE_NAME "xorg-server"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "xorg-server 1.4.2-apple45"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "xorg-server"

/* Define to the version of this package. */
#define PACKAGE_VERSION "1.4.2-apple45"

/* Major version of this package */
#define PACKAGE_VERSION_MAJOR 1

/* Minor version of this package */
#define PACKAGE_VERSION_MINOR 4

/* Patch version of this package */
#define PACKAGE_VERSION_PATCHLEVEL 2

/* Internal define for Xinerama */
#define PANORAMIX 1

/* System has PC console */
/* #undef PCCONS_SUPPORT */

/* System has PC console */
/* #undef PCVT_SUPPORT */

/* Support pixmap privates */
#define PIXPRIV 1

/* Overall prefix */
#define PROJECTROOT "/usr/X11"

/* Support RANDR extension */
#define RANDR 1

/* Make PROJECT_ROOT relative to the xserver location */
/* #undef RELOCATE_PROJECTROOT */

/* Support RENDER extension */
#define RENDER 1

/* Support X resource extension */
#define RES 1

/* Define as the return type of signal handlers (`int' or `void'). */
/* #undef RETSIGTYPE */

/* Default RGB path */
#define RGB_DB "/usr/X11/share/X11/rgb"

/* Build Rootless code */
#define ROOTLESS 1

/* Support MIT-SCREEN-SAVER extension */
#define SCREENSAVER 1

/* Support Secure RPC ("SUN-DES-1") authentication for X11 clients */
/* #undef SECURE_RPC */

/* Server config path */
#define SERVERCONFIGdir "/usr/X11/lib/xserver"

/* Use a lock to prevent multiple servers on a display */
#define SERVER_LOCK 1

/* Support SHAPE extension */
#define SHAPE 1

/* The size of `unsigned long', as computed by sizeof. */
#define SIZEOF_UNSIGNED_LONG 4

/* Include time-based scheduler */
#define SMART_SCHEDULE 1

/* If using the C implementation of alloca, define if you know the
   direction of stack growth for your system; otherwise it will be
   automatically deduced at runtime.
	STACK_DIRECTION > 0 => grows toward higher addresses
	STACK_DIRECTION < 0 => grows toward lower addresses
	STACK_DIRECTION = 0 => direction of growth unknown */
/* #undef STACK_DIRECTION */

/* Build a standalone xpbproxy */
/* #undef STANDALONE_XPBPROXY */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 on systems derived from System V Release 4 */
/* #undef SVR4 */

/* System has syscons console */
/* #undef SYSCONS_SUPPORT */

/* Support TCP socket connections */
#define TCPCONN 1

/* Build TOG-CUP extension */
#define TOGCUP 1

/* Have tslib support */
/* #undef TSLIB */

/* Support UNIX socket connections */
#define UNIXCONN 1

/* NetBSD PIO alpha IO */
/* #undef USE_ALPHA_PIO */

/* BSD AMD64 iopl */
/* #undef USE_AMD64_IOPL */

/* BSD /dev/io */
/* #undef USE_DEV_IO */

/* BSD i386 iopl */
/* #undef USE_I386_IOPL */

/* Use built-in RGB color database */
/* #undef USE_RGB_BUILTIN */

/* Use rgb.txt directly */
#define USE_RGB_TXT 1

/* Define to use byteswap macros from <sys/endian.h> */
/* #undef USE_SYS_ENDIAN_H */

/* Version number of package */
#define VERSION "1.4.2-apple45"

/* Building vgahw module */
/* #undef WITH_VGAHW */

/* System has wscons console */
/* #undef WSCONS_SUPPORT */

/* Build X-ACE extension */
#define XACE 1

/* Build APPGROUP extension */
#define XAPPGROUP 1

/* Build XCalibrate extension */
/* #undef XCALIBRATE */

/* Support XCMisc extension */
#define XCMISC 1

/* Build Security extension */
#define XCSECURITY 1

/* Support XDM Control Protocol */
#define XDMCP 1

/* Path to XErrorDB file */
#define XERRORDB_PATH "/usr/X11/share/X11/XErrorDB"

/* Build XEvIE extension */
#define XEVIE 1

/* Support XF86 Big font extension */
/* #undef XF86BIGFONT */

/* Name of configuration file */
/* #undef XF86CONFIGFILE */

/* Build DRI extension */
/* #undef XF86DRI */

/* Support XFree86 miscellaneous extensions */
/* #undef XF86MISC */

/* Support XFree86 Video Mode extension */
/* #undef XF86VIDMODE */

/* Support XFixes extension */
#define XFIXES 1

/* Building loadable XFree86 server */
/* #undef XFree86LOADER */

/* Building XFree86 server */
/* #undef XFree86Server */

/* Build XDGA support */
/* #undef XFreeXDGA */

/* Use loadable XGL modules */
/* #undef XGL_MODULAR */

/* Default XGL module search path */
/* #undef XGL_MODULE_PATH */

/* Support Xinerama extension */
#define XINERAMA 1

/* Support X Input extension */
#define XINPUT 1

/* Build XKB */
#define XKB 1

/* Path to XKB data */
#define XKB_BASE_DIRECTORY "/usr/X11/share/X11/xkb"

/* Path to XKB bin dir */
#define XKB_BIN_DIRECTORY "/usr/X11/bin"

/* Disable XKB per default */
#define XKB_DFLT_DISABLED 0

/* Build XKB server */
#define XKB_IN_SERVER 1

/* Path to XKB output dir */
#define XKM_OUTPUT_DIR "/usr/X11/share/X11/xkb/compiled/"

/* Building Xorg server */
/* #undef XORGSERVER */

/* Vendor release */
#define XORG_DATE "11 June 2008"

/* Vendor man version */
#define XORG_MAN_VERSION "Version 1.4.2-apple45"

/* Building Xorg server */
/* #undef XORG_SERVER */

/* Current Xorg version */
/* #undef XORG_VERSION_CURRENT */

/* Have Quartz */
#define XQUARTZ 1

/* Support Record extension */
#define XRECORD 1

/* Build XRes extension */
#define XResExtension 1

/* Build Xsdl server */
/* #undef XSDLSERVER */

/* Define to 1 if the DTrace Xserver provider probes should be built in. */
/* #undef XSERVER_DTRACE */

/* Support XSync extension */
#define XSYNC 1

/* Support XTest extension */
#define XTEST 1

/* Support XTrap extension */
#define XTRAP 1

/* Support Xv extension */
#define XV 1

/* Vendor name */
#define XVENDORNAME "The X.Org Foundation"

/* Short vendor name */
#define XVENDORNAMESHORT "X.Org"

/* Build Xv extension */
#define XvExtension 1

/* Build XvMC extension */
#define XvMCExtension 1

/* Define to 1 if `lex' declares `yytext' as a `char *' by default, not a
   `char[]'. */
#define YYTEXT_POINTER 1

/* Number of bits in a file offset, on hosts where this is settable. */
/* #undef _FILE_OFFSET_BITS */

/* Enable GNU and other extensions to the C environment for glibc */
/* #undef _GNU_SOURCE */

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* Define to 1 if unsigned long is 64 bits. */
/* #undef _XSERVER64 */

/* Solaris 8 or later */
/* #undef __SOL8__ */

/* Vendor web address for support */
/* #undef __VENDORDWEBSUPPORT__ */

/* Name of configuration file */
/* #undef __XCONFIGFILE__ */

/* Default XKB rules */
#define __XKBDEFRULES__ "xorg"

/* Name of X server */
/* #undef __XSERVERNAME__ */

/* Define to 16-bit byteswap macro */
/* #undef bswap_16 */

/* Define to 32-bit byteswap macro */
/* #undef bswap_32 */

/* Define to 64-bit byteswap macro */
/* #undef bswap_64 */

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef pid_t */
