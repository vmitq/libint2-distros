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
void _overlap_F_F_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp235;
fp235 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp238;
fp238 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp145;
fp145 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_z[vi];
LIBINT2_REALTYPE fp142;
fp142 = inteval->oo2z[vi] * fp145;
LIBINT2_REALTYPE fp144;
fp144 = inteval->PB_z[vi] * fp145;
LIBINT2_REALTYPE fp136;
LIBINT2_REALTYPE fp135;
fp135 = libint2::fma_plus(inteval->PA_z[vi], fp144, fp142);
LIBINT2_REALTYPE fp121;
fp121 = fp238 * fp135;
LIBINT2_REALTYPE fp143;
LIBINT2_REALTYPE fp141;
fp141 = libint2::fma_plus(inteval->PB_z[vi], fp144, fp142);
LIBINT2_REALTYPE fp123;
fp123 = inteval->oo2z[vi] * fp141;
LIBINT2_REALTYPE fp139;
fp139 = fp238 * fp144;
LIBINT2_REALTYPE fp134;
LIBINT2_REALTYPE fp133;
fp133 = libint2::fma_plus(inteval->PA_z[vi], fp141, fp139);
LIBINT2_REALTYPE fp124;
LIBINT2_REALTYPE fp122;
fp122 = libint2::fma_plus(inteval->PA_z[vi], fp133, fp123);
LIBINT2_REALTYPE fp120;
fp120 = fp122 + fp121;
LIBINT2_REALTYPE fp101;
fp101 = fp235 * fp120;
LIBINT2_REALTYPE fp131;
fp131 = fp235 * fp141;
LIBINT2_REALTYPE fp140;
LIBINT2_REALTYPE fp138;
fp138 = libint2::fma_plus(inteval->PB_z[vi], fp141, fp139);
LIBINT2_REALTYPE fp132;
LIBINT2_REALTYPE fp130;
fp130 = libint2::fma_plus(inteval->PA_z[vi], fp138, fp131);
LIBINT2_REALTYPE fp103;
fp103 = fp238 * fp130;
LIBINT2_REALTYPE fp116;
fp116 = fp235 * fp133;
LIBINT2_REALTYPE fp118;
fp118 = inteval->oo2z[vi] * fp138;
LIBINT2_REALTYPE fp119;
LIBINT2_REALTYPE fp117;
fp117 = libint2::fma_plus(inteval->PA_z[vi], fp130, fp118);
LIBINT2_REALTYPE fp115;
fp115 = fp117 + fp116;
LIBINT2_REALTYPE fp104;
LIBINT2_REALTYPE fp102;
fp102 = libint2::fma_plus(inteval->PA_z[vi], fp115, fp103);
LIBINT2_REALTYPE fp100;
fp100 = fp102 + fp101;
LIBINT2_REALTYPE fp240;
fp240 = 0.0000000000000000e+00 + fp100;
LIBINT2_REALTYPE fp191;
fp191 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_y[vi];
LIBINT2_REALTYPE fp271;
fp271 = 0.0000000000000000e+00 + fp191;
LIBINT2_REALTYPE fp197;
fp197 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_x[vi];
LIBINT2_REALTYPE fp272;
fp272 = 0.0000000000000000e+00 + fp197;
LIBINT2_REALTYPE fp289;
fp289 = fp272 * fp271;
LIBINT2_REALTYPE fp288;
fp288 = fp289 * fp240;
LIBINT2_REALTYPE fp99;
fp99 = fp288;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+99)*1+lsi)*1]),&(fp99),1);
LIBINT2_REALTYPE fp137;
fp137 = inteval->PA_z[vi] * fp145;
LIBINT2_REALTYPE fp126;
fp126 = fp238 * fp137;
LIBINT2_REALTYPE fp129;
LIBINT2_REALTYPE fp128;
fp128 = libint2::fma_plus(inteval->PA_z[vi], fp137, fp142);
LIBINT2_REALTYPE fp127;
LIBINT2_REALTYPE fp125;
fp125 = libint2::fma_plus(inteval->PB_z[vi], fp128, fp126);
LIBINT2_REALTYPE fp106;
fp106 = fp238 * fp125;
LIBINT2_REALTYPE fp108;
fp108 = fp238 * fp133;
LIBINT2_REALTYPE fp109;
LIBINT2_REALTYPE fp107;
fp107 = libint2::fma_plus(inteval->PA_z[vi], fp120, fp108);
LIBINT2_REALTYPE fp105;
fp105 = fp107 + fp106;
LIBINT2_REALTYPE fp241;
fp241 = 0.0000000000000000e+00 + fp105;
LIBINT2_REALTYPE fp190;
fp190 = inteval->PB_y[vi] * fp191;
LIBINT2_REALTYPE fp270;
fp270 = 0.0000000000000000e+00 + fp190;
LIBINT2_REALTYPE fp291;
fp291 = fp272 * fp270;
LIBINT2_REALTYPE fp290;
fp290 = fp291 * fp241;
LIBINT2_REALTYPE fp98;
fp98 = fp290;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+98)*1+lsi)*1]),&(fp98),1);
LIBINT2_REALTYPE fp111;
fp111 = fp235 * fp128;
LIBINT2_REALTYPE fp114;
LIBINT2_REALTYPE fp113;
fp113 = libint2::fma_plus(inteval->PA_z[vi], fp128, fp126);
LIBINT2_REALTYPE fp112;
LIBINT2_REALTYPE fp110;
fp110 = libint2::fma_plus(inteval->PB_z[vi], fp113, fp111);
LIBINT2_REALTYPE fp242;
fp242 = 0.0000000000000000e+00 + fp110;
LIBINT2_REALTYPE fp188;
fp188 = inteval->oo2z[vi] * fp191;
LIBINT2_REALTYPE fp189;
LIBINT2_REALTYPE fp187;
fp187 = libint2::fma_plus(inteval->PB_y[vi], fp190, fp188);
LIBINT2_REALTYPE fp269;
fp269 = 0.0000000000000000e+00 + fp187;
LIBINT2_REALTYPE fp293;
fp293 = fp272 * fp269;
LIBINT2_REALTYPE fp292;
fp292 = fp293 * fp242;
LIBINT2_REALTYPE fp97;
fp97 = fp292;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+97)*1+lsi)*1]),&(fp97),1);
LIBINT2_REALTYPE fp243;
fp243 = 0.0000000000000000e+00 + fp113;
LIBINT2_REALTYPE fp185;
fp185 = fp238 * fp190;
LIBINT2_REALTYPE fp186;
LIBINT2_REALTYPE fp184;
fp184 = libint2::fma_plus(inteval->PB_y[vi], fp187, fp185);
LIBINT2_REALTYPE fp268;
fp268 = 0.0000000000000000e+00 + fp184;
LIBINT2_REALTYPE fp295;
fp295 = fp272 * fp268;
LIBINT2_REALTYPE fp294;
fp294 = fp295 * fp243;
LIBINT2_REALTYPE fp96;
fp96 = fp294;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+96)*1+lsi)*1]),&(fp96),1);
LIBINT2_REALTYPE fp198;
fp198 = inteval->PB_x[vi] * fp197;
LIBINT2_REALTYPE fp273;
fp273 = 0.0000000000000000e+00 + fp198;
LIBINT2_REALTYPE fp297;
fp297 = fp273 * fp271;
LIBINT2_REALTYPE fp296;
fp296 = fp297 * fp241;
LIBINT2_REALTYPE fp95;
fp95 = fp296;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+95)*1+lsi)*1]),&(fp95),1);
LIBINT2_REALTYPE fp299;
fp299 = fp273 * fp270;
LIBINT2_REALTYPE fp298;
fp298 = fp299 * fp242;
LIBINT2_REALTYPE fp94;
fp94 = fp298;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+94)*1+lsi)*1]),&(fp94),1);
LIBINT2_REALTYPE fp301;
fp301 = fp273 * fp269;
LIBINT2_REALTYPE fp300;
fp300 = fp301 * fp243;
LIBINT2_REALTYPE fp93;
fp93 = fp300;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+93)*1+lsi)*1]),&(fp93),1);
LIBINT2_REALTYPE fp202;
fp202 = inteval->oo2z[vi] * fp197;
LIBINT2_REALTYPE fp203;
LIBINT2_REALTYPE fp201;
fp201 = libint2::fma_plus(inteval->PB_x[vi], fp198, fp202);
LIBINT2_REALTYPE fp274;
fp274 = 0.0000000000000000e+00 + fp201;
LIBINT2_REALTYPE fp303;
fp303 = fp274 * fp271;
LIBINT2_REALTYPE fp302;
fp302 = fp303 * fp242;
LIBINT2_REALTYPE fp92;
fp92 = fp302;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+92)*1+lsi)*1]),&(fp92),1);
LIBINT2_REALTYPE fp305;
fp305 = fp274 * fp270;
LIBINT2_REALTYPE fp304;
fp304 = fp305 * fp243;
LIBINT2_REALTYPE fp91;
fp91 = fp304;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+91)*1+lsi)*1]),&(fp91),1);
LIBINT2_REALTYPE fp210;
fp210 = fp238 * fp198;
LIBINT2_REALTYPE fp211;
LIBINT2_REALTYPE fp209;
fp209 = libint2::fma_plus(inteval->PB_x[vi], fp201, fp210);
LIBINT2_REALTYPE fp275;
fp275 = 0.0000000000000000e+00 + fp209;
LIBINT2_REALTYPE fp307;
fp307 = fp275 * fp271;
LIBINT2_REALTYPE fp306;
fp306 = fp307 * fp243;
LIBINT2_REALTYPE fp90;
fp90 = fp306;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+90)*1+lsi)*1]),&(fp90),1);
LIBINT2_REALTYPE fp244;
fp244 = 0.0000000000000000e+00 + fp115;
LIBINT2_REALTYPE fp183;
fp183 = inteval->PA_y[vi] * fp191;
LIBINT2_REALTYPE fp267;
fp267 = 0.0000000000000000e+00 + fp183;
LIBINT2_REALTYPE fp309;
fp309 = fp272 * fp267;
LIBINT2_REALTYPE fp308;
fp308 = fp309 * fp244;
LIBINT2_REALTYPE fp89;
fp89 = fp308;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+89)*1+lsi)*1]),&(fp89),1);
LIBINT2_REALTYPE fp245;
fp245 = 0.0000000000000000e+00 + fp120;
LIBINT2_REALTYPE fp182;
LIBINT2_REALTYPE fp181;
fp181 = libint2::fma_plus(inteval->PA_y[vi], fp190, fp188);
LIBINT2_REALTYPE fp266;
fp266 = 0.0000000000000000e+00 + fp181;
LIBINT2_REALTYPE fp311;
fp311 = fp272 * fp266;
LIBINT2_REALTYPE fp310;
fp310 = fp311 * fp245;
LIBINT2_REALTYPE fp88;
fp88 = fp310;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+88)*1+lsi)*1]),&(fp88),1);
LIBINT2_REALTYPE fp246;
fp246 = 0.0000000000000000e+00 + fp125;
LIBINT2_REALTYPE fp180;
LIBINT2_REALTYPE fp179;
fp179 = libint2::fma_plus(inteval->PA_y[vi], fp187, fp185);
LIBINT2_REALTYPE fp265;
fp265 = 0.0000000000000000e+00 + fp179;
LIBINT2_REALTYPE fp313;
fp313 = fp272 * fp265;
LIBINT2_REALTYPE fp312;
fp312 = fp313 * fp246;
LIBINT2_REALTYPE fp87;
fp87 = fp312;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+87)*1+lsi)*1]),&(fp87),1);
LIBINT2_REALTYPE fp247;
fp247 = 0.0000000000000000e+00 + fp128;
LIBINT2_REALTYPE fp177;
fp177 = fp235 * fp187;
LIBINT2_REALTYPE fp178;
LIBINT2_REALTYPE fp176;
fp176 = libint2::fma_plus(inteval->PA_y[vi], fp184, fp177);
LIBINT2_REALTYPE fp264;
fp264 = 0.0000000000000000e+00 + fp176;
LIBINT2_REALTYPE fp315;
fp315 = fp272 * fp264;
LIBINT2_REALTYPE fp314;
fp314 = fp315 * fp247;
LIBINT2_REALTYPE fp86;
fp86 = fp314;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+86)*1+lsi)*1]),&(fp86),1);
LIBINT2_REALTYPE fp317;
fp317 = fp273 * fp267;
LIBINT2_REALTYPE fp316;
fp316 = fp317 * fp245;
LIBINT2_REALTYPE fp85;
fp85 = fp316;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+85)*1+lsi)*1]),&(fp85),1);
LIBINT2_REALTYPE fp319;
fp319 = fp273 * fp266;
LIBINT2_REALTYPE fp318;
fp318 = fp319 * fp246;
LIBINT2_REALTYPE fp84;
fp84 = fp318;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+84)*1+lsi)*1]),&(fp84),1);
LIBINT2_REALTYPE fp321;
fp321 = fp273 * fp265;
LIBINT2_REALTYPE fp320;
fp320 = fp321 * fp247;
LIBINT2_REALTYPE fp83;
fp83 = fp320;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+83)*1+lsi)*1]),&(fp83),1);
LIBINT2_REALTYPE fp323;
fp323 = fp274 * fp267;
LIBINT2_REALTYPE fp322;
fp322 = fp323 * fp246;
LIBINT2_REALTYPE fp82;
fp82 = fp322;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+82)*1+lsi)*1]),&(fp82),1);
LIBINT2_REALTYPE fp325;
fp325 = fp274 * fp266;
LIBINT2_REALTYPE fp324;
fp324 = fp325 * fp247;
LIBINT2_REALTYPE fp81;
fp81 = fp324;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+81)*1+lsi)*1]),&(fp81),1);
LIBINT2_REALTYPE fp327;
fp327 = fp275 * fp267;
LIBINT2_REALTYPE fp326;
fp326 = fp327 * fp247;
LIBINT2_REALTYPE fp80;
fp80 = fp326;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+80)*1+lsi)*1]),&(fp80),1);
LIBINT2_REALTYPE fp248;
fp248 = 0.0000000000000000e+00 + fp130;
LIBINT2_REALTYPE fp175;
LIBINT2_REALTYPE fp174;
fp174 = libint2::fma_plus(inteval->PA_y[vi], fp183, fp188);
LIBINT2_REALTYPE fp263;
fp263 = 0.0000000000000000e+00 + fp174;
LIBINT2_REALTYPE fp329;
fp329 = fp272 * fp263;
LIBINT2_REALTYPE fp328;
fp328 = fp329 * fp248;
LIBINT2_REALTYPE fp79;
fp79 = fp328;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+79)*1+lsi)*1]),&(fp79),1);
LIBINT2_REALTYPE fp249;
fp249 = 0.0000000000000000e+00 + fp133;
LIBINT2_REALTYPE fp172;
fp172 = fp238 * fp183;
LIBINT2_REALTYPE fp173;
LIBINT2_REALTYPE fp171;
fp171 = libint2::fma_plus(inteval->PB_y[vi], fp174, fp172);
LIBINT2_REALTYPE fp262;
fp262 = 0.0000000000000000e+00 + fp171;
LIBINT2_REALTYPE fp331;
fp331 = fp272 * fp262;
LIBINT2_REALTYPE fp330;
fp330 = fp331 * fp249;
LIBINT2_REALTYPE fp78;
fp78 = fp330;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+78)*1+lsi)*1]),&(fp78),1);
LIBINT2_REALTYPE fp250;
fp250 = 0.0000000000000000e+00 + fp135;
LIBINT2_REALTYPE fp167;
fp167 = fp238 * fp181;
LIBINT2_REALTYPE fp169;
fp169 = inteval->oo2z[vi] * fp187;
LIBINT2_REALTYPE fp170;
LIBINT2_REALTYPE fp168;
fp168 = libint2::fma_plus(inteval->PA_y[vi], fp179, fp169);
LIBINT2_REALTYPE fp166;
fp166 = fp168 + fp167;
LIBINT2_REALTYPE fp261;
fp261 = 0.0000000000000000e+00 + fp166;
LIBINT2_REALTYPE fp333;
fp333 = fp272 * fp261;
LIBINT2_REALTYPE fp332;
fp332 = fp333 * fp250;
LIBINT2_REALTYPE fp77;
fp77 = fp332;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+77)*1+lsi)*1]),&(fp77),1);
LIBINT2_REALTYPE fp251;
fp251 = 0.0000000000000000e+00 + fp137;
LIBINT2_REALTYPE fp162;
fp162 = fp235 * fp179;
LIBINT2_REALTYPE fp164;
fp164 = inteval->oo2z[vi] * fp184;
LIBINT2_REALTYPE fp165;
LIBINT2_REALTYPE fp163;
fp163 = libint2::fma_plus(inteval->PA_y[vi], fp176, fp164);
LIBINT2_REALTYPE fp161;
fp161 = fp163 + fp162;
LIBINT2_REALTYPE fp260;
fp260 = 0.0000000000000000e+00 + fp161;
LIBINT2_REALTYPE fp335;
fp335 = fp272 * fp260;
LIBINT2_REALTYPE fp334;
fp334 = fp335 * fp251;
LIBINT2_REALTYPE fp76;
fp76 = fp334;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+76)*1+lsi)*1]),&(fp76),1);
LIBINT2_REALTYPE fp337;
fp337 = fp273 * fp263;
LIBINT2_REALTYPE fp336;
fp336 = fp337 * fp249;
LIBINT2_REALTYPE fp75;
fp75 = fp336;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+75)*1+lsi)*1]),&(fp75),1);
LIBINT2_REALTYPE fp339;
fp339 = fp273 * fp262;
LIBINT2_REALTYPE fp338;
fp338 = fp339 * fp250;
LIBINT2_REALTYPE fp74;
fp74 = fp338;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+74)*1+lsi)*1]),&(fp74),1);
LIBINT2_REALTYPE fp341;
fp341 = fp273 * fp261;
LIBINT2_REALTYPE fp340;
fp340 = fp341 * fp251;
LIBINT2_REALTYPE fp73;
fp73 = fp340;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+73)*1+lsi)*1]),&(fp73),1);
LIBINT2_REALTYPE fp343;
fp343 = fp274 * fp263;
LIBINT2_REALTYPE fp342;
fp342 = fp343 * fp250;
LIBINT2_REALTYPE fp72;
fp72 = fp342;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+72)*1+lsi)*1]),&(fp72),1);
LIBINT2_REALTYPE fp345;
fp345 = fp274 * fp262;
LIBINT2_REALTYPE fp344;
fp344 = fp345 * fp251;
LIBINT2_REALTYPE fp71;
fp71 = fp344;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+71)*1+lsi)*1]),&(fp71),1);
LIBINT2_REALTYPE fp347;
fp347 = fp275 * fp263;
LIBINT2_REALTYPE fp346;
fp346 = fp347 * fp251;
LIBINT2_REALTYPE fp70;
fp70 = fp346;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+70)*1+lsi)*1]),&(fp70),1);
LIBINT2_REALTYPE fp252;
fp252 = 0.0000000000000000e+00 + fp138;
LIBINT2_REALTYPE fp160;
LIBINT2_REALTYPE fp159;
fp159 = libint2::fma_plus(inteval->PA_y[vi], fp174, fp172);
LIBINT2_REALTYPE fp259;
fp259 = 0.0000000000000000e+00 + fp159;
LIBINT2_REALTYPE fp349;
fp349 = fp272 * fp259;
LIBINT2_REALTYPE fp348;
fp348 = fp349 * fp252;
LIBINT2_REALTYPE fp69;
fp69 = fp348;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+69)*1+lsi)*1]),&(fp69),1);
LIBINT2_REALTYPE fp253;
fp253 = 0.0000000000000000e+00 + fp141;
LIBINT2_REALTYPE fp157;
fp157 = fp235 * fp174;
LIBINT2_REALTYPE fp158;
LIBINT2_REALTYPE fp156;
fp156 = libint2::fma_plus(inteval->PB_y[vi], fp159, fp157);
LIBINT2_REALTYPE fp258;
fp258 = 0.0000000000000000e+00 + fp156;
LIBINT2_REALTYPE fp351;
fp351 = fp272 * fp258;
LIBINT2_REALTYPE fp350;
fp350 = fp351 * fp253;
LIBINT2_REALTYPE fp68;
fp68 = fp350;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+68)*1+lsi)*1]),&(fp68),1);
LIBINT2_REALTYPE fp254;
fp254 = 0.0000000000000000e+00 + fp144;
LIBINT2_REALTYPE fp152;
fp152 = fp238 * fp171;
LIBINT2_REALTYPE fp154;
fp154 = fp238 * fp179;
LIBINT2_REALTYPE fp155;
LIBINT2_REALTYPE fp153;
fp153 = libint2::fma_plus(inteval->PA_y[vi], fp166, fp154);
LIBINT2_REALTYPE fp151;
fp151 = fp153 + fp152;
LIBINT2_REALTYPE fp257;
fp257 = 0.0000000000000000e+00 + fp151;
LIBINT2_REALTYPE fp353;
fp353 = fp272 * fp257;
LIBINT2_REALTYPE fp352;
fp352 = fp353 * fp254;
LIBINT2_REALTYPE fp67;
fp67 = fp352;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+67)*1+lsi)*1]),&(fp67),1);
LIBINT2_REALTYPE fp255;
fp255 = 0.0000000000000000e+00 + fp145;
LIBINT2_REALTYPE fp147;
fp147 = fp235 * fp166;
LIBINT2_REALTYPE fp149;
fp149 = fp238 * fp176;
LIBINT2_REALTYPE fp150;
LIBINT2_REALTYPE fp148;
fp148 = libint2::fma_plus(inteval->PA_y[vi], fp161, fp149);
LIBINT2_REALTYPE fp146;
fp146 = fp148 + fp147;
LIBINT2_REALTYPE fp256;
fp256 = 0.0000000000000000e+00 + fp146;
LIBINT2_REALTYPE fp355;
fp355 = fp272 * fp256;
LIBINT2_REALTYPE fp354;
fp354 = fp355 * fp255;
LIBINT2_REALTYPE fp66;
fp66 = fp354;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+66)*1+lsi)*1]),&(fp66),1);
LIBINT2_REALTYPE fp357;
fp357 = fp273 * fp259;
LIBINT2_REALTYPE fp356;
fp356 = fp357 * fp253;
LIBINT2_REALTYPE fp65;
fp65 = fp356;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+65)*1+lsi)*1]),&(fp65),1);
LIBINT2_REALTYPE fp359;
fp359 = fp273 * fp258;
LIBINT2_REALTYPE fp358;
fp358 = fp359 * fp254;
LIBINT2_REALTYPE fp64;
fp64 = fp358;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+64)*1+lsi)*1]),&(fp64),1);
LIBINT2_REALTYPE fp361;
fp361 = fp273 * fp257;
LIBINT2_REALTYPE fp360;
fp360 = fp361 * fp255;
LIBINT2_REALTYPE fp63;
fp63 = fp360;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+63)*1+lsi)*1]),&(fp63),1);
LIBINT2_REALTYPE fp363;
fp363 = fp274 * fp259;
LIBINT2_REALTYPE fp362;
fp362 = fp363 * fp254;
LIBINT2_REALTYPE fp62;
fp62 = fp362;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+62)*1+lsi)*1]),&(fp62),1);
LIBINT2_REALTYPE fp365;
fp365 = fp274 * fp258;
LIBINT2_REALTYPE fp364;
fp364 = fp365 * fp255;
LIBINT2_REALTYPE fp61;
fp61 = fp364;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+61)*1+lsi)*1]),&(fp61),1);
LIBINT2_REALTYPE fp367;
fp367 = fp275 * fp259;
LIBINT2_REALTYPE fp366;
fp366 = fp367 * fp255;
LIBINT2_REALTYPE fp60;
fp60 = fp366;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+60)*1+lsi)*1]),&(fp60),1);
LIBINT2_REALTYPE fp196;
fp196 = inteval->PA_x[vi] * fp197;
LIBINT2_REALTYPE fp276;
fp276 = 0.0000000000000000e+00 + fp196;
LIBINT2_REALTYPE fp369;
fp369 = fp276 * fp271;
LIBINT2_REALTYPE fp368;
fp368 = fp369 * fp244;
LIBINT2_REALTYPE fp59;
fp59 = fp368;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+59)*1+lsi)*1]),&(fp59),1);
LIBINT2_REALTYPE fp371;
fp371 = fp276 * fp270;
LIBINT2_REALTYPE fp370;
fp370 = fp371 * fp245;
LIBINT2_REALTYPE fp58;
fp58 = fp370;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+58)*1+lsi)*1]),&(fp58),1);
LIBINT2_REALTYPE fp373;
fp373 = fp276 * fp269;
LIBINT2_REALTYPE fp372;
fp372 = fp373 * fp246;
LIBINT2_REALTYPE fp57;
fp57 = fp372;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+57)*1+lsi)*1]),&(fp57),1);
LIBINT2_REALTYPE fp375;
fp375 = fp276 * fp268;
LIBINT2_REALTYPE fp374;
fp374 = fp375 * fp247;
LIBINT2_REALTYPE fp56;
fp56 = fp374;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+56)*1+lsi)*1]),&(fp56),1);
LIBINT2_REALTYPE fp200;
LIBINT2_REALTYPE fp199;
fp199 = libint2::fma_plus(inteval->PA_x[vi], fp198, fp202);
LIBINT2_REALTYPE fp277;
fp277 = 0.0000000000000000e+00 + fp199;
LIBINT2_REALTYPE fp377;
fp377 = fp277 * fp271;
LIBINT2_REALTYPE fp376;
fp376 = fp377 * fp245;
LIBINT2_REALTYPE fp55;
fp55 = fp376;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+55)*1+lsi)*1]),&(fp55),1);
LIBINT2_REALTYPE fp379;
fp379 = fp277 * fp270;
LIBINT2_REALTYPE fp378;
fp378 = fp379 * fp246;
LIBINT2_REALTYPE fp54;
fp54 = fp378;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+54)*1+lsi)*1]),&(fp54),1);
LIBINT2_REALTYPE fp381;
fp381 = fp277 * fp269;
LIBINT2_REALTYPE fp380;
fp380 = fp381 * fp247;
LIBINT2_REALTYPE fp53;
fp53 = fp380;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+53)*1+lsi)*1]),&(fp53),1);
LIBINT2_REALTYPE fp208;
LIBINT2_REALTYPE fp207;
fp207 = libint2::fma_plus(inteval->PA_x[vi], fp201, fp210);
LIBINT2_REALTYPE fp278;
fp278 = 0.0000000000000000e+00 + fp207;
LIBINT2_REALTYPE fp383;
fp383 = fp278 * fp271;
LIBINT2_REALTYPE fp382;
fp382 = fp383 * fp246;
LIBINT2_REALTYPE fp52;
fp52 = fp382;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+52)*1+lsi)*1]),&(fp52),1);
LIBINT2_REALTYPE fp385;
fp385 = fp278 * fp270;
LIBINT2_REALTYPE fp384;
fp384 = fp385 * fp247;
LIBINT2_REALTYPE fp51;
fp51 = fp384;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+51)*1+lsi)*1]),&(fp51),1);
LIBINT2_REALTYPE fp226;
fp226 = fp235 * fp201;
LIBINT2_REALTYPE fp227;
LIBINT2_REALTYPE fp225;
fp225 = libint2::fma_plus(inteval->PA_x[vi], fp209, fp226);
LIBINT2_REALTYPE fp279;
fp279 = 0.0000000000000000e+00 + fp225;
LIBINT2_REALTYPE fp387;
fp387 = fp279 * fp271;
LIBINT2_REALTYPE fp386;
fp386 = fp387 * fp247;
LIBINT2_REALTYPE fp50;
fp50 = fp386;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+50)*1+lsi)*1]),&(fp50),1);
LIBINT2_REALTYPE fp389;
fp389 = fp276 * fp267;
LIBINT2_REALTYPE fp388;
fp388 = fp389 * fp248;
LIBINT2_REALTYPE fp49;
fp49 = fp388;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+49)*1+lsi)*1]),&(fp49),1);
LIBINT2_REALTYPE fp391;
fp391 = fp276 * fp266;
LIBINT2_REALTYPE fp390;
fp390 = fp391 * fp249;
LIBINT2_REALTYPE fp48;
fp48 = fp390;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+48)*1+lsi)*1]),&(fp48),1);
LIBINT2_REALTYPE fp393;
fp393 = fp276 * fp265;
LIBINT2_REALTYPE fp392;
fp392 = fp393 * fp250;
LIBINT2_REALTYPE fp47;
fp47 = fp392;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+47)*1+lsi)*1]),&(fp47),1);
LIBINT2_REALTYPE fp395;
fp395 = fp276 * fp264;
LIBINT2_REALTYPE fp394;
fp394 = fp395 * fp251;
LIBINT2_REALTYPE fp46;
fp46 = fp394;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+46)*1+lsi)*1]),&(fp46),1);
LIBINT2_REALTYPE fp397;
fp397 = fp277 * fp267;
LIBINT2_REALTYPE fp396;
fp396 = fp397 * fp249;
LIBINT2_REALTYPE fp45;
fp45 = fp396;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+45)*1+lsi)*1]),&(fp45),1);
LIBINT2_REALTYPE fp399;
fp399 = fp277 * fp266;
LIBINT2_REALTYPE fp398;
fp398 = fp399 * fp250;
LIBINT2_REALTYPE fp44;
fp44 = fp398;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+44)*1+lsi)*1]),&(fp44),1);
LIBINT2_REALTYPE fp401;
fp401 = fp277 * fp265;
LIBINT2_REALTYPE fp400;
fp400 = fp401 * fp251;
LIBINT2_REALTYPE fp43;
fp43 = fp400;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+43)*1+lsi)*1]),&(fp43),1);
LIBINT2_REALTYPE fp403;
fp403 = fp278 * fp267;
LIBINT2_REALTYPE fp402;
fp402 = fp403 * fp250;
LIBINT2_REALTYPE fp42;
fp42 = fp402;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+42)*1+lsi)*1]),&(fp42),1);
LIBINT2_REALTYPE fp405;
fp405 = fp278 * fp266;
LIBINT2_REALTYPE fp404;
fp404 = fp405 * fp251;
LIBINT2_REALTYPE fp41;
fp41 = fp404;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+41)*1+lsi)*1]),&(fp41),1);
LIBINT2_REALTYPE fp407;
fp407 = fp279 * fp267;
LIBINT2_REALTYPE fp406;
fp406 = fp407 * fp251;
LIBINT2_REALTYPE fp40;
fp40 = fp406;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+40)*1+lsi)*1]),&(fp40),1);
LIBINT2_REALTYPE fp409;
fp409 = fp276 * fp263;
LIBINT2_REALTYPE fp408;
fp408 = fp409 * fp252;
LIBINT2_REALTYPE fp39;
fp39 = fp408;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+39)*1+lsi)*1]),&(fp39),1);
LIBINT2_REALTYPE fp411;
fp411 = fp276 * fp262;
LIBINT2_REALTYPE fp410;
fp410 = fp411 * fp253;
LIBINT2_REALTYPE fp38;
fp38 = fp410;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+38)*1+lsi)*1]),&(fp38),1);
LIBINT2_REALTYPE fp413;
fp413 = fp276 * fp261;
LIBINT2_REALTYPE fp412;
fp412 = fp413 * fp254;
LIBINT2_REALTYPE fp37;
fp37 = fp412;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+37)*1+lsi)*1]),&(fp37),1);
LIBINT2_REALTYPE fp415;
fp415 = fp276 * fp260;
LIBINT2_REALTYPE fp414;
fp414 = fp415 * fp255;
LIBINT2_REALTYPE fp36;
fp36 = fp414;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+36)*1+lsi)*1]),&(fp36),1);
LIBINT2_REALTYPE fp417;
fp417 = fp277 * fp263;
LIBINT2_REALTYPE fp416;
fp416 = fp417 * fp253;
LIBINT2_REALTYPE fp35;
fp35 = fp416;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+35)*1+lsi)*1]),&(fp35),1);
LIBINT2_REALTYPE fp419;
fp419 = fp277 * fp262;
LIBINT2_REALTYPE fp418;
fp418 = fp419 * fp254;
LIBINT2_REALTYPE fp34;
fp34 = fp418;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+34)*1+lsi)*1]),&(fp34),1);
LIBINT2_REALTYPE fp421;
fp421 = fp277 * fp261;
LIBINT2_REALTYPE fp420;
fp420 = fp421 * fp255;
LIBINT2_REALTYPE fp33;
fp33 = fp420;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+33)*1+lsi)*1]),&(fp33),1);
LIBINT2_REALTYPE fp423;
fp423 = fp278 * fp263;
LIBINT2_REALTYPE fp422;
fp422 = fp423 * fp254;
LIBINT2_REALTYPE fp32;
fp32 = fp422;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+32)*1+lsi)*1]),&(fp32),1);
LIBINT2_REALTYPE fp425;
fp425 = fp278 * fp262;
LIBINT2_REALTYPE fp424;
fp424 = fp425 * fp255;
LIBINT2_REALTYPE fp31;
fp31 = fp424;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+31)*1+lsi)*1]),&(fp31),1);
LIBINT2_REALTYPE fp427;
fp427 = fp279 * fp263;
LIBINT2_REALTYPE fp426;
fp426 = fp427 * fp255;
LIBINT2_REALTYPE fp30;
fp30 = fp426;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+30)*1+lsi)*1]),&(fp30),1);
LIBINT2_REALTYPE fp195;
LIBINT2_REALTYPE fp194;
fp194 = libint2::fma_plus(inteval->PA_x[vi], fp196, fp202);
LIBINT2_REALTYPE fp280;
fp280 = 0.0000000000000000e+00 + fp194;
LIBINT2_REALTYPE fp429;
fp429 = fp280 * fp271;
LIBINT2_REALTYPE fp428;
fp428 = fp429 * fp248;
LIBINT2_REALTYPE fp29;
fp29 = fp428;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+29)*1+lsi)*1]),&(fp29),1);
LIBINT2_REALTYPE fp431;
fp431 = fp280 * fp270;
LIBINT2_REALTYPE fp430;
fp430 = fp431 * fp249;
LIBINT2_REALTYPE fp28;
fp28 = fp430;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+28)*1+lsi)*1]),&(fp28),1);
LIBINT2_REALTYPE fp433;
fp433 = fp280 * fp269;
LIBINT2_REALTYPE fp432;
fp432 = fp433 * fp250;
LIBINT2_REALTYPE fp27;
fp27 = fp432;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+27)*1+lsi)*1]),&(fp27),1);
LIBINT2_REALTYPE fp435;
fp435 = fp280 * fp268;
LIBINT2_REALTYPE fp434;
fp434 = fp435 * fp251;
LIBINT2_REALTYPE fp26;
fp26 = fp434;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+26)*1+lsi)*1]),&(fp26),1);
LIBINT2_REALTYPE fp205;
fp205 = fp238 * fp196;
LIBINT2_REALTYPE fp206;
LIBINT2_REALTYPE fp204;
fp204 = libint2::fma_plus(inteval->PB_x[vi], fp194, fp205);
LIBINT2_REALTYPE fp281;
fp281 = 0.0000000000000000e+00 + fp204;
LIBINT2_REALTYPE fp437;
fp437 = fp281 * fp271;
LIBINT2_REALTYPE fp436;
fp436 = fp437 * fp249;
LIBINT2_REALTYPE fp25;
fp25 = fp436;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+25)*1+lsi)*1]),&(fp25),1);
LIBINT2_REALTYPE fp439;
fp439 = fp281 * fp270;
LIBINT2_REALTYPE fp438;
fp438 = fp439 * fp250;
LIBINT2_REALTYPE fp24;
fp24 = fp438;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+24)*1+lsi)*1]),&(fp24),1);
LIBINT2_REALTYPE fp441;
fp441 = fp281 * fp269;
LIBINT2_REALTYPE fp440;
fp440 = fp441 * fp251;
LIBINT2_REALTYPE fp23;
fp23 = fp440;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+23)*1+lsi)*1]),&(fp23),1);
LIBINT2_REALTYPE fp221;
fp221 = fp238 * fp199;
LIBINT2_REALTYPE fp223;
fp223 = inteval->oo2z[vi] * fp201;
LIBINT2_REALTYPE fp224;
LIBINT2_REALTYPE fp222;
fp222 = libint2::fma_plus(inteval->PA_x[vi], fp207, fp223);
LIBINT2_REALTYPE fp220;
fp220 = fp222 + fp221;
LIBINT2_REALTYPE fp282;
fp282 = 0.0000000000000000e+00 + fp220;
LIBINT2_REALTYPE fp443;
fp443 = fp282 * fp271;
LIBINT2_REALTYPE fp442;
fp442 = fp443 * fp250;
LIBINT2_REALTYPE fp22;
fp22 = fp442;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+22)*1+lsi)*1]),&(fp22),1);
LIBINT2_REALTYPE fp445;
fp445 = fp282 * fp270;
LIBINT2_REALTYPE fp444;
fp444 = fp445 * fp251;
LIBINT2_REALTYPE fp21;
fp21 = fp444;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+21)*1+lsi)*1]),&(fp21),1);
LIBINT2_REALTYPE fp229;
fp229 = fp235 * fp207;
LIBINT2_REALTYPE fp231;
fp231 = inteval->oo2z[vi] * fp209;
LIBINT2_REALTYPE fp232;
LIBINT2_REALTYPE fp230;
fp230 = libint2::fma_plus(inteval->PA_x[vi], fp225, fp231);
LIBINT2_REALTYPE fp228;
fp228 = fp230 + fp229;
LIBINT2_REALTYPE fp283;
fp283 = 0.0000000000000000e+00 + fp228;
LIBINT2_REALTYPE fp447;
fp447 = fp283 * fp271;
LIBINT2_REALTYPE fp446;
fp446 = fp447 * fp251;
LIBINT2_REALTYPE fp20;
fp20 = fp446;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+20)*1+lsi)*1]),&(fp20),1);
LIBINT2_REALTYPE fp449;
fp449 = fp280 * fp267;
LIBINT2_REALTYPE fp448;
fp448 = fp449 * fp252;
LIBINT2_REALTYPE fp19;
fp19 = fp448;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+19)*1+lsi)*1]),&(fp19),1);
LIBINT2_REALTYPE fp451;
fp451 = fp280 * fp266;
LIBINT2_REALTYPE fp450;
fp450 = fp451 * fp253;
LIBINT2_REALTYPE fp18;
fp18 = fp450;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+18)*1+lsi)*1]),&(fp18),1);
LIBINT2_REALTYPE fp453;
fp453 = fp280 * fp265;
LIBINT2_REALTYPE fp452;
fp452 = fp453 * fp254;
LIBINT2_REALTYPE fp17;
fp17 = fp452;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+17)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp455;
fp455 = fp280 * fp264;
LIBINT2_REALTYPE fp454;
fp454 = fp455 * fp255;
LIBINT2_REALTYPE fp16;
fp16 = fp454;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+16)*1+lsi)*1]),&(fp16),1);
LIBINT2_REALTYPE fp457;
fp457 = fp281 * fp267;
LIBINT2_REALTYPE fp456;
fp456 = fp457 * fp253;
LIBINT2_REALTYPE fp15;
fp15 = fp456;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+15)*1+lsi)*1]),&(fp15),1);
LIBINT2_REALTYPE fp459;
fp459 = fp281 * fp266;
LIBINT2_REALTYPE fp458;
fp458 = fp459 * fp254;
LIBINT2_REALTYPE fp14;
fp14 = fp458;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+14)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp461;
fp461 = fp281 * fp265;
LIBINT2_REALTYPE fp460;
fp460 = fp461 * fp255;
LIBINT2_REALTYPE fp13;
fp13 = fp460;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+13)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp463;
fp463 = fp282 * fp267;
LIBINT2_REALTYPE fp462;
fp462 = fp463 * fp254;
LIBINT2_REALTYPE fp12;
fp12 = fp462;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+12)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp465;
fp465 = fp282 * fp266;
LIBINT2_REALTYPE fp464;
fp464 = fp465 * fp255;
LIBINT2_REALTYPE fp11;
fp11 = fp464;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+11)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp467;
fp467 = fp283 * fp267;
LIBINT2_REALTYPE fp466;
fp466 = fp467 * fp255;
LIBINT2_REALTYPE fp10;
fp10 = fp466;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+10)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp193;
LIBINT2_REALTYPE fp192;
fp192 = libint2::fma_plus(inteval->PA_x[vi], fp194, fp205);
LIBINT2_REALTYPE fp284;
fp284 = 0.0000000000000000e+00 + fp192;
LIBINT2_REALTYPE fp469;
fp469 = fp284 * fp271;
LIBINT2_REALTYPE fp468;
fp468 = fp469 * fp252;
LIBINT2_REALTYPE fp9;
fp9 = fp468;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp471;
fp471 = fp284 * fp270;
LIBINT2_REALTYPE fp470;
fp470 = fp471 * fp253;
LIBINT2_REALTYPE fp8;
fp8 = fp470;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp473;
fp473 = fp284 * fp269;
LIBINT2_REALTYPE fp472;
fp472 = fp473 * fp254;
LIBINT2_REALTYPE fp7;
fp7 = fp472;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp475;
fp475 = fp284 * fp268;
LIBINT2_REALTYPE fp474;
fp474 = fp475 * fp255;
LIBINT2_REALTYPE fp6;
fp6 = fp474;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp213;
fp213 = fp235 * fp194;
LIBINT2_REALTYPE fp214;
LIBINT2_REALTYPE fp212;
fp212 = libint2::fma_plus(inteval->PB_x[vi], fp192, fp213);
LIBINT2_REALTYPE fp285;
fp285 = 0.0000000000000000e+00 + fp212;
LIBINT2_REALTYPE fp477;
fp477 = fp285 * fp271;
LIBINT2_REALTYPE fp476;
fp476 = fp477 * fp253;
LIBINT2_REALTYPE fp5;
fp5 = fp476;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp479;
fp479 = fp285 * fp270;
LIBINT2_REALTYPE fp478;
fp478 = fp479 * fp254;
LIBINT2_REALTYPE fp4;
fp4 = fp478;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp481;
fp481 = fp285 * fp269;
LIBINT2_REALTYPE fp480;
fp480 = fp481 * fp255;
LIBINT2_REALTYPE fp3;
fp3 = fp480;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp216;
fp216 = fp238 * fp204;
LIBINT2_REALTYPE fp218;
fp218 = fp238 * fp207;
LIBINT2_REALTYPE fp219;
LIBINT2_REALTYPE fp217;
fp217 = libint2::fma_plus(inteval->PA_x[vi], fp220, fp218);
LIBINT2_REALTYPE fp215;
fp215 = fp217 + fp216;
LIBINT2_REALTYPE fp286;
fp286 = 0.0000000000000000e+00 + fp215;
LIBINT2_REALTYPE fp483;
fp483 = fp286 * fp271;
LIBINT2_REALTYPE fp482;
fp482 = fp483 * fp254;
LIBINT2_REALTYPE fp2;
fp2 = fp482;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp485;
fp485 = fp286 * fp270;
LIBINT2_REALTYPE fp484;
fp484 = fp485 * fp255;
LIBINT2_REALTYPE fp1;
fp1 = fp484;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp234;
fp234 = fp235 * fp220;
LIBINT2_REALTYPE fp237;
fp237 = fp238 * fp225;
LIBINT2_REALTYPE fp239;
LIBINT2_REALTYPE fp236;
fp236 = libint2::fma_plus(inteval->PA_x[vi], fp228, fp237);
LIBINT2_REALTYPE fp233;
fp233 = fp236 + fp234;
LIBINT2_REALTYPE fp287;
fp287 = 0.0000000000000000e+00 + fp233;
LIBINT2_REALTYPE fp487;
fp487 = fp287 * fp271;
LIBINT2_REALTYPE fp486;
fp486 = fp487 * fp255;
LIBINT2_REALTYPE fp0;
fp0 = fp486;
_libint2_static_api_inc1_short_(&(stack[((hsi*100+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 488 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
