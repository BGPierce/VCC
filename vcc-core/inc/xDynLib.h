#ifndef _xDynLib_h_
#define _xDynLib_h_

/*****************************************************************************/

#include "xTypes.h"

/*****************************************************************************/

typedef struct xdynlib_t * pxdynlib_t;

/*****************************************************************************/

#ifdef __cplusplus
extern "C"
{
#endif
	
	VCCCORE_API result_t	VCCCORE_CALL xDynLibLoad(ppathname_t pPathname, pxdynlib_t * ppxdynlib);
	VCCCORE_API result_t	VCCCORE_CALL xDynLibUnload(pxdynlib_t * ppxdynlib);
	VCCCORE_API result_t	VCCCORE_CALL xDynLibGetSymbolAddress(pxdynlib_t pxdynlib, const char_t * pcszSymbol, void ** ppvSymbol);
	
#ifdef __cplusplus
}
#endif

/*****************************************************************************/

#endif
