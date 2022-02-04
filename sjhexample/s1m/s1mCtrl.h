///////////////////////////////////////////////////////////////////////////////
// s1mCtrl.h

#ifndef __S1MCTRL_H__
#define __S1MCTRL_H__

#include <atlbase.h>
#include <atlcom.h>


#include "resource.h"       // main symbols
#include "s1mW32.h"
#include "TcBase.h"
#include "s1mClassFactory.h"
#include "TcOCFCtrlImpl.h"

class Cs1mCtrl 
	: public CComObjectRootEx<CComMultiThreadModel>
	, public CComCoClass<Cs1mCtrl, &CLSID_s1mCtrl>
	, public Is1mCtrl
	, public ITcOCFCtrlImpl<Cs1mCtrl, Cs1mClassFactory>
{
public:
	Cs1mCtrl();
	virtual ~Cs1mCtrl();

DECLARE_REGISTRY_RESOURCEID(IDR_S1MCTRL)
DECLARE_NOT_AGGREGATABLE(Cs1mCtrl)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(Cs1mCtrl)
	COM_INTERFACE_ENTRY(Is1mCtrl)
	COM_INTERFACE_ENTRY(ITcCtrl)
	COM_INTERFACE_ENTRY(ITcCtrl2)
END_COM_MAP()

};

#endif // #ifndef __S1MCTRL_H__
