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
void OSVRRSMultipole_aB_l__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

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
fp39 = -5.0000000000000000e-01 * src2[((hsi*36+28)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_plus(7.0000000000000000e+00, src1[((hsi*28+21)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp38;
fp38 = fp40 + fp39;
LIBINT2_REALTYPE fp37;
fp37 = inteval->oo2z[vi] * fp38;
LIBINT2_REALTYPE fp42;
LIBINT2_REALTYPE fp36;
fp36 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*36+28)*1+lsi)*1], fp37);
target[((hsi*45+36)*1+lsi)*1] = fp36;
LIBINT2_REALTYPE fp46;
LIBINT2_REALTYPE fp45;
fp45 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*28+20)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp44;
fp44 = inteval->oo2z[vi] * fp45;
LIBINT2_REALTYPE fp47;
LIBINT2_REALTYPE fp43;
fp43 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+27)*1+lsi)*1], fp44);
target[((hsi*45+35)*1+lsi)*1] = fp43;
LIBINT2_REALTYPE fp51;
LIBINT2_REALTYPE fp50;
fp50 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*28+19)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp49;
fp49 = inteval->oo2z[vi] * fp50;
LIBINT2_REALTYPE fp52;
LIBINT2_REALTYPE fp48;
fp48 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+26)*1+lsi)*1], fp49);
target[((hsi*45+34)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp56;
LIBINT2_REALTYPE fp55;
fp55 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*28+18)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp54;
fp54 = inteval->oo2z[vi] * fp55;
LIBINT2_REALTYPE fp57;
LIBINT2_REALTYPE fp53;
fp53 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+25)*1+lsi)*1], fp54);
target[((hsi*45+33)*1+lsi)*1] = fp53;
LIBINT2_REALTYPE fp61;
LIBINT2_REALTYPE fp60;
fp60 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*28+17)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp59;
fp59 = inteval->oo2z[vi] * fp60;
LIBINT2_REALTYPE fp62;
LIBINT2_REALTYPE fp58;
fp58 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+24)*1+lsi)*1], fp59);
target[((hsi*45+32)*1+lsi)*1] = fp58;
LIBINT2_REALTYPE fp66;
LIBINT2_REALTYPE fp65;
fp65 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*28+16)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp64;
fp64 = inteval->oo2z[vi] * fp65;
LIBINT2_REALTYPE fp67;
LIBINT2_REALTYPE fp63;
fp63 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+23)*1+lsi)*1], fp64);
target[((hsi*45+31)*1+lsi)*1] = fp63;
LIBINT2_REALTYPE fp71;
LIBINT2_REALTYPE fp70;
fp70 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*28+15)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp69;
fp69 = inteval->oo2z[vi] * fp70;
LIBINT2_REALTYPE fp72;
LIBINT2_REALTYPE fp68;
fp68 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+22)*1+lsi)*1], fp69);
target[((hsi*45+30)*1+lsi)*1] = fp68;
LIBINT2_REALTYPE fp73;
fp73 = inteval->PA_z[vi] * src0[((hsi*36+21)*1+lsi)*1];
target[((hsi*45+29)*1+lsi)*1] = fp73;
LIBINT2_REALTYPE fp77;
fp77 = -5.0000000000000000e-01 * src2[((hsi*36+21)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
LIBINT2_REALTYPE fp78;
fp78 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*28+15)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp76;
fp76 = fp78 + fp77;
LIBINT2_REALTYPE fp75;
fp75 = inteval->oo2z[vi] * fp76;
LIBINT2_REALTYPE fp80;
LIBINT2_REALTYPE fp74;
fp74 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*36+21)*1+lsi)*1], fp75);
target[((hsi*45+28)*1+lsi)*1] = fp74;
LIBINT2_REALTYPE fp84;
LIBINT2_REALTYPE fp83;
fp83 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*28+14)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp82;
fp82 = inteval->oo2z[vi] * fp83;
LIBINT2_REALTYPE fp85;
LIBINT2_REALTYPE fp81;
fp81 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+20)*1+lsi)*1], fp82);
target[((hsi*45+27)*1+lsi)*1] = fp81;
LIBINT2_REALTYPE fp89;
LIBINT2_REALTYPE fp88;
fp88 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*28+13)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp87;
fp87 = inteval->oo2z[vi] * fp88;
LIBINT2_REALTYPE fp90;
LIBINT2_REALTYPE fp86;
fp86 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+19)*1+lsi)*1], fp87);
target[((hsi*45+26)*1+lsi)*1] = fp86;
LIBINT2_REALTYPE fp94;
LIBINT2_REALTYPE fp93;
fp93 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*28+12)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp92;
fp92 = inteval->oo2z[vi] * fp93;
LIBINT2_REALTYPE fp95;
LIBINT2_REALTYPE fp91;
fp91 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+18)*1+lsi)*1], fp92);
target[((hsi*45+25)*1+lsi)*1] = fp91;
LIBINT2_REALTYPE fp99;
LIBINT2_REALTYPE fp98;
fp98 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*28+11)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp97;
fp97 = inteval->oo2z[vi] * fp98;
LIBINT2_REALTYPE fp100;
LIBINT2_REALTYPE fp96;
fp96 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+17)*1+lsi)*1], fp97);
target[((hsi*45+24)*1+lsi)*1] = fp96;
LIBINT2_REALTYPE fp104;
LIBINT2_REALTYPE fp103;
fp103 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*28+10)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp102;
fp102 = inteval->oo2z[vi] * fp103;
LIBINT2_REALTYPE fp105;
LIBINT2_REALTYPE fp101;
fp101 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+16)*1+lsi)*1], fp102);
target[((hsi*45+23)*1+lsi)*1] = fp101;
LIBINT2_REALTYPE fp106;
fp106 = inteval->PA_z[vi] * src0[((hsi*36+15)*1+lsi)*1];
target[((hsi*45+22)*1+lsi)*1] = fp106;
LIBINT2_REALTYPE fp110;
fp110 = -5.0000000000000000e-01 * src2[((hsi*36+15)*1+lsi)*1];
LIBINT2_REALTYPE fp112;
LIBINT2_REALTYPE fp111;
fp111 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*28+10)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp109;
fp109 = fp111 + fp110;
LIBINT2_REALTYPE fp108;
fp108 = inteval->oo2z[vi] * fp109;
LIBINT2_REALTYPE fp113;
LIBINT2_REALTYPE fp107;
fp107 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*36+15)*1+lsi)*1], fp108);
target[((hsi*45+21)*1+lsi)*1] = fp107;
LIBINT2_REALTYPE fp117;
LIBINT2_REALTYPE fp116;
fp116 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*28+9)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp115;
fp115 = inteval->oo2z[vi] * fp116;
LIBINT2_REALTYPE fp118;
LIBINT2_REALTYPE fp114;
fp114 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+14)*1+lsi)*1], fp115);
target[((hsi*45+20)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp122;
LIBINT2_REALTYPE fp121;
fp121 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*28+8)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp120;
fp120 = inteval->oo2z[vi] * fp121;
LIBINT2_REALTYPE fp123;
LIBINT2_REALTYPE fp119;
fp119 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+13)*1+lsi)*1], fp120);
target[((hsi*45+19)*1+lsi)*1] = fp119;
LIBINT2_REALTYPE fp127;
LIBINT2_REALTYPE fp126;
fp126 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*28+7)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp125;
fp125 = inteval->oo2z[vi] * fp126;
LIBINT2_REALTYPE fp128;
LIBINT2_REALTYPE fp124;
fp124 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+12)*1+lsi)*1], fp125);
target[((hsi*45+18)*1+lsi)*1] = fp124;
LIBINT2_REALTYPE fp132;
LIBINT2_REALTYPE fp131;
fp131 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*28+6)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp130;
fp130 = inteval->oo2z[vi] * fp131;
LIBINT2_REALTYPE fp133;
LIBINT2_REALTYPE fp129;
fp129 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+11)*1+lsi)*1], fp130);
target[((hsi*45+17)*1+lsi)*1] = fp129;
LIBINT2_REALTYPE fp134;
fp134 = inteval->PA_z[vi] * src0[((hsi*36+10)*1+lsi)*1];
target[((hsi*45+16)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp138;
fp138 = -5.0000000000000000e-01 * src2[((hsi*36+10)*1+lsi)*1];
LIBINT2_REALTYPE fp140;
LIBINT2_REALTYPE fp139;
fp139 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*28+6)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp137;
fp137 = fp139 + fp138;
LIBINT2_REALTYPE fp136;
fp136 = inteval->oo2z[vi] * fp137;
LIBINT2_REALTYPE fp141;
LIBINT2_REALTYPE fp135;
fp135 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*36+10)*1+lsi)*1], fp136);
target[((hsi*45+15)*1+lsi)*1] = fp135;
LIBINT2_REALTYPE fp145;
LIBINT2_REALTYPE fp144;
fp144 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*28+5)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp143;
fp143 = inteval->oo2z[vi] * fp144;
LIBINT2_REALTYPE fp146;
LIBINT2_REALTYPE fp142;
fp142 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+9)*1+lsi)*1], fp143);
target[((hsi*45+14)*1+lsi)*1] = fp142;
LIBINT2_REALTYPE fp150;
LIBINT2_REALTYPE fp149;
fp149 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*28+4)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp148;
fp148 = inteval->oo2z[vi] * fp149;
LIBINT2_REALTYPE fp151;
LIBINT2_REALTYPE fp147;
fp147 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+8)*1+lsi)*1], fp148);
target[((hsi*45+13)*1+lsi)*1] = fp147;
LIBINT2_REALTYPE fp155;
LIBINT2_REALTYPE fp154;
fp154 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*28+3)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp153;
fp153 = inteval->oo2z[vi] * fp154;
LIBINT2_REALTYPE fp156;
LIBINT2_REALTYPE fp152;
fp152 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+7)*1+lsi)*1], fp153);
target[((hsi*45+12)*1+lsi)*1] = fp152;
LIBINT2_REALTYPE fp157;
fp157 = inteval->PA_z[vi] * src0[((hsi*36+6)*1+lsi)*1];
target[((hsi*45+11)*1+lsi)*1] = fp157;
LIBINT2_REALTYPE fp161;
fp161 = -5.0000000000000000e-01 * src2[((hsi*36+6)*1+lsi)*1];
LIBINT2_REALTYPE fp163;
LIBINT2_REALTYPE fp162;
fp162 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*28+3)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp160;
fp160 = fp162 + fp161;
LIBINT2_REALTYPE fp159;
fp159 = inteval->oo2z[vi] * fp160;
LIBINT2_REALTYPE fp164;
LIBINT2_REALTYPE fp158;
fp158 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*36+6)*1+lsi)*1], fp159);
target[((hsi*45+10)*1+lsi)*1] = fp158;
LIBINT2_REALTYPE fp168;
LIBINT2_REALTYPE fp167;
fp167 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*28+2)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp166;
fp166 = inteval->oo2z[vi] * fp167;
LIBINT2_REALTYPE fp169;
LIBINT2_REALTYPE fp165;
fp165 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+5)*1+lsi)*1], fp166);
target[((hsi*45+9)*1+lsi)*1] = fp165;
LIBINT2_REALTYPE fp173;
LIBINT2_REALTYPE fp172;
fp172 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*28+1)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp171;
fp171 = inteval->oo2z[vi] * fp172;
LIBINT2_REALTYPE fp174;
LIBINT2_REALTYPE fp170;
fp170 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+4)*1+lsi)*1], fp171);
target[((hsi*45+8)*1+lsi)*1] = fp170;
LIBINT2_REALTYPE fp175;
fp175 = inteval->PA_z[vi] * src0[((hsi*36+3)*1+lsi)*1];
target[((hsi*45+7)*1+lsi)*1] = fp175;
LIBINT2_REALTYPE fp179;
fp179 = -5.0000000000000000e-01 * src2[((hsi*36+3)*1+lsi)*1];
LIBINT2_REALTYPE fp181;
LIBINT2_REALTYPE fp180;
fp180 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*28+1)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp178;
fp178 = fp180 + fp179;
LIBINT2_REALTYPE fp177;
fp177 = inteval->oo2z[vi] * fp178;
LIBINT2_REALTYPE fp182;
LIBINT2_REALTYPE fp176;
fp176 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*36+3)*1+lsi)*1], fp177);
target[((hsi*45+6)*1+lsi)*1] = fp176;
LIBINT2_REALTYPE fp186;
LIBINT2_REALTYPE fp185;
fp185 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*28+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp184;
fp184 = inteval->oo2z[vi] * fp185;
LIBINT2_REALTYPE fp187;
LIBINT2_REALTYPE fp183;
fp183 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*36+2)*1+lsi)*1], fp184);
target[((hsi*45+5)*1+lsi)*1] = fp183;
LIBINT2_REALTYPE fp188;
fp188 = inteval->PA_z[vi] * src0[((hsi*36+1)*1+lsi)*1];
target[((hsi*45+4)*1+lsi)*1] = fp188;
LIBINT2_REALTYPE fp192;
fp192 = -5.0000000000000000e-01 * src2[((hsi*36+1)*1+lsi)*1];
LIBINT2_REALTYPE fp194;
LIBINT2_REALTYPE fp193;
fp193 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*28+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp191;
fp191 = fp193 + fp192;
LIBINT2_REALTYPE fp190;
fp190 = inteval->oo2z[vi] * fp191;
LIBINT2_REALTYPE fp195;
LIBINT2_REALTYPE fp189;
fp189 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*36+1)*1+lsi)*1], fp190);
target[((hsi*45+3)*1+lsi)*1] = fp189;
LIBINT2_REALTYPE fp196;
fp196 = inteval->PA_z[vi] * src0[((hsi*36+0)*1+lsi)*1];
target[((hsi*45+2)*1+lsi)*1] = fp196;
LIBINT2_REALTYPE fp200;
LIBINT2_REALTYPE fp199;
fp199 = libint2::fma_plus(-5.0000000000000000e-01, src2[((hsi*36+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp198;
fp198 = inteval->oo2z[vi] * fp199;
LIBINT2_REALTYPE fp201;
LIBINT2_REALTYPE fp197;
fp197 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*36+0)*1+lsi)*1], fp198);
target[((hsi*45+1)*1+lsi)*1] = fp197;
LIBINT2_REALTYPE fp205;
LIBINT2_REALTYPE fp204;
fp204 = libint2::fma_plus(7.0000000000000000e+00, src1[((hsi*28+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp203;
fp203 = inteval->oo2z[vi] * fp204;
LIBINT2_REALTYPE fp206;
LIBINT2_REALTYPE fp202;
fp202 = libint2::fma_plus(inteval->PA_x[vi], src0[((hsi*36+0)*1+lsi)*1], fp203);
target[((hsi*45+0)*1+lsi)*1] = fp202;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 207 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
