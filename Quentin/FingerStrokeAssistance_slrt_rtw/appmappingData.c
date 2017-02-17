#include "slrtappmapping.h"
#include "./maps/FingerStrokeAssistance.map"



const AppMapInfo appInfo[] = 
{
	{ /* Idx 0, <FingerStrokeAssistance> */
		{ /* SignalMapInfo */
			FingerStrokeAssistance_BIOMAP,
			FingerStrokeAssistance_LBLMAP,
			FingerStrokeAssistance_SIDMAP,
			FingerStrokeAssistance_SBIO,
			FingerStrokeAssistance_SLBL,
			{0,182},
			116,
		},
		{ /* ParamMapInfo */
			FingerStrokeAssistance_PTIDSMAP,
			FingerStrokeAssistance_PTNAMESMAP,
			FingerStrokeAssistance_SPTMAP,
			{0,117},
			118,
		},
		"FingerStrokeAssistance",
		"",
		"FingerStrokeAssistance",
		4,
		FingerStrokeAssistance_dtmap,
	},
};
int getNumRef(void){
	 return(sizeof(appInfo) / sizeof(AppMapInfo));
}