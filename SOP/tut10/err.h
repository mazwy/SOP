#ifndef _ERR_
#define _ERR_

/* writes system function's error message and exits process */
/* wypisuje informacje o blednym zakonczeniu funkcji systemowej i konczy dzialanie */

extern void syserr(const char *fmt, ...);


/* writes error message and exits process */
/* wypisuje informacje o bledzie i konczy dzialanie */

extern void fatal(const char *fmt, ...);

#endif
