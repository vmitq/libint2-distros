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
void OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c_1_Sb__k__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp4;
LIBINT2_REALTYPE fp3;
fp3 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*21+20)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp2;
fp2 = fp3 + src3[((hsi*28+27)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = inteval->oo2z[vi] * fp2;
LIBINT2_REALTYPE fp5;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+27)*1+lsi)*1], fp1);
target[((hsi*36+35)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp10;
LIBINT2_REALTYPE fp9;
fp9 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*21+19)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp8;
fp8 = fp9 + src3[((hsi*28+26)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = inteval->oo2z[vi] * fp8;
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp6;
fp6 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+26)*1+lsi)*1], fp7);
target[((hsi*36+34)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp16;
LIBINT2_REALTYPE fp15;
fp15 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*21+18)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp14;
fp14 = fp15 + src3[((hsi*28+25)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = inteval->oo2z[vi] * fp14;
LIBINT2_REALTYPE fp17;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+25)*1+lsi)*1], fp13);
target[((hsi*36+33)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp22;
LIBINT2_REALTYPE fp21;
fp21 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*21+17)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp20;
fp20 = fp21 + src3[((hsi*28+24)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = inteval->oo2z[vi] * fp20;
LIBINT2_REALTYPE fp23;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+24)*1+lsi)*1], fp19);
target[((hsi*36+32)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp28;
LIBINT2_REALTYPE fp27;
fp27 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*21+16)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp26;
fp26 = fp27 + src3[((hsi*28+23)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = inteval->oo2z[vi] * fp26;
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+23)*1+lsi)*1], fp25);
target[((hsi*36+31)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp34;
LIBINT2_REALTYPE fp33;
fp33 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*21+15)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp32;
fp32 = fp33 + src3[((hsi*28+22)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = inteval->oo2z[vi] * fp32;
LIBINT2_REALTYPE fp35;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+22)*1+lsi)*1], fp31);
target[((hsi*36+30)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp38;
fp38 = 0.0000000000000000e+00 + src3[((hsi*28+21)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = inteval->oo2z[vi] * fp38;
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp36;
fp36 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+21)*1+lsi)*1], fp37);
target[((hsi*36+29)*1+lsi)*1] = fp36;
LIBINT2_REALTYPE fp43;
LIBINT2_REALTYPE fp42;
fp42 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*21+15)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp41;
fp41 = inteval->oo2z[vi] * fp42;
LIBINT2_REALTYPE fp44;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*28+21)*1+lsi)*1], fp41);
target[((hsi*36+28)*1+lsi)*1] = fp40;
LIBINT2_REALTYPE fp49;
LIBINT2_REALTYPE fp48;
fp48 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*21+14)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp47;
fp47 = fp48 + src3[((hsi*28+20)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = inteval->oo2z[vi] * fp47;
LIBINT2_REALTYPE fp50;
LIBINT2_REALTYPE fp45;
fp45 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+20)*1+lsi)*1], fp46);
target[((hsi*36+27)*1+lsi)*1] = fp45;
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp54;
fp54 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*21+13)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp53;
fp53 = fp54 + src3[((hsi*28+19)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = inteval->oo2z[vi] * fp53;
LIBINT2_REALTYPE fp56;
LIBINT2_REALTYPE fp51;
fp51 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+19)*1+lsi)*1], fp52);
target[((hsi*36+26)*1+lsi)*1] = fp51;
LIBINT2_REALTYPE fp61;
LIBINT2_REALTYPE fp60;
fp60 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*21+12)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp59;
fp59 = fp60 + src3[((hsi*28+18)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = inteval->oo2z[vi] * fp59;
LIBINT2_REALTYPE fp62;
LIBINT2_REALTYPE fp57;
fp57 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+18)*1+lsi)*1], fp58);
target[((hsi*36+25)*1+lsi)*1] = fp57;
LIBINT2_REALTYPE fp67;
LIBINT2_REALTYPE fp66;
fp66 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*21+11)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp65;
fp65 = fp66 + src3[((hsi*28+17)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = inteval->oo2z[vi] * fp65;
LIBINT2_REALTYPE fp68;
LIBINT2_REALTYPE fp63;
fp63 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+17)*1+lsi)*1], fp64);
target[((hsi*36+24)*1+lsi)*1] = fp63;
LIBINT2_REALTYPE fp73;
LIBINT2_REALTYPE fp72;
fp72 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*21+10)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp71;
fp71 = fp72 + src3[((hsi*28+16)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = inteval->oo2z[vi] * fp71;
LIBINT2_REALTYPE fp74;
LIBINT2_REALTYPE fp69;
fp69 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+16)*1+lsi)*1], fp70);
target[((hsi*36+23)*1+lsi)*1] = fp69;
LIBINT2_REALTYPE fp77;
fp77 = 0.0000000000000000e+00 + src3[((hsi*28+15)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = inteval->oo2z[vi] * fp77;
LIBINT2_REALTYPE fp78;
LIBINT2_REALTYPE fp75;
fp75 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+15)*1+lsi)*1], fp76);
target[((hsi*36+22)*1+lsi)*1] = fp75;
LIBINT2_REALTYPE fp82;
LIBINT2_REALTYPE fp81;
fp81 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*21+10)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp80;
fp80 = inteval->oo2z[vi] * fp81;
LIBINT2_REALTYPE fp83;
LIBINT2_REALTYPE fp79;
fp79 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*28+15)*1+lsi)*1], fp80);
target[((hsi*36+21)*1+lsi)*1] = fp79;
LIBINT2_REALTYPE fp88;
LIBINT2_REALTYPE fp87;
fp87 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*21+9)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp86;
fp86 = fp87 + src3[((hsi*28+14)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
fp85 = inteval->oo2z[vi] * fp86;
LIBINT2_REALTYPE fp89;
LIBINT2_REALTYPE fp84;
fp84 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+14)*1+lsi)*1], fp85);
target[((hsi*36+20)*1+lsi)*1] = fp84;
LIBINT2_REALTYPE fp94;
LIBINT2_REALTYPE fp93;
fp93 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*21+8)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp92;
fp92 = fp93 + src3[((hsi*28+13)*1+lsi)*1];
LIBINT2_REALTYPE fp91;
fp91 = inteval->oo2z[vi] * fp92;
LIBINT2_REALTYPE fp95;
LIBINT2_REALTYPE fp90;
fp90 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+13)*1+lsi)*1], fp91);
target[((hsi*36+19)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp100;
LIBINT2_REALTYPE fp99;
fp99 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*21+7)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp98;
fp98 = fp99 + src3[((hsi*28+12)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
fp97 = inteval->oo2z[vi] * fp98;
LIBINT2_REALTYPE fp101;
LIBINT2_REALTYPE fp96;
fp96 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+12)*1+lsi)*1], fp97);
target[((hsi*36+18)*1+lsi)*1] = fp96;
LIBINT2_REALTYPE fp106;
LIBINT2_REALTYPE fp105;
fp105 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*21+6)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp104;
fp104 = fp105 + src3[((hsi*28+11)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
fp103 = inteval->oo2z[vi] * fp104;
LIBINT2_REALTYPE fp107;
LIBINT2_REALTYPE fp102;
fp102 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+11)*1+lsi)*1], fp103);
target[((hsi*36+17)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp110;
fp110 = 0.0000000000000000e+00 + src3[((hsi*28+10)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
fp109 = inteval->oo2z[vi] * fp110;
LIBINT2_REALTYPE fp111;
LIBINT2_REALTYPE fp108;
fp108 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+10)*1+lsi)*1], fp109);
target[((hsi*36+16)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp115;
LIBINT2_REALTYPE fp114;
fp114 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*21+6)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp113;
fp113 = inteval->oo2z[vi] * fp114;
LIBINT2_REALTYPE fp116;
LIBINT2_REALTYPE fp112;
fp112 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*28+10)*1+lsi)*1], fp113);
target[((hsi*36+15)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp121;
LIBINT2_REALTYPE fp120;
fp120 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*21+5)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp119;
fp119 = fp120 + src3[((hsi*28+9)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
fp118 = inteval->oo2z[vi] * fp119;
LIBINT2_REALTYPE fp122;
LIBINT2_REALTYPE fp117;
fp117 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+9)*1+lsi)*1], fp118);
target[((hsi*36+14)*1+lsi)*1] = fp117;
LIBINT2_REALTYPE fp127;
LIBINT2_REALTYPE fp126;
fp126 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*21+4)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp125;
fp125 = fp126 + src3[((hsi*28+8)*1+lsi)*1];
LIBINT2_REALTYPE fp124;
fp124 = inteval->oo2z[vi] * fp125;
LIBINT2_REALTYPE fp128;
LIBINT2_REALTYPE fp123;
fp123 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+8)*1+lsi)*1], fp124);
target[((hsi*36+13)*1+lsi)*1] = fp123;
LIBINT2_REALTYPE fp133;
LIBINT2_REALTYPE fp132;
fp132 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*21+3)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp131;
fp131 = fp132 + src3[((hsi*28+7)*1+lsi)*1];
LIBINT2_REALTYPE fp130;
fp130 = inteval->oo2z[vi] * fp131;
LIBINT2_REALTYPE fp134;
LIBINT2_REALTYPE fp129;
fp129 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+7)*1+lsi)*1], fp130);
target[((hsi*36+12)*1+lsi)*1] = fp129;
LIBINT2_REALTYPE fp137;
fp137 = 0.0000000000000000e+00 + src3[((hsi*28+6)*1+lsi)*1];
LIBINT2_REALTYPE fp136;
fp136 = inteval->oo2z[vi] * fp137;
LIBINT2_REALTYPE fp138;
LIBINT2_REALTYPE fp135;
fp135 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+6)*1+lsi)*1], fp136);
target[((hsi*36+11)*1+lsi)*1] = fp135;
LIBINT2_REALTYPE fp142;
LIBINT2_REALTYPE fp141;
fp141 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*21+3)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp140;
fp140 = inteval->oo2z[vi] * fp141;
LIBINT2_REALTYPE fp143;
LIBINT2_REALTYPE fp139;
fp139 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*28+6)*1+lsi)*1], fp140);
target[((hsi*36+10)*1+lsi)*1] = fp139;
LIBINT2_REALTYPE fp148;
LIBINT2_REALTYPE fp147;
fp147 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*21+2)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp146;
fp146 = fp147 + src3[((hsi*28+5)*1+lsi)*1];
LIBINT2_REALTYPE fp145;
fp145 = inteval->oo2z[vi] * fp146;
LIBINT2_REALTYPE fp149;
LIBINT2_REALTYPE fp144;
fp144 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+5)*1+lsi)*1], fp145);
target[((hsi*36+9)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp154;
LIBINT2_REALTYPE fp153;
fp153 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*21+1)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp152;
fp152 = fp153 + src3[((hsi*28+4)*1+lsi)*1];
LIBINT2_REALTYPE fp151;
fp151 = inteval->oo2z[vi] * fp152;
LIBINT2_REALTYPE fp155;
LIBINT2_REALTYPE fp150;
fp150 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+4)*1+lsi)*1], fp151);
target[((hsi*36+8)*1+lsi)*1] = fp150;
LIBINT2_REALTYPE fp158;
fp158 = 0.0000000000000000e+00 + src3[((hsi*28+3)*1+lsi)*1];
LIBINT2_REALTYPE fp157;
fp157 = inteval->oo2z[vi] * fp158;
LIBINT2_REALTYPE fp159;
LIBINT2_REALTYPE fp156;
fp156 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+3)*1+lsi)*1], fp157);
target[((hsi*36+7)*1+lsi)*1] = fp156;
LIBINT2_REALTYPE fp163;
LIBINT2_REALTYPE fp162;
fp162 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*21+1)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp161;
fp161 = inteval->oo2z[vi] * fp162;
LIBINT2_REALTYPE fp164;
LIBINT2_REALTYPE fp160;
fp160 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*28+3)*1+lsi)*1], fp161);
target[((hsi*36+6)*1+lsi)*1] = fp160;
LIBINT2_REALTYPE fp169;
LIBINT2_REALTYPE fp168;
fp168 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*21+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp167;
fp167 = fp168 + src3[((hsi*28+2)*1+lsi)*1];
LIBINT2_REALTYPE fp166;
fp166 = inteval->oo2z[vi] * fp167;
LIBINT2_REALTYPE fp170;
LIBINT2_REALTYPE fp165;
fp165 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+2)*1+lsi)*1], fp166);
target[((hsi*36+5)*1+lsi)*1] = fp165;
LIBINT2_REALTYPE fp173;
fp173 = 0.0000000000000000e+00 + src3[((hsi*28+1)*1+lsi)*1];
LIBINT2_REALTYPE fp172;
fp172 = inteval->oo2z[vi] * fp173;
LIBINT2_REALTYPE fp174;
LIBINT2_REALTYPE fp171;
fp171 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+1)*1+lsi)*1], fp172);
target[((hsi*36+4)*1+lsi)*1] = fp171;
LIBINT2_REALTYPE fp178;
LIBINT2_REALTYPE fp177;
fp177 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*21+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp176;
fp176 = inteval->oo2z[vi] * fp177;
LIBINT2_REALTYPE fp179;
LIBINT2_REALTYPE fp175;
fp175 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*28+1)*1+lsi)*1], fp176);
target[((hsi*36+3)*1+lsi)*1] = fp175;
LIBINT2_REALTYPE fp182;
fp182 = 0.0000000000000000e+00 + src3[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp181;
fp181 = inteval->oo2z[vi] * fp182;
LIBINT2_REALTYPE fp183;
LIBINT2_REALTYPE fp180;
fp180 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*28+0)*1+lsi)*1], fp181);
target[((hsi*36+2)*1+lsi)*1] = fp180;
LIBINT2_REALTYPE fp184;
fp184 = inteval->PB_y[vi] * src0[((hsi*28+0)*1+lsi)*1];
target[((hsi*36+1)*1+lsi)*1] = fp184;
LIBINT2_REALTYPE fp188;
fp188 = 5.0000000000000000e-01 * src2[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp190;
LIBINT2_REALTYPE fp189;
fp189 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*21+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp187;
fp187 = fp189 - fp188;
LIBINT2_REALTYPE fp186;
fp186 = inteval->oo2z[vi] * fp187;
LIBINT2_REALTYPE fp191;
LIBINT2_REALTYPE fp185;
fp185 = libint2::fma_plus(inteval->PB_x[vi], src0[((hsi*28+0)*1+lsi)*1], fp186);
target[((hsi*36+0)*1+lsi)*1] = fp185;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 192 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
