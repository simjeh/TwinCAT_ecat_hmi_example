///////////////////////////////////////////////////////////////////////////////
// s1mClassFactory.cpp
#include "TcPch.h"
#pragma hdrstop

#include "s1mClassFactory.h"
#include "s1mServices.h"
#include "s1mVersion.h"
#include "Module1.h"

BEGIN_CLASS_MAP(Cs1mClassFactory)
///<AutoGeneratedContent id="ClassMap">
	CLASS_ENTRY(CID_s1mCModule1, SRVNAME_S1M "!CModule1", CModule1)
///</AutoGeneratedContent>
END_CLASS_MAP()

Cs1mClassFactory::Cs1mClassFactory() : CObjClassFactory()
{
	TcDbgUnitSetImageName(TCDBG_UNIT_IMAGE_NAME(SRVNAME_S1M));
#if defined(TCDBG_UNIT_VERSION)
	TcDbgUnitSetVersion(TCDBG_UNIT_VERSION(s1m));
#endif //defined(TCDBG_UNIT_VERSION)
}
