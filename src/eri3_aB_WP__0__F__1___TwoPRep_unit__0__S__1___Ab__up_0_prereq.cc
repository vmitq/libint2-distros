/*
 *  Copyright (C) 2004-2021 Edward F. Valeev
 *
 *  This file is part of Libint.
 *
 *  Libint is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Libint is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with Libint.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include <libint2.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void eri3_aB_WP__0__F__1___TwoPRep_unit__0__S__1___Ab__up_0_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp190;
fp190 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp189;
LIBINT2_REALTYPE fp188;
fp188 = libint2::fma_minus(inteval->roe[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi]);
LIBINT2_REALTYPE fp187;
fp187 = fp190 * fp188;
LIBINT2_REALTYPE fp137;
fp137 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp138;
LIBINT2_REALTYPE fp136;
fp136 = libint2::fma_plus(inteval->QC_z[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi], fp137);
LIBINT2_REALTYPE fp101;
fp101 = inteval->WQ_z[vi] * fp136;
LIBINT2_REALTYPE fp140;
fp140 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp141;
LIBINT2_REALTYPE fp139;
fp139 = libint2::fma_plus(inteval->QC_z[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi], fp140);
LIBINT2_REALTYPE fp102;
LIBINT2_REALTYPE fp100;
fp100 = libint2::fma_plus(inteval->QC_z[vi], fp139, fp101);
LIBINT2_REALTYPE fp99;
fp99 = fp100 - fp187;
LIBINT2_REALTYPE fp204;
fp204 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp31;
fp31 = fp204 * fp99;
LIBINT2_REALTYPE fp198;
fp198 = 2.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp71;
LIBINT2_REALTYPE fp70;
fp70 = libint2::fma_minus(inteval->roe[vi], fp136, fp139);
LIBINT2_REALTYPE fp69;
fp69 = fp198 * fp70;
LIBINT2_REALTYPE fp182;
LIBINT2_REALTYPE fp181;
fp181 = libint2::fma_minus(inteval->roe[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi]);
LIBINT2_REALTYPE fp180;
fp180 = fp190 * fp181;
LIBINT2_REALTYPE fp93;
fp93 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp94;
LIBINT2_REALTYPE fp92;
fp92 = libint2::fma_plus(inteval->QC_z[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi], fp93);
LIBINT2_REALTYPE fp97;
fp97 = inteval->WQ_z[vi] * fp92;
LIBINT2_REALTYPE fp98;
LIBINT2_REALTYPE fp96;
fp96 = libint2::fma_plus(inteval->QC_z[vi], fp136, fp97);
LIBINT2_REALTYPE fp95;
fp95 = fp96 - fp180;
LIBINT2_REALTYPE fp73;
fp73 = inteval->WQ_z[vi] * fp95;
LIBINT2_REALTYPE fp74;
LIBINT2_REALTYPE fp72;
fp72 = libint2::fma_plus(inteval->QC_z[vi], fp99, fp73);
LIBINT2_REALTYPE fp68;
fp68 = fp72 - fp69;
LIBINT2_REALTYPE fp32;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_plus(inteval->WP_z[vi], fp68, fp31);
LIBINT2_REALTYPE fp29;
fp29 = fp30;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+29)*1+lsi)*1]),&(fp29),1);
LIBINT2_REALTYPE fp168;
fp168 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp152;
fp152 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp153;
LIBINT2_REALTYPE fp151;
fp151 = libint2::fma_plus(inteval->QC_y[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi], fp152);
LIBINT2_REALTYPE fp110;
fp110 = inteval->WQ_z[vi] * fp151;
LIBINT2_REALTYPE fp155;
fp155 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp156;
LIBINT2_REALTYPE fp154;
fp154 = libint2::fma_plus(inteval->QC_y[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi], fp155);
LIBINT2_REALTYPE fp111;
LIBINT2_REALTYPE fp109;
fp109 = libint2::fma_plus(inteval->QC_z[vi], fp154, fp110);
LIBINT2_REALTYPE fp52;
fp52 = fp168 * fp109;
LIBINT2_REALTYPE fp77;
fp77 = inteval->WQ_y[vi] * fp95;
LIBINT2_REALTYPE fp78;
LIBINT2_REALTYPE fp76;
fp76 = libint2::fma_plus(inteval->QC_y[vi], fp99, fp77);
LIBINT2_REALTYPE fp34;
LIBINT2_REALTYPE fp33;
fp33 = libint2::fma_plus(inteval->WP_z[vi], fp76, fp52);
LIBINT2_REALTYPE fp28;
fp28 = fp33;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+28)*1+lsi)*1]),&(fp28),1);
LIBINT2_REALTYPE fp134;
fp134 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp127;
fp127 = inteval->WQ_y[vi] * fp151;
LIBINT2_REALTYPE fp128;
LIBINT2_REALTYPE fp126;
fp126 = libint2::fma_plus(inteval->QC_y[vi], fp154, fp127);
LIBINT2_REALTYPE fp125;
fp125 = fp126 - fp187;
LIBINT2_REALTYPE fp133;
fp133 = fp134 * fp125;
LIBINT2_REALTYPE fp119;
fp119 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp120;
LIBINT2_REALTYPE fp118;
fp118 = libint2::fma_plus(inteval->QC_y[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi], fp119);
LIBINT2_REALTYPE fp123;
fp123 = inteval->WQ_y[vi] * fp118;
LIBINT2_REALTYPE fp124;
LIBINT2_REALTYPE fp122;
fp122 = libint2::fma_plus(inteval->QC_y[vi], fp151, fp123);
LIBINT2_REALTYPE fp121;
fp121 = fp122 - fp180;
LIBINT2_REALTYPE fp81;
fp81 = inteval->WQ_z[vi] * fp121;
LIBINT2_REALTYPE fp82;
LIBINT2_REALTYPE fp80;
fp80 = libint2::fma_plus(inteval->QC_z[vi], fp125, fp81);
LIBINT2_REALTYPE fp36;
LIBINT2_REALTYPE fp35;
fp35 = libint2::fma_plus(inteval->WP_z[vi], fp80, fp133);
LIBINT2_REALTYPE fp27;
fp27 = fp35;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+27)*1+lsi)*1]),&(fp27),1);
LIBINT2_REALTYPE fp87;
LIBINT2_REALTYPE fp86;
fp86 = libint2::fma_minus(inteval->roe[vi], fp151, fp154);
LIBINT2_REALTYPE fp85;
fp85 = fp198 * fp86;
LIBINT2_REALTYPE fp89;
fp89 = inteval->WQ_y[vi] * fp121;
LIBINT2_REALTYPE fp90;
LIBINT2_REALTYPE fp88;
fp88 = libint2::fma_plus(inteval->QC_y[vi], fp125, fp89);
LIBINT2_REALTYPE fp84;
fp84 = fp88 - fp85;
LIBINT2_REALTYPE fp37;
fp37 = inteval->WP_z[vi] * fp84;
LIBINT2_REALTYPE fp26;
fp26 = fp37;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+26)*1+lsi)*1]),&(fp26),1);
LIBINT2_REALTYPE fp174;
fp174 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp175;
LIBINT2_REALTYPE fp173;
fp173 = libint2::fma_plus(inteval->QC_x[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi], fp174);
LIBINT2_REALTYPE fp143;
fp143 = inteval->WQ_z[vi] * fp173;
LIBINT2_REALTYPE fp177;
fp177 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp178;
LIBINT2_REALTYPE fp176;
fp176 = libint2::fma_plus(inteval->QC_x[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi], fp177);
LIBINT2_REALTYPE fp144;
LIBINT2_REALTYPE fp142;
fp142 = libint2::fma_plus(inteval->QC_z[vi], fp176, fp143);
LIBINT2_REALTYPE fp149;
fp149 = fp168 * fp142;
LIBINT2_REALTYPE fp104;
fp104 = inteval->WQ_x[vi] * fp95;
LIBINT2_REALTYPE fp105;
LIBINT2_REALTYPE fp103;
fp103 = libint2::fma_plus(inteval->QC_x[vi], fp99, fp104);
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_plus(inteval->WP_z[vi], fp103, fp149);
LIBINT2_REALTYPE fp25;
fp25 = fp38;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+25)*1+lsi)*1]),&(fp25),1);
LIBINT2_REALTYPE fp161;
fp161 = inteval->WQ_y[vi] * fp173;
LIBINT2_REALTYPE fp162;
LIBINT2_REALTYPE fp160;
fp160 = libint2::fma_plus(inteval->QC_y[vi], fp176, fp161);
LIBINT2_REALTYPE fp41;
fp41 = fp134 * fp160;
LIBINT2_REALTYPE fp171;
fp171 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp172;
LIBINT2_REALTYPE fp170;
fp170 = libint2::fma_plus(inteval->QC_x[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi], fp171);
LIBINT2_REALTYPE fp158;
fp158 = inteval->WQ_y[vi] * fp170;
LIBINT2_REALTYPE fp159;
LIBINT2_REALTYPE fp157;
fp157 = libint2::fma_plus(inteval->QC_y[vi], fp173, fp158);
LIBINT2_REALTYPE fp113;
fp113 = inteval->WQ_z[vi] * fp157;
LIBINT2_REALTYPE fp114;
LIBINT2_REALTYPE fp112;
fp112 = libint2::fma_plus(inteval->QC_z[vi], fp160, fp113);
LIBINT2_REALTYPE fp42;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_plus(inteval->WP_z[vi], fp112, fp41);
LIBINT2_REALTYPE fp24;
fp24 = fp40;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+24)*1+lsi)*1]),&(fp24),1);
LIBINT2_REALTYPE fp130;
fp130 = inteval->WQ_x[vi] * fp121;
LIBINT2_REALTYPE fp131;
LIBINT2_REALTYPE fp129;
fp129 = libint2::fma_plus(inteval->QC_x[vi], fp125, fp130);
LIBINT2_REALTYPE fp43;
fp43 = inteval->WP_z[vi] * fp129;
LIBINT2_REALTYPE fp23;
fp23 = fp43;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+23)*1+lsi)*1]),&(fp23),1);
LIBINT2_REALTYPE fp192;
fp192 = inteval->WQ_x[vi] * fp173;
LIBINT2_REALTYPE fp193;
LIBINT2_REALTYPE fp191;
fp191 = libint2::fma_plus(inteval->QC_x[vi], fp176, fp192);
LIBINT2_REALTYPE fp186;
fp186 = fp191 - fp187;
LIBINT2_REALTYPE fp65;
fp65 = fp134 * fp186;
LIBINT2_REALTYPE fp184;
fp184 = inteval->WQ_x[vi] * fp170;
LIBINT2_REALTYPE fp185;
LIBINT2_REALTYPE fp183;
fp183 = libint2::fma_plus(inteval->QC_x[vi], fp173, fp184);
LIBINT2_REALTYPE fp179;
fp179 = fp183 - fp180;
LIBINT2_REALTYPE fp146;
fp146 = inteval->WQ_z[vi] * fp179;
LIBINT2_REALTYPE fp147;
LIBINT2_REALTYPE fp145;
fp145 = libint2::fma_plus(inteval->QC_z[vi], fp186, fp146);
LIBINT2_REALTYPE fp45;
LIBINT2_REALTYPE fp44;
fp44 = libint2::fma_plus(inteval->WP_z[vi], fp145, fp65);
LIBINT2_REALTYPE fp22;
fp22 = fp44;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+22)*1+lsi)*1]),&(fp22),1);
LIBINT2_REALTYPE fp164;
fp164 = inteval->WQ_y[vi] * fp179;
LIBINT2_REALTYPE fp165;
LIBINT2_REALTYPE fp163;
fp163 = libint2::fma_plus(inteval->QC_y[vi], fp186, fp164);
LIBINT2_REALTYPE fp46;
fp46 = inteval->WP_z[vi] * fp163;
LIBINT2_REALTYPE fp21;
fp21 = fp46;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+21)*1+lsi)*1]),&(fp21),1);
LIBINT2_REALTYPE fp197;
LIBINT2_REALTYPE fp196;
fp196 = libint2::fma_minus(inteval->roe[vi], fp173, fp176);
LIBINT2_REALTYPE fp195;
fp195 = fp198 * fp196;
LIBINT2_REALTYPE fp200;
fp200 = inteval->WQ_x[vi] * fp179;
LIBINT2_REALTYPE fp201;
LIBINT2_REALTYPE fp199;
fp199 = libint2::fma_plus(inteval->QC_x[vi], fp186, fp200);
LIBINT2_REALTYPE fp194;
fp194 = fp199 - fp195;
LIBINT2_REALTYPE fp47;
fp47 = inteval->WP_z[vi] * fp194;
LIBINT2_REALTYPE fp20;
fp20 = fp47;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+20)*1+lsi)*1]),&(fp20),1);
LIBINT2_REALTYPE fp48;
fp48 = inteval->WP_y[vi] * fp68;
LIBINT2_REALTYPE fp19;
fp19 = fp48;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+19)*1+lsi)*1]),&(fp19),1);
LIBINT2_REALTYPE fp107;
fp107 = fp134 * fp99;
LIBINT2_REALTYPE fp50;
LIBINT2_REALTYPE fp49;
fp49 = libint2::fma_plus(inteval->WP_y[vi], fp76, fp107);
LIBINT2_REALTYPE fp18;
fp18 = fp49;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+18)*1+lsi)*1]),&(fp18),1);
LIBINT2_REALTYPE fp53;
LIBINT2_REALTYPE fp51;
fp51 = libint2::fma_plus(inteval->WP_y[vi], fp80, fp52);
LIBINT2_REALTYPE fp17;
fp17 = fp51;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+17)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp55;
fp55 = fp204 * fp125;
LIBINT2_REALTYPE fp56;
LIBINT2_REALTYPE fp54;
fp54 = libint2::fma_plus(inteval->WP_y[vi], fp84, fp55);
LIBINT2_REALTYPE fp16;
fp16 = fp54;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+16)*1+lsi)*1]),&(fp16),1);
LIBINT2_REALTYPE fp57;
fp57 = inteval->WP_y[vi] * fp103;
LIBINT2_REALTYPE fp15;
fp15 = fp57;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+15)*1+lsi)*1]),&(fp15),1);
LIBINT2_REALTYPE fp59;
fp59 = fp134 * fp142;
LIBINT2_REALTYPE fp60;
LIBINT2_REALTYPE fp58;
fp58 = libint2::fma_plus(inteval->WP_y[vi], fp112, fp59);
LIBINT2_REALTYPE fp14;
fp14 = fp58;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+14)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp167;
fp167 = fp168 * fp160;
LIBINT2_REALTYPE fp62;
LIBINT2_REALTYPE fp61;
fp61 = libint2::fma_plus(inteval->WP_y[vi], fp129, fp167);
LIBINT2_REALTYPE fp13;
fp13 = fp61;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+13)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp63;
fp63 = inteval->WP_y[vi] * fp145;
LIBINT2_REALTYPE fp12;
fp12 = fp63;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+12)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp66;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_plus(inteval->WP_y[vi], fp163, fp65);
LIBINT2_REALTYPE fp11;
fp11 = fp64;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+11)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp67;
fp67 = inteval->WP_y[vi] * fp194;
LIBINT2_REALTYPE fp10;
fp10 = fp67;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+10)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp75;
fp75 = inteval->WP_x[vi] * fp68;
LIBINT2_REALTYPE fp9;
fp9 = fp75;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp79;
fp79 = inteval->WP_x[vi] * fp76;
LIBINT2_REALTYPE fp8;
fp8 = fp79;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp83;
fp83 = inteval->WP_x[vi] * fp80;
LIBINT2_REALTYPE fp7;
fp7 = fp83;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp91;
fp91 = inteval->WP_x[vi] * fp84;
LIBINT2_REALTYPE fp6;
fp6 = fp91;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp108;
LIBINT2_REALTYPE fp106;
fp106 = libint2::fma_plus(inteval->WP_x[vi], fp103, fp107);
LIBINT2_REALTYPE fp5;
fp5 = fp106;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp116;
fp116 = fp134 * fp109;
LIBINT2_REALTYPE fp117;
LIBINT2_REALTYPE fp115;
fp115 = libint2::fma_plus(inteval->WP_x[vi], fp112, fp116);
LIBINT2_REALTYPE fp4;
fp4 = fp115;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp135;
LIBINT2_REALTYPE fp132;
fp132 = libint2::fma_plus(inteval->WP_x[vi], fp129, fp133);
LIBINT2_REALTYPE fp3;
fp3 = fp132;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp150;
LIBINT2_REALTYPE fp148;
fp148 = libint2::fma_plus(inteval->WP_x[vi], fp145, fp149);
LIBINT2_REALTYPE fp2;
fp2 = fp148;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp169;
LIBINT2_REALTYPE fp166;
fp166 = libint2::fma_plus(inteval->WP_x[vi], fp163, fp167);
LIBINT2_REALTYPE fp1;
fp1 = fp166;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp203;
fp203 = fp204 * fp186;
LIBINT2_REALTYPE fp205;
LIBINT2_REALTYPE fp202;
fp202 = libint2::fma_plus(inteval->WP_x[vi], fp194, fp203);
LIBINT2_REALTYPE fp0;
fp0 = fp202;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 206 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
