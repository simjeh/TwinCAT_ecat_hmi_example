///////////////////////////////////////////////////////////////////////////////
// s1mDriver.cpp
#include "TcPch.h"
#pragma hdrstop

#include "s1mDriver.h"
#include "s1mClassFactory.h"

DECLARE_GENERIC_DEVICE(S1MDRV)

IOSTATUS Cs1mDriver::OnLoad( )
{
	TRACE(_T("CObjClassFactory::OnLoad()\n") );
	m_pObjClassFactory = new Cs1mClassFactory();

	return IOSTATUS_SUCCESS;
}

VOID Cs1mDriver::OnUnLoad( )
{
	delete m_pObjClassFactory;
}

unsigned long _cdecl Cs1mDriver::S1MDRV_GetVersion( )
{
	return( (S1MDRV_Major << 8) | S1MDRV_Minor );
}

