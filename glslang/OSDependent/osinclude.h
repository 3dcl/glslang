#ifndef OSDEPENDENT_OSINCLUDE_INCLUDED
#define OSDEPENDENT_OSINCLUDE_INCLUDED

#ifdef _WIN32
#	include "../OSDependent/windows/osinclude.h"
#elif __APPLE__
#	include "../OSDependent/macos/osinclude.h"
#else
#	include "../OSDependent/linux/osinclude.h"
#endif

#endif//OSDEPENDENT_OSINCLUDE_INCLUDED
