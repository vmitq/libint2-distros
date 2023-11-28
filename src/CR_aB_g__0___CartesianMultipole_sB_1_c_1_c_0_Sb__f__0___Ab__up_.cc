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
void CR_aB_g__0___CartesianMultipole_sB_1_c_1_c_0_Sb__f__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*30+27)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = 0.0000000000000000e+00 + src1[((hsi*30+1)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
fp81 = 0.0000000000000000e+00 + src1[((hsi*30+0)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
LIBINT2_REALTYPE fp83;
fp83 = libint2::fma_plus(inteval->BO_y[vi], fp81, fp82);
LIBINT2_REALTYPE fp88;
fp88 = 0.0000000000000000e+00 + src0[((hsi*30+1)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
fp85 = 0.0000000000000000e+00 + src0[((hsi*30+0)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
LIBINT2_REALTYPE fp86;
fp86 = libint2::fma_plus(inteval->BO_x[vi], fp85, fp88);
LIBINT2_REALTYPE fp151;
fp151 = fp86 * fp83;
LIBINT2_REALTYPE fp150;
fp150 = fp151 * fp0;
target[((hsi*150+149)*1+lsi)*1] = fp150;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*30+26)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = 0.0000000000000000e+00 + src1[((hsi*30+2)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
LIBINT2_REALTYPE fp79;
fp79 = libint2::fma_plus(inteval->BO_y[vi], fp82, fp78);
LIBINT2_REALTYPE fp153;
fp153 = fp86 * fp79;
LIBINT2_REALTYPE fp152;
fp152 = fp153 * fp1;
target[((hsi*150+148)*1+lsi)*1] = fp152;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*30+25)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = 0.0000000000000000e+00 + src1[((hsi*30+3)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
LIBINT2_REALTYPE fp76;
fp76 = libint2::fma_plus(inteval->BO_y[vi], fp78, fp75);
LIBINT2_REALTYPE fp155;
fp155 = fp86 * fp76;
LIBINT2_REALTYPE fp154;
fp154 = fp155 * fp2;
target[((hsi*150+147)*1+lsi)*1] = fp154;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*30+24)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = inteval->BO_y[vi] * fp75;
LIBINT2_REALTYPE fp72;
fp72 = 0.0000000000000000e+00 + src1[((hsi*30+4)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = fp72 + fp74;
LIBINT2_REALTYPE fp157;
fp157 = fp86 * fp73;
LIBINT2_REALTYPE fp156;
fp156 = fp157 * fp3;
target[((hsi*150+146)*1+lsi)*1] = fp156;
LIBINT2_REALTYPE fp91;
fp91 = 0.0000000000000000e+00 + src0[((hsi*30+2)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
LIBINT2_REALTYPE fp89;
fp89 = libint2::fma_plus(inteval->BO_x[vi], fp88, fp91);
LIBINT2_REALTYPE fp159;
fp159 = fp89 * fp83;
LIBINT2_REALTYPE fp158;
fp158 = fp159 * fp1;
target[((hsi*150+145)*1+lsi)*1] = fp158;
LIBINT2_REALTYPE fp161;
fp161 = fp89 * fp79;
LIBINT2_REALTYPE fp160;
fp160 = fp161 * fp2;
target[((hsi*150+144)*1+lsi)*1] = fp160;
LIBINT2_REALTYPE fp163;
fp163 = fp89 * fp76;
LIBINT2_REALTYPE fp162;
fp162 = fp163 * fp3;
target[((hsi*150+143)*1+lsi)*1] = fp162;
LIBINT2_REALTYPE fp94;
fp94 = 0.0000000000000000e+00 + src0[((hsi*30+3)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
LIBINT2_REALTYPE fp92;
fp92 = libint2::fma_plus(inteval->BO_x[vi], fp91, fp94);
LIBINT2_REALTYPE fp165;
fp165 = fp92 * fp83;
LIBINT2_REALTYPE fp164;
fp164 = fp165 * fp2;
target[((hsi*150+142)*1+lsi)*1] = fp164;
LIBINT2_REALTYPE fp167;
fp167 = fp92 * fp79;
LIBINT2_REALTYPE fp166;
fp166 = fp167 * fp3;
target[((hsi*150+141)*1+lsi)*1] = fp166;
LIBINT2_REALTYPE fp97;
fp97 = inteval->BO_x[vi] * fp94;
LIBINT2_REALTYPE fp95;
fp95 = 0.0000000000000000e+00 + src0[((hsi*30+4)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = fp95 + fp97;
LIBINT2_REALTYPE fp169;
fp169 = fp96 * fp83;
LIBINT2_REALTYPE fp168;
fp168 = fp169 * fp3;
target[((hsi*150+140)*1+lsi)*1] = fp168;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*30+21)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = 0.0000000000000000e+00 + src1[((hsi*30+7)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = 0.0000000000000000e+00 + src1[((hsi*30+6)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
LIBINT2_REALTYPE fp70;
fp70 = libint2::fma_plus(inteval->BO_y[vi], fp68, fp69);
LIBINT2_REALTYPE fp171;
fp171 = fp86 * fp70;
LIBINT2_REALTYPE fp170;
fp170 = fp171 * fp4;
target[((hsi*150+139)*1+lsi)*1] = fp170;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*30+20)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = 0.0000000000000000e+00 + src1[((hsi*30+8)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
LIBINT2_REALTYPE fp66;
fp66 = libint2::fma_plus(inteval->BO_y[vi], fp69, fp65);
LIBINT2_REALTYPE fp173;
fp173 = fp86 * fp66;
LIBINT2_REALTYPE fp172;
fp172 = fp173 * fp5;
target[((hsi*150+138)*1+lsi)*1] = fp172;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*30+19)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = 0.0000000000000000e+00 + src1[((hsi*30+9)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
LIBINT2_REALTYPE fp63;
fp63 = libint2::fma_plus(inteval->BO_y[vi], fp65, fp62);
LIBINT2_REALTYPE fp175;
fp175 = fp86 * fp63;
LIBINT2_REALTYPE fp174;
fp174 = fp175 * fp6;
target[((hsi*150+137)*1+lsi)*1] = fp174;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*30+18)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = inteval->BO_y[vi] * fp62;
LIBINT2_REALTYPE fp59;
fp59 = 0.0000000000000000e+00 + src1[((hsi*30+10)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = fp59 + fp61;
LIBINT2_REALTYPE fp177;
fp177 = fp86 * fp60;
LIBINT2_REALTYPE fp176;
fp176 = fp177 * fp7;
target[((hsi*150+136)*1+lsi)*1] = fp176;
LIBINT2_REALTYPE fp179;
fp179 = fp89 * fp70;
LIBINT2_REALTYPE fp178;
fp178 = fp179 * fp5;
target[((hsi*150+135)*1+lsi)*1] = fp178;
LIBINT2_REALTYPE fp181;
fp181 = fp89 * fp66;
LIBINT2_REALTYPE fp180;
fp180 = fp181 * fp6;
target[((hsi*150+134)*1+lsi)*1] = fp180;
LIBINT2_REALTYPE fp183;
fp183 = fp89 * fp63;
LIBINT2_REALTYPE fp182;
fp182 = fp183 * fp7;
target[((hsi*150+133)*1+lsi)*1] = fp182;
LIBINT2_REALTYPE fp185;
fp185 = fp92 * fp70;
LIBINT2_REALTYPE fp184;
fp184 = fp185 * fp6;
target[((hsi*150+132)*1+lsi)*1] = fp184;
LIBINT2_REALTYPE fp187;
fp187 = fp92 * fp66;
LIBINT2_REALTYPE fp186;
fp186 = fp187 * fp7;
target[((hsi*150+131)*1+lsi)*1] = fp186;
LIBINT2_REALTYPE fp189;
fp189 = fp96 * fp70;
LIBINT2_REALTYPE fp188;
fp188 = fp189 * fp7;
target[((hsi*150+130)*1+lsi)*1] = fp188;
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src2[((hsi*30+15)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = 0.0000000000000000e+00 + src1[((hsi*30+13)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = 0.0000000000000000e+00 + src1[((hsi*30+12)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
LIBINT2_REALTYPE fp57;
fp57 = libint2::fma_plus(inteval->BO_y[vi], fp55, fp56);
LIBINT2_REALTYPE fp191;
fp191 = fp86 * fp57;
LIBINT2_REALTYPE fp190;
fp190 = fp191 * fp8;
target[((hsi*150+129)*1+lsi)*1] = fp190;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src2[((hsi*30+14)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = 0.0000000000000000e+00 + src1[((hsi*30+14)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
LIBINT2_REALTYPE fp53;
fp53 = libint2::fma_plus(inteval->BO_y[vi], fp56, fp52);
LIBINT2_REALTYPE fp193;
fp193 = fp86 * fp53;
LIBINT2_REALTYPE fp192;
fp192 = fp193 * fp9;
target[((hsi*150+128)*1+lsi)*1] = fp192;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src2[((hsi*30+13)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = 0.0000000000000000e+00 + src1[((hsi*30+15)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
LIBINT2_REALTYPE fp50;
fp50 = libint2::fma_plus(inteval->BO_y[vi], fp52, fp49);
LIBINT2_REALTYPE fp195;
fp195 = fp86 * fp50;
LIBINT2_REALTYPE fp194;
fp194 = fp195 * fp10;
target[((hsi*150+127)*1+lsi)*1] = fp194;
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src2[((hsi*30+12)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = inteval->BO_y[vi] * fp49;
LIBINT2_REALTYPE fp46;
fp46 = 0.0000000000000000e+00 + src1[((hsi*30+16)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = fp46 + fp48;
LIBINT2_REALTYPE fp197;
fp197 = fp86 * fp47;
LIBINT2_REALTYPE fp196;
fp196 = fp197 * fp11;
target[((hsi*150+126)*1+lsi)*1] = fp196;
LIBINT2_REALTYPE fp199;
fp199 = fp89 * fp57;
LIBINT2_REALTYPE fp198;
fp198 = fp199 * fp9;
target[((hsi*150+125)*1+lsi)*1] = fp198;
LIBINT2_REALTYPE fp201;
fp201 = fp89 * fp53;
LIBINT2_REALTYPE fp200;
fp200 = fp201 * fp10;
target[((hsi*150+124)*1+lsi)*1] = fp200;
LIBINT2_REALTYPE fp203;
fp203 = fp89 * fp50;
LIBINT2_REALTYPE fp202;
fp202 = fp203 * fp11;
target[((hsi*150+123)*1+lsi)*1] = fp202;
LIBINT2_REALTYPE fp205;
fp205 = fp92 * fp57;
LIBINT2_REALTYPE fp204;
fp204 = fp205 * fp10;
target[((hsi*150+122)*1+lsi)*1] = fp204;
LIBINT2_REALTYPE fp207;
fp207 = fp92 * fp53;
LIBINT2_REALTYPE fp206;
fp206 = fp207 * fp11;
target[((hsi*150+121)*1+lsi)*1] = fp206;
LIBINT2_REALTYPE fp209;
fp209 = fp96 * fp57;
LIBINT2_REALTYPE fp208;
fp208 = fp209 * fp11;
target[((hsi*150+120)*1+lsi)*1] = fp208;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src2[((hsi*30+9)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = 0.0000000000000000e+00 + src1[((hsi*30+19)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = 0.0000000000000000e+00 + src1[((hsi*30+18)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
LIBINT2_REALTYPE fp44;
fp44 = libint2::fma_plus(inteval->BO_y[vi], fp42, fp43);
LIBINT2_REALTYPE fp211;
fp211 = fp86 * fp44;
LIBINT2_REALTYPE fp210;
fp210 = fp211 * fp12;
target[((hsi*150+119)*1+lsi)*1] = fp210;
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src2[((hsi*30+8)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = 0.0000000000000000e+00 + src1[((hsi*30+20)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_plus(inteval->BO_y[vi], fp43, fp39);
LIBINT2_REALTYPE fp213;
fp213 = fp86 * fp40;
LIBINT2_REALTYPE fp212;
fp212 = fp213 * fp13;
target[((hsi*150+118)*1+lsi)*1] = fp212;
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src2[((hsi*30+7)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = 0.0000000000000000e+00 + src1[((hsi*30+21)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
LIBINT2_REALTYPE fp37;
fp37 = libint2::fma_plus(inteval->BO_y[vi], fp39, fp36);
LIBINT2_REALTYPE fp215;
fp215 = fp86 * fp37;
LIBINT2_REALTYPE fp214;
fp214 = fp215 * fp14;
target[((hsi*150+117)*1+lsi)*1] = fp214;
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src2[((hsi*30+6)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = inteval->BO_y[vi] * fp36;
LIBINT2_REALTYPE fp33;
fp33 = 0.0000000000000000e+00 + src1[((hsi*30+22)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = fp33 + fp35;
LIBINT2_REALTYPE fp217;
fp217 = fp86 * fp34;
LIBINT2_REALTYPE fp216;
fp216 = fp217 * fp15;
target[((hsi*150+116)*1+lsi)*1] = fp216;
LIBINT2_REALTYPE fp219;
fp219 = fp89 * fp44;
LIBINT2_REALTYPE fp218;
fp218 = fp219 * fp13;
target[((hsi*150+115)*1+lsi)*1] = fp218;
LIBINT2_REALTYPE fp221;
fp221 = fp89 * fp40;
LIBINT2_REALTYPE fp220;
fp220 = fp221 * fp14;
target[((hsi*150+114)*1+lsi)*1] = fp220;
LIBINT2_REALTYPE fp223;
fp223 = fp89 * fp37;
LIBINT2_REALTYPE fp222;
fp222 = fp223 * fp15;
target[((hsi*150+113)*1+lsi)*1] = fp222;
LIBINT2_REALTYPE fp225;
fp225 = fp92 * fp44;
LIBINT2_REALTYPE fp224;
fp224 = fp225 * fp14;
target[((hsi*150+112)*1+lsi)*1] = fp224;
LIBINT2_REALTYPE fp227;
fp227 = fp92 * fp40;
LIBINT2_REALTYPE fp226;
fp226 = fp227 * fp15;
target[((hsi*150+111)*1+lsi)*1] = fp226;
LIBINT2_REALTYPE fp229;
fp229 = fp96 * fp44;
LIBINT2_REALTYPE fp228;
fp228 = fp229 * fp15;
target[((hsi*150+110)*1+lsi)*1] = fp228;
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src2[((hsi*30+3)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = 0.0000000000000000e+00 + src1[((hsi*30+25)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = 0.0000000000000000e+00 + src1[((hsi*30+24)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
LIBINT2_REALTYPE fp31;
fp31 = libint2::fma_plus(inteval->BO_y[vi], fp29, fp30);
LIBINT2_REALTYPE fp231;
fp231 = fp86 * fp31;
LIBINT2_REALTYPE fp230;
fp230 = fp231 * fp16;
target[((hsi*150+109)*1+lsi)*1] = fp230;
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src2[((hsi*30+2)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src1[((hsi*30+26)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
LIBINT2_REALTYPE fp27;
fp27 = libint2::fma_plus(inteval->BO_y[vi], fp30, fp26);
LIBINT2_REALTYPE fp233;
fp233 = fp86 * fp27;
LIBINT2_REALTYPE fp232;
fp232 = fp233 * fp17;
target[((hsi*150+108)*1+lsi)*1] = fp232;
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + src2[((hsi*30+1)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = 0.0000000000000000e+00 + src1[((hsi*30+27)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->BO_y[vi], fp26, fp23);
LIBINT2_REALTYPE fp235;
fp235 = fp86 * fp24;
LIBINT2_REALTYPE fp234;
fp234 = fp235 * fp18;
target[((hsi*150+107)*1+lsi)*1] = fp234;
LIBINT2_REALTYPE fp19;
fp19 = 0.0000000000000000e+00 + src2[((hsi*30+0)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = inteval->BO_y[vi] * fp23;
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src1[((hsi*30+28)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = fp20 + fp22;
LIBINT2_REALTYPE fp237;
fp237 = fp86 * fp21;
LIBINT2_REALTYPE fp236;
fp236 = fp237 * fp19;
target[((hsi*150+106)*1+lsi)*1] = fp236;
LIBINT2_REALTYPE fp239;
fp239 = fp89 * fp31;
LIBINT2_REALTYPE fp238;
fp238 = fp239 * fp17;
target[((hsi*150+105)*1+lsi)*1] = fp238;
LIBINT2_REALTYPE fp241;
fp241 = fp89 * fp27;
LIBINT2_REALTYPE fp240;
fp240 = fp241 * fp18;
target[((hsi*150+104)*1+lsi)*1] = fp240;
LIBINT2_REALTYPE fp243;
fp243 = fp89 * fp24;
LIBINT2_REALTYPE fp242;
fp242 = fp243 * fp19;
target[((hsi*150+103)*1+lsi)*1] = fp242;
LIBINT2_REALTYPE fp245;
fp245 = fp92 * fp31;
LIBINT2_REALTYPE fp244;
fp244 = fp245 * fp18;
target[((hsi*150+102)*1+lsi)*1] = fp244;
LIBINT2_REALTYPE fp247;
fp247 = fp92 * fp27;
LIBINT2_REALTYPE fp246;
fp246 = fp247 * fp19;
target[((hsi*150+101)*1+lsi)*1] = fp246;
LIBINT2_REALTYPE fp249;
fp249 = fp96 * fp31;
LIBINT2_REALTYPE fp248;
fp248 = fp249 * fp19;
target[((hsi*150+100)*1+lsi)*1] = fp248;
LIBINT2_REALTYPE fp101;
fp101 = 0.0000000000000000e+00 + src0[((hsi*30+7)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
fp98 = 0.0000000000000000e+00 + src0[((hsi*30+6)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
LIBINT2_REALTYPE fp99;
fp99 = libint2::fma_plus(inteval->BO_x[vi], fp98, fp101);
LIBINT2_REALTYPE fp251;
fp251 = fp99 * fp83;
LIBINT2_REALTYPE fp250;
fp250 = fp251 * fp4;
target[((hsi*150+99)*1+lsi)*1] = fp250;
LIBINT2_REALTYPE fp253;
fp253 = fp99 * fp79;
LIBINT2_REALTYPE fp252;
fp252 = fp253 * fp5;
target[((hsi*150+98)*1+lsi)*1] = fp252;
LIBINT2_REALTYPE fp255;
fp255 = fp99 * fp76;
LIBINT2_REALTYPE fp254;
fp254 = fp255 * fp6;
target[((hsi*150+97)*1+lsi)*1] = fp254;
LIBINT2_REALTYPE fp257;
fp257 = fp99 * fp73;
LIBINT2_REALTYPE fp256;
fp256 = fp257 * fp7;
target[((hsi*150+96)*1+lsi)*1] = fp256;
LIBINT2_REALTYPE fp104;
fp104 = 0.0000000000000000e+00 + src0[((hsi*30+8)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
LIBINT2_REALTYPE fp102;
fp102 = libint2::fma_plus(inteval->BO_x[vi], fp101, fp104);
LIBINT2_REALTYPE fp259;
fp259 = fp102 * fp83;
LIBINT2_REALTYPE fp258;
fp258 = fp259 * fp5;
target[((hsi*150+95)*1+lsi)*1] = fp258;
LIBINT2_REALTYPE fp261;
fp261 = fp102 * fp79;
LIBINT2_REALTYPE fp260;
fp260 = fp261 * fp6;
target[((hsi*150+94)*1+lsi)*1] = fp260;
LIBINT2_REALTYPE fp263;
fp263 = fp102 * fp76;
LIBINT2_REALTYPE fp262;
fp262 = fp263 * fp7;
target[((hsi*150+93)*1+lsi)*1] = fp262;
LIBINT2_REALTYPE fp107;
fp107 = 0.0000000000000000e+00 + src0[((hsi*30+9)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
LIBINT2_REALTYPE fp105;
fp105 = libint2::fma_plus(inteval->BO_x[vi], fp104, fp107);
LIBINT2_REALTYPE fp265;
fp265 = fp105 * fp83;
LIBINT2_REALTYPE fp264;
fp264 = fp265 * fp6;
target[((hsi*150+92)*1+lsi)*1] = fp264;
LIBINT2_REALTYPE fp267;
fp267 = fp105 * fp79;
LIBINT2_REALTYPE fp266;
fp266 = fp267 * fp7;
target[((hsi*150+91)*1+lsi)*1] = fp266;
LIBINT2_REALTYPE fp110;
fp110 = inteval->BO_x[vi] * fp107;
LIBINT2_REALTYPE fp108;
fp108 = 0.0000000000000000e+00 + src0[((hsi*30+10)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
fp109 = fp108 + fp110;
LIBINT2_REALTYPE fp269;
fp269 = fp109 * fp83;
LIBINT2_REALTYPE fp268;
fp268 = fp269 * fp7;
target[((hsi*150+90)*1+lsi)*1] = fp268;
LIBINT2_REALTYPE fp271;
fp271 = fp99 * fp70;
LIBINT2_REALTYPE fp270;
fp270 = fp271 * fp8;
target[((hsi*150+89)*1+lsi)*1] = fp270;
LIBINT2_REALTYPE fp273;
fp273 = fp99 * fp66;
LIBINT2_REALTYPE fp272;
fp272 = fp273 * fp9;
target[((hsi*150+88)*1+lsi)*1] = fp272;
LIBINT2_REALTYPE fp275;
fp275 = fp99 * fp63;
LIBINT2_REALTYPE fp274;
fp274 = fp275 * fp10;
target[((hsi*150+87)*1+lsi)*1] = fp274;
LIBINT2_REALTYPE fp277;
fp277 = fp99 * fp60;
LIBINT2_REALTYPE fp276;
fp276 = fp277 * fp11;
target[((hsi*150+86)*1+lsi)*1] = fp276;
LIBINT2_REALTYPE fp279;
fp279 = fp102 * fp70;
LIBINT2_REALTYPE fp278;
fp278 = fp279 * fp9;
target[((hsi*150+85)*1+lsi)*1] = fp278;
LIBINT2_REALTYPE fp281;
fp281 = fp102 * fp66;
LIBINT2_REALTYPE fp280;
fp280 = fp281 * fp10;
target[((hsi*150+84)*1+lsi)*1] = fp280;
LIBINT2_REALTYPE fp283;
fp283 = fp102 * fp63;
LIBINT2_REALTYPE fp282;
fp282 = fp283 * fp11;
target[((hsi*150+83)*1+lsi)*1] = fp282;
LIBINT2_REALTYPE fp285;
fp285 = fp105 * fp70;
LIBINT2_REALTYPE fp284;
fp284 = fp285 * fp10;
target[((hsi*150+82)*1+lsi)*1] = fp284;
LIBINT2_REALTYPE fp287;
fp287 = fp105 * fp66;
LIBINT2_REALTYPE fp286;
fp286 = fp287 * fp11;
target[((hsi*150+81)*1+lsi)*1] = fp286;
LIBINT2_REALTYPE fp289;
fp289 = fp109 * fp70;
LIBINT2_REALTYPE fp288;
fp288 = fp289 * fp11;
target[((hsi*150+80)*1+lsi)*1] = fp288;
LIBINT2_REALTYPE fp291;
fp291 = fp99 * fp57;
LIBINT2_REALTYPE fp290;
fp290 = fp291 * fp12;
target[((hsi*150+79)*1+lsi)*1] = fp290;
LIBINT2_REALTYPE fp293;
fp293 = fp99 * fp53;
LIBINT2_REALTYPE fp292;
fp292 = fp293 * fp13;
target[((hsi*150+78)*1+lsi)*1] = fp292;
LIBINT2_REALTYPE fp295;
fp295 = fp99 * fp50;
LIBINT2_REALTYPE fp294;
fp294 = fp295 * fp14;
target[((hsi*150+77)*1+lsi)*1] = fp294;
LIBINT2_REALTYPE fp297;
fp297 = fp99 * fp47;
LIBINT2_REALTYPE fp296;
fp296 = fp297 * fp15;
target[((hsi*150+76)*1+lsi)*1] = fp296;
LIBINT2_REALTYPE fp299;
fp299 = fp102 * fp57;
LIBINT2_REALTYPE fp298;
fp298 = fp299 * fp13;
target[((hsi*150+75)*1+lsi)*1] = fp298;
LIBINT2_REALTYPE fp301;
fp301 = fp102 * fp53;
LIBINT2_REALTYPE fp300;
fp300 = fp301 * fp14;
target[((hsi*150+74)*1+lsi)*1] = fp300;
LIBINT2_REALTYPE fp303;
fp303 = fp102 * fp50;
LIBINT2_REALTYPE fp302;
fp302 = fp303 * fp15;
target[((hsi*150+73)*1+lsi)*1] = fp302;
LIBINT2_REALTYPE fp305;
fp305 = fp105 * fp57;
LIBINT2_REALTYPE fp304;
fp304 = fp305 * fp14;
target[((hsi*150+72)*1+lsi)*1] = fp304;
LIBINT2_REALTYPE fp307;
fp307 = fp105 * fp53;
LIBINT2_REALTYPE fp306;
fp306 = fp307 * fp15;
target[((hsi*150+71)*1+lsi)*1] = fp306;
LIBINT2_REALTYPE fp309;
fp309 = fp109 * fp57;
LIBINT2_REALTYPE fp308;
fp308 = fp309 * fp15;
target[((hsi*150+70)*1+lsi)*1] = fp308;
LIBINT2_REALTYPE fp311;
fp311 = fp99 * fp44;
LIBINT2_REALTYPE fp310;
fp310 = fp311 * fp16;
target[((hsi*150+69)*1+lsi)*1] = fp310;
LIBINT2_REALTYPE fp313;
fp313 = fp99 * fp40;
LIBINT2_REALTYPE fp312;
fp312 = fp313 * fp17;
target[((hsi*150+68)*1+lsi)*1] = fp312;
LIBINT2_REALTYPE fp315;
fp315 = fp99 * fp37;
LIBINT2_REALTYPE fp314;
fp314 = fp315 * fp18;
target[((hsi*150+67)*1+lsi)*1] = fp314;
LIBINT2_REALTYPE fp317;
fp317 = fp99 * fp34;
LIBINT2_REALTYPE fp316;
fp316 = fp317 * fp19;
target[((hsi*150+66)*1+lsi)*1] = fp316;
LIBINT2_REALTYPE fp319;
fp319 = fp102 * fp44;
LIBINT2_REALTYPE fp318;
fp318 = fp319 * fp17;
target[((hsi*150+65)*1+lsi)*1] = fp318;
LIBINT2_REALTYPE fp321;
fp321 = fp102 * fp40;
LIBINT2_REALTYPE fp320;
fp320 = fp321 * fp18;
target[((hsi*150+64)*1+lsi)*1] = fp320;
LIBINT2_REALTYPE fp323;
fp323 = fp102 * fp37;
LIBINT2_REALTYPE fp322;
fp322 = fp323 * fp19;
target[((hsi*150+63)*1+lsi)*1] = fp322;
LIBINT2_REALTYPE fp325;
fp325 = fp105 * fp44;
LIBINT2_REALTYPE fp324;
fp324 = fp325 * fp18;
target[((hsi*150+62)*1+lsi)*1] = fp324;
LIBINT2_REALTYPE fp327;
fp327 = fp105 * fp40;
LIBINT2_REALTYPE fp326;
fp326 = fp327 * fp19;
target[((hsi*150+61)*1+lsi)*1] = fp326;
LIBINT2_REALTYPE fp329;
fp329 = fp109 * fp44;
LIBINT2_REALTYPE fp328;
fp328 = fp329 * fp19;
target[((hsi*150+60)*1+lsi)*1] = fp328;
LIBINT2_REALTYPE fp114;
fp114 = 0.0000000000000000e+00 + src0[((hsi*30+13)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
fp111 = 0.0000000000000000e+00 + src0[((hsi*30+12)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
LIBINT2_REALTYPE fp112;
fp112 = libint2::fma_plus(inteval->BO_x[vi], fp111, fp114);
LIBINT2_REALTYPE fp331;
fp331 = fp112 * fp83;
LIBINT2_REALTYPE fp330;
fp330 = fp331 * fp8;
target[((hsi*150+59)*1+lsi)*1] = fp330;
LIBINT2_REALTYPE fp333;
fp333 = fp112 * fp79;
LIBINT2_REALTYPE fp332;
fp332 = fp333 * fp9;
target[((hsi*150+58)*1+lsi)*1] = fp332;
LIBINT2_REALTYPE fp335;
fp335 = fp112 * fp76;
LIBINT2_REALTYPE fp334;
fp334 = fp335 * fp10;
target[((hsi*150+57)*1+lsi)*1] = fp334;
LIBINT2_REALTYPE fp337;
fp337 = fp112 * fp73;
LIBINT2_REALTYPE fp336;
fp336 = fp337 * fp11;
target[((hsi*150+56)*1+lsi)*1] = fp336;
LIBINT2_REALTYPE fp117;
fp117 = 0.0000000000000000e+00 + src0[((hsi*30+14)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
LIBINT2_REALTYPE fp115;
fp115 = libint2::fma_plus(inteval->BO_x[vi], fp114, fp117);
LIBINT2_REALTYPE fp339;
fp339 = fp115 * fp83;
LIBINT2_REALTYPE fp338;
fp338 = fp339 * fp9;
target[((hsi*150+55)*1+lsi)*1] = fp338;
LIBINT2_REALTYPE fp341;
fp341 = fp115 * fp79;
LIBINT2_REALTYPE fp340;
fp340 = fp341 * fp10;
target[((hsi*150+54)*1+lsi)*1] = fp340;
LIBINT2_REALTYPE fp343;
fp343 = fp115 * fp76;
LIBINT2_REALTYPE fp342;
fp342 = fp343 * fp11;
target[((hsi*150+53)*1+lsi)*1] = fp342;
LIBINT2_REALTYPE fp120;
fp120 = 0.0000000000000000e+00 + src0[((hsi*30+15)*1+lsi)*1];
LIBINT2_REALTYPE fp119;
LIBINT2_REALTYPE fp118;
fp118 = libint2::fma_plus(inteval->BO_x[vi], fp117, fp120);
LIBINT2_REALTYPE fp345;
fp345 = fp118 * fp83;
LIBINT2_REALTYPE fp344;
fp344 = fp345 * fp10;
target[((hsi*150+52)*1+lsi)*1] = fp344;
LIBINT2_REALTYPE fp347;
fp347 = fp118 * fp79;
LIBINT2_REALTYPE fp346;
fp346 = fp347 * fp11;
target[((hsi*150+51)*1+lsi)*1] = fp346;
LIBINT2_REALTYPE fp123;
fp123 = inteval->BO_x[vi] * fp120;
LIBINT2_REALTYPE fp121;
fp121 = 0.0000000000000000e+00 + src0[((hsi*30+16)*1+lsi)*1];
LIBINT2_REALTYPE fp122;
fp122 = fp121 + fp123;
LIBINT2_REALTYPE fp349;
fp349 = fp122 * fp83;
LIBINT2_REALTYPE fp348;
fp348 = fp349 * fp11;
target[((hsi*150+50)*1+lsi)*1] = fp348;
LIBINT2_REALTYPE fp351;
fp351 = fp112 * fp70;
LIBINT2_REALTYPE fp350;
fp350 = fp351 * fp12;
target[((hsi*150+49)*1+lsi)*1] = fp350;
LIBINT2_REALTYPE fp353;
fp353 = fp112 * fp66;
LIBINT2_REALTYPE fp352;
fp352 = fp353 * fp13;
target[((hsi*150+48)*1+lsi)*1] = fp352;
LIBINT2_REALTYPE fp355;
fp355 = fp112 * fp63;
LIBINT2_REALTYPE fp354;
fp354 = fp355 * fp14;
target[((hsi*150+47)*1+lsi)*1] = fp354;
LIBINT2_REALTYPE fp357;
fp357 = fp112 * fp60;
LIBINT2_REALTYPE fp356;
fp356 = fp357 * fp15;
target[((hsi*150+46)*1+lsi)*1] = fp356;
LIBINT2_REALTYPE fp359;
fp359 = fp115 * fp70;
LIBINT2_REALTYPE fp358;
fp358 = fp359 * fp13;
target[((hsi*150+45)*1+lsi)*1] = fp358;
LIBINT2_REALTYPE fp361;
fp361 = fp115 * fp66;
LIBINT2_REALTYPE fp360;
fp360 = fp361 * fp14;
target[((hsi*150+44)*1+lsi)*1] = fp360;
LIBINT2_REALTYPE fp363;
fp363 = fp115 * fp63;
LIBINT2_REALTYPE fp362;
fp362 = fp363 * fp15;
target[((hsi*150+43)*1+lsi)*1] = fp362;
LIBINT2_REALTYPE fp365;
fp365 = fp118 * fp70;
LIBINT2_REALTYPE fp364;
fp364 = fp365 * fp14;
target[((hsi*150+42)*1+lsi)*1] = fp364;
LIBINT2_REALTYPE fp367;
fp367 = fp118 * fp66;
LIBINT2_REALTYPE fp366;
fp366 = fp367 * fp15;
target[((hsi*150+41)*1+lsi)*1] = fp366;
LIBINT2_REALTYPE fp369;
fp369 = fp122 * fp70;
LIBINT2_REALTYPE fp368;
fp368 = fp369 * fp15;
target[((hsi*150+40)*1+lsi)*1] = fp368;
LIBINT2_REALTYPE fp371;
fp371 = fp112 * fp57;
LIBINT2_REALTYPE fp370;
fp370 = fp371 * fp16;
target[((hsi*150+39)*1+lsi)*1] = fp370;
LIBINT2_REALTYPE fp373;
fp373 = fp112 * fp53;
LIBINT2_REALTYPE fp372;
fp372 = fp373 * fp17;
target[((hsi*150+38)*1+lsi)*1] = fp372;
LIBINT2_REALTYPE fp375;
fp375 = fp112 * fp50;
LIBINT2_REALTYPE fp374;
fp374 = fp375 * fp18;
target[((hsi*150+37)*1+lsi)*1] = fp374;
LIBINT2_REALTYPE fp377;
fp377 = fp112 * fp47;
LIBINT2_REALTYPE fp376;
fp376 = fp377 * fp19;
target[((hsi*150+36)*1+lsi)*1] = fp376;
LIBINT2_REALTYPE fp379;
fp379 = fp115 * fp57;
LIBINT2_REALTYPE fp378;
fp378 = fp379 * fp17;
target[((hsi*150+35)*1+lsi)*1] = fp378;
LIBINT2_REALTYPE fp381;
fp381 = fp115 * fp53;
LIBINT2_REALTYPE fp380;
fp380 = fp381 * fp18;
target[((hsi*150+34)*1+lsi)*1] = fp380;
LIBINT2_REALTYPE fp383;
fp383 = fp115 * fp50;
LIBINT2_REALTYPE fp382;
fp382 = fp383 * fp19;
target[((hsi*150+33)*1+lsi)*1] = fp382;
LIBINT2_REALTYPE fp385;
fp385 = fp118 * fp57;
LIBINT2_REALTYPE fp384;
fp384 = fp385 * fp18;
target[((hsi*150+32)*1+lsi)*1] = fp384;
LIBINT2_REALTYPE fp387;
fp387 = fp118 * fp53;
LIBINT2_REALTYPE fp386;
fp386 = fp387 * fp19;
target[((hsi*150+31)*1+lsi)*1] = fp386;
LIBINT2_REALTYPE fp389;
fp389 = fp122 * fp57;
LIBINT2_REALTYPE fp388;
fp388 = fp389 * fp19;
target[((hsi*150+30)*1+lsi)*1] = fp388;
LIBINT2_REALTYPE fp127;
fp127 = 0.0000000000000000e+00 + src0[((hsi*30+19)*1+lsi)*1];
LIBINT2_REALTYPE fp124;
fp124 = 0.0000000000000000e+00 + src0[((hsi*30+18)*1+lsi)*1];
LIBINT2_REALTYPE fp126;
LIBINT2_REALTYPE fp125;
fp125 = libint2::fma_plus(inteval->BO_x[vi], fp124, fp127);
LIBINT2_REALTYPE fp391;
fp391 = fp125 * fp83;
LIBINT2_REALTYPE fp390;
fp390 = fp391 * fp12;
target[((hsi*150+29)*1+lsi)*1] = fp390;
LIBINT2_REALTYPE fp393;
fp393 = fp125 * fp79;
LIBINT2_REALTYPE fp392;
fp392 = fp393 * fp13;
target[((hsi*150+28)*1+lsi)*1] = fp392;
LIBINT2_REALTYPE fp395;
fp395 = fp125 * fp76;
LIBINT2_REALTYPE fp394;
fp394 = fp395 * fp14;
target[((hsi*150+27)*1+lsi)*1] = fp394;
LIBINT2_REALTYPE fp397;
fp397 = fp125 * fp73;
LIBINT2_REALTYPE fp396;
fp396 = fp397 * fp15;
target[((hsi*150+26)*1+lsi)*1] = fp396;
LIBINT2_REALTYPE fp130;
fp130 = 0.0000000000000000e+00 + src0[((hsi*30+20)*1+lsi)*1];
LIBINT2_REALTYPE fp129;
LIBINT2_REALTYPE fp128;
fp128 = libint2::fma_plus(inteval->BO_x[vi], fp127, fp130);
LIBINT2_REALTYPE fp399;
fp399 = fp128 * fp83;
LIBINT2_REALTYPE fp398;
fp398 = fp399 * fp13;
target[((hsi*150+25)*1+lsi)*1] = fp398;
LIBINT2_REALTYPE fp401;
fp401 = fp128 * fp79;
LIBINT2_REALTYPE fp400;
fp400 = fp401 * fp14;
target[((hsi*150+24)*1+lsi)*1] = fp400;
LIBINT2_REALTYPE fp403;
fp403 = fp128 * fp76;
LIBINT2_REALTYPE fp402;
fp402 = fp403 * fp15;
target[((hsi*150+23)*1+lsi)*1] = fp402;
LIBINT2_REALTYPE fp133;
fp133 = 0.0000000000000000e+00 + src0[((hsi*30+21)*1+lsi)*1];
LIBINT2_REALTYPE fp132;
LIBINT2_REALTYPE fp131;
fp131 = libint2::fma_plus(inteval->BO_x[vi], fp130, fp133);
LIBINT2_REALTYPE fp405;
fp405 = fp131 * fp83;
LIBINT2_REALTYPE fp404;
fp404 = fp405 * fp14;
target[((hsi*150+22)*1+lsi)*1] = fp404;
LIBINT2_REALTYPE fp407;
fp407 = fp131 * fp79;
LIBINT2_REALTYPE fp406;
fp406 = fp407 * fp15;
target[((hsi*150+21)*1+lsi)*1] = fp406;
LIBINT2_REALTYPE fp136;
fp136 = inteval->BO_x[vi] * fp133;
LIBINT2_REALTYPE fp134;
fp134 = 0.0000000000000000e+00 + src0[((hsi*30+22)*1+lsi)*1];
LIBINT2_REALTYPE fp135;
fp135 = fp134 + fp136;
LIBINT2_REALTYPE fp409;
fp409 = fp135 * fp83;
LIBINT2_REALTYPE fp408;
fp408 = fp409 * fp15;
target[((hsi*150+20)*1+lsi)*1] = fp408;
LIBINT2_REALTYPE fp411;
fp411 = fp125 * fp70;
LIBINT2_REALTYPE fp410;
fp410 = fp411 * fp16;
target[((hsi*150+19)*1+lsi)*1] = fp410;
LIBINT2_REALTYPE fp413;
fp413 = fp125 * fp66;
LIBINT2_REALTYPE fp412;
fp412 = fp413 * fp17;
target[((hsi*150+18)*1+lsi)*1] = fp412;
LIBINT2_REALTYPE fp415;
fp415 = fp125 * fp63;
LIBINT2_REALTYPE fp414;
fp414 = fp415 * fp18;
target[((hsi*150+17)*1+lsi)*1] = fp414;
LIBINT2_REALTYPE fp417;
fp417 = fp125 * fp60;
LIBINT2_REALTYPE fp416;
fp416 = fp417 * fp19;
target[((hsi*150+16)*1+lsi)*1] = fp416;
LIBINT2_REALTYPE fp419;
fp419 = fp128 * fp70;
LIBINT2_REALTYPE fp418;
fp418 = fp419 * fp17;
target[((hsi*150+15)*1+lsi)*1] = fp418;
LIBINT2_REALTYPE fp421;
fp421 = fp128 * fp66;
LIBINT2_REALTYPE fp420;
fp420 = fp421 * fp18;
target[((hsi*150+14)*1+lsi)*1] = fp420;
LIBINT2_REALTYPE fp423;
fp423 = fp128 * fp63;
LIBINT2_REALTYPE fp422;
fp422 = fp423 * fp19;
target[((hsi*150+13)*1+lsi)*1] = fp422;
LIBINT2_REALTYPE fp425;
fp425 = fp131 * fp70;
LIBINT2_REALTYPE fp424;
fp424 = fp425 * fp18;
target[((hsi*150+12)*1+lsi)*1] = fp424;
LIBINT2_REALTYPE fp427;
fp427 = fp131 * fp66;
LIBINT2_REALTYPE fp426;
fp426 = fp427 * fp19;
target[((hsi*150+11)*1+lsi)*1] = fp426;
LIBINT2_REALTYPE fp429;
fp429 = fp135 * fp70;
LIBINT2_REALTYPE fp428;
fp428 = fp429 * fp19;
target[((hsi*150+10)*1+lsi)*1] = fp428;
LIBINT2_REALTYPE fp140;
fp140 = 0.0000000000000000e+00 + src0[((hsi*30+25)*1+lsi)*1];
LIBINT2_REALTYPE fp137;
fp137 = 0.0000000000000000e+00 + src0[((hsi*30+24)*1+lsi)*1];
LIBINT2_REALTYPE fp139;
LIBINT2_REALTYPE fp138;
fp138 = libint2::fma_plus(inteval->BO_x[vi], fp137, fp140);
LIBINT2_REALTYPE fp431;
fp431 = fp138 * fp83;
LIBINT2_REALTYPE fp430;
fp430 = fp431 * fp16;
target[((hsi*150+9)*1+lsi)*1] = fp430;
LIBINT2_REALTYPE fp433;
fp433 = fp138 * fp79;
LIBINT2_REALTYPE fp432;
fp432 = fp433 * fp17;
target[((hsi*150+8)*1+lsi)*1] = fp432;
LIBINT2_REALTYPE fp435;
fp435 = fp138 * fp76;
LIBINT2_REALTYPE fp434;
fp434 = fp435 * fp18;
target[((hsi*150+7)*1+lsi)*1] = fp434;
LIBINT2_REALTYPE fp437;
fp437 = fp138 * fp73;
LIBINT2_REALTYPE fp436;
fp436 = fp437 * fp19;
target[((hsi*150+6)*1+lsi)*1] = fp436;
LIBINT2_REALTYPE fp143;
fp143 = 0.0000000000000000e+00 + src0[((hsi*30+26)*1+lsi)*1];
LIBINT2_REALTYPE fp142;
LIBINT2_REALTYPE fp141;
fp141 = libint2::fma_plus(inteval->BO_x[vi], fp140, fp143);
LIBINT2_REALTYPE fp439;
fp439 = fp141 * fp83;
LIBINT2_REALTYPE fp438;
fp438 = fp439 * fp17;
target[((hsi*150+5)*1+lsi)*1] = fp438;
LIBINT2_REALTYPE fp441;
fp441 = fp141 * fp79;
LIBINT2_REALTYPE fp440;
fp440 = fp441 * fp18;
target[((hsi*150+4)*1+lsi)*1] = fp440;
LIBINT2_REALTYPE fp443;
fp443 = fp141 * fp76;
LIBINT2_REALTYPE fp442;
fp442 = fp443 * fp19;
target[((hsi*150+3)*1+lsi)*1] = fp442;
LIBINT2_REALTYPE fp146;
fp146 = 0.0000000000000000e+00 + src0[((hsi*30+27)*1+lsi)*1];
LIBINT2_REALTYPE fp145;
LIBINT2_REALTYPE fp144;
fp144 = libint2::fma_plus(inteval->BO_x[vi], fp143, fp146);
LIBINT2_REALTYPE fp445;
fp445 = fp144 * fp83;
LIBINT2_REALTYPE fp444;
fp444 = fp445 * fp18;
target[((hsi*150+2)*1+lsi)*1] = fp444;
LIBINT2_REALTYPE fp447;
fp447 = fp144 * fp79;
LIBINT2_REALTYPE fp446;
fp446 = fp447 * fp19;
target[((hsi*150+1)*1+lsi)*1] = fp446;
LIBINT2_REALTYPE fp149;
fp149 = inteval->BO_x[vi] * fp146;
LIBINT2_REALTYPE fp147;
fp147 = 0.0000000000000000e+00 + src0[((hsi*30+28)*1+lsi)*1];
LIBINT2_REALTYPE fp148;
fp148 = fp147 + fp149;
LIBINT2_REALTYPE fp449;
fp449 = fp148 * fp83;
LIBINT2_REALTYPE fp448;
fp448 = fp449 * fp19;
target[((hsi*150+0)*1+lsi)*1] = fp448;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 450 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
