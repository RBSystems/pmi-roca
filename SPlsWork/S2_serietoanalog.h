#ifndef __S2_SERIETOANALOG_H__
#define __S2_SERIETOANALOG_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/


/*
* ANALOG_INPUT
*/

#define __S2_serietoanalog_SERIALSIGNAL_STRING_INPUT 0
#define __S2_serietoanalog_SERIALSIGNAL_STRING_MAX_LEN 4
CREATE_STRING_STRUCT( S2_serietoanalog, __SERIALSIGNAL, __S2_serietoanalog_SERIALSIGNAL_STRING_MAX_LEN );



/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/
#define __S2_serietoanalog_ANALOGVALUE_ANALOG_OUTPUT 0



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

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_serietoanalog )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_STRING_STRUCT( S2_serietoanalog, __SERIALSIGNAL );
};

START_NVRAM_VAR_STRUCT( S2_serietoanalog )
{
};



#endif //__S2_SERIETOANALOG_H__

