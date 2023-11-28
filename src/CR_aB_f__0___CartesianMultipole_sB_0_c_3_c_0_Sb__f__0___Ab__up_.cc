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
void CR_aB_f__0___CartesianMultipole_sB_0_c_3_c_0_Sb__f__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*28+24)*1+lsi)*1];
LIBINT2_REALTYPE fp153;
fp153 = 0.0000000000000000e+00 + src1[((hsi*28+3)*1+lsi)*1];
LIBINT2_REALTYPE fp152;
fp152 = 0.0000000000000000e+00 + src1[((hsi*28+2)*1+lsi)*1];
LIBINT2_REALTYPE fp157;
LIBINT2_REALTYPE fp156;
fp156 = libint2::fma_plus(inteval->BO_y[vi], fp152, fp153);
LIBINT2_REALTYPE fp151;
fp151 = 0.0000000000000000e+00 + src1[((hsi*28+1)*1+lsi)*1];
LIBINT2_REALTYPE fp155;
LIBINT2_REALTYPE fp154;
fp154 = libint2::fma_plus(inteval->BO_y[vi], fp151, fp152);
LIBINT2_REALTYPE fp161;
LIBINT2_REALTYPE fp160;
fp160 = libint2::fma_plus(inteval->BO_y[vi], fp154, fp156);
LIBINT2_REALTYPE fp148;
fp148 = 0.0000000000000000e+00 + src1[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp150;
LIBINT2_REALTYPE fp149;
fp149 = libint2::fma_plus(inteval->BO_y[vi], fp148, fp151);
LIBINT2_REALTYPE fp159;
LIBINT2_REALTYPE fp158;
fp158 = libint2::fma_plus(inteval->BO_y[vi], fp149, fp154);
LIBINT2_REALTYPE fp163;
LIBINT2_REALTYPE fp162;
fp162 = libint2::fma_plus(inteval->BO_y[vi], fp158, fp160);
LIBINT2_REALTYPE fp164;
fp164 = 0.0000000000000000e+00 + src0[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp181;
fp181 = fp164 * fp162;
LIBINT2_REALTYPE fp180;
fp180 = fp181 * fp0;
target[((hsi*100+99)*1+lsi)*1] = fp180;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*28+23)*1+lsi)*1];
LIBINT2_REALTYPE fp141;
fp141 = 0.0000000000000000e+00 + src1[((hsi*28+4)*1+lsi)*1];
LIBINT2_REALTYPE fp143;
LIBINT2_REALTYPE fp142;
fp142 = libint2::fma_plus(inteval->BO_y[vi], fp153, fp141);
LIBINT2_REALTYPE fp145;
LIBINT2_REALTYPE fp144;
fp144 = libint2::fma_plus(inteval->BO_y[vi], fp156, fp142);
LIBINT2_REALTYPE fp147;
LIBINT2_REALTYPE fp146;
fp146 = libint2::fma_plus(inteval->BO_y[vi], fp160, fp144);
LIBINT2_REALTYPE fp183;
fp183 = fp164 * fp146;
LIBINT2_REALTYPE fp182;
fp182 = fp183 * fp1;
target[((hsi*100+98)*1+lsi)*1] = fp182;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*28+22)*1+lsi)*1];
LIBINT2_REALTYPE fp134;
fp134 = 0.0000000000000000e+00 + src1[((hsi*28+5)*1+lsi)*1];
LIBINT2_REALTYPE fp136;
LIBINT2_REALTYPE fp135;
fp135 = libint2::fma_plus(inteval->BO_y[vi], fp141, fp134);
LIBINT2_REALTYPE fp138;
LIBINT2_REALTYPE fp137;
fp137 = libint2::fma_plus(inteval->BO_y[vi], fp142, fp135);
LIBINT2_REALTYPE fp140;
LIBINT2_REALTYPE fp139;
fp139 = libint2::fma_plus(inteval->BO_y[vi], fp144, fp137);
LIBINT2_REALTYPE fp185;
fp185 = fp164 * fp139;
LIBINT2_REALTYPE fp184;
fp184 = fp185 * fp2;
target[((hsi*100+97)*1+lsi)*1] = fp184;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*28+21)*1+lsi)*1];
LIBINT2_REALTYPE fp133;
fp133 = inteval->BO_y[vi] * fp137;
LIBINT2_REALTYPE fp131;
fp131 = inteval->BO_y[vi] * fp135;
LIBINT2_REALTYPE fp129;
fp129 = inteval->BO_y[vi] * fp134;
LIBINT2_REALTYPE fp127;
fp127 = 0.0000000000000000e+00 + src1[((hsi*28+6)*1+lsi)*1];
LIBINT2_REALTYPE fp128;
fp128 = fp127 + fp129;
LIBINT2_REALTYPE fp130;
fp130 = fp128 + fp131;
LIBINT2_REALTYPE fp132;
fp132 = fp130 + fp133;
LIBINT2_REALTYPE fp187;
fp187 = fp164 * fp132;
LIBINT2_REALTYPE fp186;
fp186 = fp187 * fp3;
target[((hsi*100+96)*1+lsi)*1] = fp186;
LIBINT2_REALTYPE fp165;
fp165 = 0.0000000000000000e+00 + src0[((hsi*28+1)*1+lsi)*1];
LIBINT2_REALTYPE fp189;
fp189 = fp165 * fp162;
LIBINT2_REALTYPE fp188;
fp188 = fp189 * fp1;
target[((hsi*100+95)*1+lsi)*1] = fp188;
LIBINT2_REALTYPE fp191;
fp191 = fp165 * fp146;
LIBINT2_REALTYPE fp190;
fp190 = fp191 * fp2;
target[((hsi*100+94)*1+lsi)*1] = fp190;
LIBINT2_REALTYPE fp193;
fp193 = fp165 * fp139;
LIBINT2_REALTYPE fp192;
fp192 = fp193 * fp3;
target[((hsi*100+93)*1+lsi)*1] = fp192;
LIBINT2_REALTYPE fp166;
fp166 = 0.0000000000000000e+00 + src0[((hsi*28+2)*1+lsi)*1];
LIBINT2_REALTYPE fp195;
fp195 = fp166 * fp162;
LIBINT2_REALTYPE fp194;
fp194 = fp195 * fp2;
target[((hsi*100+92)*1+lsi)*1] = fp194;
LIBINT2_REALTYPE fp197;
fp197 = fp166 * fp146;
LIBINT2_REALTYPE fp196;
fp196 = fp197 * fp3;
target[((hsi*100+91)*1+lsi)*1] = fp196;
LIBINT2_REALTYPE fp167;
fp167 = 0.0000000000000000e+00 + src0[((hsi*28+3)*1+lsi)*1];
LIBINT2_REALTYPE fp199;
fp199 = fp167 * fp162;
LIBINT2_REALTYPE fp198;
fp198 = fp199 * fp3;
target[((hsi*100+90)*1+lsi)*1] = fp198;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*28+17)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = 0.0000000000000000e+00 + src1[((hsi*28+10)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
fp115 = 0.0000000000000000e+00 + src1[((hsi*28+9)*1+lsi)*1];
LIBINT2_REALTYPE fp120;
LIBINT2_REALTYPE fp119;
fp119 = libint2::fma_plus(inteval->BO_y[vi], fp115, fp116);
LIBINT2_REALTYPE fp114;
fp114 = 0.0000000000000000e+00 + src1[((hsi*28+8)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
LIBINT2_REALTYPE fp117;
fp117 = libint2::fma_plus(inteval->BO_y[vi], fp114, fp115);
LIBINT2_REALTYPE fp124;
LIBINT2_REALTYPE fp123;
fp123 = libint2::fma_plus(inteval->BO_y[vi], fp117, fp119);
LIBINT2_REALTYPE fp111;
fp111 = 0.0000000000000000e+00 + src1[((hsi*28+7)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
LIBINT2_REALTYPE fp112;
fp112 = libint2::fma_plus(inteval->BO_y[vi], fp111, fp114);
LIBINT2_REALTYPE fp122;
LIBINT2_REALTYPE fp121;
fp121 = libint2::fma_plus(inteval->BO_y[vi], fp112, fp117);
LIBINT2_REALTYPE fp126;
LIBINT2_REALTYPE fp125;
fp125 = libint2::fma_plus(inteval->BO_y[vi], fp121, fp123);
LIBINT2_REALTYPE fp201;
fp201 = fp164 * fp125;
LIBINT2_REALTYPE fp200;
fp200 = fp201 * fp4;
target[((hsi*100+89)*1+lsi)*1] = fp200;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*28+16)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = 0.0000000000000000e+00 + src1[((hsi*28+11)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
LIBINT2_REALTYPE fp105;
fp105 = libint2::fma_plus(inteval->BO_y[vi], fp116, fp104);
LIBINT2_REALTYPE fp108;
LIBINT2_REALTYPE fp107;
fp107 = libint2::fma_plus(inteval->BO_y[vi], fp119, fp105);
LIBINT2_REALTYPE fp110;
LIBINT2_REALTYPE fp109;
fp109 = libint2::fma_plus(inteval->BO_y[vi], fp123, fp107);
LIBINT2_REALTYPE fp203;
fp203 = fp164 * fp109;
LIBINT2_REALTYPE fp202;
fp202 = fp203 * fp5;
target[((hsi*100+88)*1+lsi)*1] = fp202;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*28+15)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
fp97 = 0.0000000000000000e+00 + src1[((hsi*28+12)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
LIBINT2_REALTYPE fp98;
fp98 = libint2::fma_plus(inteval->BO_y[vi], fp104, fp97);
LIBINT2_REALTYPE fp101;
LIBINT2_REALTYPE fp100;
fp100 = libint2::fma_plus(inteval->BO_y[vi], fp105, fp98);
LIBINT2_REALTYPE fp103;
LIBINT2_REALTYPE fp102;
fp102 = libint2::fma_plus(inteval->BO_y[vi], fp107, fp100);
LIBINT2_REALTYPE fp205;
fp205 = fp164 * fp102;
LIBINT2_REALTYPE fp204;
fp204 = fp205 * fp6;
target[((hsi*100+87)*1+lsi)*1] = fp204;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*28+14)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = inteval->BO_y[vi] * fp100;
LIBINT2_REALTYPE fp94;
fp94 = inteval->BO_y[vi] * fp98;
LIBINT2_REALTYPE fp92;
fp92 = inteval->BO_y[vi] * fp97;
LIBINT2_REALTYPE fp90;
fp90 = 0.0000000000000000e+00 + src1[((hsi*28+13)*1+lsi)*1];
LIBINT2_REALTYPE fp91;
fp91 = fp90 + fp92;
LIBINT2_REALTYPE fp93;
fp93 = fp91 + fp94;
LIBINT2_REALTYPE fp95;
fp95 = fp93 + fp96;
LIBINT2_REALTYPE fp207;
fp207 = fp164 * fp95;
LIBINT2_REALTYPE fp206;
fp206 = fp207 * fp7;
target[((hsi*100+86)*1+lsi)*1] = fp206;
LIBINT2_REALTYPE fp209;
fp209 = fp165 * fp125;
LIBINT2_REALTYPE fp208;
fp208 = fp209 * fp5;
target[((hsi*100+85)*1+lsi)*1] = fp208;
LIBINT2_REALTYPE fp211;
fp211 = fp165 * fp109;
LIBINT2_REALTYPE fp210;
fp210 = fp211 * fp6;
target[((hsi*100+84)*1+lsi)*1] = fp210;
LIBINT2_REALTYPE fp213;
fp213 = fp165 * fp102;
LIBINT2_REALTYPE fp212;
fp212 = fp213 * fp7;
target[((hsi*100+83)*1+lsi)*1] = fp212;
LIBINT2_REALTYPE fp215;
fp215 = fp166 * fp125;
LIBINT2_REALTYPE fp214;
fp214 = fp215 * fp6;
target[((hsi*100+82)*1+lsi)*1] = fp214;
LIBINT2_REALTYPE fp217;
fp217 = fp166 * fp109;
LIBINT2_REALTYPE fp216;
fp216 = fp217 * fp7;
target[((hsi*100+81)*1+lsi)*1] = fp216;
LIBINT2_REALTYPE fp219;
fp219 = fp167 * fp125;
LIBINT2_REALTYPE fp218;
fp218 = fp219 * fp7;
target[((hsi*100+80)*1+lsi)*1] = fp218;
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src2[((hsi*28+10)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = 0.0000000000000000e+00 + src1[((hsi*28+17)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = 0.0000000000000000e+00 + src1[((hsi*28+16)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
LIBINT2_REALTYPE fp82;
fp82 = libint2::fma_plus(inteval->BO_y[vi], fp78, fp79);
LIBINT2_REALTYPE fp77;
fp77 = 0.0000000000000000e+00 + src1[((hsi*28+15)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
LIBINT2_REALTYPE fp80;
fp80 = libint2::fma_plus(inteval->BO_y[vi], fp77, fp78);
LIBINT2_REALTYPE fp87;
LIBINT2_REALTYPE fp86;
fp86 = libint2::fma_plus(inteval->BO_y[vi], fp80, fp82);
LIBINT2_REALTYPE fp74;
fp74 = 0.0000000000000000e+00 + src1[((hsi*28+14)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
LIBINT2_REALTYPE fp75;
fp75 = libint2::fma_plus(inteval->BO_y[vi], fp74, fp77);
LIBINT2_REALTYPE fp85;
LIBINT2_REALTYPE fp84;
fp84 = libint2::fma_plus(inteval->BO_y[vi], fp75, fp80);
LIBINT2_REALTYPE fp89;
LIBINT2_REALTYPE fp88;
fp88 = libint2::fma_plus(inteval->BO_y[vi], fp84, fp86);
LIBINT2_REALTYPE fp221;
fp221 = fp164 * fp88;
LIBINT2_REALTYPE fp220;
fp220 = fp221 * fp8;
target[((hsi*100+79)*1+lsi)*1] = fp220;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src2[((hsi*28+9)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
fp67 = 0.0000000000000000e+00 + src1[((hsi*28+18)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
LIBINT2_REALTYPE fp68;
fp68 = libint2::fma_plus(inteval->BO_y[vi], fp79, fp67);
LIBINT2_REALTYPE fp71;
LIBINT2_REALTYPE fp70;
fp70 = libint2::fma_plus(inteval->BO_y[vi], fp82, fp68);
LIBINT2_REALTYPE fp73;
LIBINT2_REALTYPE fp72;
fp72 = libint2::fma_plus(inteval->BO_y[vi], fp86, fp70);
LIBINT2_REALTYPE fp223;
fp223 = fp164 * fp72;
LIBINT2_REALTYPE fp222;
fp222 = fp223 * fp9;
target[((hsi*100+78)*1+lsi)*1] = fp222;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src2[((hsi*28+8)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = 0.0000000000000000e+00 + src1[((hsi*28+19)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
LIBINT2_REALTYPE fp61;
fp61 = libint2::fma_plus(inteval->BO_y[vi], fp67, fp60);
LIBINT2_REALTYPE fp64;
LIBINT2_REALTYPE fp63;
fp63 = libint2::fma_plus(inteval->BO_y[vi], fp68, fp61);
LIBINT2_REALTYPE fp66;
LIBINT2_REALTYPE fp65;
fp65 = libint2::fma_plus(inteval->BO_y[vi], fp70, fp63);
LIBINT2_REALTYPE fp225;
fp225 = fp164 * fp65;
LIBINT2_REALTYPE fp224;
fp224 = fp225 * fp10;
target[((hsi*100+77)*1+lsi)*1] = fp224;
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src2[((hsi*28+7)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = inteval->BO_y[vi] * fp63;
LIBINT2_REALTYPE fp57;
fp57 = inteval->BO_y[vi] * fp61;
LIBINT2_REALTYPE fp55;
fp55 = inteval->BO_y[vi] * fp60;
LIBINT2_REALTYPE fp53;
fp53 = 0.0000000000000000e+00 + src1[((hsi*28+20)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = fp53 + fp55;
LIBINT2_REALTYPE fp56;
fp56 = fp54 + fp57;
LIBINT2_REALTYPE fp58;
fp58 = fp56 + fp59;
LIBINT2_REALTYPE fp227;
fp227 = fp164 * fp58;
LIBINT2_REALTYPE fp226;
fp226 = fp227 * fp11;
target[((hsi*100+76)*1+lsi)*1] = fp226;
LIBINT2_REALTYPE fp229;
fp229 = fp165 * fp88;
LIBINT2_REALTYPE fp228;
fp228 = fp229 * fp9;
target[((hsi*100+75)*1+lsi)*1] = fp228;
LIBINT2_REALTYPE fp231;
fp231 = fp165 * fp72;
LIBINT2_REALTYPE fp230;
fp230 = fp231 * fp10;
target[((hsi*100+74)*1+lsi)*1] = fp230;
LIBINT2_REALTYPE fp233;
fp233 = fp165 * fp65;
LIBINT2_REALTYPE fp232;
fp232 = fp233 * fp11;
target[((hsi*100+73)*1+lsi)*1] = fp232;
LIBINT2_REALTYPE fp235;
fp235 = fp166 * fp88;
LIBINT2_REALTYPE fp234;
fp234 = fp235 * fp10;
target[((hsi*100+72)*1+lsi)*1] = fp234;
LIBINT2_REALTYPE fp237;
fp237 = fp166 * fp72;
LIBINT2_REALTYPE fp236;
fp236 = fp237 * fp11;
target[((hsi*100+71)*1+lsi)*1] = fp236;
LIBINT2_REALTYPE fp239;
fp239 = fp167 * fp88;
LIBINT2_REALTYPE fp238;
fp238 = fp239 * fp11;
target[((hsi*100+70)*1+lsi)*1] = fp238;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src2[((hsi*28+3)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = 0.0000000000000000e+00 + src1[((hsi*28+24)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = 0.0000000000000000e+00 + src1[((hsi*28+23)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
LIBINT2_REALTYPE fp45;
fp45 = libint2::fma_plus(inteval->BO_y[vi], fp41, fp42);
LIBINT2_REALTYPE fp40;
fp40 = 0.0000000000000000e+00 + src1[((hsi*28+22)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
LIBINT2_REALTYPE fp43;
fp43 = libint2::fma_plus(inteval->BO_y[vi], fp40, fp41);
LIBINT2_REALTYPE fp50;
LIBINT2_REALTYPE fp49;
fp49 = libint2::fma_plus(inteval->BO_y[vi], fp43, fp45);
LIBINT2_REALTYPE fp37;
fp37 = 0.0000000000000000e+00 + src1[((hsi*28+21)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_plus(inteval->BO_y[vi], fp37, fp40);
LIBINT2_REALTYPE fp48;
LIBINT2_REALTYPE fp47;
fp47 = libint2::fma_plus(inteval->BO_y[vi], fp38, fp43);
LIBINT2_REALTYPE fp52;
LIBINT2_REALTYPE fp51;
fp51 = libint2::fma_plus(inteval->BO_y[vi], fp47, fp49);
LIBINT2_REALTYPE fp241;
fp241 = fp164 * fp51;
LIBINT2_REALTYPE fp240;
fp240 = fp241 * fp12;
target[((hsi*100+69)*1+lsi)*1] = fp240;
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src2[((hsi*28+2)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = 0.0000000000000000e+00 + src1[((hsi*28+25)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
LIBINT2_REALTYPE fp31;
fp31 = libint2::fma_plus(inteval->BO_y[vi], fp42, fp30);
LIBINT2_REALTYPE fp34;
LIBINT2_REALTYPE fp33;
fp33 = libint2::fma_plus(inteval->BO_y[vi], fp45, fp31);
LIBINT2_REALTYPE fp36;
LIBINT2_REALTYPE fp35;
fp35 = libint2::fma_plus(inteval->BO_y[vi], fp49, fp33);
LIBINT2_REALTYPE fp243;
fp243 = fp164 * fp35;
LIBINT2_REALTYPE fp242;
fp242 = fp243 * fp13;
target[((hsi*100+68)*1+lsi)*1] = fp242;
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src2[((hsi*28+1)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = 0.0000000000000000e+00 + src1[((hsi*28+26)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->BO_y[vi], fp30, fp23);
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp26;
fp26 = libint2::fma_plus(inteval->BO_y[vi], fp31, fp24);
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_plus(inteval->BO_y[vi], fp33, fp26);
LIBINT2_REALTYPE fp245;
fp245 = fp164 * fp28;
LIBINT2_REALTYPE fp244;
fp244 = fp245 * fp14;
target[((hsi*100+67)*1+lsi)*1] = fp244;
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src2[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = inteval->BO_y[vi] * fp26;
LIBINT2_REALTYPE fp20;
fp20 = inteval->BO_y[vi] * fp24;
LIBINT2_REALTYPE fp18;
fp18 = inteval->BO_y[vi] * fp23;
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src1[((hsi*28+27)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = fp16 + fp18;
LIBINT2_REALTYPE fp19;
fp19 = fp17 + fp20;
LIBINT2_REALTYPE fp21;
fp21 = fp19 + fp22;
LIBINT2_REALTYPE fp247;
fp247 = fp164 * fp21;
LIBINT2_REALTYPE fp246;
fp246 = fp247 * fp15;
target[((hsi*100+66)*1+lsi)*1] = fp246;
LIBINT2_REALTYPE fp249;
fp249 = fp165 * fp51;
LIBINT2_REALTYPE fp248;
fp248 = fp249 * fp13;
target[((hsi*100+65)*1+lsi)*1] = fp248;
LIBINT2_REALTYPE fp251;
fp251 = fp165 * fp35;
LIBINT2_REALTYPE fp250;
fp250 = fp251 * fp14;
target[((hsi*100+64)*1+lsi)*1] = fp250;
LIBINT2_REALTYPE fp253;
fp253 = fp165 * fp28;
LIBINT2_REALTYPE fp252;
fp252 = fp253 * fp15;
target[((hsi*100+63)*1+lsi)*1] = fp252;
LIBINT2_REALTYPE fp255;
fp255 = fp166 * fp51;
LIBINT2_REALTYPE fp254;
fp254 = fp255 * fp14;
target[((hsi*100+62)*1+lsi)*1] = fp254;
LIBINT2_REALTYPE fp257;
fp257 = fp166 * fp35;
LIBINT2_REALTYPE fp256;
fp256 = fp257 * fp15;
target[((hsi*100+61)*1+lsi)*1] = fp256;
LIBINT2_REALTYPE fp259;
fp259 = fp167 * fp51;
LIBINT2_REALTYPE fp258;
fp258 = fp259 * fp15;
target[((hsi*100+60)*1+lsi)*1] = fp258;
LIBINT2_REALTYPE fp168;
fp168 = 0.0000000000000000e+00 + src0[((hsi*28+7)*1+lsi)*1];
LIBINT2_REALTYPE fp261;
fp261 = fp168 * fp162;
LIBINT2_REALTYPE fp260;
fp260 = fp261 * fp4;
target[((hsi*100+59)*1+lsi)*1] = fp260;
LIBINT2_REALTYPE fp263;
fp263 = fp168 * fp146;
LIBINT2_REALTYPE fp262;
fp262 = fp263 * fp5;
target[((hsi*100+58)*1+lsi)*1] = fp262;
LIBINT2_REALTYPE fp265;
fp265 = fp168 * fp139;
LIBINT2_REALTYPE fp264;
fp264 = fp265 * fp6;
target[((hsi*100+57)*1+lsi)*1] = fp264;
LIBINT2_REALTYPE fp267;
fp267 = fp168 * fp132;
LIBINT2_REALTYPE fp266;
fp266 = fp267 * fp7;
target[((hsi*100+56)*1+lsi)*1] = fp266;
LIBINT2_REALTYPE fp169;
fp169 = 0.0000000000000000e+00 + src0[((hsi*28+8)*1+lsi)*1];
LIBINT2_REALTYPE fp269;
fp269 = fp169 * fp162;
LIBINT2_REALTYPE fp268;
fp268 = fp269 * fp5;
target[((hsi*100+55)*1+lsi)*1] = fp268;
LIBINT2_REALTYPE fp271;
fp271 = fp169 * fp146;
LIBINT2_REALTYPE fp270;
fp270 = fp271 * fp6;
target[((hsi*100+54)*1+lsi)*1] = fp270;
LIBINT2_REALTYPE fp273;
fp273 = fp169 * fp139;
LIBINT2_REALTYPE fp272;
fp272 = fp273 * fp7;
target[((hsi*100+53)*1+lsi)*1] = fp272;
LIBINT2_REALTYPE fp170;
fp170 = 0.0000000000000000e+00 + src0[((hsi*28+9)*1+lsi)*1];
LIBINT2_REALTYPE fp275;
fp275 = fp170 * fp162;
LIBINT2_REALTYPE fp274;
fp274 = fp275 * fp6;
target[((hsi*100+52)*1+lsi)*1] = fp274;
LIBINT2_REALTYPE fp277;
fp277 = fp170 * fp146;
LIBINT2_REALTYPE fp276;
fp276 = fp277 * fp7;
target[((hsi*100+51)*1+lsi)*1] = fp276;
LIBINT2_REALTYPE fp171;
fp171 = 0.0000000000000000e+00 + src0[((hsi*28+10)*1+lsi)*1];
LIBINT2_REALTYPE fp279;
fp279 = fp171 * fp162;
LIBINT2_REALTYPE fp278;
fp278 = fp279 * fp7;
target[((hsi*100+50)*1+lsi)*1] = fp278;
LIBINT2_REALTYPE fp281;
fp281 = fp168 * fp125;
LIBINT2_REALTYPE fp280;
fp280 = fp281 * fp8;
target[((hsi*100+49)*1+lsi)*1] = fp280;
LIBINT2_REALTYPE fp283;
fp283 = fp168 * fp109;
LIBINT2_REALTYPE fp282;
fp282 = fp283 * fp9;
target[((hsi*100+48)*1+lsi)*1] = fp282;
LIBINT2_REALTYPE fp285;
fp285 = fp168 * fp102;
LIBINT2_REALTYPE fp284;
fp284 = fp285 * fp10;
target[((hsi*100+47)*1+lsi)*1] = fp284;
LIBINT2_REALTYPE fp287;
fp287 = fp168 * fp95;
LIBINT2_REALTYPE fp286;
fp286 = fp287 * fp11;
target[((hsi*100+46)*1+lsi)*1] = fp286;
LIBINT2_REALTYPE fp289;
fp289 = fp169 * fp125;
LIBINT2_REALTYPE fp288;
fp288 = fp289 * fp9;
target[((hsi*100+45)*1+lsi)*1] = fp288;
LIBINT2_REALTYPE fp291;
fp291 = fp169 * fp109;
LIBINT2_REALTYPE fp290;
fp290 = fp291 * fp10;
target[((hsi*100+44)*1+lsi)*1] = fp290;
LIBINT2_REALTYPE fp293;
fp293 = fp169 * fp102;
LIBINT2_REALTYPE fp292;
fp292 = fp293 * fp11;
target[((hsi*100+43)*1+lsi)*1] = fp292;
LIBINT2_REALTYPE fp295;
fp295 = fp170 * fp125;
LIBINT2_REALTYPE fp294;
fp294 = fp295 * fp10;
target[((hsi*100+42)*1+lsi)*1] = fp294;
LIBINT2_REALTYPE fp297;
fp297 = fp170 * fp109;
LIBINT2_REALTYPE fp296;
fp296 = fp297 * fp11;
target[((hsi*100+41)*1+lsi)*1] = fp296;
LIBINT2_REALTYPE fp299;
fp299 = fp171 * fp125;
LIBINT2_REALTYPE fp298;
fp298 = fp299 * fp11;
target[((hsi*100+40)*1+lsi)*1] = fp298;
LIBINT2_REALTYPE fp301;
fp301 = fp168 * fp88;
LIBINT2_REALTYPE fp300;
fp300 = fp301 * fp12;
target[((hsi*100+39)*1+lsi)*1] = fp300;
LIBINT2_REALTYPE fp303;
fp303 = fp168 * fp72;
LIBINT2_REALTYPE fp302;
fp302 = fp303 * fp13;
target[((hsi*100+38)*1+lsi)*1] = fp302;
LIBINT2_REALTYPE fp305;
fp305 = fp168 * fp65;
LIBINT2_REALTYPE fp304;
fp304 = fp305 * fp14;
target[((hsi*100+37)*1+lsi)*1] = fp304;
LIBINT2_REALTYPE fp307;
fp307 = fp168 * fp58;
LIBINT2_REALTYPE fp306;
fp306 = fp307 * fp15;
target[((hsi*100+36)*1+lsi)*1] = fp306;
LIBINT2_REALTYPE fp309;
fp309 = fp169 * fp88;
LIBINT2_REALTYPE fp308;
fp308 = fp309 * fp13;
target[((hsi*100+35)*1+lsi)*1] = fp308;
LIBINT2_REALTYPE fp311;
fp311 = fp169 * fp72;
LIBINT2_REALTYPE fp310;
fp310 = fp311 * fp14;
target[((hsi*100+34)*1+lsi)*1] = fp310;
LIBINT2_REALTYPE fp313;
fp313 = fp169 * fp65;
LIBINT2_REALTYPE fp312;
fp312 = fp313 * fp15;
target[((hsi*100+33)*1+lsi)*1] = fp312;
LIBINT2_REALTYPE fp315;
fp315 = fp170 * fp88;
LIBINT2_REALTYPE fp314;
fp314 = fp315 * fp14;
target[((hsi*100+32)*1+lsi)*1] = fp314;
LIBINT2_REALTYPE fp317;
fp317 = fp170 * fp72;
LIBINT2_REALTYPE fp316;
fp316 = fp317 * fp15;
target[((hsi*100+31)*1+lsi)*1] = fp316;
LIBINT2_REALTYPE fp319;
fp319 = fp171 * fp88;
LIBINT2_REALTYPE fp318;
fp318 = fp319 * fp15;
target[((hsi*100+30)*1+lsi)*1] = fp318;
LIBINT2_REALTYPE fp172;
fp172 = 0.0000000000000000e+00 + src0[((hsi*28+14)*1+lsi)*1];
LIBINT2_REALTYPE fp321;
fp321 = fp172 * fp162;
LIBINT2_REALTYPE fp320;
fp320 = fp321 * fp8;
target[((hsi*100+29)*1+lsi)*1] = fp320;
LIBINT2_REALTYPE fp323;
fp323 = fp172 * fp146;
LIBINT2_REALTYPE fp322;
fp322 = fp323 * fp9;
target[((hsi*100+28)*1+lsi)*1] = fp322;
LIBINT2_REALTYPE fp325;
fp325 = fp172 * fp139;
LIBINT2_REALTYPE fp324;
fp324 = fp325 * fp10;
target[((hsi*100+27)*1+lsi)*1] = fp324;
LIBINT2_REALTYPE fp327;
fp327 = fp172 * fp132;
LIBINT2_REALTYPE fp326;
fp326 = fp327 * fp11;
target[((hsi*100+26)*1+lsi)*1] = fp326;
LIBINT2_REALTYPE fp173;
fp173 = 0.0000000000000000e+00 + src0[((hsi*28+15)*1+lsi)*1];
LIBINT2_REALTYPE fp329;
fp329 = fp173 * fp162;
LIBINT2_REALTYPE fp328;
fp328 = fp329 * fp9;
target[((hsi*100+25)*1+lsi)*1] = fp328;
LIBINT2_REALTYPE fp331;
fp331 = fp173 * fp146;
LIBINT2_REALTYPE fp330;
fp330 = fp331 * fp10;
target[((hsi*100+24)*1+lsi)*1] = fp330;
LIBINT2_REALTYPE fp333;
fp333 = fp173 * fp139;
LIBINT2_REALTYPE fp332;
fp332 = fp333 * fp11;
target[((hsi*100+23)*1+lsi)*1] = fp332;
LIBINT2_REALTYPE fp174;
fp174 = 0.0000000000000000e+00 + src0[((hsi*28+16)*1+lsi)*1];
LIBINT2_REALTYPE fp335;
fp335 = fp174 * fp162;
LIBINT2_REALTYPE fp334;
fp334 = fp335 * fp10;
target[((hsi*100+22)*1+lsi)*1] = fp334;
LIBINT2_REALTYPE fp337;
fp337 = fp174 * fp146;
LIBINT2_REALTYPE fp336;
fp336 = fp337 * fp11;
target[((hsi*100+21)*1+lsi)*1] = fp336;
LIBINT2_REALTYPE fp175;
fp175 = 0.0000000000000000e+00 + src0[((hsi*28+17)*1+lsi)*1];
LIBINT2_REALTYPE fp339;
fp339 = fp175 * fp162;
LIBINT2_REALTYPE fp338;
fp338 = fp339 * fp11;
target[((hsi*100+20)*1+lsi)*1] = fp338;
LIBINT2_REALTYPE fp341;
fp341 = fp172 * fp125;
LIBINT2_REALTYPE fp340;
fp340 = fp341 * fp12;
target[((hsi*100+19)*1+lsi)*1] = fp340;
LIBINT2_REALTYPE fp343;
fp343 = fp172 * fp109;
LIBINT2_REALTYPE fp342;
fp342 = fp343 * fp13;
target[((hsi*100+18)*1+lsi)*1] = fp342;
LIBINT2_REALTYPE fp345;
fp345 = fp172 * fp102;
LIBINT2_REALTYPE fp344;
fp344 = fp345 * fp14;
target[((hsi*100+17)*1+lsi)*1] = fp344;
LIBINT2_REALTYPE fp347;
fp347 = fp172 * fp95;
LIBINT2_REALTYPE fp346;
fp346 = fp347 * fp15;
target[((hsi*100+16)*1+lsi)*1] = fp346;
LIBINT2_REALTYPE fp349;
fp349 = fp173 * fp125;
LIBINT2_REALTYPE fp348;
fp348 = fp349 * fp13;
target[((hsi*100+15)*1+lsi)*1] = fp348;
LIBINT2_REALTYPE fp351;
fp351 = fp173 * fp109;
LIBINT2_REALTYPE fp350;
fp350 = fp351 * fp14;
target[((hsi*100+14)*1+lsi)*1] = fp350;
LIBINT2_REALTYPE fp353;
fp353 = fp173 * fp102;
LIBINT2_REALTYPE fp352;
fp352 = fp353 * fp15;
target[((hsi*100+13)*1+lsi)*1] = fp352;
LIBINT2_REALTYPE fp355;
fp355 = fp174 * fp125;
LIBINT2_REALTYPE fp354;
fp354 = fp355 * fp14;
target[((hsi*100+12)*1+lsi)*1] = fp354;
LIBINT2_REALTYPE fp357;
fp357 = fp174 * fp109;
LIBINT2_REALTYPE fp356;
fp356 = fp357 * fp15;
target[((hsi*100+11)*1+lsi)*1] = fp356;
LIBINT2_REALTYPE fp359;
fp359 = fp175 * fp125;
LIBINT2_REALTYPE fp358;
fp358 = fp359 * fp15;
target[((hsi*100+10)*1+lsi)*1] = fp358;
LIBINT2_REALTYPE fp176;
fp176 = 0.0000000000000000e+00 + src0[((hsi*28+21)*1+lsi)*1];
LIBINT2_REALTYPE fp361;
fp361 = fp176 * fp162;
LIBINT2_REALTYPE fp360;
fp360 = fp361 * fp12;
target[((hsi*100+9)*1+lsi)*1] = fp360;
LIBINT2_REALTYPE fp363;
fp363 = fp176 * fp146;
LIBINT2_REALTYPE fp362;
fp362 = fp363 * fp13;
target[((hsi*100+8)*1+lsi)*1] = fp362;
LIBINT2_REALTYPE fp365;
fp365 = fp176 * fp139;
LIBINT2_REALTYPE fp364;
fp364 = fp365 * fp14;
target[((hsi*100+7)*1+lsi)*1] = fp364;
LIBINT2_REALTYPE fp367;
fp367 = fp176 * fp132;
LIBINT2_REALTYPE fp366;
fp366 = fp367 * fp15;
target[((hsi*100+6)*1+lsi)*1] = fp366;
LIBINT2_REALTYPE fp177;
fp177 = 0.0000000000000000e+00 + src0[((hsi*28+22)*1+lsi)*1];
LIBINT2_REALTYPE fp369;
fp369 = fp177 * fp162;
LIBINT2_REALTYPE fp368;
fp368 = fp369 * fp13;
target[((hsi*100+5)*1+lsi)*1] = fp368;
LIBINT2_REALTYPE fp371;
fp371 = fp177 * fp146;
LIBINT2_REALTYPE fp370;
fp370 = fp371 * fp14;
target[((hsi*100+4)*1+lsi)*1] = fp370;
LIBINT2_REALTYPE fp373;
fp373 = fp177 * fp139;
LIBINT2_REALTYPE fp372;
fp372 = fp373 * fp15;
target[((hsi*100+3)*1+lsi)*1] = fp372;
LIBINT2_REALTYPE fp178;
fp178 = 0.0000000000000000e+00 + src0[((hsi*28+23)*1+lsi)*1];
LIBINT2_REALTYPE fp375;
fp375 = fp178 * fp162;
LIBINT2_REALTYPE fp374;
fp374 = fp375 * fp14;
target[((hsi*100+2)*1+lsi)*1] = fp374;
LIBINT2_REALTYPE fp377;
fp377 = fp178 * fp146;
LIBINT2_REALTYPE fp376;
fp376 = fp377 * fp15;
target[((hsi*100+1)*1+lsi)*1] = fp376;
LIBINT2_REALTYPE fp179;
fp179 = 0.0000000000000000e+00 + src0[((hsi*28+24)*1+lsi)*1];
LIBINT2_REALTYPE fp379;
fp379 = fp179 * fp162;
LIBINT2_REALTYPE fp378;
fp378 = fp379 * fp15;
target[((hsi*100+0)*1+lsi)*1] = fp378;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 380 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
