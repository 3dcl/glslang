#ifndef OSDEPENDENT_OSINCLUDE_INCLUDED
#define OSDEPENDENT_OSINCLUDE_INCLUDED

#ifdef _WIN32
#	include "../OSDependent/Windows/osinclude.h"
#else
#	include "../OSDependent/Posix/osinclude.h"
#endif

#endif//OSDEPENDENT_OSINCLUDE_INCLUDED
