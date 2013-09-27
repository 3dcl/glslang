#ifndef OSDEPENDENT_OSINCLUDE_INCLUDED
#define OSDEPENDENT_OSINCLUDE_INCLUDED

#ifdef _WIN32
#	include "../OSDependent/windows/osinclude.h"
#else
#	include "../OSDependent/posix/osinclude.h"
#endif

#endif//OSDEPENDENT_OSINCLUDE_INCLUDED
