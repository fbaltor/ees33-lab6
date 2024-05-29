#include "__cf_rotacao.h"
#ifndef RTW_HEADER_rotacao_acc_h_
#define RTW_HEADER_rotacao_acc_h_
#include <stddef.h>
#ifndef rotacao_acc_COMMON_INCLUDES_
#define rotacao_acc_COMMON_INCLUDES_
#include <stdlib.h>
#define S_FUNCTION_NAME simulink_only_sfcn 
#define S_FUNCTION_LEVEL 2
#define RTW_GENERATED_S_FUNCTION
#include "rtwtypes.h"
#include "sl_fileio_rtw.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "rotacao_acc_types.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rt_defines.h"
#include "rt_nonfinite.h"
typedef struct { real_T ng20ded0km ; real_T meztyjyguw ; real_T hmbcq1vc3h ;
real_T l0khbtdbzq ; real_T brddwiu1l1 ; real_T hxtiwxi5fn ; real_T jh3cb4zyhd
; real_T if1whxzptx ; real_T alzdc1y25d ; real_T kwaxhzxlq1 ; real_T
olukdjojih ; real_T cggr44p5le ; real_T cm4n0z4sfc ; real_T l0mxqbfnub ;
real_T kws1er3uqv ; real_T mttbgtqcfi ; real_T mh5wdmfzuk ; real_T i352opk2vk
; real_T mio5w4swu4 ; real_T b14yxg0z5r ; real_T agntsxbiy1 ; real_T
hpkb0c1gvw ; real_T p5eiug5usv ; real_T bxxrhzoxp3 ; real_T jihbp1ivra ;
real_T j33rkgsudt ; real_T licdtms1f3 [ 5 ] ; } dnvhu1113a ; typedef struct {
real_T nyfj4ygi04 ; real_T ija4jdqvk5 ; void * hieuw23s4t [ 2 ] ; void *
kfnbqabi2e ; void * hn4xuedgtn ; struct { void * FilePtr ; } j5cfnordxh ;
void * da25dgusnd [ 3 ] ; struct { int_T Count ; int_T Decimation ; }
hvvnfuhp3c ; int_T lhwzkguu0s ; char_T gff5aod04f [ 4 ] ; } czszqanwxs ;
typedef struct { real_T oa4hh3dx3p ; } jrmhzfy1st ; typedef struct { real_T
oa4hh3dx3p ; } k34khnwrzu ; typedef struct { boolean_T oa4hh3dx3p ; }
iremby4uev ; struct mc5cg2ajdv_ { real_T P_0 [ 2 ] ; real_T P_1 [ 4 ] ;
real_T P_2 [ 2 ] ; real_T P_3 ; real_T P_4 [ 2 ] ; real_T P_5 ; real_T P_6 [
2 ] ; real_T P_7 ; real_T P_8 [ 2 ] ; real_T P_9 ; real_T P_10 [ 2 ] ; real_T
P_11 ; real_T P_12 [ 2 ] ; real_T P_13 ; real_T P_14 [ 2 ] ; real_T P_15 ;
real_T P_16 [ 2 ] ; real_T P_17 ; real_T P_18 [ 2 ] ; real_T P_19 ; real_T
P_20 [ 2 ] ; real_T P_21 ; real_T P_22 [ 2 ] ; real_T P_23 ; real_T P_24 [ 2
] ; real_T P_25 ; real_T P_26 [ 2 ] ; real_T P_27 ; real_T P_28 [ 2 ] ;
real_T P_29 ; real_T P_30 [ 2 ] ; real_T P_31 ; real_T P_32 [ 2 ] ; real_T
P_33 ; real_T P_34 [ 2 ] ; real_T P_35 ; real_T P_36 [ 2 ] ; real_T P_37 ;
real_T P_38 [ 2 ] ; real_T P_39 ; real_T P_40 [ 2 ] ; real_T P_41 ; real_T
P_42 [ 2 ] ; real_T P_43 ; real_T P_44 [ 2 ] ; real_T P_45 ; real_T P_46 [ 2
] ; real_T P_47 ; real_T P_48 [ 2 ] ; real_T P_49 ; real_T P_50 [ 2 ] ;
real_T P_51 ; real_T P_52 [ 2 ] ; real_T P_53 ; real_T P_54 [ 2 ] ; real_T
P_55 ; real_T P_56 [ 2 ] ; real_T P_57 ; real_T P_58 [ 2 ] ; real_T P_59 ;
real_T P_60 [ 2 ] ; real_T P_61 ; real_T P_62 [ 2 ] ; real_T P_63 ; real_T
P_64 [ 2 ] ; real_T P_65 ; real_T P_66 [ 2 ] ; real_T P_67 ; real_T P_68 [ 2
] ; real_T P_69 ; real_T P_70 [ 2 ] ; real_T P_71 ; real_T P_72 [ 2 ] ;
real_T P_73 ; real_T P_74 [ 2 ] ; real_T P_75 ; real_T P_76 [ 2 ] ; real_T
P_77 ; real_T P_78 [ 2 ] ; real_T P_79 ; real_T P_80 [ 2 ] ; real_T P_81 ;
real_T P_82 [ 2 ] ; real_T P_83 ; real_T P_84 [ 2 ] ; real_T P_85 ; real_T
P_86 [ 2 ] ; real_T P_87 ; real_T P_88 [ 2 ] ; real_T P_89 ; real_T P_90 [ 2
] ; real_T P_91 ; real_T P_92 [ 2 ] ; real_T P_93 ; real_T P_94 [ 2 ] ;
real_T P_95 ; real_T P_96 [ 2 ] ; real_T P_97 ; real_T P_98 [ 2 ] ; real_T
P_99 ; real_T P_100 [ 2 ] ; real_T P_101 ; real_T P_102 [ 2 ] ; real_T P_103
; real_T P_104 [ 2 ] ; real_T P_105 ; real_T P_106 [ 2 ] ; real_T P_107 ;
real_T P_108 ; real_T P_109 ; real_T P_110 ; real_T P_111 ; real_T P_112 ;
real_T P_113 ; real_T P_114 ; real_T P_115 ; real_T P_116 ; real_T P_117 ;
real_T P_118 ; real_T P_119 ; real_T P_120 ; real_T P_121 ; real_T P_122 ;
real_T P_123 ; real_T P_124 ; real_T P_125 ; real_T P_126 ; real_T P_127 ;
real_T P_128 ; real_T P_129 ; real_T P_130 ; } ; extern mc5cg2ajdv fwos5toh2p
;
#endif
