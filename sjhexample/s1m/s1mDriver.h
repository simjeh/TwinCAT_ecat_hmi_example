///////////////////////////////////////////////////////////////////////////////
// s1mDriver.h

#ifndef __S1MDRIVER_H__
#define __S1MDRIVER_H__

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "TcBase.h"

#define S1MDRV_NAME        "S1M"
#define S1MDRV_Major       1
#define S1MDRV_Minor       0

#define DEVICE_CLASS Cs1mDriver

#include "ObjDriver.h"

class Cs1mDriver : public CObjDriver
{
public:
	virtual IOSTATUS	OnLoad();
	virtual VOID		OnUnLoad();

	//////////////////////////////////////////////////////
	// VxD-Services exported by this driver
	static unsigned long	_cdecl S1MDRV_GetVersion();
	//////////////////////////////////////////////////////
	
};

Begin_VxD_Service_Table(S1MDRV)
	VxD_Service( S1MDRV_GetVersion )
End_VxD_Service_Table


#endif // ifndef __S1MDRIVER_H__