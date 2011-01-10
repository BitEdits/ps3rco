// stupid MSVC
#include <string.h>
#ifdef WIN32
#ifndef strcasecmp
#define strcasecmp _stricmp
#endif
#else
#include <strings.h>
#endif
