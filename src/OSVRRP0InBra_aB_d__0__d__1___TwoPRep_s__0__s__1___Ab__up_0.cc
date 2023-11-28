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
void OSVRRP0InBra_aB_d__0__d__1___TwoPRep_s__0__s__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3, const LIBINT2_REALTYPE* src4) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp170;
fp170 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp170 * src4[((hsi*9+8)*1+lsi)*1];
LIBINT2_REALTYPE fp175;
fp175 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp131;
LIBINT2_REALTYPE fp130;
fp130 = libint2::fma_minus(inteval->roz[vi], src3[((hsi*6+5)*1+lsi)*1], src2[((hsi*6+5)*1+lsi)*1]);
LIBINT2_REALTYPE fp129;
fp129 = fp175 * fp130;
LIBINT2_REALTYPE fp4;
fp4 = inteval->WP_z[vi] * src1[((hsi*18+17)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
LIBINT2_REALTYPE fp3;
fp3 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*18+17)*1+lsi)*1], fp4);
LIBINT2_REALTYPE fp2;
fp2 = fp3 - fp129;
LIBINT2_REALTYPE fp0;
fp0 = fp2 + fp1;
target[((hsi*36+35)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp160;
fp160 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp7;
fp7 = fp160 * src4[((hsi*9+7)*1+lsi)*1];
LIBINT2_REALTYPE fp138;
LIBINT2_REALTYPE fp137;
fp137 = libint2::fma_minus(inteval->roz[vi], src3[((hsi*6+4)*1+lsi)*1], src2[((hsi*6+4)*1+lsi)*1]);
LIBINT2_REALTYPE fp136;
fp136 = fp175 * fp137;
LIBINT2_REALTYPE fp10;
fp10 = inteval->WP_z[vi] * src1[((hsi*18+16)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp9;
fp9 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*18+16)*1+lsi)*1], fp10);
LIBINT2_REALTYPE fp8;
fp8 = fp9 - fp136;
LIBINT2_REALTYPE fp6;
fp6 = fp8 + fp7;
target[((hsi*36+34)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp145;
LIBINT2_REALTYPE fp144;
fp144 = libint2::fma_minus(inteval->roz[vi], src3[((hsi*6+3)*1+lsi)*1], src2[((hsi*6+3)*1+lsi)*1]);
LIBINT2_REALTYPE fp143;
fp143 = fp175 * fp144;
LIBINT2_REALTYPE fp14;
fp14 = inteval->WP_z[vi] * src1[((hsi*18+15)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
LIBINT2_REALTYPE fp13;
fp13 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*18+15)*1+lsi)*1], fp14);
LIBINT2_REALTYPE fp12;
fp12 = fp13 - fp143;
target[((hsi*36+33)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp17;
fp17 = fp160 * src4[((hsi*9+6)*1+lsi)*1];
LIBINT2_REALTYPE fp154;
LIBINT2_REALTYPE fp153;
fp153 = libint2::fma_minus(inteval->roz[vi], src3[((hsi*6+2)*1+lsi)*1], src2[((hsi*6+2)*1+lsi)*1]);
LIBINT2_REALTYPE fp152;
fp152 = fp175 * fp153;
LIBINT2_REALTYPE fp20;
fp20 = inteval->WP_z[vi] * src1[((hsi*18+14)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
LIBINT2_REALTYPE fp19;
fp19 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*18+14)*1+lsi)*1], fp20);
LIBINT2_REALTYPE fp18;
fp18 = fp19 - fp152;
LIBINT2_REALTYPE fp16;
fp16 = fp18 + fp17;
target[((hsi*36+32)*1+lsi)*1] = fp16;
LIBINT2_REALTYPE fp164;
LIBINT2_REALTYPE fp163;
fp163 = libint2::fma_minus(inteval->roz[vi], src3[((hsi*6+1)*1+lsi)*1], src2[((hsi*6+1)*1+lsi)*1]);
LIBINT2_REALTYPE fp162;
fp162 = fp175 * fp163;
LIBINT2_REALTYPE fp24;
fp24 = inteval->WP_z[vi] * src1[((hsi*18+13)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
LIBINT2_REALTYPE fp23;
fp23 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*18+13)*1+lsi)*1], fp24);
LIBINT2_REALTYPE fp22;
fp22 = fp23 - fp162;
target[((hsi*36+31)*1+lsi)*1] = fp22;
LIBINT2_REALTYPE fp174;
LIBINT2_REALTYPE fp173;
fp173 = libint2::fma_minus(inteval->roz[vi], src3[((hsi*6+0)*1+lsi)*1], src2[((hsi*6+0)*1+lsi)*1]);
LIBINT2_REALTYPE fp172;
fp172 = fp175 * fp173;
LIBINT2_REALTYPE fp28;
fp28 = inteval->WP_z[vi] * src1[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp27;
fp27 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*18+12)*1+lsi)*1], fp28);
LIBINT2_REALTYPE fp26;
fp26 = fp27 - fp172;
target[((hsi*36+30)*1+lsi)*1] = fp26;
LIBINT2_REALTYPE fp31;
fp31 = fp170 * src4[((hsi*9+5)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = inteval->WP_z[vi] * src1[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
LIBINT2_REALTYPE fp32;
fp32 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*18+11)*1+lsi)*1], fp33);
LIBINT2_REALTYPE fp30;
fp30 = fp32 + fp31;
target[((hsi*36+29)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp36;
fp36 = fp160 * src4[((hsi*9+4)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = inteval->WP_z[vi] * src1[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp37;
fp37 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*18+10)*1+lsi)*1], fp38);
LIBINT2_REALTYPE fp35;
fp35 = fp37 + fp36;
target[((hsi*36+28)*1+lsi)*1] = fp35;
LIBINT2_REALTYPE fp41;
fp41 = inteval->WP_z[vi] * src1[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*18+9)*1+lsi)*1], fp41);
target[((hsi*36+27)*1+lsi)*1] = fp40;
LIBINT2_REALTYPE fp74;
fp74 = fp160 * src4[((hsi*9+3)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = inteval->WP_z[vi] * src1[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
LIBINT2_REALTYPE fp44;
fp44 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*18+8)*1+lsi)*1], fp45);
LIBINT2_REALTYPE fp43;
fp43 = fp44 + fp74;
target[((hsi*36+26)*1+lsi)*1] = fp43;
LIBINT2_REALTYPE fp48;
fp48 = inteval->WP_z[vi] * src1[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
LIBINT2_REALTYPE fp47;
fp47 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*18+7)*1+lsi)*1], fp48);
target[((hsi*36+25)*1+lsi)*1] = fp47;
LIBINT2_REALTYPE fp51;
fp51 = inteval->WP_z[vi] * src1[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
LIBINT2_REALTYPE fp50;
fp50 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*18+6)*1+lsi)*1], fp51);
target[((hsi*36+24)*1+lsi)*1] = fp50;
LIBINT2_REALTYPE fp55;
fp55 = inteval->WP_y[vi] * src1[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
LIBINT2_REALTYPE fp54;
fp54 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*18+11)*1+lsi)*1], fp55);
LIBINT2_REALTYPE fp53;
fp53 = fp54 - fp129;
target[((hsi*36+23)*1+lsi)*1] = fp53;
LIBINT2_REALTYPE fp58;
fp58 = fp160 * src4[((hsi*9+5)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = inteval->WP_y[vi] * src1[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
LIBINT2_REALTYPE fp60;
fp60 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*18+10)*1+lsi)*1], fp61);
LIBINT2_REALTYPE fp59;
fp59 = fp60 - fp136;
LIBINT2_REALTYPE fp57;
fp57 = fp59 + fp58;
target[((hsi*36+22)*1+lsi)*1] = fp57;
LIBINT2_REALTYPE fp64;
fp64 = fp170 * src4[((hsi*9+4)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
fp67 = inteval->WP_y[vi] * src1[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
LIBINT2_REALTYPE fp66;
fp66 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*18+9)*1+lsi)*1], fp67);
LIBINT2_REALTYPE fp65;
fp65 = fp66 - fp143;
LIBINT2_REALTYPE fp63;
fp63 = fp65 + fp64;
target[((hsi*36+21)*1+lsi)*1] = fp63;
LIBINT2_REALTYPE fp71;
fp71 = inteval->WP_y[vi] * src1[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
LIBINT2_REALTYPE fp70;
fp70 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*18+8)*1+lsi)*1], fp71);
LIBINT2_REALTYPE fp69;
fp69 = fp70 - fp152;
target[((hsi*36+20)*1+lsi)*1] = fp69;
LIBINT2_REALTYPE fp77;
fp77 = inteval->WP_y[vi] * src1[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
LIBINT2_REALTYPE fp76;
fp76 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*18+7)*1+lsi)*1], fp77);
LIBINT2_REALTYPE fp75;
fp75 = fp76 - fp162;
LIBINT2_REALTYPE fp73;
fp73 = fp75 + fp74;
target[((hsi*36+19)*1+lsi)*1] = fp73;
LIBINT2_REALTYPE fp81;
fp81 = inteval->WP_y[vi] * src1[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
LIBINT2_REALTYPE fp80;
fp80 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*18+6)*1+lsi)*1], fp81);
LIBINT2_REALTYPE fp79;
fp79 = fp80 - fp172;
target[((hsi*36+18)*1+lsi)*1] = fp79;
LIBINT2_REALTYPE fp84;
fp84 = fp170 * src4[((hsi*9+2)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = inteval->WP_z[vi] * src1[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
LIBINT2_REALTYPE fp85;
fp85 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*18+5)*1+lsi)*1], fp86);
LIBINT2_REALTYPE fp83;
fp83 = fp85 + fp84;
target[((hsi*36+17)*1+lsi)*1] = fp83;
LIBINT2_REALTYPE fp159;
fp159 = fp160 * src4[((hsi*9+1)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
fp90 = inteval->WP_z[vi] * src1[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp91;
LIBINT2_REALTYPE fp89;
fp89 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*18+4)*1+lsi)*1], fp90);
LIBINT2_REALTYPE fp88;
fp88 = fp89 + fp159;
target[((hsi*36+16)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp93;
fp93 = inteval->WP_z[vi] * src1[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
LIBINT2_REALTYPE fp92;
fp92 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*18+3)*1+lsi)*1], fp93);
target[((hsi*36+15)*1+lsi)*1] = fp92;
LIBINT2_REALTYPE fp121;
fp121 = fp160 * src4[((hsi*9+0)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
fp97 = inteval->WP_z[vi] * src1[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
LIBINT2_REALTYPE fp96;
fp96 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*18+2)*1+lsi)*1], fp97);
LIBINT2_REALTYPE fp95;
fp95 = fp96 + fp121;
target[((hsi*36+14)*1+lsi)*1] = fp95;
LIBINT2_REALTYPE fp100;
fp100 = inteval->WP_z[vi] * src1[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
LIBINT2_REALTYPE fp99;
fp99 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*18+1)*1+lsi)*1], fp100);
target[((hsi*36+13)*1+lsi)*1] = fp99;
LIBINT2_REALTYPE fp103;
fp103 = inteval->WP_z[vi] * src1[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
LIBINT2_REALTYPE fp102;
fp102 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*18+0)*1+lsi)*1], fp103);
target[((hsi*36+12)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp106;
fp106 = inteval->WP_y[vi] * src1[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
LIBINT2_REALTYPE fp105;
fp105 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*18+5)*1+lsi)*1], fp106);
target[((hsi*36+11)*1+lsi)*1] = fp105;
LIBINT2_REALTYPE fp150;
fp150 = fp160 * src4[((hsi*9+2)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
fp110 = inteval->WP_y[vi] * src1[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
LIBINT2_REALTYPE fp109;
fp109 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*18+4)*1+lsi)*1], fp110);
LIBINT2_REALTYPE fp108;
fp108 = fp109 + fp150;
target[((hsi*36+10)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp113;
fp113 = fp170 * src4[((hsi*9+1)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
fp115 = inteval->WP_y[vi] * src1[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
LIBINT2_REALTYPE fp114;
fp114 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*18+3)*1+lsi)*1], fp115);
LIBINT2_REALTYPE fp112;
fp112 = fp114 + fp113;
target[((hsi*36+9)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp118;
fp118 = inteval->WP_y[vi] * src1[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp119;
LIBINT2_REALTYPE fp117;
fp117 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*18+2)*1+lsi)*1], fp118);
target[((hsi*36+8)*1+lsi)*1] = fp117;
LIBINT2_REALTYPE fp123;
fp123 = inteval->WP_y[vi] * src1[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp124;
LIBINT2_REALTYPE fp122;
fp122 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*18+1)*1+lsi)*1], fp123);
LIBINT2_REALTYPE fp120;
fp120 = fp122 + fp121;
target[((hsi*36+7)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp126;
fp126 = inteval->WP_y[vi] * src1[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp127;
LIBINT2_REALTYPE fp125;
fp125 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*18+0)*1+lsi)*1], fp126);
target[((hsi*36+6)*1+lsi)*1] = fp125;
LIBINT2_REALTYPE fp133;
fp133 = inteval->WP_x[vi] * src1[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp134;
LIBINT2_REALTYPE fp132;
fp132 = libint2::fma_plus(inteval->PA_x[vi], src0[((hsi*18+5)*1+lsi)*1], fp133);
LIBINT2_REALTYPE fp128;
fp128 = fp132 - fp129;
target[((hsi*36+5)*1+lsi)*1] = fp128;
LIBINT2_REALTYPE fp140;
fp140 = inteval->WP_x[vi] * src1[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp141;
LIBINT2_REALTYPE fp139;
fp139 = libint2::fma_plus(inteval->PA_x[vi], src0[((hsi*18+4)*1+lsi)*1], fp140);
LIBINT2_REALTYPE fp135;
fp135 = fp139 - fp136;
target[((hsi*36+4)*1+lsi)*1] = fp135;
LIBINT2_REALTYPE fp147;
fp147 = inteval->WP_x[vi] * src1[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp148;
LIBINT2_REALTYPE fp146;
fp146 = libint2::fma_plus(inteval->PA_x[vi], src0[((hsi*18+3)*1+lsi)*1], fp147);
LIBINT2_REALTYPE fp142;
fp142 = fp146 - fp143;
target[((hsi*36+3)*1+lsi)*1] = fp142;
LIBINT2_REALTYPE fp156;
fp156 = inteval->WP_x[vi] * src1[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp157;
LIBINT2_REALTYPE fp155;
fp155 = libint2::fma_plus(inteval->PA_x[vi], src0[((hsi*18+2)*1+lsi)*1], fp156);
LIBINT2_REALTYPE fp151;
fp151 = fp155 - fp152;
LIBINT2_REALTYPE fp149;
fp149 = fp151 + fp150;
target[((hsi*36+2)*1+lsi)*1] = fp149;
LIBINT2_REALTYPE fp166;
fp166 = inteval->WP_x[vi] * src1[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp167;
LIBINT2_REALTYPE fp165;
fp165 = libint2::fma_plus(inteval->PA_x[vi], src0[((hsi*18+1)*1+lsi)*1], fp166);
LIBINT2_REALTYPE fp161;
fp161 = fp165 - fp162;
LIBINT2_REALTYPE fp158;
fp158 = fp161 + fp159;
target[((hsi*36+1)*1+lsi)*1] = fp158;
LIBINT2_REALTYPE fp169;
fp169 = fp170 * src4[((hsi*9+0)*1+lsi)*1];
LIBINT2_REALTYPE fp177;
fp177 = inteval->WP_x[vi] * src1[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp178;
LIBINT2_REALTYPE fp176;
fp176 = libint2::fma_plus(inteval->PA_x[vi], src0[((hsi*18+0)*1+lsi)*1], fp177);
LIBINT2_REALTYPE fp171;
fp171 = fp176 - fp172;
LIBINT2_REALTYPE fp168;
fp168 = fp171 + fp169;
target[((hsi*36+0)*1+lsi)*1] = fp168;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 179 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
