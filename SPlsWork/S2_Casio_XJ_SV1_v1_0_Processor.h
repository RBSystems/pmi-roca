#ifndef __S2_CASIO_XJ_SV1_V1_0_PROCESSOR_H__
#define __S2_CASIO_XJ_SV1_V1_0_PROCESSOR_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_Casio_XJ_SV1_v1_0_Processor_PROCESS_DATA_DIG_INPUT 0


/*
* ANALOG_INPUT
*/


#define __S2_Casio_XJ_SV1_v1_0_Processor_FROM_DEVICE$_BUFFER_INPUT 0
#define __S2_Casio_XJ_SV1_v1_0_Processor_FROM_DEVICE$_BUFFER_MAX_LEN 250
CREATE_STRING_STRUCT( S2_Casio_XJ_SV1_v1_0_Processor, __FROM_DEVICE$, __S2_Casio_XJ_SV1_v1_0_Processor_FROM_DEVICE$_BUFFER_MAX_LEN );


/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/
#define __S2_Casio_XJ_SV1_v1_0_Processor_FEEDBACK_OUT_ANALOG_OUTPUT 0
#define __S2_Casio_XJ_SV1_v1_0_Processor_VOLUME_OUT_ANALOG_OUTPUT 1



/*
* Direct Socket Variables
*/




/*
* INTEGER_PARAMETER
*/
/*
* SIGNED_INTEGER_PARAMETER
*/
/*
* LONG_INTEGER_PARAMETER
*/
/*
* SIGNED_LONG_INTEGER_PARAMETER
*/
/*
* INTEGER_PARAMETER
*/
/*
* SIGNED_INTEGER_PARAMETER
*/
/*
* LONG_INTEGER_PARAMETER
*/
/*
* SIGNED_LONG_INTEGER_PARAMETER
*/
/*
* STRING_PARAMETER
*/


/*
* INTEGER
*/


/*
* LONG_INTEGER
*/


/*
* SIGNED_INTEGER
*/


/*
* SIGNED_LONG_INTEGER
*/


/*
* STRING
*/
#define __S2_Casio_XJ_SV1_v1_0_Processor_STEMP_STRING_MAX_LEN 25
CREATE_STRING_STRUCT( S2_Casio_XJ_SV1_v1_0_Processor, __STEMP, __S2_Casio_XJ_SV1_v1_0_Processor_STEMP_STRING_MAX_LEN );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_Casio_XJ_SV1_v1_0_Processor )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_STRING_STRUCT( S2_Casio_XJ_SV1_v1_0_Processor, __FROM_DEVICE$ );
};

START_NVRAM_VAR_STRUCT( S2_Casio_XJ_SV1_v1_0_Processor )
{
   DECLARE_STRING_STRUCT( S2_Casio_XJ_SV1_v1_0_Processor, __STEMP );
   unsigned short __IFLAG1;
   unsigned short __ICOMMA;
   unsigned short __ITEMPVALUE;
   unsigned short __IREQUEST;
};



#endif //__S2_CASIO_XJ_SV1_V1_0_PROCESSOR_H__

