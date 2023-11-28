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
void _1emultipole_S_F_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp61;
fp61 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_y[vi];
LIBINT2_REALTYPE fp100;
fp100 = 0.0000000000000000e+00 + fp61;
LIBINT2_REALTYPE fp66;
fp66 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_x[vi];
LIBINT2_REALTYPE fp110;
fp110 = 0.0000000000000000e+00 + fp66;
LIBINT2_REALTYPE fp165;
fp165 = fp110 * fp100;
LIBINT2_REALTYPE fp50;
fp50 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_z[vi];
LIBINT2_REALTYPE fp49;
fp49 = inteval->PB_z[vi] * fp50;
LIBINT2_REALTYPE fp73;
fp73 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp44;
fp44 = fp73 * fp49;
LIBINT2_REALTYPE fp47;
fp47 = inteval->oo2z[vi] * fp50;
LIBINT2_REALTYPE fp48;
LIBINT2_REALTYPE fp46;
fp46 = libint2::fma_plus(inteval->PB_z[vi], fp49, fp47);
LIBINT2_REALTYPE fp45;
LIBINT2_REALTYPE fp43;
fp43 = libint2::fma_plus(inteval->PB_z[vi], fp46, fp44);
LIBINT2_REALTYPE fp84;
fp84 = 0.0000000000000000e+00 + fp43;
LIBINT2_REALTYPE fp77;
fp77 = inteval->BO_z[vi] * fp84;
LIBINT2_REALTYPE fp64;
fp64 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp41;
fp41 = fp64 * fp46;
LIBINT2_REALTYPE fp42;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_plus(inteval->PB_z[vi], fp43, fp41);
LIBINT2_REALTYPE fp75;
fp75 = 0.0000000000000000e+00 + fp40;
LIBINT2_REALTYPE fp76;
fp76 = fp75 + fp77;
LIBINT2_REALTYPE fp114;
fp114 = fp165 * fp76;
LIBINT2_REALTYPE fp39;
fp39 = fp114;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+39)*1+lsi)*1]),&(fp39),1);
LIBINT2_REALTYPE fp85;
fp85 = 0.0000000000000000e+00 + fp46;
LIBINT2_REALTYPE fp79;
LIBINT2_REALTYPE fp78;
fp78 = libint2::fma_plus(inteval->BO_z[vi], fp85, fp84);
LIBINT2_REALTYPE fp60;
fp60 = inteval->PB_y[vi] * fp61;
LIBINT2_REALTYPE fp99;
fp99 = 0.0000000000000000e+00 + fp60;
LIBINT2_REALTYPE fp167;
fp167 = fp110 * fp99;
LIBINT2_REALTYPE fp115;
fp115 = fp167 * fp78;
LIBINT2_REALTYPE fp38;
fp38 = fp115;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+38)*1+lsi)*1]),&(fp38),1);
LIBINT2_REALTYPE fp86;
fp86 = 0.0000000000000000e+00 + fp49;
LIBINT2_REALTYPE fp81;
LIBINT2_REALTYPE fp80;
fp80 = libint2::fma_plus(inteval->BO_z[vi], fp86, fp85);
LIBINT2_REALTYPE fp58;
fp58 = inteval->oo2z[vi] * fp61;
LIBINT2_REALTYPE fp59;
LIBINT2_REALTYPE fp57;
fp57 = libint2::fma_plus(inteval->PB_y[vi], fp60, fp58);
LIBINT2_REALTYPE fp98;
fp98 = 0.0000000000000000e+00 + fp57;
LIBINT2_REALTYPE fp169;
fp169 = fp110 * fp98;
LIBINT2_REALTYPE fp116;
fp116 = fp169 * fp80;
LIBINT2_REALTYPE fp37;
fp37 = fp116;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+37)*1+lsi)*1]),&(fp37),1);
LIBINT2_REALTYPE fp87;
fp87 = 0.0000000000000000e+00 + fp50;
LIBINT2_REALTYPE fp83;
LIBINT2_REALTYPE fp82;
fp82 = libint2::fma_plus(inteval->BO_z[vi], fp87, fp86);
LIBINT2_REALTYPE fp55;
fp55 = fp73 * fp60;
LIBINT2_REALTYPE fp56;
LIBINT2_REALTYPE fp54;
fp54 = libint2::fma_plus(inteval->PB_y[vi], fp57, fp55);
LIBINT2_REALTYPE fp97;
fp97 = 0.0000000000000000e+00 + fp54;
LIBINT2_REALTYPE fp171;
fp171 = fp110 * fp97;
LIBINT2_REALTYPE fp117;
fp117 = fp171 * fp82;
LIBINT2_REALTYPE fp36;
fp36 = fp117;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+36)*1+lsi)*1]),&(fp36),1);
LIBINT2_REALTYPE fp67;
fp67 = inteval->PB_x[vi] * fp66;
LIBINT2_REALTYPE fp111;
fp111 = 0.0000000000000000e+00 + fp67;
LIBINT2_REALTYPE fp173;
fp173 = fp111 * fp100;
LIBINT2_REALTYPE fp118;
fp118 = fp173 * fp78;
LIBINT2_REALTYPE fp35;
fp35 = fp118;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+35)*1+lsi)*1]),&(fp35),1);
LIBINT2_REALTYPE fp175;
fp175 = fp111 * fp99;
LIBINT2_REALTYPE fp119;
fp119 = fp175 * fp80;
LIBINT2_REALTYPE fp34;
fp34 = fp119;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+34)*1+lsi)*1]),&(fp34),1);
LIBINT2_REALTYPE fp177;
fp177 = fp111 * fp98;
LIBINT2_REALTYPE fp120;
fp120 = fp177 * fp82;
LIBINT2_REALTYPE fp33;
fp33 = fp120;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+33)*1+lsi)*1]),&(fp33),1);
LIBINT2_REALTYPE fp69;
fp69 = inteval->oo2z[vi] * fp66;
LIBINT2_REALTYPE fp70;
LIBINT2_REALTYPE fp68;
fp68 = libint2::fma_plus(inteval->PB_x[vi], fp67, fp69);
LIBINT2_REALTYPE fp112;
fp112 = 0.0000000000000000e+00 + fp68;
LIBINT2_REALTYPE fp179;
fp179 = fp112 * fp100;
LIBINT2_REALTYPE fp121;
fp121 = fp179 * fp80;
LIBINT2_REALTYPE fp32;
fp32 = fp121;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+32)*1+lsi)*1]),&(fp32),1);
LIBINT2_REALTYPE fp181;
fp181 = fp112 * fp99;
LIBINT2_REALTYPE fp122;
fp122 = fp181 * fp82;
LIBINT2_REALTYPE fp31;
fp31 = fp122;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+31)*1+lsi)*1]),&(fp31),1);
LIBINT2_REALTYPE fp72;
fp72 = fp73 * fp67;
LIBINT2_REALTYPE fp74;
LIBINT2_REALTYPE fp71;
fp71 = libint2::fma_plus(inteval->PB_x[vi], fp68, fp72);
LIBINT2_REALTYPE fp113;
fp113 = 0.0000000000000000e+00 + fp71;
LIBINT2_REALTYPE fp183;
fp183 = fp113 * fp100;
LIBINT2_REALTYPE fp123;
fp123 = fp183 * fp82;
LIBINT2_REALTYPE fp30;
fp30 = fp123;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+30)*1+lsi)*1]),&(fp30),1);
LIBINT2_REALTYPE fp96;
LIBINT2_REALTYPE fp95;
fp95 = libint2::fma_plus(inteval->BO_y[vi], fp100, fp99);
LIBINT2_REALTYPE fp125;
fp125 = fp110 * fp95;
LIBINT2_REALTYPE fp124;
fp124 = fp125 * fp84;
LIBINT2_REALTYPE fp29;
fp29 = fp124;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+29)*1+lsi)*1]),&(fp29),1);
LIBINT2_REALTYPE fp94;
LIBINT2_REALTYPE fp93;
fp93 = libint2::fma_plus(inteval->BO_y[vi], fp99, fp98);
LIBINT2_REALTYPE fp127;
fp127 = fp110 * fp93;
LIBINT2_REALTYPE fp126;
fp126 = fp127 * fp85;
LIBINT2_REALTYPE fp28;
fp28 = fp126;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+28)*1+lsi)*1]),&(fp28),1);
LIBINT2_REALTYPE fp92;
LIBINT2_REALTYPE fp91;
fp91 = libint2::fma_plus(inteval->BO_y[vi], fp98, fp97);
LIBINT2_REALTYPE fp129;
fp129 = fp110 * fp91;
LIBINT2_REALTYPE fp128;
fp128 = fp129 * fp86;
LIBINT2_REALTYPE fp27;
fp27 = fp128;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+27)*1+lsi)*1]),&(fp27),1);
LIBINT2_REALTYPE fp90;
fp90 = inteval->BO_y[vi] * fp97;
LIBINT2_REALTYPE fp52;
fp52 = fp64 * fp57;
LIBINT2_REALTYPE fp53;
LIBINT2_REALTYPE fp51;
fp51 = libint2::fma_plus(inteval->PB_y[vi], fp54, fp52);
LIBINT2_REALTYPE fp88;
fp88 = 0.0000000000000000e+00 + fp51;
LIBINT2_REALTYPE fp89;
fp89 = fp88 + fp90;
LIBINT2_REALTYPE fp131;
fp131 = fp110 * fp89;
LIBINT2_REALTYPE fp130;
fp130 = fp131 * fp87;
LIBINT2_REALTYPE fp26;
fp26 = fp130;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+26)*1+lsi)*1]),&(fp26),1);
LIBINT2_REALTYPE fp133;
fp133 = fp111 * fp95;
LIBINT2_REALTYPE fp132;
fp132 = fp133 * fp85;
LIBINT2_REALTYPE fp25;
fp25 = fp132;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+25)*1+lsi)*1]),&(fp25),1);
LIBINT2_REALTYPE fp135;
fp135 = fp111 * fp93;
LIBINT2_REALTYPE fp134;
fp134 = fp135 * fp86;
LIBINT2_REALTYPE fp24;
fp24 = fp134;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+24)*1+lsi)*1]),&(fp24),1);
LIBINT2_REALTYPE fp137;
fp137 = fp111 * fp91;
LIBINT2_REALTYPE fp136;
fp136 = fp137 * fp87;
LIBINT2_REALTYPE fp23;
fp23 = fp136;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+23)*1+lsi)*1]),&(fp23),1);
LIBINT2_REALTYPE fp139;
fp139 = fp112 * fp95;
LIBINT2_REALTYPE fp138;
fp138 = fp139 * fp86;
LIBINT2_REALTYPE fp22;
fp22 = fp138;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+22)*1+lsi)*1]),&(fp22),1);
LIBINT2_REALTYPE fp141;
fp141 = fp112 * fp93;
LIBINT2_REALTYPE fp140;
fp140 = fp141 * fp87;
LIBINT2_REALTYPE fp21;
fp21 = fp140;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+21)*1+lsi)*1]),&(fp21),1);
LIBINT2_REALTYPE fp143;
fp143 = fp113 * fp95;
LIBINT2_REALTYPE fp142;
fp142 = fp143 * fp87;
LIBINT2_REALTYPE fp20;
fp20 = fp142;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+20)*1+lsi)*1]),&(fp20),1);
LIBINT2_REALTYPE fp102;
LIBINT2_REALTYPE fp101;
fp101 = libint2::fma_plus(inteval->BO_x[vi], fp110, fp111);
LIBINT2_REALTYPE fp145;
fp145 = fp101 * fp100;
LIBINT2_REALTYPE fp144;
fp144 = fp145 * fp84;
LIBINT2_REALTYPE fp19;
fp19 = fp144;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+19)*1+lsi)*1]),&(fp19),1);
LIBINT2_REALTYPE fp147;
fp147 = fp101 * fp99;
LIBINT2_REALTYPE fp146;
fp146 = fp147 * fp85;
LIBINT2_REALTYPE fp18;
fp18 = fp146;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+18)*1+lsi)*1]),&(fp18),1);
LIBINT2_REALTYPE fp149;
fp149 = fp101 * fp98;
LIBINT2_REALTYPE fp148;
fp148 = fp149 * fp86;
LIBINT2_REALTYPE fp17;
fp17 = fp148;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+17)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp151;
fp151 = fp101 * fp97;
LIBINT2_REALTYPE fp150;
fp150 = fp151 * fp87;
LIBINT2_REALTYPE fp16;
fp16 = fp150;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+16)*1+lsi)*1]),&(fp16),1);
LIBINT2_REALTYPE fp104;
LIBINT2_REALTYPE fp103;
fp103 = libint2::fma_plus(inteval->BO_x[vi], fp111, fp112);
LIBINT2_REALTYPE fp153;
fp153 = fp103 * fp100;
LIBINT2_REALTYPE fp152;
fp152 = fp153 * fp85;
LIBINT2_REALTYPE fp15;
fp15 = fp152;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+15)*1+lsi)*1]),&(fp15),1);
LIBINT2_REALTYPE fp155;
fp155 = fp103 * fp99;
LIBINT2_REALTYPE fp154;
fp154 = fp155 * fp86;
LIBINT2_REALTYPE fp14;
fp14 = fp154;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+14)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp157;
fp157 = fp103 * fp98;
LIBINT2_REALTYPE fp156;
fp156 = fp157 * fp87;
LIBINT2_REALTYPE fp13;
fp13 = fp156;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+13)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp106;
LIBINT2_REALTYPE fp105;
fp105 = libint2::fma_plus(inteval->BO_x[vi], fp112, fp113);
LIBINT2_REALTYPE fp159;
fp159 = fp105 * fp100;
LIBINT2_REALTYPE fp158;
fp158 = fp159 * fp86;
LIBINT2_REALTYPE fp12;
fp12 = fp158;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+12)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp161;
fp161 = fp105 * fp99;
LIBINT2_REALTYPE fp160;
fp160 = fp161 * fp87;
LIBINT2_REALTYPE fp11;
fp11 = fp160;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+11)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp109;
fp109 = inteval->BO_x[vi] * fp113;
LIBINT2_REALTYPE fp63;
fp63 = fp64 * fp68;
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp62;
fp62 = libint2::fma_plus(inteval->PB_x[vi], fp71, fp63);
LIBINT2_REALTYPE fp107;
fp107 = 0.0000000000000000e+00 + fp62;
LIBINT2_REALTYPE fp108;
fp108 = fp107 + fp109;
LIBINT2_REALTYPE fp163;
fp163 = fp108 * fp100;
LIBINT2_REALTYPE fp162;
fp162 = fp163 * fp87;
LIBINT2_REALTYPE fp10;
fp10 = fp162;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+10)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp164;
fp164 = fp165 * fp84;
LIBINT2_REALTYPE fp9;
fp9 = fp164;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp166;
fp166 = fp167 * fp85;
LIBINT2_REALTYPE fp8;
fp8 = fp166;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp168;
fp168 = fp169 * fp86;
LIBINT2_REALTYPE fp7;
fp7 = fp168;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp170;
fp170 = fp171 * fp87;
LIBINT2_REALTYPE fp6;
fp6 = fp170;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp172;
fp172 = fp173 * fp85;
LIBINT2_REALTYPE fp5;
fp5 = fp172;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp174;
fp174 = fp175 * fp86;
LIBINT2_REALTYPE fp4;
fp4 = fp174;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp176;
fp176 = fp177 * fp87;
LIBINT2_REALTYPE fp3;
fp3 = fp176;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp178;
fp178 = fp179 * fp86;
LIBINT2_REALTYPE fp2;
fp2 = fp178;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp180;
fp180 = fp181 * fp87;
LIBINT2_REALTYPE fp1;
fp1 = fp180;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp182;
fp182 = fp183 * fp87;
LIBINT2_REALTYPE fp0;
fp0 = fp182;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 184 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
