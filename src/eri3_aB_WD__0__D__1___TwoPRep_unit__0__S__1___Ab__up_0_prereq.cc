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
void eri3_aB_WD__0__D__1___TwoPRep_unit__0__S__1___Ab__up_0_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp184;
fp184 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp177;
fp177 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp176;
fp176 = fp177 * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp133;
fp133 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp134;
LIBINT2_REALTYPE fp132;
fp132 = libint2::fma_plus(inteval->QC_z[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi], fp133);
LIBINT2_REALTYPE fp78;
LIBINT2_REALTYPE fp77;
fp77 = libint2::fma_plus(inteval->WP_z[vi], fp132, fp176);
LIBINT2_REALTYPE fp37;
fp37 = fp184 * fp77;
LIBINT2_REALTYPE fp69;
fp69 = fp184 * fp132;
LIBINT2_REALTYPE fp170;
LIBINT2_REALTYPE fp169;
fp169 = libint2::fma_minus(inteval->roe[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi]);
LIBINT2_REALTYPE fp171;
fp171 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp168;
fp168 = fp171 * fp169;
LIBINT2_REALTYPE fp130;
fp130 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp131;
LIBINT2_REALTYPE fp129;
fp129 = libint2::fma_plus(inteval->QC_z[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi], fp130);
LIBINT2_REALTYPE fp114;
fp114 = inteval->WQ_z[vi] * fp129;
LIBINT2_REALTYPE fp115;
LIBINT2_REALTYPE fp113;
fp113 = libint2::fma_plus(inteval->QC_z[vi], fp132, fp114);
LIBINT2_REALTYPE fp112;
fp112 = fp113 - fp168;
LIBINT2_REALTYPE fp70;
LIBINT2_REALTYPE fp68;
fp68 = libint2::fma_plus(inteval->WP_z[vi], fp112, fp69);
LIBINT2_REALTYPE fp38;
LIBINT2_REALTYPE fp36;
fp36 = libint2::fma_plus(inteval->WP_z[vi], fp68, fp37);
LIBINT2_REALTYPE fp35;
fp35 = fp36;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+35)*1+lsi)*1]),&(fp35),1);
LIBINT2_REALTYPE fp149;
fp149 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp150;
LIBINT2_REALTYPE fp148;
fp148 = libint2::fma_plus(inteval->QC_y[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi], fp149);
LIBINT2_REALTYPE fp83;
fp83 = inteval->WP_z[vi] * fp148;
LIBINT2_REALTYPE fp40;
fp40 = fp177 * fp83;
LIBINT2_REALTYPE fp156;
fp156 = fp177 * fp148;
LIBINT2_REALTYPE fp146;
fp146 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp147;
LIBINT2_REALTYPE fp145;
fp145 = libint2::fma_plus(inteval->QC_y[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi], fp146);
LIBINT2_REALTYPE fp119;
fp119 = inteval->WQ_z[vi] * fp145;
LIBINT2_REALTYPE fp120;
LIBINT2_REALTYPE fp118;
fp118 = libint2::fma_plus(inteval->QC_z[vi], fp148, fp119);
LIBINT2_REALTYPE fp73;
LIBINT2_REALTYPE fp72;
fp72 = libint2::fma_plus(inteval->WP_z[vi], fp118, fp156);
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp39;
fp39 = libint2::fma_plus(inteval->WP_z[vi], fp72, fp40);
LIBINT2_REALTYPE fp34;
fp34 = fp39;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+34)*1+lsi)*1]),&(fp34),1);
LIBINT2_REALTYPE fp125;
fp125 = inteval->WQ_y[vi] * fp145;
LIBINT2_REALTYPE fp126;
LIBINT2_REALTYPE fp124;
fp124 = libint2::fma_plus(inteval->QC_y[vi], fp148, fp125);
LIBINT2_REALTYPE fp123;
fp123 = fp124 - fp168;
LIBINT2_REALTYPE fp75;
fp75 = inteval->WP_z[vi] * fp123;
LIBINT2_REALTYPE fp42;
fp42 = inteval->WP_z[vi] * fp75;
LIBINT2_REALTYPE fp33;
fp33 = fp42;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+33)*1+lsi)*1]),&(fp33),1);
LIBINT2_REALTYPE fp165;
fp165 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp166;
LIBINT2_REALTYPE fp164;
fp164 = libint2::fma_plus(inteval->QC_x[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi], fp165);
LIBINT2_REALTYPE fp86;
fp86 = inteval->WP_z[vi] * fp164;
LIBINT2_REALTYPE fp44;
fp44 = fp177 * fp86;
LIBINT2_REALTYPE fp104;
fp104 = fp177 * fp164;
LIBINT2_REALTYPE fp162;
fp162 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp163;
LIBINT2_REALTYPE fp161;
fp161 = libint2::fma_plus(inteval->QC_x[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi], fp162);
LIBINT2_REALTYPE fp136;
fp136 = inteval->WQ_z[vi] * fp161;
LIBINT2_REALTYPE fp137;
LIBINT2_REALTYPE fp135;
fp135 = libint2::fma_plus(inteval->QC_z[vi], fp164, fp136);
LIBINT2_REALTYPE fp80;
LIBINT2_REALTYPE fp79;
fp79 = libint2::fma_plus(inteval->WP_z[vi], fp135, fp104);
LIBINT2_REALTYPE fp45;
LIBINT2_REALTYPE fp43;
fp43 = libint2::fma_plus(inteval->WP_z[vi], fp79, fp44);
LIBINT2_REALTYPE fp32;
fp32 = fp43;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+32)*1+lsi)*1]),&(fp32),1);
LIBINT2_REALTYPE fp152;
fp152 = inteval->WQ_y[vi] * fp161;
LIBINT2_REALTYPE fp153;
LIBINT2_REALTYPE fp151;
fp151 = libint2::fma_plus(inteval->QC_y[vi], fp164, fp152);
LIBINT2_REALTYPE fp84;
fp84 = inteval->WP_z[vi] * fp151;
LIBINT2_REALTYPE fp46;
fp46 = inteval->WP_z[vi] * fp84;
LIBINT2_REALTYPE fp31;
fp31 = fp46;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+31)*1+lsi)*1]),&(fp31),1);
LIBINT2_REALTYPE fp173;
fp173 = inteval->WQ_x[vi] * fp161;
LIBINT2_REALTYPE fp174;
LIBINT2_REALTYPE fp172;
fp172 = libint2::fma_plus(inteval->QC_x[vi], fp164, fp173);
LIBINT2_REALTYPE fp167;
fp167 = fp172 - fp168;
LIBINT2_REALTYPE fp87;
fp87 = inteval->WP_z[vi] * fp167;
LIBINT2_REALTYPE fp47;
fp47 = inteval->WP_z[vi] * fp87;
LIBINT2_REALTYPE fp30;
fp30 = fp47;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+30)*1+lsi)*1]),&(fp30),1);
LIBINT2_REALTYPE fp48;
fp48 = inteval->WP_y[vi] * fp68;
LIBINT2_REALTYPE fp29;
fp29 = fp48;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+29)*1+lsi)*1]),&(fp29),1);
LIBINT2_REALTYPE fp102;
LIBINT2_REALTYPE fp101;
fp101 = libint2::fma_plus(inteval->WP_y[vi], fp148, fp176);
LIBINT2_REALTYPE fp50;
fp50 = fp177 * fp101;
LIBINT2_REALTYPE fp140;
fp140 = fp177 * fp132;
LIBINT2_REALTYPE fp92;
LIBINT2_REALTYPE fp91;
fp91 = libint2::fma_plus(inteval->WP_y[vi], fp118, fp140);
LIBINT2_REALTYPE fp51;
LIBINT2_REALTYPE fp49;
fp49 = libint2::fma_plus(inteval->WP_z[vi], fp91, fp50);
LIBINT2_REALTYPE fp28;
fp28 = fp49;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+28)*1+lsi)*1]),&(fp28),1);
LIBINT2_REALTYPE fp95;
fp95 = fp184 * fp148;
LIBINT2_REALTYPE fp96;
LIBINT2_REALTYPE fp94;
fp94 = libint2::fma_plus(inteval->WP_y[vi], fp123, fp95);
LIBINT2_REALTYPE fp52;
fp52 = inteval->WP_z[vi] * fp94;
LIBINT2_REALTYPE fp27;
fp27 = fp52;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+27)*1+lsi)*1]),&(fp27),1);
LIBINT2_REALTYPE fp53;
fp53 = inteval->WP_y[vi] * fp79;
LIBINT2_REALTYPE fp26;
fp26 = fp53;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+26)*1+lsi)*1]),&(fp26),1);
LIBINT2_REALTYPE fp105;
LIBINT2_REALTYPE fp103;
fp103 = libint2::fma_plus(inteval->WP_y[vi], fp151, fp104);
LIBINT2_REALTYPE fp54;
fp54 = inteval->WP_z[vi] * fp103;
LIBINT2_REALTYPE fp25;
fp25 = fp54;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+25)*1+lsi)*1]),&(fp25),1);
LIBINT2_REALTYPE fp110;
fp110 = inteval->WP_y[vi] * fp167;
LIBINT2_REALTYPE fp55;
fp55 = inteval->WP_z[vi] * fp110;
LIBINT2_REALTYPE fp24;
fp24 = fp55;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+24)*1+lsi)*1]),&(fp24),1);
LIBINT2_REALTYPE fp89;
fp89 = inteval->WP_y[vi] * fp112;
LIBINT2_REALTYPE fp56;
fp56 = inteval->WP_y[vi] * fp89;
LIBINT2_REALTYPE fp23;
fp23 = fp56;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+23)*1+lsi)*1]),&(fp23),1);
LIBINT2_REALTYPE fp98;
fp98 = inteval->WP_y[vi] * fp132;
LIBINT2_REALTYPE fp58;
fp58 = fp177 * fp98;
LIBINT2_REALTYPE fp59;
LIBINT2_REALTYPE fp57;
fp57 = libint2::fma_plus(inteval->WP_y[vi], fp91, fp58);
LIBINT2_REALTYPE fp22;
fp22 = fp57;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+22)*1+lsi)*1]),&(fp22),1);
LIBINT2_REALTYPE fp61;
fp61 = fp184 * fp101;
LIBINT2_REALTYPE fp62;
LIBINT2_REALTYPE fp60;
fp60 = libint2::fma_plus(inteval->WP_y[vi], fp94, fp61);
LIBINT2_REALTYPE fp21;
fp21 = fp60;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+21)*1+lsi)*1]),&(fp21),1);
LIBINT2_REALTYPE fp99;
fp99 = inteval->WP_y[vi] * fp135;
LIBINT2_REALTYPE fp63;
fp63 = inteval->WP_y[vi] * fp99;
LIBINT2_REALTYPE fp20;
fp20 = fp63;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+20)*1+lsi)*1]),&(fp20),1);
LIBINT2_REALTYPE fp109;
fp109 = inteval->WP_y[vi] * fp164;
LIBINT2_REALTYPE fp65;
fp65 = fp177 * fp109;
LIBINT2_REALTYPE fp66;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_plus(inteval->WP_y[vi], fp103, fp65);
LIBINT2_REALTYPE fp19;
fp19 = fp64;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+19)*1+lsi)*1]),&(fp19),1);
LIBINT2_REALTYPE fp67;
fp67 = inteval->WP_y[vi] * fp110;
LIBINT2_REALTYPE fp18;
fp18 = fp67;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+18)*1+lsi)*1]),&(fp18),1);
LIBINT2_REALTYPE fp71;
fp71 = inteval->WP_x[vi] * fp68;
LIBINT2_REALTYPE fp17;
fp17 = fp71;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+17)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp74;
fp74 = inteval->WP_x[vi] * fp72;
LIBINT2_REALTYPE fp16;
fp16 = fp74;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+16)*1+lsi)*1]),&(fp16),1);
LIBINT2_REALTYPE fp127;
fp127 = inteval->WP_x[vi] * fp123;
LIBINT2_REALTYPE fp76;
fp76 = inteval->WP_z[vi] * fp127;
LIBINT2_REALTYPE fp15;
fp15 = fp76;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+15)*1+lsi)*1]),&(fp15),1);
LIBINT2_REALTYPE fp178;
LIBINT2_REALTYPE fp175;
fp175 = libint2::fma_plus(inteval->WP_x[vi], fp164, fp176);
LIBINT2_REALTYPE fp107;
fp107 = fp177 * fp175;
LIBINT2_REALTYPE fp141;
LIBINT2_REALTYPE fp139;
fp139 = libint2::fma_plus(inteval->WP_x[vi], fp135, fp140);
LIBINT2_REALTYPE fp82;
LIBINT2_REALTYPE fp81;
fp81 = libint2::fma_plus(inteval->WP_z[vi], fp139, fp107);
LIBINT2_REALTYPE fp14;
fp14 = fp81;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+14)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp157;
LIBINT2_REALTYPE fp155;
fp155 = libint2::fma_plus(inteval->WP_x[vi], fp151, fp156);
LIBINT2_REALTYPE fp85;
fp85 = inteval->WP_z[vi] * fp155;
LIBINT2_REALTYPE fp13;
fp13 = fp85;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+13)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp180;
fp180 = fp184 * fp164;
LIBINT2_REALTYPE fp181;
LIBINT2_REALTYPE fp179;
fp179 = libint2::fma_plus(inteval->WP_x[vi], fp167, fp180);
LIBINT2_REALTYPE fp88;
fp88 = inteval->WP_z[vi] * fp179;
LIBINT2_REALTYPE fp12;
fp12 = fp88;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+12)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp116;
fp116 = inteval->WP_x[vi] * fp112;
LIBINT2_REALTYPE fp90;
fp90 = inteval->WP_y[vi] * fp116;
LIBINT2_REALTYPE fp11;
fp11 = fp90;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+11)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp93;
fp93 = inteval->WP_x[vi] * fp91;
LIBINT2_REALTYPE fp10;
fp10 = fp93;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+10)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp97;
fp97 = inteval->WP_x[vi] * fp94;
LIBINT2_REALTYPE fp9;
fp9 = fp97;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp100;
fp100 = inteval->WP_y[vi] * fp139;
LIBINT2_REALTYPE fp8;
fp8 = fp100;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp108;
LIBINT2_REALTYPE fp106;
fp106 = libint2::fma_plus(inteval->WP_y[vi], fp155, fp107);
LIBINT2_REALTYPE fp7;
fp7 = fp106;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp111;
fp111 = inteval->WP_y[vi] * fp179;
LIBINT2_REALTYPE fp6;
fp6 = fp111;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp117;
fp117 = inteval->WP_x[vi] * fp116;
LIBINT2_REALTYPE fp5;
fp5 = fp117;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp121;
fp121 = inteval->WP_x[vi] * fp118;
LIBINT2_REALTYPE fp122;
fp122 = inteval->WP_x[vi] * fp121;
LIBINT2_REALTYPE fp4;
fp4 = fp122;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp128;
fp128 = inteval->WP_x[vi] * fp127;
LIBINT2_REALTYPE fp3;
fp3 = fp128;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp138;
fp138 = inteval->WP_x[vi] * fp132;
LIBINT2_REALTYPE fp143;
fp143 = fp177 * fp138;
LIBINT2_REALTYPE fp144;
LIBINT2_REALTYPE fp142;
fp142 = libint2::fma_plus(inteval->WP_x[vi], fp139, fp143);
LIBINT2_REALTYPE fp2;
fp2 = fp142;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp154;
fp154 = inteval->WP_x[vi] * fp148;
LIBINT2_REALTYPE fp159;
fp159 = fp177 * fp154;
LIBINT2_REALTYPE fp160;
LIBINT2_REALTYPE fp158;
fp158 = libint2::fma_plus(inteval->WP_x[vi], fp155, fp159);
LIBINT2_REALTYPE fp1;
fp1 = fp158;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp183;
fp183 = fp184 * fp175;
LIBINT2_REALTYPE fp185;
LIBINT2_REALTYPE fp182;
fp182 = libint2::fma_plus(inteval->WP_x[vi], fp179, fp183);
LIBINT2_REALTYPE fp0;
fp0 = fp182;
_libint2_static_api_inc1_short_(&(stack[((hsi*36+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 186 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
