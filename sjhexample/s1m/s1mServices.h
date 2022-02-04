///////////////////////////////////////////////////////////////////////////////
// s1mServices.h

#pragma once

#include "TcServices.h"

const ULONG DrvID_s1m = 0x3F000000;
#define SRVNAME_S1M "s1m"

///<AutoGeneratedContent id="ClassIDs">
const CTCID CID_s1mCModule1 = {0xe60095b7,0xb528,0x48f5,{0x9a,0xeb,0xa3,0xc4,0x7b,0x68,0x1c,0xcd}};
///</AutoGeneratedContent>

///<AutoGeneratedContent id="ParameterIDs">
const PTCID PID_Module1DefaultAdsPort = 0x00000001;
const PTCID PID_Module1Counter = 0x00000003;
///</AutoGeneratedContent>

///<AutoGeneratedContent id="DataTypes">
#pragma pack(push,1)
typedef struct _Module1Inputs
{
	ULONG Status;
	ULONG Data;
	LONG P_a_elmo;
	LONG Di_elmo;
	LONG V_a_elmo;
	USHORT S_w_elmo;
	SHORT T_a_elmo[2];
	bool S_D_ui;
	float C_D_ui[3];
	char M_D_ui;
	ULONG Value;
	bool Go_D_ui;
} Module1Inputs, *PModule1Inputs;
#pragma pack(pop)

#pragma pack(push,1)
typedef struct _Module1Outputs
{
	LONG P_t_elmo;
	ULONG Value;
	ULONG Control;
	ULONG Data;
	LONG V_t_elmo;
	SHORT T_t_elmo;
	USHORT T_max_elmo;
	USHORT C_w_elmo;
	char M_o_elmo;
	bool S_s_ui;
	char M_s_ui;
	float C_s_ui[3];
	SHORT E_s_ui;
} Module1Outputs, *PModule1Outputs;
#pragma pack(pop)

///</AutoGeneratedContent>



///<AutoGeneratedContent id="DataAreaIDs">
#define ADI_Module1Inputs 0
#define ADI_Module1Outputs 1
///</AutoGeneratedContent>

///<AutoGeneratedContent id="InterfaceIDs">
///</AutoGeneratedContent>

///<AutoGeneratedContent id="EventClasses">
///</AutoGeneratedContent>
