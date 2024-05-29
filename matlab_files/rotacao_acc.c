#include "__cf_rotacao.h"
#if 0
This file is not available for use in any application other than as a MATLAB
( R ) MEX file for use with the Simulink ( R ) product . If you do not have
the Simulink Coder licensed , this file contains encrypted block names , etc
. If you purchase the Simulink Coder , this file will contain full block
descriptions and improved variable names .
#endif
#include <math.h>
#include "rotacao_acc.h"
#include "rotacao_acc_private.h"
#include <stdio.h>
#include "slexec_vm_simstruct_bridge.h"
#include "slexec_vm_zc_functions.h"
#include "slexec_vm_lookup_functions.h"
#include "simstruc.h"
#include "fixedpoint.h"
#define CodeFormat S-Function
#define AccDefine1 Accelerator_S-Function
#include "simtarget/slAccSfcnBridge.h"
static void mdlOutputs ( SimStruct * S , int_T tid ) { real_T es5hmyvne1 ;
real_T df20le0t0b ; real_T pabnxi5yjy ; real_T plsownocvw ; real_T l02skn00pu
; dnvhu1113a * _rtB ; mc5cg2ajdv * _rtP ; jrmhzfy1st * _rtX ; czszqanwxs *
_rtDW ; _rtDW = ( ( czszqanwxs * ) ssGetRootDWork ( S ) ) ; _rtX = ( (
jrmhzfy1st * ) ssGetContStates ( S ) ) ; _rtP = ( ( mc5cg2ajdv * )
ssGetModelRtp ( S ) ) ; _rtB = ( ( dnvhu1113a * ) _ssGetModelBlockIO ( S ) )
; if ( ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 0 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; } es5hmyvne1 = _rtP -> P_112 * _rtX -> oa4hh3dx3p ;
if ( ssIsSampleHit ( S , 3 , 0 ) ) { _rtB -> mttbgtqcfi = _rtDW -> ija4jdqvk5
; } if ( ssGetTaskTime ( S , 0 ) < _rtP -> P_108 ) { df20le0t0b = _rtP ->
P_109 ; } else { df20le0t0b = _rtP -> P_110 ; } _rtB -> mh5wdmfzuk = (
es5hmyvne1 - _rtB -> mttbgtqcfi ) * _rtP -> P_115 * df20le0t0b ; _rtB ->
i352opk2vk = ssGetT ( S ) ; if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB ->
licdtms1f3 [ 0 ] = _rtB -> ng20ded0km ; _rtB -> licdtms1f3 [ 1 ] = _rtB ->
meztyjyguw ; _rtB -> licdtms1f3 [ 2 ] = _rtB -> hmbcq1vc3h ; _rtB ->
licdtms1f3 [ 3 ] = _rtB -> mh5wdmfzuk ; _rtB -> licdtms1f3 [ 4 ] = _rtB ->
i352opk2vk ; ssCallAccelRunBlock ( S , 0 , 9 , SS_CALL_MDL_OUTPUTS ) ; } if (
ssIsSampleHit ( S , 2 , 0 ) ) { ssCallAccelRunBlock ( S , 0 , 10 ,
SS_CALL_MDL_OUTPUTS ) ; } if ( ssIsSampleHit ( S , 1 , 0 ) ) { if (
ssGetLogOutput ( S ) ) { { const char * errMsg = ( NULL ) ; void * fp = (
void * ) _rtDW -> j5cfnordxh . FilePtr ; if ( fp != ( NULL ) ) { { real_T t ;
void * u ; t = ssGetTaskTime ( S , 1 ) ; u = ( void * ) & _rtB -> licdtms1f3
[ 0 ] ; errMsg = rtwH5LoggingCollectionWrite ( 1 , fp , 0 , t , u ) ; if (
errMsg != ( NULL ) ) { ssSetErrorStatus ( S , errMsg ) ; return ; } } } } } }
if ( ssGetTaskTime ( S , 0 ) < _rtP -> P_116 ) { df20le0t0b = _rtP -> P_117 ;
} else { df20le0t0b = _rtP -> P_118 ; } if ( ssGetTaskTime ( S , 0 ) < _rtP
-> P_119 ) { pabnxi5yjy = _rtP -> P_120 ; } else { pabnxi5yjy = _rtP -> P_121
; } ssCallAccelRunBlock ( S , 0 , 19 , SS_CALL_MDL_OUTPUTS ) ; if ( _rtB ->
p5eiug5usv > _rtP -> P_126 ) { plsownocvw = _rtP -> P_126 ; } else if ( _rtB
-> p5eiug5usv < _rtP -> P_127 ) { plsownocvw = _rtP -> P_127 ; } else {
plsownocvw = _rtB -> p5eiug5usv ; } l02skn00pu = _rtP -> P_128 * plsownocvw ;
_rtB -> bxxrhzoxp3 = ( df20le0t0b + pabnxi5yjy ) * es5hmyvne1 ; if (
plsownocvw >= _rtP -> P_129 ) { _rtB -> jihbp1ivra = plsownocvw ; } else {
_rtB -> jihbp1ivra = _rtB -> agntsxbiy1 ; } if ( l02skn00pu > _rtP -> P_130 )
{ _rtB -> j33rkgsudt = l02skn00pu ; } else { _rtB -> j33rkgsudt = _rtB ->
hpkb0c1gvw ; } UNUSED_PARAMETER ( tid ) ; } static void mdlOutputsTID4 (
SimStruct * S , int_T tid ) { dnvhu1113a * _rtB ; mc5cg2ajdv * _rtP ; _rtP =
( ( mc5cg2ajdv * ) ssGetModelRtp ( S ) ) ; _rtB = ( ( dnvhu1113a * )
_ssGetModelBlockIO ( S ) ) ; _rtB -> mio5w4swu4 = _rtP -> P_122 ; _rtB ->
b14yxg0z5r = _rtP -> P_123 ; _rtB -> agntsxbiy1 = _rtP -> P_124 ; _rtB ->
hpkb0c1gvw = _rtP -> P_125 ; UNUSED_PARAMETER ( tid ) ; }
#define MDL_UPDATE
static void mdlUpdate ( SimStruct * S , int_T tid ) { dnvhu1113a * _rtB ;
mc5cg2ajdv * _rtP ; czszqanwxs * _rtDW ; _rtDW = ( ( czszqanwxs * )
ssGetRootDWork ( S ) ) ; _rtP = ( ( mc5cg2ajdv * ) ssGetModelRtp ( S ) ) ;
_rtB = ( ( dnvhu1113a * ) _ssGetModelBlockIO ( S ) ) ; if ( ssIsSampleHit ( S
, 2 , 0 ) ) { ssCallAccelRunBlock ( S , 0 , 0 , SS_CALL_MDL_UPDATE ) ; } if (
ssIsSampleHit ( S , 3 , 0 ) ) { _rtDW -> ija4jdqvk5 += _rtP -> P_113 * _rtB
-> bxxrhzoxp3 ; } UNUSED_PARAMETER ( tid ) ; }
#define MDL_UPDATE
static void mdlUpdateTID4 ( SimStruct * S , int_T tid ) { UNUSED_PARAMETER (
tid ) ; }
#define MDL_DERIVATIVES
static void mdlDerivatives ( SimStruct * S ) { dnvhu1113a * _rtB ; mc5cg2ajdv
* _rtP ; jrmhzfy1st * _rtX ; k34khnwrzu * _rtXdot ; _rtXdot = ( ( k34khnwrzu
* ) ssGetdX ( S ) ) ; _rtX = ( ( jrmhzfy1st * ) ssGetContStates ( S ) ) ;
_rtP = ( ( mc5cg2ajdv * ) ssGetModelRtp ( S ) ) ; _rtB = ( ( dnvhu1113a * )
_ssGetModelBlockIO ( S ) ) ; _rtXdot -> oa4hh3dx3p = 0.0 ; _rtXdot ->
oa4hh3dx3p += _rtP -> P_111 * _rtX -> oa4hh3dx3p ; _rtXdot -> oa4hh3dx3p +=
_rtB -> l0khbtdbzq ; } static void mdlInitializeSizes ( SimStruct * S ) {
ssSetChecksumVal ( S , 0 , 717901267U ) ; ssSetChecksumVal ( S , 1 ,
2000056101U ) ; ssSetChecksumVal ( S , 2 , 1707205581U ) ; ssSetChecksumVal (
S , 3 , 53690255U ) ; { mxArray * slVerStructMat = NULL ; mxArray * slStrMat
= mxCreateString ( "simulink" ) ; char slVerChar [ 10 ] ; int status =
mexCallMATLAB ( 1 , & slVerStructMat , 1 , & slStrMat , "ver" ) ; if ( status
== 0 ) { mxArray * slVerMat = mxGetField ( slVerStructMat , 0 , "Version" ) ;
if ( slVerMat == NULL ) { status = 1 ; } else { status = mxGetString (
slVerMat , slVerChar , 10 ) ; } } mxDestroyArray ( slStrMat ) ;
mxDestroyArray ( slVerStructMat ) ; if ( ( status == 1 ) || ( strcmp (
slVerChar , "8.7" ) != 0 ) ) { return ; } } ssSetOptions ( S ,
SS_OPTION_EXCEPTION_FREE_CODE ) ; if ( ssGetSizeofDWork ( S ) != sizeof (
czszqanwxs ) ) { ssSetErrorStatus ( S ,
"Unexpected error: Internal DWork sizes do "
"not match for accelerator mex file." ) ; } if ( ssGetSizeofGlobalBlockIO ( S
) != sizeof ( dnvhu1113a ) ) { ssSetErrorStatus ( S ,
"Unexpected error: Internal BlockIO sizes do "
"not match for accelerator mex file." ) ; } { int ssSizeofParams ;
ssGetSizeofParams ( S , & ssSizeofParams ) ; if ( ssSizeofParams != sizeof (
mc5cg2ajdv ) ) { static char msg [ 256 ] ; sprintf ( msg ,
"Unexpected error: Internal Parameters sizes do "
"not match for accelerator mex file." ) ; } } _ssSetModelRtp ( S , ( real_T *
) & fwos5toh2p ) ; rt_InitInfAndNaN ( sizeof ( real_T ) ) ; } static void
mdlInitializeSampleTimes ( SimStruct * S ) { slAccRegPrmChangeFcn ( S ,
mdlOutputsTID4 ) ; } static void mdlTerminate ( SimStruct * S ) { }
#include "simulink.c"
