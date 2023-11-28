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
void OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp3;
LIBINT2_REALTYPE fp2;
fp2 = libint2::fma_plus(7.0000000000000000e+00, src1[((hsi*28+27)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp1;
fp1 = inteval->oo2z[vi] * fp2;
LIBINT2_REALTYPE fp4;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+35)*1+lsi)*1], fp1);
target[((hsi*45+44)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp8;
LIBINT2_REALTYPE fp7;
fp7 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*28+26)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp6;
fp6 = inteval->oo2z[vi] * fp7;
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp5;
fp5 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+34)*1+lsi)*1], fp6);
target[((hsi*45+43)*1+lsi)*1] = fp5;
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*28+25)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp11;
fp11 = inteval->oo2z[vi] * fp12;
LIBINT2_REALTYPE fp14;
LIBINT2_REALTYPE fp10;
fp10 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+33)*1+lsi)*1], fp11);
target[((hsi*45+42)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp18;
LIBINT2_REALTYPE fp17;
fp17 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*28+24)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp16;
fp16 = inteval->oo2z[vi] * fp17;
LIBINT2_REALTYPE fp19;
LIBINT2_REALTYPE fp15;
fp15 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+32)*1+lsi)*1], fp16);
target[((hsi*45+41)*1+lsi)*1] = fp15;
LIBINT2_REALTYPE fp23;
LIBINT2_REALTYPE fp22;
fp22 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*28+23)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp21;
fp21 = inteval->oo2z[vi] * fp22;
LIBINT2_REALTYPE fp24;
LIBINT2_REALTYPE fp20;
fp20 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+31)*1+lsi)*1], fp21);
target[((hsi*45+40)*1+lsi)*1] = fp20;
LIBINT2_REALTYPE fp28;
LIBINT2_REALTYPE fp27;
fp27 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*28+22)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp26;
fp26 = inteval->oo2z[vi] * fp27;
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp25;
fp25 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+30)*1+lsi)*1], fp26);
target[((hsi*45+39)*1+lsi)*1] = fp25;
LIBINT2_REALTYPE fp33;
LIBINT2_REALTYPE fp32;
fp32 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*28+21)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp31;
fp31 = inteval->oo2z[vi] * fp32;
LIBINT2_REALTYPE fp34;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+29)*1+lsi)*1], fp31);
target[((hsi*45+38)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp35;
fp35 = inteval->PA_z[vi] * src0[((hsi*36+28)*1+lsi)*1];
target[((hsi*45+37)*1+lsi)*1] = fp35;
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_plus(7.0000000000000000e+00, src1[((hsi*28+21)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp37;
fp37 = inteval->oo2z[vi] * fp38;
LIBINT2_REALTYPE fp40;
LIBINT2_REALTYPE fp36;
fp36 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*36+28)*1+lsi)*1], fp37);
target[((hsi*45+36)*1+lsi)*1] = fp36;
LIBINT2_REALTYPE fp44;
LIBINT2_REALTYPE fp43;
fp43 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*28+20)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp42;
fp42 = inteval->oo2z[vi] * fp43;
LIBINT2_REALTYPE fp45;
LIBINT2_REALTYPE fp41;
fp41 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+27)*1+lsi)*1], fp42);
target[((hsi*45+35)*1+lsi)*1] = fp41;
LIBINT2_REALTYPE fp49;
LIBINT2_REALTYPE fp48;
fp48 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*28+19)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp47;
fp47 = inteval->oo2z[vi] * fp48;
LIBINT2_REALTYPE fp50;
LIBINT2_REALTYPE fp46;
fp46 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+26)*1+lsi)*1], fp47);
target[((hsi*45+34)*1+lsi)*1] = fp46;
LIBINT2_REALTYPE fp54;
LIBINT2_REALTYPE fp53;
fp53 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*28+18)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp52;
fp52 = inteval->oo2z[vi] * fp53;
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp51;
fp51 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+25)*1+lsi)*1], fp52);
target[((hsi*45+33)*1+lsi)*1] = fp51;
LIBINT2_REALTYPE fp59;
LIBINT2_REALTYPE fp58;
fp58 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*28+17)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp57;
fp57 = inteval->oo2z[vi] * fp58;
LIBINT2_REALTYPE fp60;
LIBINT2_REALTYPE fp56;
fp56 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+24)*1+lsi)*1], fp57);
target[((hsi*45+32)*1+lsi)*1] = fp56;
LIBINT2_REALTYPE fp64;
LIBINT2_REALTYPE fp63;
fp63 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*28+16)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp62;
fp62 = inteval->oo2z[vi] * fp63;
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp61;
fp61 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+23)*1+lsi)*1], fp62);
target[((hsi*45+31)*1+lsi)*1] = fp61;
LIBINT2_REALTYPE fp69;
LIBINT2_REALTYPE fp68;
fp68 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*28+15)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp67;
fp67 = inteval->oo2z[vi] * fp68;
LIBINT2_REALTYPE fp70;
LIBINT2_REALTYPE fp66;
fp66 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+22)*1+lsi)*1], fp67);
target[((hsi*45+30)*1+lsi)*1] = fp66;
LIBINT2_REALTYPE fp71;
fp71 = inteval->PA_z[vi] * src0[((hsi*36+21)*1+lsi)*1];
target[((hsi*45+29)*1+lsi)*1] = fp71;
LIBINT2_REALTYPE fp75;
LIBINT2_REALTYPE fp74;
fp74 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*28+15)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp73;
fp73 = inteval->oo2z[vi] * fp74;
LIBINT2_REALTYPE fp76;
LIBINT2_REALTYPE fp72;
fp72 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*36+21)*1+lsi)*1], fp73);
target[((hsi*45+28)*1+lsi)*1] = fp72;
LIBINT2_REALTYPE fp80;
LIBINT2_REALTYPE fp79;
fp79 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*28+14)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp78;
fp78 = inteval->oo2z[vi] * fp79;
LIBINT2_REALTYPE fp81;
LIBINT2_REALTYPE fp77;
fp77 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+20)*1+lsi)*1], fp78);
target[((hsi*45+27)*1+lsi)*1] = fp77;
LIBINT2_REALTYPE fp85;
LIBINT2_REALTYPE fp84;
fp84 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*28+13)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp83;
fp83 = inteval->oo2z[vi] * fp84;
LIBINT2_REALTYPE fp86;
LIBINT2_REALTYPE fp82;
fp82 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+19)*1+lsi)*1], fp83);
target[((hsi*45+26)*1+lsi)*1] = fp82;
LIBINT2_REALTYPE fp90;
LIBINT2_REALTYPE fp89;
fp89 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*28+12)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp88;
fp88 = inteval->oo2z[vi] * fp89;
LIBINT2_REALTYPE fp91;
LIBINT2_REALTYPE fp87;
fp87 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+18)*1+lsi)*1], fp88);
target[((hsi*45+25)*1+lsi)*1] = fp87;
LIBINT2_REALTYPE fp95;
LIBINT2_REALTYPE fp94;
fp94 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*28+11)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp93;
fp93 = inteval->oo2z[vi] * fp94;
LIBINT2_REALTYPE fp96;
LIBINT2_REALTYPE fp92;
fp92 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+17)*1+lsi)*1], fp93);
target[((hsi*45+24)*1+lsi)*1] = fp92;
LIBINT2_REALTYPE fp100;
LIBINT2_REALTYPE fp99;
fp99 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*28+10)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp98;
fp98 = inteval->oo2z[vi] * fp99;
LIBINT2_REALTYPE fp101;
LIBINT2_REALTYPE fp97;
fp97 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+16)*1+lsi)*1], fp98);
target[((hsi*45+23)*1+lsi)*1] = fp97;
LIBINT2_REALTYPE fp102;
fp102 = inteval->PA_z[vi] * src0[((hsi*36+15)*1+lsi)*1];
target[((hsi*45+22)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp106;
LIBINT2_REALTYPE fp105;
fp105 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*28+10)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp104;
fp104 = inteval->oo2z[vi] * fp105;
LIBINT2_REALTYPE fp107;
LIBINT2_REALTYPE fp103;
fp103 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*36+15)*1+lsi)*1], fp104);
target[((hsi*45+21)*1+lsi)*1] = fp103;
LIBINT2_REALTYPE fp111;
LIBINT2_REALTYPE fp110;
fp110 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*28+9)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp109;
fp109 = inteval->oo2z[vi] * fp110;
LIBINT2_REALTYPE fp112;
LIBINT2_REALTYPE fp108;
fp108 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+14)*1+lsi)*1], fp109);
target[((hsi*45+20)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp116;
LIBINT2_REALTYPE fp115;
fp115 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*28+8)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp114;
fp114 = inteval->oo2z[vi] * fp115;
LIBINT2_REALTYPE fp117;
LIBINT2_REALTYPE fp113;
fp113 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+13)*1+lsi)*1], fp114);
target[((hsi*45+19)*1+lsi)*1] = fp113;
LIBINT2_REALTYPE fp121;
LIBINT2_REALTYPE fp120;
fp120 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*28+7)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp119;
fp119 = inteval->oo2z[vi] * fp120;
LIBINT2_REALTYPE fp122;
LIBINT2_REALTYPE fp118;
fp118 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+12)*1+lsi)*1], fp119);
target[((hsi*45+18)*1+lsi)*1] = fp118;
LIBINT2_REALTYPE fp126;
LIBINT2_REALTYPE fp125;
fp125 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*28+6)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp124;
fp124 = inteval->oo2z[vi] * fp125;
LIBINT2_REALTYPE fp127;
LIBINT2_REALTYPE fp123;
fp123 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+11)*1+lsi)*1], fp124);
target[((hsi*45+17)*1+lsi)*1] = fp123;
LIBINT2_REALTYPE fp128;
fp128 = inteval->PA_z[vi] * src0[((hsi*36+10)*1+lsi)*1];
target[((hsi*45+16)*1+lsi)*1] = fp128;
LIBINT2_REALTYPE fp132;
LIBINT2_REALTYPE fp131;
fp131 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*28+6)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp130;
fp130 = inteval->oo2z[vi] * fp131;
LIBINT2_REALTYPE fp133;
LIBINT2_REALTYPE fp129;
fp129 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*36+10)*1+lsi)*1], fp130);
target[((hsi*45+15)*1+lsi)*1] = fp129;
LIBINT2_REALTYPE fp137;
LIBINT2_REALTYPE fp136;
fp136 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*28+5)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp135;
fp135 = inteval->oo2z[vi] * fp136;
LIBINT2_REALTYPE fp138;
LIBINT2_REALTYPE fp134;
fp134 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+9)*1+lsi)*1], fp135);
target[((hsi*45+14)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp142;
LIBINT2_REALTYPE fp141;
fp141 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*28+4)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp140;
fp140 = inteval->oo2z[vi] * fp141;
LIBINT2_REALTYPE fp143;
LIBINT2_REALTYPE fp139;
fp139 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+8)*1+lsi)*1], fp140);
target[((hsi*45+13)*1+lsi)*1] = fp139;
LIBINT2_REALTYPE fp147;
LIBINT2_REALTYPE fp146;
fp146 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*28+3)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp145;
fp145 = inteval->oo2z[vi] * fp146;
LIBINT2_REALTYPE fp148;
LIBINT2_REALTYPE fp144;
fp144 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+7)*1+lsi)*1], fp145);
target[((hsi*45+12)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp149;
fp149 = inteval->PA_z[vi] * src0[((hsi*36+6)*1+lsi)*1];
target[((hsi*45+11)*1+lsi)*1] = fp149;
LIBINT2_REALTYPE fp153;
LIBINT2_REALTYPE fp152;
fp152 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*28+3)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp151;
fp151 = inteval->oo2z[vi] * fp152;
LIBINT2_REALTYPE fp154;
LIBINT2_REALTYPE fp150;
fp150 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*36+6)*1+lsi)*1], fp151);
target[((hsi*45+10)*1+lsi)*1] = fp150;
LIBINT2_REALTYPE fp158;
LIBINT2_REALTYPE fp157;
fp157 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*28+2)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp156;
fp156 = inteval->oo2z[vi] * fp157;
LIBINT2_REALTYPE fp159;
LIBINT2_REALTYPE fp155;
fp155 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+5)*1+lsi)*1], fp156);
target[((hsi*45+9)*1+lsi)*1] = fp155;
LIBINT2_REALTYPE fp163;
LIBINT2_REALTYPE fp162;
fp162 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*28+1)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp161;
fp161 = inteval->oo2z[vi] * fp162;
LIBINT2_REALTYPE fp164;
LIBINT2_REALTYPE fp160;
fp160 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+4)*1+lsi)*1], fp161);
target[((hsi*45+8)*1+lsi)*1] = fp160;
LIBINT2_REALTYPE fp165;
fp165 = inteval->PA_z[vi] * src0[((hsi*36+3)*1+lsi)*1];
target[((hsi*45+7)*1+lsi)*1] = fp165;
LIBINT2_REALTYPE fp169;
LIBINT2_REALTYPE fp168;
fp168 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*28+1)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp167;
fp167 = inteval->oo2z[vi] * fp168;
LIBINT2_REALTYPE fp170;
LIBINT2_REALTYPE fp166;
fp166 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*36+3)*1+lsi)*1], fp167);
target[((hsi*45+6)*1+lsi)*1] = fp166;
LIBINT2_REALTYPE fp174;
LIBINT2_REALTYPE fp173;
fp173 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*28+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp172;
fp172 = inteval->oo2z[vi] * fp173;
LIBINT2_REALTYPE fp175;
LIBINT2_REALTYPE fp171;
fp171 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+2)*1+lsi)*1], fp172);
target[((hsi*45+5)*1+lsi)*1] = fp171;
LIBINT2_REALTYPE fp176;
fp176 = inteval->PA_z[vi] * src0[((hsi*36+1)*1+lsi)*1];
target[((hsi*45+4)*1+lsi)*1] = fp176;
LIBINT2_REALTYPE fp180;
LIBINT2_REALTYPE fp179;
fp179 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*28+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp178;
fp178 = inteval->oo2z[vi] * fp179;
LIBINT2_REALTYPE fp181;
LIBINT2_REALTYPE fp177;
fp177 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*36+1)*1+lsi)*1], fp178);
target[((hsi*45+3)*1+lsi)*1] = fp177;
LIBINT2_REALTYPE fp182;
fp182 = inteval->PA_z[vi] * src0[((hsi*36+0)*1+lsi)*1];
target[((hsi*45+2)*1+lsi)*1] = fp182;
LIBINT2_REALTYPE fp183;
fp183 = inteval->PA_y[vi] * src0[((hsi*36+0)*1+lsi)*1];
target[((hsi*45+1)*1+lsi)*1] = fp183;
LIBINT2_REALTYPE fp187;
fp187 = 5.0000000000000000e-01 * src2[((hsi*36+0)*1+lsi)*1];
LIBINT2_REALTYPE fp189;
LIBINT2_REALTYPE fp188;
fp188 = libint2::fma_plus(7.0000000000000000e+00, src1[((hsi*28+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp186;
fp186 = fp188 - fp187;
LIBINT2_REALTYPE fp185;
fp185 = inteval->oo2z[vi] * fp186;
LIBINT2_REALTYPE fp190;
LIBINT2_REALTYPE fp184;
fp184 = libint2::fma_plus(inteval->PA_x[vi], src0[((hsi*36+0)*1+lsi)*1], fp185);
target[((hsi*45+0)*1+lsi)*1] = fp184;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 191 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
