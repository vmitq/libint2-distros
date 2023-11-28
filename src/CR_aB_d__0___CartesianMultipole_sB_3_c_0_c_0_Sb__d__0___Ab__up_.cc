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

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void CR_aB_d__0___CartesianMultipole_sB_3_c_0_c_0_Sb__d__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*18+14)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src1[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + src0[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = 0.0000000000000000e+00 + src0[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
LIBINT2_REALTYPE fp33;
fp33 = libint2::fma_plus(inteval->BO_x[vi], fp32, fp35);
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src0[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp26;
fp26 = libint2::fma_plus(inteval->BO_x[vi], fp25, fp32);
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_plus(inteval->BO_x[vi], fp26, fp33);
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + src0[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
LIBINT2_REALTYPE fp19;
fp19 = libint2::fma_plus(inteval->BO_x[vi], fp18, fp25);
LIBINT2_REALTYPE fp22;
LIBINT2_REALTYPE fp21;
fp21 = libint2::fma_plus(inteval->BO_x[vi], fp19, fp26);
LIBINT2_REALTYPE fp24;
LIBINT2_REALTYPE fp23;
fp23 = libint2::fma_plus(inteval->BO_x[vi], fp21, fp28);
LIBINT2_REALTYPE fp109;
fp109 = fp23 * fp17;
LIBINT2_REALTYPE fp108;
fp108 = fp109 * fp0;
target[((hsi*36+35)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*18+13)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src1[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
fp111 = fp23 * fp16;
LIBINT2_REALTYPE fp110;
fp110 = fp111 * fp1;
target[((hsi*36+34)*1+lsi)*1] = fp110;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src1[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
fp113 = fp23 * fp15;
LIBINT2_REALTYPE fp112;
fp112 = fp113 * fp2;
target[((hsi*36+33)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp36;
fp36 = 0.0000000000000000e+00 + src0[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_plus(inteval->BO_x[vi], fp35, fp36);
LIBINT2_REALTYPE fp43;
LIBINT2_REALTYPE fp42;
fp42 = libint2::fma_plus(inteval->BO_x[vi], fp33, fp38);
LIBINT2_REALTYPE fp31;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_plus(inteval->BO_x[vi], fp28, fp42);
LIBINT2_REALTYPE fp115;
fp115 = fp30 * fp17;
LIBINT2_REALTYPE fp114;
fp114 = fp115 * fp1;
target[((hsi*36+32)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp117;
fp117 = fp30 * fp16;
LIBINT2_REALTYPE fp116;
fp116 = fp117 * fp2;
target[((hsi*36+31)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp47;
fp47 = inteval->BO_x[vi] * fp42;
LIBINT2_REALTYPE fp45;
fp45 = inteval->BO_x[vi] * fp38;
LIBINT2_REALTYPE fp41;
fp41 = inteval->BO_x[vi] * fp36;
LIBINT2_REALTYPE fp37;
fp37 = 0.0000000000000000e+00 + src0[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = fp37 + fp41;
LIBINT2_REALTYPE fp44;
fp44 = fp40 + fp45;
LIBINT2_REALTYPE fp46;
fp46 = fp44 + fp47;
LIBINT2_REALTYPE fp119;
fp119 = fp46 * fp17;
LIBINT2_REALTYPE fp118;
fp118 = fp119 * fp2;
target[((hsi*36+30)*1+lsi)*1] = fp118;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src1[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
fp121 = fp23 * fp14;
LIBINT2_REALTYPE fp120;
fp120 = fp121 * fp3;
target[((hsi*36+29)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src1[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp123;
fp123 = fp23 * fp13;
LIBINT2_REALTYPE fp122;
fp122 = fp123 * fp4;
target[((hsi*36+28)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src1[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp125;
fp125 = fp23 * fp12;
LIBINT2_REALTYPE fp124;
fp124 = fp125 * fp5;
target[((hsi*36+27)*1+lsi)*1] = fp124;
LIBINT2_REALTYPE fp127;
fp127 = fp30 * fp14;
LIBINT2_REALTYPE fp126;
fp126 = fp127 * fp4;
target[((hsi*36+26)*1+lsi)*1] = fp126;
LIBINT2_REALTYPE fp129;
fp129 = fp30 * fp13;
LIBINT2_REALTYPE fp128;
fp128 = fp129 * fp5;
target[((hsi*36+25)*1+lsi)*1] = fp128;
LIBINT2_REALTYPE fp131;
fp131 = fp46 * fp14;
LIBINT2_REALTYPE fp130;
fp130 = fp131 * fp5;
target[((hsi*36+24)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src1[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp133;
fp133 = fp23 * fp11;
LIBINT2_REALTYPE fp132;
fp132 = fp133 * fp6;
target[((hsi*36+23)*1+lsi)*1] = fp132;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src1[((hsi*18+13)*1+lsi)*1];
LIBINT2_REALTYPE fp135;
fp135 = fp23 * fp10;
LIBINT2_REALTYPE fp134;
fp134 = fp135 * fp7;
target[((hsi*36+22)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src2[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src1[((hsi*18+14)*1+lsi)*1];
LIBINT2_REALTYPE fp137;
fp137 = fp23 * fp9;
LIBINT2_REALTYPE fp136;
fp136 = fp137 * fp8;
target[((hsi*36+21)*1+lsi)*1] = fp136;
LIBINT2_REALTYPE fp139;
fp139 = fp30 * fp11;
LIBINT2_REALTYPE fp138;
fp138 = fp139 * fp7;
target[((hsi*36+20)*1+lsi)*1] = fp138;
LIBINT2_REALTYPE fp141;
fp141 = fp30 * fp10;
LIBINT2_REALTYPE fp140;
fp140 = fp141 * fp8;
target[((hsi*36+19)*1+lsi)*1] = fp140;
LIBINT2_REALTYPE fp143;
fp143 = fp46 * fp11;
LIBINT2_REALTYPE fp142;
fp142 = fp143 * fp8;
target[((hsi*36+18)*1+lsi)*1] = fp142;
LIBINT2_REALTYPE fp65;
fp65 = 0.0000000000000000e+00 + src0[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = 0.0000000000000000e+00 + src0[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
LIBINT2_REALTYPE fp63;
fp63 = libint2::fma_plus(inteval->BO_x[vi], fp62, fp65);
LIBINT2_REALTYPE fp55;
fp55 = 0.0000000000000000e+00 + src0[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
LIBINT2_REALTYPE fp56;
fp56 = libint2::fma_plus(inteval->BO_x[vi], fp55, fp62);
LIBINT2_REALTYPE fp59;
LIBINT2_REALTYPE fp58;
fp58 = libint2::fma_plus(inteval->BO_x[vi], fp56, fp63);
LIBINT2_REALTYPE fp48;
fp48 = 0.0000000000000000e+00 + src0[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
LIBINT2_REALTYPE fp49;
fp49 = libint2::fma_plus(inteval->BO_x[vi], fp48, fp55);
LIBINT2_REALTYPE fp52;
LIBINT2_REALTYPE fp51;
fp51 = libint2::fma_plus(inteval->BO_x[vi], fp49, fp56);
LIBINT2_REALTYPE fp54;
LIBINT2_REALTYPE fp53;
fp53 = libint2::fma_plus(inteval->BO_x[vi], fp51, fp58);
LIBINT2_REALTYPE fp145;
fp145 = fp53 * fp17;
LIBINT2_REALTYPE fp144;
fp144 = fp145 * fp3;
target[((hsi*36+17)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp147;
fp147 = fp53 * fp16;
LIBINT2_REALTYPE fp146;
fp146 = fp147 * fp4;
target[((hsi*36+16)*1+lsi)*1] = fp146;
LIBINT2_REALTYPE fp149;
fp149 = fp53 * fp15;
LIBINT2_REALTYPE fp148;
fp148 = fp149 * fp5;
target[((hsi*36+15)*1+lsi)*1] = fp148;
LIBINT2_REALTYPE fp66;
fp66 = 0.0000000000000000e+00 + src0[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
LIBINT2_REALTYPE fp68;
fp68 = libint2::fma_plus(inteval->BO_x[vi], fp65, fp66);
LIBINT2_REALTYPE fp73;
LIBINT2_REALTYPE fp72;
fp72 = libint2::fma_plus(inteval->BO_x[vi], fp63, fp68);
LIBINT2_REALTYPE fp61;
LIBINT2_REALTYPE fp60;
fp60 = libint2::fma_plus(inteval->BO_x[vi], fp58, fp72);
LIBINT2_REALTYPE fp151;
fp151 = fp60 * fp17;
LIBINT2_REALTYPE fp150;
fp150 = fp151 * fp4;
target[((hsi*36+14)*1+lsi)*1] = fp150;
LIBINT2_REALTYPE fp153;
fp153 = fp60 * fp16;
LIBINT2_REALTYPE fp152;
fp152 = fp153 * fp5;
target[((hsi*36+13)*1+lsi)*1] = fp152;
LIBINT2_REALTYPE fp77;
fp77 = inteval->BO_x[vi] * fp72;
LIBINT2_REALTYPE fp75;
fp75 = inteval->BO_x[vi] * fp68;
LIBINT2_REALTYPE fp71;
fp71 = inteval->BO_x[vi] * fp66;
LIBINT2_REALTYPE fp67;
fp67 = 0.0000000000000000e+00 + src0[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = fp67 + fp71;
LIBINT2_REALTYPE fp74;
fp74 = fp70 + fp75;
LIBINT2_REALTYPE fp76;
fp76 = fp74 + fp77;
LIBINT2_REALTYPE fp155;
fp155 = fp76 * fp17;
LIBINT2_REALTYPE fp154;
fp154 = fp155 * fp5;
target[((hsi*36+12)*1+lsi)*1] = fp154;
LIBINT2_REALTYPE fp157;
fp157 = fp53 * fp14;
LIBINT2_REALTYPE fp156;
fp156 = fp157 * fp6;
target[((hsi*36+11)*1+lsi)*1] = fp156;
LIBINT2_REALTYPE fp159;
fp159 = fp53 * fp13;
LIBINT2_REALTYPE fp158;
fp158 = fp159 * fp7;
target[((hsi*36+10)*1+lsi)*1] = fp158;
LIBINT2_REALTYPE fp161;
fp161 = fp53 * fp12;
LIBINT2_REALTYPE fp160;
fp160 = fp161 * fp8;
target[((hsi*36+9)*1+lsi)*1] = fp160;
LIBINT2_REALTYPE fp163;
fp163 = fp60 * fp14;
LIBINT2_REALTYPE fp162;
fp162 = fp163 * fp7;
target[((hsi*36+8)*1+lsi)*1] = fp162;
LIBINT2_REALTYPE fp165;
fp165 = fp60 * fp13;
LIBINT2_REALTYPE fp164;
fp164 = fp165 * fp8;
target[((hsi*36+7)*1+lsi)*1] = fp164;
LIBINT2_REALTYPE fp167;
fp167 = fp76 * fp14;
LIBINT2_REALTYPE fp166;
fp166 = fp167 * fp8;
target[((hsi*36+6)*1+lsi)*1] = fp166;
LIBINT2_REALTYPE fp95;
fp95 = 0.0000000000000000e+00 + src0[((hsi*18+15)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = 0.0000000000000000e+00 + src0[((hsi*18+14)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
LIBINT2_REALTYPE fp93;
fp93 = libint2::fma_plus(inteval->BO_x[vi], fp92, fp95);
LIBINT2_REALTYPE fp85;
fp85 = 0.0000000000000000e+00 + src0[((hsi*18+13)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
LIBINT2_REALTYPE fp86;
fp86 = libint2::fma_plus(inteval->BO_x[vi], fp85, fp92);
LIBINT2_REALTYPE fp89;
LIBINT2_REALTYPE fp88;
fp88 = libint2::fma_plus(inteval->BO_x[vi], fp86, fp93);
LIBINT2_REALTYPE fp78;
fp78 = 0.0000000000000000e+00 + src0[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
LIBINT2_REALTYPE fp79;
fp79 = libint2::fma_plus(inteval->BO_x[vi], fp78, fp85);
LIBINT2_REALTYPE fp82;
LIBINT2_REALTYPE fp81;
fp81 = libint2::fma_plus(inteval->BO_x[vi], fp79, fp86);
LIBINT2_REALTYPE fp84;
LIBINT2_REALTYPE fp83;
fp83 = libint2::fma_plus(inteval->BO_x[vi], fp81, fp88);
LIBINT2_REALTYPE fp169;
fp169 = fp83 * fp17;
LIBINT2_REALTYPE fp168;
fp168 = fp169 * fp6;
target[((hsi*36+5)*1+lsi)*1] = fp168;
LIBINT2_REALTYPE fp171;
fp171 = fp83 * fp16;
LIBINT2_REALTYPE fp170;
fp170 = fp171 * fp7;
target[((hsi*36+4)*1+lsi)*1] = fp170;
LIBINT2_REALTYPE fp173;
fp173 = fp83 * fp15;
LIBINT2_REALTYPE fp172;
fp172 = fp173 * fp8;
target[((hsi*36+3)*1+lsi)*1] = fp172;
LIBINT2_REALTYPE fp96;
fp96 = 0.0000000000000000e+00 + src0[((hsi*18+16)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
LIBINT2_REALTYPE fp98;
fp98 = libint2::fma_plus(inteval->BO_x[vi], fp95, fp96);
LIBINT2_REALTYPE fp103;
LIBINT2_REALTYPE fp102;
fp102 = libint2::fma_plus(inteval->BO_x[vi], fp93, fp98);
LIBINT2_REALTYPE fp91;
LIBINT2_REALTYPE fp90;
fp90 = libint2::fma_plus(inteval->BO_x[vi], fp88, fp102);
LIBINT2_REALTYPE fp175;
fp175 = fp90 * fp17;
LIBINT2_REALTYPE fp174;
fp174 = fp175 * fp7;
target[((hsi*36+2)*1+lsi)*1] = fp174;
LIBINT2_REALTYPE fp177;
fp177 = fp90 * fp16;
LIBINT2_REALTYPE fp176;
fp176 = fp177 * fp8;
target[((hsi*36+1)*1+lsi)*1] = fp176;
LIBINT2_REALTYPE fp107;
fp107 = inteval->BO_x[vi] * fp102;
LIBINT2_REALTYPE fp105;
fp105 = inteval->BO_x[vi] * fp98;
LIBINT2_REALTYPE fp101;
fp101 = inteval->BO_x[vi] * fp96;
LIBINT2_REALTYPE fp97;
fp97 = 0.0000000000000000e+00 + src0[((hsi*18+17)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = fp97 + fp101;
LIBINT2_REALTYPE fp104;
fp104 = fp100 + fp105;
LIBINT2_REALTYPE fp106;
fp106 = fp104 + fp107;
LIBINT2_REALTYPE fp179;
fp179 = fp106 * fp17;
LIBINT2_REALTYPE fp178;
fp178 = fp179 * fp8;
target[((hsi*36+0)*1+lsi)*1] = fp178;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 180 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
