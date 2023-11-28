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
void CR_aB_g__0___CartesianMultipole_sB_2_c_0_c_1_Sb__f__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*35+31)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = inteval->BO_z[vi] * fp3;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*35+32)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = fp0 + fp2;
LIBINT2_REALTYPE fp84;
fp84 = 0.0000000000000000e+00 + src1[((hsi*35+0)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
fp95 = 0.0000000000000000e+00 + src0[((hsi*35+2)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
fp90 = 0.0000000000000000e+00 + src0[((hsi*35+1)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
LIBINT2_REALTYPE fp91;
fp91 = libint2::fma_plus(inteval->BO_x[vi], fp90, fp95);
LIBINT2_REALTYPE fp85;
fp85 = 0.0000000000000000e+00 + src0[((hsi*35+0)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
LIBINT2_REALTYPE fp86;
fp86 = libint2::fma_plus(inteval->BO_x[vi], fp85, fp90);
LIBINT2_REALTYPE fp89;
LIBINT2_REALTYPE fp88;
fp88 = libint2::fma_plus(inteval->BO_x[vi], fp86, fp91);
LIBINT2_REALTYPE fp206;
fp206 = fp88 * fp84;
LIBINT2_REALTYPE fp205;
fp205 = fp206 * fp1;
target[((hsi*150+149)*1+lsi)*1] = fp205;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*35+30)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
LIBINT2_REALTYPE fp4;
fp4 = libint2::fma_plus(inteval->BO_z[vi], fp6, fp3);
LIBINT2_REALTYPE fp83;
fp83 = 0.0000000000000000e+00 + src1[((hsi*35+1)*1+lsi)*1];
LIBINT2_REALTYPE fp208;
fp208 = fp88 * fp83;
LIBINT2_REALTYPE fp207;
fp207 = fp208 * fp4;
target[((hsi*150+148)*1+lsi)*1] = fp207;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src2[((hsi*35+29)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
LIBINT2_REALTYPE fp7;
fp7 = libint2::fma_plus(inteval->BO_z[vi], fp10, fp6);
LIBINT2_REALTYPE fp82;
fp82 = 0.0000000000000000e+00 + src1[((hsi*35+2)*1+lsi)*1];
LIBINT2_REALTYPE fp210;
fp210 = fp88 * fp82;
LIBINT2_REALTYPE fp209;
fp209 = fp210 * fp7;
target[((hsi*150+147)*1+lsi)*1] = fp209;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src2[((hsi*35+28)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
LIBINT2_REALTYPE fp11;
fp11 = libint2::fma_plus(inteval->BO_z[vi], fp9, fp10);
LIBINT2_REALTYPE fp81;
fp81 = 0.0000000000000000e+00 + src1[((hsi*35+3)*1+lsi)*1];
LIBINT2_REALTYPE fp212;
fp212 = fp88 * fp81;
LIBINT2_REALTYPE fp211;
fp211 = fp212 * fp11;
target[((hsi*150+146)*1+lsi)*1] = fp211;
LIBINT2_REALTYPE fp100;
fp100 = 0.0000000000000000e+00 + src0[((hsi*35+3)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
LIBINT2_REALTYPE fp96;
fp96 = libint2::fma_plus(inteval->BO_x[vi], fp95, fp100);
LIBINT2_REALTYPE fp94;
LIBINT2_REALTYPE fp93;
fp93 = libint2::fma_plus(inteval->BO_x[vi], fp91, fp96);
LIBINT2_REALTYPE fp214;
fp214 = fp93 * fp84;
LIBINT2_REALTYPE fp213;
fp213 = fp214 * fp4;
target[((hsi*150+145)*1+lsi)*1] = fp213;
LIBINT2_REALTYPE fp216;
fp216 = fp93 * fp83;
LIBINT2_REALTYPE fp215;
fp215 = fp216 * fp7;
target[((hsi*150+144)*1+lsi)*1] = fp215;
LIBINT2_REALTYPE fp218;
fp218 = fp93 * fp82;
LIBINT2_REALTYPE fp217;
fp217 = fp218 * fp11;
target[((hsi*150+143)*1+lsi)*1] = fp217;
LIBINT2_REALTYPE fp101;
fp101 = 0.0000000000000000e+00 + src0[((hsi*35+4)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
LIBINT2_REALTYPE fp103;
fp103 = libint2::fma_plus(inteval->BO_x[vi], fp100, fp101);
LIBINT2_REALTYPE fp99;
LIBINT2_REALTYPE fp98;
fp98 = libint2::fma_plus(inteval->BO_x[vi], fp96, fp103);
LIBINT2_REALTYPE fp220;
fp220 = fp98 * fp84;
LIBINT2_REALTYPE fp219;
fp219 = fp220 * fp7;
target[((hsi*150+142)*1+lsi)*1] = fp219;
LIBINT2_REALTYPE fp222;
fp222 = fp98 * fp83;
LIBINT2_REALTYPE fp221;
fp221 = fp222 * fp11;
target[((hsi*150+141)*1+lsi)*1] = fp221;
LIBINT2_REALTYPE fp108;
fp108 = inteval->BO_x[vi] * fp103;
LIBINT2_REALTYPE fp106;
fp106 = inteval->BO_x[vi] * fp101;
LIBINT2_REALTYPE fp102;
fp102 = 0.0000000000000000e+00 + src0[((hsi*35+5)*1+lsi)*1];
LIBINT2_REALTYPE fp105;
fp105 = fp102 + fp106;
LIBINT2_REALTYPE fp107;
fp107 = fp105 + fp108;
LIBINT2_REALTYPE fp224;
fp224 = fp107 * fp84;
LIBINT2_REALTYPE fp223;
fp223 = fp224 * fp11;
target[((hsi*150+140)*1+lsi)*1] = fp223;
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src2[((hsi*35+24)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = inteval->BO_z[vi] * fp16;
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src2[((hsi*35+25)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = fp13 + fp15;
LIBINT2_REALTYPE fp80;
fp80 = 0.0000000000000000e+00 + src1[((hsi*35+7)*1+lsi)*1];
LIBINT2_REALTYPE fp226;
fp226 = fp88 * fp80;
LIBINT2_REALTYPE fp225;
fp225 = fp226 * fp14;
target[((hsi*150+139)*1+lsi)*1] = fp225;
LIBINT2_REALTYPE fp19;
fp19 = 0.0000000000000000e+00 + src2[((hsi*35+23)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
LIBINT2_REALTYPE fp17;
fp17 = libint2::fma_plus(inteval->BO_z[vi], fp19, fp16);
LIBINT2_REALTYPE fp79;
fp79 = 0.0000000000000000e+00 + src1[((hsi*35+8)*1+lsi)*1];
LIBINT2_REALTYPE fp228;
fp228 = fp88 * fp79;
LIBINT2_REALTYPE fp227;
fp227 = fp228 * fp17;
target[((hsi*150+138)*1+lsi)*1] = fp227;
LIBINT2_REALTYPE fp23;
fp23 = 0.0000000000000000e+00 + src2[((hsi*35+22)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
LIBINT2_REALTYPE fp20;
fp20 = libint2::fma_plus(inteval->BO_z[vi], fp23, fp19);
LIBINT2_REALTYPE fp78;
fp78 = 0.0000000000000000e+00 + src1[((hsi*35+9)*1+lsi)*1];
LIBINT2_REALTYPE fp230;
fp230 = fp88 * fp78;
LIBINT2_REALTYPE fp229;
fp229 = fp230 * fp20;
target[((hsi*150+137)*1+lsi)*1] = fp229;
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + src2[((hsi*35+21)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->BO_z[vi], fp22, fp23);
LIBINT2_REALTYPE fp77;
fp77 = 0.0000000000000000e+00 + src1[((hsi*35+10)*1+lsi)*1];
LIBINT2_REALTYPE fp232;
fp232 = fp88 * fp77;
LIBINT2_REALTYPE fp231;
fp231 = fp232 * fp24;
target[((hsi*150+136)*1+lsi)*1] = fp231;
LIBINT2_REALTYPE fp234;
fp234 = fp93 * fp80;
LIBINT2_REALTYPE fp233;
fp233 = fp234 * fp17;
target[((hsi*150+135)*1+lsi)*1] = fp233;
LIBINT2_REALTYPE fp236;
fp236 = fp93 * fp79;
LIBINT2_REALTYPE fp235;
fp235 = fp236 * fp20;
target[((hsi*150+134)*1+lsi)*1] = fp235;
LIBINT2_REALTYPE fp238;
fp238 = fp93 * fp78;
LIBINT2_REALTYPE fp237;
fp237 = fp238 * fp24;
target[((hsi*150+133)*1+lsi)*1] = fp237;
LIBINT2_REALTYPE fp240;
fp240 = fp98 * fp80;
LIBINT2_REALTYPE fp239;
fp239 = fp240 * fp20;
target[((hsi*150+132)*1+lsi)*1] = fp239;
LIBINT2_REALTYPE fp242;
fp242 = fp98 * fp79;
LIBINT2_REALTYPE fp241;
fp241 = fp242 * fp24;
target[((hsi*150+131)*1+lsi)*1] = fp241;
LIBINT2_REALTYPE fp244;
fp244 = fp107 * fp80;
LIBINT2_REALTYPE fp243;
fp243 = fp244 * fp24;
target[((hsi*150+130)*1+lsi)*1] = fp243;
LIBINT2_REALTYPE fp29;
fp29 = 0.0000000000000000e+00 + src2[((hsi*35+17)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = inteval->BO_z[vi] * fp29;
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src2[((hsi*35+18)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = fp26 + fp28;
LIBINT2_REALTYPE fp76;
fp76 = 0.0000000000000000e+00 + src1[((hsi*35+14)*1+lsi)*1];
LIBINT2_REALTYPE fp246;
fp246 = fp88 * fp76;
LIBINT2_REALTYPE fp245;
fp245 = fp246 * fp27;
target[((hsi*150+129)*1+lsi)*1] = fp245;
LIBINT2_REALTYPE fp32;
fp32 = 0.0000000000000000e+00 + src2[((hsi*35+16)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_plus(inteval->BO_z[vi], fp32, fp29);
LIBINT2_REALTYPE fp75;
fp75 = 0.0000000000000000e+00 + src1[((hsi*35+15)*1+lsi)*1];
LIBINT2_REALTYPE fp248;
fp248 = fp88 * fp75;
LIBINT2_REALTYPE fp247;
fp247 = fp248 * fp30;
target[((hsi*150+128)*1+lsi)*1] = fp247;
LIBINT2_REALTYPE fp36;
fp36 = 0.0000000000000000e+00 + src2[((hsi*35+15)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
LIBINT2_REALTYPE fp33;
fp33 = libint2::fma_plus(inteval->BO_z[vi], fp36, fp32);
LIBINT2_REALTYPE fp74;
fp74 = 0.0000000000000000e+00 + src1[((hsi*35+16)*1+lsi)*1];
LIBINT2_REALTYPE fp250;
fp250 = fp88 * fp74;
LIBINT2_REALTYPE fp249;
fp249 = fp250 * fp33;
target[((hsi*150+127)*1+lsi)*1] = fp249;
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + src2[((hsi*35+14)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
LIBINT2_REALTYPE fp37;
fp37 = libint2::fma_plus(inteval->BO_z[vi], fp35, fp36);
LIBINT2_REALTYPE fp73;
fp73 = 0.0000000000000000e+00 + src1[((hsi*35+17)*1+lsi)*1];
LIBINT2_REALTYPE fp252;
fp252 = fp88 * fp73;
LIBINT2_REALTYPE fp251;
fp251 = fp252 * fp37;
target[((hsi*150+126)*1+lsi)*1] = fp251;
LIBINT2_REALTYPE fp254;
fp254 = fp93 * fp76;
LIBINT2_REALTYPE fp253;
fp253 = fp254 * fp30;
target[((hsi*150+125)*1+lsi)*1] = fp253;
LIBINT2_REALTYPE fp256;
fp256 = fp93 * fp75;
LIBINT2_REALTYPE fp255;
fp255 = fp256 * fp33;
target[((hsi*150+124)*1+lsi)*1] = fp255;
LIBINT2_REALTYPE fp258;
fp258 = fp93 * fp74;
LIBINT2_REALTYPE fp257;
fp257 = fp258 * fp37;
target[((hsi*150+123)*1+lsi)*1] = fp257;
LIBINT2_REALTYPE fp260;
fp260 = fp98 * fp76;
LIBINT2_REALTYPE fp259;
fp259 = fp260 * fp33;
target[((hsi*150+122)*1+lsi)*1] = fp259;
LIBINT2_REALTYPE fp262;
fp262 = fp98 * fp75;
LIBINT2_REALTYPE fp261;
fp261 = fp262 * fp37;
target[((hsi*150+121)*1+lsi)*1] = fp261;
LIBINT2_REALTYPE fp264;
fp264 = fp107 * fp76;
LIBINT2_REALTYPE fp263;
fp263 = fp264 * fp37;
target[((hsi*150+120)*1+lsi)*1] = fp263;
LIBINT2_REALTYPE fp42;
fp42 = 0.0000000000000000e+00 + src2[((hsi*35+10)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = inteval->BO_z[vi] * fp42;
LIBINT2_REALTYPE fp39;
fp39 = 0.0000000000000000e+00 + src2[((hsi*35+11)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = fp39 + fp41;
LIBINT2_REALTYPE fp72;
fp72 = 0.0000000000000000e+00 + src1[((hsi*35+21)*1+lsi)*1];
LIBINT2_REALTYPE fp266;
fp266 = fp88 * fp72;
LIBINT2_REALTYPE fp265;
fp265 = fp266 * fp40;
target[((hsi*150+119)*1+lsi)*1] = fp265;
LIBINT2_REALTYPE fp45;
fp45 = 0.0000000000000000e+00 + src2[((hsi*35+9)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
LIBINT2_REALTYPE fp43;
fp43 = libint2::fma_plus(inteval->BO_z[vi], fp45, fp42);
LIBINT2_REALTYPE fp71;
fp71 = 0.0000000000000000e+00 + src1[((hsi*35+22)*1+lsi)*1];
LIBINT2_REALTYPE fp268;
fp268 = fp88 * fp71;
LIBINT2_REALTYPE fp267;
fp267 = fp268 * fp43;
target[((hsi*150+118)*1+lsi)*1] = fp267;
LIBINT2_REALTYPE fp49;
fp49 = 0.0000000000000000e+00 + src2[((hsi*35+8)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
LIBINT2_REALTYPE fp46;
fp46 = libint2::fma_plus(inteval->BO_z[vi], fp49, fp45);
LIBINT2_REALTYPE fp70;
fp70 = 0.0000000000000000e+00 + src1[((hsi*35+23)*1+lsi)*1];
LIBINT2_REALTYPE fp270;
fp270 = fp88 * fp70;
LIBINT2_REALTYPE fp269;
fp269 = fp270 * fp46;
target[((hsi*150+117)*1+lsi)*1] = fp269;
LIBINT2_REALTYPE fp48;
fp48 = 0.0000000000000000e+00 + src2[((hsi*35+7)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
LIBINT2_REALTYPE fp50;
fp50 = libint2::fma_plus(inteval->BO_z[vi], fp48, fp49);
LIBINT2_REALTYPE fp69;
fp69 = 0.0000000000000000e+00 + src1[((hsi*35+24)*1+lsi)*1];
LIBINT2_REALTYPE fp272;
fp272 = fp88 * fp69;
LIBINT2_REALTYPE fp271;
fp271 = fp272 * fp50;
target[((hsi*150+116)*1+lsi)*1] = fp271;
LIBINT2_REALTYPE fp274;
fp274 = fp93 * fp72;
LIBINT2_REALTYPE fp273;
fp273 = fp274 * fp43;
target[((hsi*150+115)*1+lsi)*1] = fp273;
LIBINT2_REALTYPE fp276;
fp276 = fp93 * fp71;
LIBINT2_REALTYPE fp275;
fp275 = fp276 * fp46;
target[((hsi*150+114)*1+lsi)*1] = fp275;
LIBINT2_REALTYPE fp278;
fp278 = fp93 * fp70;
LIBINT2_REALTYPE fp277;
fp277 = fp278 * fp50;
target[((hsi*150+113)*1+lsi)*1] = fp277;
LIBINT2_REALTYPE fp280;
fp280 = fp98 * fp72;
LIBINT2_REALTYPE fp279;
fp279 = fp280 * fp46;
target[((hsi*150+112)*1+lsi)*1] = fp279;
LIBINT2_REALTYPE fp282;
fp282 = fp98 * fp71;
LIBINT2_REALTYPE fp281;
fp281 = fp282 * fp50;
target[((hsi*150+111)*1+lsi)*1] = fp281;
LIBINT2_REALTYPE fp284;
fp284 = fp107 * fp72;
LIBINT2_REALTYPE fp283;
fp283 = fp284 * fp50;
target[((hsi*150+110)*1+lsi)*1] = fp283;
LIBINT2_REALTYPE fp55;
fp55 = 0.0000000000000000e+00 + src2[((hsi*35+3)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = inteval->BO_z[vi] * fp55;
LIBINT2_REALTYPE fp52;
fp52 = 0.0000000000000000e+00 + src2[((hsi*35+4)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = fp52 + fp54;
LIBINT2_REALTYPE fp68;
fp68 = 0.0000000000000000e+00 + src1[((hsi*35+28)*1+lsi)*1];
LIBINT2_REALTYPE fp286;
fp286 = fp88 * fp68;
LIBINT2_REALTYPE fp285;
fp285 = fp286 * fp53;
target[((hsi*150+109)*1+lsi)*1] = fp285;
LIBINT2_REALTYPE fp58;
fp58 = 0.0000000000000000e+00 + src2[((hsi*35+2)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
LIBINT2_REALTYPE fp56;
fp56 = libint2::fma_plus(inteval->BO_z[vi], fp58, fp55);
LIBINT2_REALTYPE fp67;
fp67 = 0.0000000000000000e+00 + src1[((hsi*35+29)*1+lsi)*1];
LIBINT2_REALTYPE fp288;
fp288 = fp88 * fp67;
LIBINT2_REALTYPE fp287;
fp287 = fp288 * fp56;
target[((hsi*150+108)*1+lsi)*1] = fp287;
LIBINT2_REALTYPE fp62;
fp62 = 0.0000000000000000e+00 + src2[((hsi*35+1)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
LIBINT2_REALTYPE fp59;
fp59 = libint2::fma_plus(inteval->BO_z[vi], fp62, fp58);
LIBINT2_REALTYPE fp66;
fp66 = 0.0000000000000000e+00 + src1[((hsi*35+30)*1+lsi)*1];
LIBINT2_REALTYPE fp290;
fp290 = fp88 * fp66;
LIBINT2_REALTYPE fp289;
fp289 = fp290 * fp59;
target[((hsi*150+107)*1+lsi)*1] = fp289;
LIBINT2_REALTYPE fp61;
fp61 = 0.0000000000000000e+00 + src2[((hsi*35+0)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
LIBINT2_REALTYPE fp63;
fp63 = libint2::fma_plus(inteval->BO_z[vi], fp61, fp62);
LIBINT2_REALTYPE fp65;
fp65 = 0.0000000000000000e+00 + src1[((hsi*35+31)*1+lsi)*1];
LIBINT2_REALTYPE fp292;
fp292 = fp88 * fp65;
LIBINT2_REALTYPE fp291;
fp291 = fp292 * fp63;
target[((hsi*150+106)*1+lsi)*1] = fp291;
LIBINT2_REALTYPE fp294;
fp294 = fp93 * fp68;
LIBINT2_REALTYPE fp293;
fp293 = fp294 * fp56;
target[((hsi*150+105)*1+lsi)*1] = fp293;
LIBINT2_REALTYPE fp296;
fp296 = fp93 * fp67;
LIBINT2_REALTYPE fp295;
fp295 = fp296 * fp59;
target[((hsi*150+104)*1+lsi)*1] = fp295;
LIBINT2_REALTYPE fp298;
fp298 = fp93 * fp66;
LIBINT2_REALTYPE fp297;
fp297 = fp298 * fp63;
target[((hsi*150+103)*1+lsi)*1] = fp297;
LIBINT2_REALTYPE fp300;
fp300 = fp98 * fp68;
LIBINT2_REALTYPE fp299;
fp299 = fp300 * fp59;
target[((hsi*150+102)*1+lsi)*1] = fp299;
LIBINT2_REALTYPE fp302;
fp302 = fp98 * fp67;
LIBINT2_REALTYPE fp301;
fp301 = fp302 * fp63;
target[((hsi*150+101)*1+lsi)*1] = fp301;
LIBINT2_REALTYPE fp304;
fp304 = fp107 * fp68;
LIBINT2_REALTYPE fp303;
fp303 = fp304 * fp63;
target[((hsi*150+100)*1+lsi)*1] = fp303;
LIBINT2_REALTYPE fp119;
fp119 = 0.0000000000000000e+00 + src0[((hsi*35+9)*1+lsi)*1];
LIBINT2_REALTYPE fp114;
fp114 = 0.0000000000000000e+00 + src0[((hsi*35+8)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
LIBINT2_REALTYPE fp115;
fp115 = libint2::fma_plus(inteval->BO_x[vi], fp114, fp119);
LIBINT2_REALTYPE fp109;
fp109 = 0.0000000000000000e+00 + src0[((hsi*35+7)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
LIBINT2_REALTYPE fp110;
fp110 = libint2::fma_plus(inteval->BO_x[vi], fp109, fp114);
LIBINT2_REALTYPE fp113;
LIBINT2_REALTYPE fp112;
fp112 = libint2::fma_plus(inteval->BO_x[vi], fp110, fp115);
LIBINT2_REALTYPE fp306;
fp306 = fp112 * fp84;
LIBINT2_REALTYPE fp305;
fp305 = fp306 * fp14;
target[((hsi*150+99)*1+lsi)*1] = fp305;
LIBINT2_REALTYPE fp308;
fp308 = fp112 * fp83;
LIBINT2_REALTYPE fp307;
fp307 = fp308 * fp17;
target[((hsi*150+98)*1+lsi)*1] = fp307;
LIBINT2_REALTYPE fp310;
fp310 = fp112 * fp82;
LIBINT2_REALTYPE fp309;
fp309 = fp310 * fp20;
target[((hsi*150+97)*1+lsi)*1] = fp309;
LIBINT2_REALTYPE fp312;
fp312 = fp112 * fp81;
LIBINT2_REALTYPE fp311;
fp311 = fp312 * fp24;
target[((hsi*150+96)*1+lsi)*1] = fp311;
LIBINT2_REALTYPE fp124;
fp124 = 0.0000000000000000e+00 + src0[((hsi*35+10)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
LIBINT2_REALTYPE fp120;
fp120 = libint2::fma_plus(inteval->BO_x[vi], fp119, fp124);
LIBINT2_REALTYPE fp118;
LIBINT2_REALTYPE fp117;
fp117 = libint2::fma_plus(inteval->BO_x[vi], fp115, fp120);
LIBINT2_REALTYPE fp314;
fp314 = fp117 * fp84;
LIBINT2_REALTYPE fp313;
fp313 = fp314 * fp17;
target[((hsi*150+95)*1+lsi)*1] = fp313;
LIBINT2_REALTYPE fp316;
fp316 = fp117 * fp83;
LIBINT2_REALTYPE fp315;
fp315 = fp316 * fp20;
target[((hsi*150+94)*1+lsi)*1] = fp315;
LIBINT2_REALTYPE fp318;
fp318 = fp117 * fp82;
LIBINT2_REALTYPE fp317;
fp317 = fp318 * fp24;
target[((hsi*150+93)*1+lsi)*1] = fp317;
LIBINT2_REALTYPE fp125;
fp125 = 0.0000000000000000e+00 + src0[((hsi*35+11)*1+lsi)*1];
LIBINT2_REALTYPE fp128;
LIBINT2_REALTYPE fp127;
fp127 = libint2::fma_plus(inteval->BO_x[vi], fp124, fp125);
LIBINT2_REALTYPE fp123;
LIBINT2_REALTYPE fp122;
fp122 = libint2::fma_plus(inteval->BO_x[vi], fp120, fp127);
LIBINT2_REALTYPE fp320;
fp320 = fp122 * fp84;
LIBINT2_REALTYPE fp319;
fp319 = fp320 * fp20;
target[((hsi*150+92)*1+lsi)*1] = fp319;
LIBINT2_REALTYPE fp322;
fp322 = fp122 * fp83;
LIBINT2_REALTYPE fp321;
fp321 = fp322 * fp24;
target[((hsi*150+91)*1+lsi)*1] = fp321;
LIBINT2_REALTYPE fp132;
fp132 = inteval->BO_x[vi] * fp127;
LIBINT2_REALTYPE fp130;
fp130 = inteval->BO_x[vi] * fp125;
LIBINT2_REALTYPE fp126;
fp126 = 0.0000000000000000e+00 + src0[((hsi*35+12)*1+lsi)*1];
LIBINT2_REALTYPE fp129;
fp129 = fp126 + fp130;
LIBINT2_REALTYPE fp131;
fp131 = fp129 + fp132;
LIBINT2_REALTYPE fp324;
fp324 = fp131 * fp84;
LIBINT2_REALTYPE fp323;
fp323 = fp324 * fp24;
target[((hsi*150+90)*1+lsi)*1] = fp323;
LIBINT2_REALTYPE fp326;
fp326 = fp112 * fp80;
LIBINT2_REALTYPE fp325;
fp325 = fp326 * fp27;
target[((hsi*150+89)*1+lsi)*1] = fp325;
LIBINT2_REALTYPE fp328;
fp328 = fp112 * fp79;
LIBINT2_REALTYPE fp327;
fp327 = fp328 * fp30;
target[((hsi*150+88)*1+lsi)*1] = fp327;
LIBINT2_REALTYPE fp330;
fp330 = fp112 * fp78;
LIBINT2_REALTYPE fp329;
fp329 = fp330 * fp33;
target[((hsi*150+87)*1+lsi)*1] = fp329;
LIBINT2_REALTYPE fp332;
fp332 = fp112 * fp77;
LIBINT2_REALTYPE fp331;
fp331 = fp332 * fp37;
target[((hsi*150+86)*1+lsi)*1] = fp331;
LIBINT2_REALTYPE fp334;
fp334 = fp117 * fp80;
LIBINT2_REALTYPE fp333;
fp333 = fp334 * fp30;
target[((hsi*150+85)*1+lsi)*1] = fp333;
LIBINT2_REALTYPE fp336;
fp336 = fp117 * fp79;
LIBINT2_REALTYPE fp335;
fp335 = fp336 * fp33;
target[((hsi*150+84)*1+lsi)*1] = fp335;
LIBINT2_REALTYPE fp338;
fp338 = fp117 * fp78;
LIBINT2_REALTYPE fp337;
fp337 = fp338 * fp37;
target[((hsi*150+83)*1+lsi)*1] = fp337;
LIBINT2_REALTYPE fp340;
fp340 = fp122 * fp80;
LIBINT2_REALTYPE fp339;
fp339 = fp340 * fp33;
target[((hsi*150+82)*1+lsi)*1] = fp339;
LIBINT2_REALTYPE fp342;
fp342 = fp122 * fp79;
LIBINT2_REALTYPE fp341;
fp341 = fp342 * fp37;
target[((hsi*150+81)*1+lsi)*1] = fp341;
LIBINT2_REALTYPE fp344;
fp344 = fp131 * fp80;
LIBINT2_REALTYPE fp343;
fp343 = fp344 * fp37;
target[((hsi*150+80)*1+lsi)*1] = fp343;
LIBINT2_REALTYPE fp346;
fp346 = fp112 * fp76;
LIBINT2_REALTYPE fp345;
fp345 = fp346 * fp40;
target[((hsi*150+79)*1+lsi)*1] = fp345;
LIBINT2_REALTYPE fp348;
fp348 = fp112 * fp75;
LIBINT2_REALTYPE fp347;
fp347 = fp348 * fp43;
target[((hsi*150+78)*1+lsi)*1] = fp347;
LIBINT2_REALTYPE fp350;
fp350 = fp112 * fp74;
LIBINT2_REALTYPE fp349;
fp349 = fp350 * fp46;
target[((hsi*150+77)*1+lsi)*1] = fp349;
LIBINT2_REALTYPE fp352;
fp352 = fp112 * fp73;
LIBINT2_REALTYPE fp351;
fp351 = fp352 * fp50;
target[((hsi*150+76)*1+lsi)*1] = fp351;
LIBINT2_REALTYPE fp354;
fp354 = fp117 * fp76;
LIBINT2_REALTYPE fp353;
fp353 = fp354 * fp43;
target[((hsi*150+75)*1+lsi)*1] = fp353;
LIBINT2_REALTYPE fp356;
fp356 = fp117 * fp75;
LIBINT2_REALTYPE fp355;
fp355 = fp356 * fp46;
target[((hsi*150+74)*1+lsi)*1] = fp355;
LIBINT2_REALTYPE fp358;
fp358 = fp117 * fp74;
LIBINT2_REALTYPE fp357;
fp357 = fp358 * fp50;
target[((hsi*150+73)*1+lsi)*1] = fp357;
LIBINT2_REALTYPE fp360;
fp360 = fp122 * fp76;
LIBINT2_REALTYPE fp359;
fp359 = fp360 * fp46;
target[((hsi*150+72)*1+lsi)*1] = fp359;
LIBINT2_REALTYPE fp362;
fp362 = fp122 * fp75;
LIBINT2_REALTYPE fp361;
fp361 = fp362 * fp50;
target[((hsi*150+71)*1+lsi)*1] = fp361;
LIBINT2_REALTYPE fp364;
fp364 = fp131 * fp76;
LIBINT2_REALTYPE fp363;
fp363 = fp364 * fp50;
target[((hsi*150+70)*1+lsi)*1] = fp363;
LIBINT2_REALTYPE fp366;
fp366 = fp112 * fp72;
LIBINT2_REALTYPE fp365;
fp365 = fp366 * fp53;
target[((hsi*150+69)*1+lsi)*1] = fp365;
LIBINT2_REALTYPE fp368;
fp368 = fp112 * fp71;
LIBINT2_REALTYPE fp367;
fp367 = fp368 * fp56;
target[((hsi*150+68)*1+lsi)*1] = fp367;
LIBINT2_REALTYPE fp370;
fp370 = fp112 * fp70;
LIBINT2_REALTYPE fp369;
fp369 = fp370 * fp59;
target[((hsi*150+67)*1+lsi)*1] = fp369;
LIBINT2_REALTYPE fp372;
fp372 = fp112 * fp69;
LIBINT2_REALTYPE fp371;
fp371 = fp372 * fp63;
target[((hsi*150+66)*1+lsi)*1] = fp371;
LIBINT2_REALTYPE fp374;
fp374 = fp117 * fp72;
LIBINT2_REALTYPE fp373;
fp373 = fp374 * fp56;
target[((hsi*150+65)*1+lsi)*1] = fp373;
LIBINT2_REALTYPE fp376;
fp376 = fp117 * fp71;
LIBINT2_REALTYPE fp375;
fp375 = fp376 * fp59;
target[((hsi*150+64)*1+lsi)*1] = fp375;
LIBINT2_REALTYPE fp378;
fp378 = fp117 * fp70;
LIBINT2_REALTYPE fp377;
fp377 = fp378 * fp63;
target[((hsi*150+63)*1+lsi)*1] = fp377;
LIBINT2_REALTYPE fp380;
fp380 = fp122 * fp72;
LIBINT2_REALTYPE fp379;
fp379 = fp380 * fp59;
target[((hsi*150+62)*1+lsi)*1] = fp379;
LIBINT2_REALTYPE fp382;
fp382 = fp122 * fp71;
LIBINT2_REALTYPE fp381;
fp381 = fp382 * fp63;
target[((hsi*150+61)*1+lsi)*1] = fp381;
LIBINT2_REALTYPE fp384;
fp384 = fp131 * fp72;
LIBINT2_REALTYPE fp383;
fp383 = fp384 * fp63;
target[((hsi*150+60)*1+lsi)*1] = fp383;
LIBINT2_REALTYPE fp143;
fp143 = 0.0000000000000000e+00 + src0[((hsi*35+16)*1+lsi)*1];
LIBINT2_REALTYPE fp138;
fp138 = 0.0000000000000000e+00 + src0[((hsi*35+15)*1+lsi)*1];
LIBINT2_REALTYPE fp140;
LIBINT2_REALTYPE fp139;
fp139 = libint2::fma_plus(inteval->BO_x[vi], fp138, fp143);
LIBINT2_REALTYPE fp133;
fp133 = 0.0000000000000000e+00 + src0[((hsi*35+14)*1+lsi)*1];
LIBINT2_REALTYPE fp135;
LIBINT2_REALTYPE fp134;
fp134 = libint2::fma_plus(inteval->BO_x[vi], fp133, fp138);
LIBINT2_REALTYPE fp137;
LIBINT2_REALTYPE fp136;
fp136 = libint2::fma_plus(inteval->BO_x[vi], fp134, fp139);
LIBINT2_REALTYPE fp386;
fp386 = fp136 * fp84;
LIBINT2_REALTYPE fp385;
fp385 = fp386 * fp27;
target[((hsi*150+59)*1+lsi)*1] = fp385;
LIBINT2_REALTYPE fp388;
fp388 = fp136 * fp83;
LIBINT2_REALTYPE fp387;
fp387 = fp388 * fp30;
target[((hsi*150+58)*1+lsi)*1] = fp387;
LIBINT2_REALTYPE fp390;
fp390 = fp136 * fp82;
LIBINT2_REALTYPE fp389;
fp389 = fp390 * fp33;
target[((hsi*150+57)*1+lsi)*1] = fp389;
LIBINT2_REALTYPE fp392;
fp392 = fp136 * fp81;
LIBINT2_REALTYPE fp391;
fp391 = fp392 * fp37;
target[((hsi*150+56)*1+lsi)*1] = fp391;
LIBINT2_REALTYPE fp148;
fp148 = 0.0000000000000000e+00 + src0[((hsi*35+17)*1+lsi)*1];
LIBINT2_REALTYPE fp145;
LIBINT2_REALTYPE fp144;
fp144 = libint2::fma_plus(inteval->BO_x[vi], fp143, fp148);
LIBINT2_REALTYPE fp142;
LIBINT2_REALTYPE fp141;
fp141 = libint2::fma_plus(inteval->BO_x[vi], fp139, fp144);
LIBINT2_REALTYPE fp394;
fp394 = fp141 * fp84;
LIBINT2_REALTYPE fp393;
fp393 = fp394 * fp30;
target[((hsi*150+55)*1+lsi)*1] = fp393;
LIBINT2_REALTYPE fp396;
fp396 = fp141 * fp83;
LIBINT2_REALTYPE fp395;
fp395 = fp396 * fp33;
target[((hsi*150+54)*1+lsi)*1] = fp395;
LIBINT2_REALTYPE fp398;
fp398 = fp141 * fp82;
LIBINT2_REALTYPE fp397;
fp397 = fp398 * fp37;
target[((hsi*150+53)*1+lsi)*1] = fp397;
LIBINT2_REALTYPE fp149;
fp149 = 0.0000000000000000e+00 + src0[((hsi*35+18)*1+lsi)*1];
LIBINT2_REALTYPE fp152;
LIBINT2_REALTYPE fp151;
fp151 = libint2::fma_plus(inteval->BO_x[vi], fp148, fp149);
LIBINT2_REALTYPE fp147;
LIBINT2_REALTYPE fp146;
fp146 = libint2::fma_plus(inteval->BO_x[vi], fp144, fp151);
LIBINT2_REALTYPE fp400;
fp400 = fp146 * fp84;
LIBINT2_REALTYPE fp399;
fp399 = fp400 * fp33;
target[((hsi*150+52)*1+lsi)*1] = fp399;
LIBINT2_REALTYPE fp402;
fp402 = fp146 * fp83;
LIBINT2_REALTYPE fp401;
fp401 = fp402 * fp37;
target[((hsi*150+51)*1+lsi)*1] = fp401;
LIBINT2_REALTYPE fp156;
fp156 = inteval->BO_x[vi] * fp151;
LIBINT2_REALTYPE fp154;
fp154 = inteval->BO_x[vi] * fp149;
LIBINT2_REALTYPE fp150;
fp150 = 0.0000000000000000e+00 + src0[((hsi*35+19)*1+lsi)*1];
LIBINT2_REALTYPE fp153;
fp153 = fp150 + fp154;
LIBINT2_REALTYPE fp155;
fp155 = fp153 + fp156;
LIBINT2_REALTYPE fp404;
fp404 = fp155 * fp84;
LIBINT2_REALTYPE fp403;
fp403 = fp404 * fp37;
target[((hsi*150+50)*1+lsi)*1] = fp403;
LIBINT2_REALTYPE fp406;
fp406 = fp136 * fp80;
LIBINT2_REALTYPE fp405;
fp405 = fp406 * fp40;
target[((hsi*150+49)*1+lsi)*1] = fp405;
LIBINT2_REALTYPE fp408;
fp408 = fp136 * fp79;
LIBINT2_REALTYPE fp407;
fp407 = fp408 * fp43;
target[((hsi*150+48)*1+lsi)*1] = fp407;
LIBINT2_REALTYPE fp410;
fp410 = fp136 * fp78;
LIBINT2_REALTYPE fp409;
fp409 = fp410 * fp46;
target[((hsi*150+47)*1+lsi)*1] = fp409;
LIBINT2_REALTYPE fp412;
fp412 = fp136 * fp77;
LIBINT2_REALTYPE fp411;
fp411 = fp412 * fp50;
target[((hsi*150+46)*1+lsi)*1] = fp411;
LIBINT2_REALTYPE fp414;
fp414 = fp141 * fp80;
LIBINT2_REALTYPE fp413;
fp413 = fp414 * fp43;
target[((hsi*150+45)*1+lsi)*1] = fp413;
LIBINT2_REALTYPE fp416;
fp416 = fp141 * fp79;
LIBINT2_REALTYPE fp415;
fp415 = fp416 * fp46;
target[((hsi*150+44)*1+lsi)*1] = fp415;
LIBINT2_REALTYPE fp418;
fp418 = fp141 * fp78;
LIBINT2_REALTYPE fp417;
fp417 = fp418 * fp50;
target[((hsi*150+43)*1+lsi)*1] = fp417;
LIBINT2_REALTYPE fp420;
fp420 = fp146 * fp80;
LIBINT2_REALTYPE fp419;
fp419 = fp420 * fp46;
target[((hsi*150+42)*1+lsi)*1] = fp419;
LIBINT2_REALTYPE fp422;
fp422 = fp146 * fp79;
LIBINT2_REALTYPE fp421;
fp421 = fp422 * fp50;
target[((hsi*150+41)*1+lsi)*1] = fp421;
LIBINT2_REALTYPE fp424;
fp424 = fp155 * fp80;
LIBINT2_REALTYPE fp423;
fp423 = fp424 * fp50;
target[((hsi*150+40)*1+lsi)*1] = fp423;
LIBINT2_REALTYPE fp426;
fp426 = fp136 * fp76;
LIBINT2_REALTYPE fp425;
fp425 = fp426 * fp53;
target[((hsi*150+39)*1+lsi)*1] = fp425;
LIBINT2_REALTYPE fp428;
fp428 = fp136 * fp75;
LIBINT2_REALTYPE fp427;
fp427 = fp428 * fp56;
target[((hsi*150+38)*1+lsi)*1] = fp427;
LIBINT2_REALTYPE fp430;
fp430 = fp136 * fp74;
LIBINT2_REALTYPE fp429;
fp429 = fp430 * fp59;
target[((hsi*150+37)*1+lsi)*1] = fp429;
LIBINT2_REALTYPE fp432;
fp432 = fp136 * fp73;
LIBINT2_REALTYPE fp431;
fp431 = fp432 * fp63;
target[((hsi*150+36)*1+lsi)*1] = fp431;
LIBINT2_REALTYPE fp434;
fp434 = fp141 * fp76;
LIBINT2_REALTYPE fp433;
fp433 = fp434 * fp56;
target[((hsi*150+35)*1+lsi)*1] = fp433;
LIBINT2_REALTYPE fp436;
fp436 = fp141 * fp75;
LIBINT2_REALTYPE fp435;
fp435 = fp436 * fp59;
target[((hsi*150+34)*1+lsi)*1] = fp435;
LIBINT2_REALTYPE fp438;
fp438 = fp141 * fp74;
LIBINT2_REALTYPE fp437;
fp437 = fp438 * fp63;
target[((hsi*150+33)*1+lsi)*1] = fp437;
LIBINT2_REALTYPE fp440;
fp440 = fp146 * fp76;
LIBINT2_REALTYPE fp439;
fp439 = fp440 * fp59;
target[((hsi*150+32)*1+lsi)*1] = fp439;
LIBINT2_REALTYPE fp442;
fp442 = fp146 * fp75;
LIBINT2_REALTYPE fp441;
fp441 = fp442 * fp63;
target[((hsi*150+31)*1+lsi)*1] = fp441;
LIBINT2_REALTYPE fp444;
fp444 = fp155 * fp76;
LIBINT2_REALTYPE fp443;
fp443 = fp444 * fp63;
target[((hsi*150+30)*1+lsi)*1] = fp443;
LIBINT2_REALTYPE fp167;
fp167 = 0.0000000000000000e+00 + src0[((hsi*35+23)*1+lsi)*1];
LIBINT2_REALTYPE fp162;
fp162 = 0.0000000000000000e+00 + src0[((hsi*35+22)*1+lsi)*1];
LIBINT2_REALTYPE fp164;
LIBINT2_REALTYPE fp163;
fp163 = libint2::fma_plus(inteval->BO_x[vi], fp162, fp167);
LIBINT2_REALTYPE fp157;
fp157 = 0.0000000000000000e+00 + src0[((hsi*35+21)*1+lsi)*1];
LIBINT2_REALTYPE fp159;
LIBINT2_REALTYPE fp158;
fp158 = libint2::fma_plus(inteval->BO_x[vi], fp157, fp162);
LIBINT2_REALTYPE fp161;
LIBINT2_REALTYPE fp160;
fp160 = libint2::fma_plus(inteval->BO_x[vi], fp158, fp163);
LIBINT2_REALTYPE fp446;
fp446 = fp160 * fp84;
LIBINT2_REALTYPE fp445;
fp445 = fp446 * fp40;
target[((hsi*150+29)*1+lsi)*1] = fp445;
LIBINT2_REALTYPE fp448;
fp448 = fp160 * fp83;
LIBINT2_REALTYPE fp447;
fp447 = fp448 * fp43;
target[((hsi*150+28)*1+lsi)*1] = fp447;
LIBINT2_REALTYPE fp450;
fp450 = fp160 * fp82;
LIBINT2_REALTYPE fp449;
fp449 = fp450 * fp46;
target[((hsi*150+27)*1+lsi)*1] = fp449;
LIBINT2_REALTYPE fp452;
fp452 = fp160 * fp81;
LIBINT2_REALTYPE fp451;
fp451 = fp452 * fp50;
target[((hsi*150+26)*1+lsi)*1] = fp451;
LIBINT2_REALTYPE fp172;
fp172 = 0.0000000000000000e+00 + src0[((hsi*35+24)*1+lsi)*1];
LIBINT2_REALTYPE fp169;
LIBINT2_REALTYPE fp168;
fp168 = libint2::fma_plus(inteval->BO_x[vi], fp167, fp172);
LIBINT2_REALTYPE fp166;
LIBINT2_REALTYPE fp165;
fp165 = libint2::fma_plus(inteval->BO_x[vi], fp163, fp168);
LIBINT2_REALTYPE fp454;
fp454 = fp165 * fp84;
LIBINT2_REALTYPE fp453;
fp453 = fp454 * fp43;
target[((hsi*150+25)*1+lsi)*1] = fp453;
LIBINT2_REALTYPE fp456;
fp456 = fp165 * fp83;
LIBINT2_REALTYPE fp455;
fp455 = fp456 * fp46;
target[((hsi*150+24)*1+lsi)*1] = fp455;
LIBINT2_REALTYPE fp458;
fp458 = fp165 * fp82;
LIBINT2_REALTYPE fp457;
fp457 = fp458 * fp50;
target[((hsi*150+23)*1+lsi)*1] = fp457;
LIBINT2_REALTYPE fp173;
fp173 = 0.0000000000000000e+00 + src0[((hsi*35+25)*1+lsi)*1];
LIBINT2_REALTYPE fp176;
LIBINT2_REALTYPE fp175;
fp175 = libint2::fma_plus(inteval->BO_x[vi], fp172, fp173);
LIBINT2_REALTYPE fp171;
LIBINT2_REALTYPE fp170;
fp170 = libint2::fma_plus(inteval->BO_x[vi], fp168, fp175);
LIBINT2_REALTYPE fp460;
fp460 = fp170 * fp84;
LIBINT2_REALTYPE fp459;
fp459 = fp460 * fp46;
target[((hsi*150+22)*1+lsi)*1] = fp459;
LIBINT2_REALTYPE fp462;
fp462 = fp170 * fp83;
LIBINT2_REALTYPE fp461;
fp461 = fp462 * fp50;
target[((hsi*150+21)*1+lsi)*1] = fp461;
LIBINT2_REALTYPE fp180;
fp180 = inteval->BO_x[vi] * fp175;
LIBINT2_REALTYPE fp178;
fp178 = inteval->BO_x[vi] * fp173;
LIBINT2_REALTYPE fp174;
fp174 = 0.0000000000000000e+00 + src0[((hsi*35+26)*1+lsi)*1];
LIBINT2_REALTYPE fp177;
fp177 = fp174 + fp178;
LIBINT2_REALTYPE fp179;
fp179 = fp177 + fp180;
LIBINT2_REALTYPE fp464;
fp464 = fp179 * fp84;
LIBINT2_REALTYPE fp463;
fp463 = fp464 * fp50;
target[((hsi*150+20)*1+lsi)*1] = fp463;
LIBINT2_REALTYPE fp466;
fp466 = fp160 * fp80;
LIBINT2_REALTYPE fp465;
fp465 = fp466 * fp53;
target[((hsi*150+19)*1+lsi)*1] = fp465;
LIBINT2_REALTYPE fp468;
fp468 = fp160 * fp79;
LIBINT2_REALTYPE fp467;
fp467 = fp468 * fp56;
target[((hsi*150+18)*1+lsi)*1] = fp467;
LIBINT2_REALTYPE fp470;
fp470 = fp160 * fp78;
LIBINT2_REALTYPE fp469;
fp469 = fp470 * fp59;
target[((hsi*150+17)*1+lsi)*1] = fp469;
LIBINT2_REALTYPE fp472;
fp472 = fp160 * fp77;
LIBINT2_REALTYPE fp471;
fp471 = fp472 * fp63;
target[((hsi*150+16)*1+lsi)*1] = fp471;
LIBINT2_REALTYPE fp474;
fp474 = fp165 * fp80;
LIBINT2_REALTYPE fp473;
fp473 = fp474 * fp56;
target[((hsi*150+15)*1+lsi)*1] = fp473;
LIBINT2_REALTYPE fp476;
fp476 = fp165 * fp79;
LIBINT2_REALTYPE fp475;
fp475 = fp476 * fp59;
target[((hsi*150+14)*1+lsi)*1] = fp475;
LIBINT2_REALTYPE fp478;
fp478 = fp165 * fp78;
LIBINT2_REALTYPE fp477;
fp477 = fp478 * fp63;
target[((hsi*150+13)*1+lsi)*1] = fp477;
LIBINT2_REALTYPE fp480;
fp480 = fp170 * fp80;
LIBINT2_REALTYPE fp479;
fp479 = fp480 * fp59;
target[((hsi*150+12)*1+lsi)*1] = fp479;
LIBINT2_REALTYPE fp482;
fp482 = fp170 * fp79;
LIBINT2_REALTYPE fp481;
fp481 = fp482 * fp63;
target[((hsi*150+11)*1+lsi)*1] = fp481;
LIBINT2_REALTYPE fp484;
fp484 = fp179 * fp80;
LIBINT2_REALTYPE fp483;
fp483 = fp484 * fp63;
target[((hsi*150+10)*1+lsi)*1] = fp483;
LIBINT2_REALTYPE fp191;
fp191 = 0.0000000000000000e+00 + src0[((hsi*35+30)*1+lsi)*1];
LIBINT2_REALTYPE fp186;
fp186 = 0.0000000000000000e+00 + src0[((hsi*35+29)*1+lsi)*1];
LIBINT2_REALTYPE fp188;
LIBINT2_REALTYPE fp187;
fp187 = libint2::fma_plus(inteval->BO_x[vi], fp186, fp191);
LIBINT2_REALTYPE fp181;
fp181 = 0.0000000000000000e+00 + src0[((hsi*35+28)*1+lsi)*1];
LIBINT2_REALTYPE fp183;
LIBINT2_REALTYPE fp182;
fp182 = libint2::fma_plus(inteval->BO_x[vi], fp181, fp186);
LIBINT2_REALTYPE fp185;
LIBINT2_REALTYPE fp184;
fp184 = libint2::fma_plus(inteval->BO_x[vi], fp182, fp187);
LIBINT2_REALTYPE fp486;
fp486 = fp184 * fp84;
LIBINT2_REALTYPE fp485;
fp485 = fp486 * fp53;
target[((hsi*150+9)*1+lsi)*1] = fp485;
LIBINT2_REALTYPE fp488;
fp488 = fp184 * fp83;
LIBINT2_REALTYPE fp487;
fp487 = fp488 * fp56;
target[((hsi*150+8)*1+lsi)*1] = fp487;
LIBINT2_REALTYPE fp490;
fp490 = fp184 * fp82;
LIBINT2_REALTYPE fp489;
fp489 = fp490 * fp59;
target[((hsi*150+7)*1+lsi)*1] = fp489;
LIBINT2_REALTYPE fp492;
fp492 = fp184 * fp81;
LIBINT2_REALTYPE fp491;
fp491 = fp492 * fp63;
target[((hsi*150+6)*1+lsi)*1] = fp491;
LIBINT2_REALTYPE fp196;
fp196 = 0.0000000000000000e+00 + src0[((hsi*35+31)*1+lsi)*1];
LIBINT2_REALTYPE fp193;
LIBINT2_REALTYPE fp192;
fp192 = libint2::fma_plus(inteval->BO_x[vi], fp191, fp196);
LIBINT2_REALTYPE fp190;
LIBINT2_REALTYPE fp189;
fp189 = libint2::fma_plus(inteval->BO_x[vi], fp187, fp192);
LIBINT2_REALTYPE fp494;
fp494 = fp189 * fp84;
LIBINT2_REALTYPE fp493;
fp493 = fp494 * fp56;
target[((hsi*150+5)*1+lsi)*1] = fp493;
LIBINT2_REALTYPE fp496;
fp496 = fp189 * fp83;
LIBINT2_REALTYPE fp495;
fp495 = fp496 * fp59;
target[((hsi*150+4)*1+lsi)*1] = fp495;
LIBINT2_REALTYPE fp498;
fp498 = fp189 * fp82;
LIBINT2_REALTYPE fp497;
fp497 = fp498 * fp63;
target[((hsi*150+3)*1+lsi)*1] = fp497;
LIBINT2_REALTYPE fp197;
fp197 = 0.0000000000000000e+00 + src0[((hsi*35+32)*1+lsi)*1];
LIBINT2_REALTYPE fp200;
LIBINT2_REALTYPE fp199;
fp199 = libint2::fma_plus(inteval->BO_x[vi], fp196, fp197);
LIBINT2_REALTYPE fp195;
LIBINT2_REALTYPE fp194;
fp194 = libint2::fma_plus(inteval->BO_x[vi], fp192, fp199);
LIBINT2_REALTYPE fp500;
fp500 = fp194 * fp84;
LIBINT2_REALTYPE fp499;
fp499 = fp500 * fp59;
target[((hsi*150+2)*1+lsi)*1] = fp499;
LIBINT2_REALTYPE fp502;
fp502 = fp194 * fp83;
LIBINT2_REALTYPE fp501;
fp501 = fp502 * fp63;
target[((hsi*150+1)*1+lsi)*1] = fp501;
LIBINT2_REALTYPE fp204;
fp204 = inteval->BO_x[vi] * fp199;
LIBINT2_REALTYPE fp202;
fp202 = inteval->BO_x[vi] * fp197;
LIBINT2_REALTYPE fp198;
fp198 = 0.0000000000000000e+00 + src0[((hsi*35+33)*1+lsi)*1];
LIBINT2_REALTYPE fp201;
fp201 = fp198 + fp202;
LIBINT2_REALTYPE fp203;
fp203 = fp201 + fp204;
LIBINT2_REALTYPE fp504;
fp504 = fp203 * fp84;
LIBINT2_REALTYPE fp503;
fp503 = fp504 * fp63;
target[((hsi*150+0)*1+lsi)*1] = fp503;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 505 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
