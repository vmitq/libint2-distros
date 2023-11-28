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
void eri3_aB_WP__0__F__1___TwoPRep_unit__0__P__1___Ab__up_0_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp441;
fp441 = 2.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp344;
fp344 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp345;
LIBINT2_REALTYPE fp343;
fp343 = libint2::fma_plus(inteval->QC_z[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi], fp344);
LIBINT2_REALTYPE fp341;
fp341 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp342;
LIBINT2_REALTYPE fp340;
fp340 = libint2::fma_plus(inteval->QC_z[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi], fp341);
LIBINT2_REALTYPE fp216;
LIBINT2_REALTYPE fp215;
fp215 = libint2::fma_minus(inteval->roe[vi], fp340, fp343);
LIBINT2_REALTYPE fp214;
fp214 = fp441 * fp215;
LIBINT2_REALTYPE fp422;
fp422 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp414;
LIBINT2_REALTYPE fp413;
fp413 = libint2::fma_minus(inteval->roe[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi]);
LIBINT2_REALTYPE fp412;
fp412 = fp422 * fp413;
LIBINT2_REALTYPE fp279;
fp279 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp280;
LIBINT2_REALTYPE fp278;
fp278 = libint2::fma_plus(inteval->QC_z[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi], fp279);
LIBINT2_REALTYPE fp283;
fp283 = inteval->WQ_z[vi] * fp278;
LIBINT2_REALTYPE fp284;
LIBINT2_REALTYPE fp282;
fp282 = libint2::fma_plus(inteval->QC_z[vi], fp340, fp283);
LIBINT2_REALTYPE fp281;
fp281 = fp282 - fp412;
LIBINT2_REALTYPE fp218;
fp218 = inteval->WQ_z[vi] * fp281;
LIBINT2_REALTYPE fp421;
LIBINT2_REALTYPE fp420;
fp420 = libint2::fma_minus(inteval->roe[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi]);
LIBINT2_REALTYPE fp419;
fp419 = fp422 * fp420;
LIBINT2_REALTYPE fp287;
fp287 = inteval->WQ_z[vi] * fp340;
LIBINT2_REALTYPE fp288;
LIBINT2_REALTYPE fp286;
fp286 = libint2::fma_plus(inteval->QC_z[vi], fp343, fp287);
LIBINT2_REALTYPE fp285;
fp285 = fp286 - fp419;
LIBINT2_REALTYPE fp219;
LIBINT2_REALTYPE fp217;
fp217 = libint2::fma_plus(inteval->QC_z[vi], fp285, fp218);
LIBINT2_REALTYPE fp213;
fp213 = fp217 - fp214;
LIBINT2_REALTYPE fp455;
fp455 = 4.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp76;
fp76 = fp455 * fp213;
LIBINT2_REALTYPE fp449;
fp449 = 3.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp181;
LIBINT2_REALTYPE fp180;
fp180 = libint2::fma_minus(inteval->roe[vi], fp281, fp285);
LIBINT2_REALTYPE fp179;
fp179 = fp449 * fp180;
LIBINT2_REALTYPE fp208;
LIBINT2_REALTYPE fp207;
fp207 = libint2::fma_minus(inteval->roe[vi], fp278, fp340);
LIBINT2_REALTYPE fp206;
fp206 = fp441 * fp207;
LIBINT2_REALTYPE fp398;
LIBINT2_REALTYPE fp397;
fp397 = libint2::fma_minus(inteval->roe[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi]);
LIBINT2_REALTYPE fp396;
fp396 = fp422 * fp397;
LIBINT2_REALTYPE fp227;
fp227 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_5[vi];
LIBINT2_REALTYPE fp228;
LIBINT2_REALTYPE fp226;
fp226 = libint2::fma_plus(inteval->QC_z[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi], fp227);
LIBINT2_REALTYPE fp231;
fp231 = inteval->WQ_z[vi] * fp226;
LIBINT2_REALTYPE fp232;
LIBINT2_REALTYPE fp230;
fp230 = libint2::fma_plus(inteval->QC_z[vi], fp278, fp231);
LIBINT2_REALTYPE fp229;
fp229 = fp230 - fp396;
LIBINT2_REALTYPE fp210;
fp210 = inteval->WQ_z[vi] * fp229;
LIBINT2_REALTYPE fp211;
LIBINT2_REALTYPE fp209;
fp209 = libint2::fma_plus(inteval->QC_z[vi], fp281, fp210);
LIBINT2_REALTYPE fp205;
fp205 = fp209 - fp206;
LIBINT2_REALTYPE fp183;
fp183 = inteval->WQ_z[vi] * fp205;
LIBINT2_REALTYPE fp184;
LIBINT2_REALTYPE fp182;
fp182 = libint2::fma_plus(inteval->QC_z[vi], fp213, fp183);
LIBINT2_REALTYPE fp178;
fp178 = fp182 - fp179;
LIBINT2_REALTYPE fp77;
LIBINT2_REALTYPE fp75;
fp75 = libint2::fma_plus(inteval->WP_z[vi], fp178, fp76);
LIBINT2_REALTYPE fp74;
fp74 = fp75;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+74)*1+lsi)*1]),&(fp74),1);
LIBINT2_REALTYPE fp435;
fp435 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp88;
fp88 = fp435 * fp285;
LIBINT2_REALTYPE fp89;
LIBINT2_REALTYPE fp87;
fp87 = libint2::fma_plus(inteval->WP_z[vi], fp213, fp88);
LIBINT2_REALTYPE fp69;
fp69 = fp87;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+73)*1+lsi)*1]),&(fp69),1);
LIBINT2_REALTYPE fp235;
fp235 = inteval->WQ_y[vi] * fp281;
LIBINT2_REALTYPE fp236;
LIBINT2_REALTYPE fp234;
fp234 = libint2::fma_plus(inteval->QC_y[vi], fp285, fp235);
LIBINT2_REALTYPE fp79;
fp79 = fp435 * fp234;
LIBINT2_REALTYPE fp458;
fp458 = inteval->WQ_y[vi] * fp205;
LIBINT2_REALTYPE fp459;
LIBINT2_REALTYPE fp457;
fp457 = libint2::fma_plus(inteval->QC_y[vi], fp213, fp458);
LIBINT2_REALTYPE fp80;
LIBINT2_REALTYPE fp78;
fp78 = libint2::fma_plus(inteval->WP_z[vi], fp457, fp79);
LIBINT2_REALTYPE fp73;
fp73 = fp78;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+72)*1+lsi)*1]),&(fp73),1);
LIBINT2_REALTYPE fp381;
fp381 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp365;
fp365 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp366;
LIBINT2_REALTYPE fp364;
fp364 = libint2::fma_plus(inteval->QC_y[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi], fp365);
LIBINT2_REALTYPE fp303;
fp303 = inteval->WQ_z[vi] * fp364;
LIBINT2_REALTYPE fp368;
fp368 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp369;
LIBINT2_REALTYPE fp367;
fp367 = libint2::fma_plus(inteval->QC_y[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi], fp368);
LIBINT2_REALTYPE fp304;
LIBINT2_REALTYPE fp302;
fp302 = libint2::fma_plus(inteval->QC_z[vi], fp367, fp303);
LIBINT2_REALTYPE fp145;
fp145 = fp381 * fp302;
LIBINT2_REALTYPE fp94;
LIBINT2_REALTYPE fp93;
fp93 = libint2::fma_plus(inteval->WP_z[vi], fp234, fp145);
LIBINT2_REALTYPE fp67;
fp67 = fp93;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+71)*1+lsi)*1]),&(fp67),1);
LIBINT2_REALTYPE fp315;
fp315 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp316;
LIBINT2_REALTYPE fp314;
fp314 = libint2::fma_plus(inteval->QC_y[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi], fp315);
LIBINT2_REALTYPE fp319;
fp319 = inteval->WQ_y[vi] * fp314;
LIBINT2_REALTYPE fp320;
LIBINT2_REALTYPE fp318;
fp318 = libint2::fma_plus(inteval->QC_y[vi], fp364, fp319);
LIBINT2_REALTYPE fp317;
fp317 = fp318 - fp412;
LIBINT2_REALTYPE fp245;
fp245 = inteval->WQ_z[vi] * fp317;
LIBINT2_REALTYPE fp323;
fp323 = inteval->WQ_y[vi] * fp364;
LIBINT2_REALTYPE fp324;
LIBINT2_REALTYPE fp322;
fp322 = libint2::fma_plus(inteval->QC_y[vi], fp367, fp323);
LIBINT2_REALTYPE fp321;
fp321 = fp322 - fp419;
LIBINT2_REALTYPE fp246;
LIBINT2_REALTYPE fp244;
fp244 = libint2::fma_plus(inteval->QC_z[vi], fp321, fp245);
LIBINT2_REALTYPE fp82;
fp82 = fp381 * fp244;
LIBINT2_REALTYPE fp200;
LIBINT2_REALTYPE fp199;
fp199 = libint2::fma_minus(inteval->roe[vi], fp317, fp321);
LIBINT2_REALTYPE fp188;
fp188 = fp422 * fp199;
LIBINT2_REALTYPE fp251;
fp251 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_5[vi];
LIBINT2_REALTYPE fp252;
LIBINT2_REALTYPE fp250;
fp250 = libint2::fma_plus(inteval->QC_y[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi], fp251);
LIBINT2_REALTYPE fp255;
fp255 = inteval->WQ_y[vi] * fp250;
LIBINT2_REALTYPE fp256;
LIBINT2_REALTYPE fp254;
fp254 = libint2::fma_plus(inteval->QC_y[vi], fp314, fp255);
LIBINT2_REALTYPE fp253;
fp253 = fp254 - fp396;
LIBINT2_REALTYPE fp241;
fp241 = inteval->WQ_z[vi] * fp253;
LIBINT2_REALTYPE fp242;
LIBINT2_REALTYPE fp240;
fp240 = libint2::fma_plus(inteval->QC_z[vi], fp317, fp241);
LIBINT2_REALTYPE fp190;
fp190 = inteval->WQ_z[vi] * fp240;
LIBINT2_REALTYPE fp191;
LIBINT2_REALTYPE fp189;
fp189 = libint2::fma_plus(inteval->QC_z[vi], fp244, fp190);
LIBINT2_REALTYPE fp187;
fp187 = fp189 - fp188;
LIBINT2_REALTYPE fp83;
LIBINT2_REALTYPE fp81;
fp81 = libint2::fma_plus(inteval->WP_z[vi], fp187, fp82);
LIBINT2_REALTYPE fp72;
fp72 = fp81;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+70)*1+lsi)*1]),&(fp72),1);
LIBINT2_REALTYPE fp327;
fp327 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp326;
fp326 = fp327 * fp321;
LIBINT2_REALTYPE fp98;
LIBINT2_REALTYPE fp97;
fp97 = libint2::fma_plus(inteval->WP_z[vi], fp244, fp326);
LIBINT2_REALTYPE fp65;
fp65 = fp97;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+69)*1+lsi)*1]),&(fp65),1);
LIBINT2_REALTYPE fp268;
LIBINT2_REALTYPE fp267;
fp267 = libint2::fma_minus(inteval->roe[vi], fp364, fp367);
LIBINT2_REALTYPE fp266;
fp266 = fp441 * fp267;
LIBINT2_REALTYPE fp270;
fp270 = inteval->WQ_y[vi] * fp317;
LIBINT2_REALTYPE fp271;
LIBINT2_REALTYPE fp269;
fp269 = libint2::fma_plus(inteval->QC_y[vi], fp321, fp270);
LIBINT2_REALTYPE fp265;
fp265 = fp269 - fp266;
LIBINT2_REALTYPE fp276;
fp276 = fp327 * fp265;
LIBINT2_REALTYPE fp260;
LIBINT2_REALTYPE fp259;
fp259 = libint2::fma_minus(inteval->roe[vi], fp314, fp364);
LIBINT2_REALTYPE fp258;
fp258 = fp441 * fp259;
LIBINT2_REALTYPE fp262;
fp262 = inteval->WQ_y[vi] * fp253;
LIBINT2_REALTYPE fp263;
LIBINT2_REALTYPE fp261;
fp261 = libint2::fma_plus(inteval->QC_y[vi], fp317, fp262);
LIBINT2_REALTYPE fp257;
fp257 = fp261 - fp258;
LIBINT2_REALTYPE fp194;
fp194 = inteval->WQ_z[vi] * fp257;
LIBINT2_REALTYPE fp195;
LIBINT2_REALTYPE fp193;
fp193 = libint2::fma_plus(inteval->QC_z[vi], fp265, fp194);
LIBINT2_REALTYPE fp85;
LIBINT2_REALTYPE fp84;
fp84 = libint2::fma_plus(inteval->WP_z[vi], fp193, fp276);
LIBINT2_REALTYPE fp71;
fp71 = fp84;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+68)*1+lsi)*1]),&(fp71),1);
LIBINT2_REALTYPE fp198;
fp198 = fp449 * fp199;
LIBINT2_REALTYPE fp202;
fp202 = inteval->WQ_y[vi] * fp257;
LIBINT2_REALTYPE fp203;
LIBINT2_REALTYPE fp201;
fp201 = libint2::fma_plus(inteval->QC_y[vi], fp265, fp202);
LIBINT2_REALTYPE fp197;
fp197 = fp201 - fp198;
LIBINT2_REALTYPE fp86;
fp86 = inteval->WP_z[vi] * fp197;
LIBINT2_REALTYPE fp70;
fp70 = fp86;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+67)*1+lsi)*1]),&(fp70),1);
LIBINT2_REALTYPE fp102;
fp102 = inteval->WP_z[vi] * fp265;
LIBINT2_REALTYPE fp63;
fp63 = fp102;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+66)*1+lsi)*1]),&(fp63),1);
LIBINT2_REALTYPE fp293;
fp293 = inteval->WQ_x[vi] * fp281;
LIBINT2_REALTYPE fp294;
LIBINT2_REALTYPE fp292;
fp292 = libint2::fma_plus(inteval->QC_x[vi], fp285, fp293);
LIBINT2_REALTYPE fp91;
fp91 = fp435 * fp292;
LIBINT2_REALTYPE fp221;
fp221 = inteval->WQ_x[vi] * fp205;
LIBINT2_REALTYPE fp222;
LIBINT2_REALTYPE fp220;
fp220 = libint2::fma_plus(inteval->QC_x[vi], fp213, fp221);
LIBINT2_REALTYPE fp92;
LIBINT2_REALTYPE fp90;
fp90 = libint2::fma_plus(inteval->WP_z[vi], fp220, fp91);
LIBINT2_REALTYPE fp68;
fp68 = fp90;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+65)*1+lsi)*1]),&(fp68),1);
LIBINT2_REALTYPE fp406;
fp406 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp407;
LIBINT2_REALTYPE fp405;
fp405 = libint2::fma_plus(inteval->QC_x[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi], fp406);
LIBINT2_REALTYPE fp347;
fp347 = inteval->WQ_z[vi] * fp405;
LIBINT2_REALTYPE fp409;
fp409 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp410;
LIBINT2_REALTYPE fp408;
fp408 = libint2::fma_plus(inteval->QC_x[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi], fp409);
LIBINT2_REALTYPE fp348;
LIBINT2_REALTYPE fp346;
fp346 = libint2::fma_plus(inteval->QC_z[vi], fp408, fp347);
LIBINT2_REALTYPE fp353;
fp353 = fp381 * fp346;
LIBINT2_REALTYPE fp105;
LIBINT2_REALTYPE fp104;
fp104 = libint2::fma_plus(inteval->WP_z[vi], fp292, fp353);
LIBINT2_REALTYPE fp61;
fp61 = fp104;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+64)*1+lsi)*1]),&(fp61),1);
LIBINT2_REALTYPE fp403;
fp403 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp404;
LIBINT2_REALTYPE fp402;
fp402 = libint2::fma_plus(inteval->QC_x[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi], fp403);
LIBINT2_REALTYPE fp371;
fp371 = inteval->WQ_y[vi] * fp402;
LIBINT2_REALTYPE fp372;
LIBINT2_REALTYPE fp370;
fp370 = libint2::fma_plus(inteval->QC_y[vi], fp405, fp371);
LIBINT2_REALTYPE fp309;
fp309 = inteval->WQ_z[vi] * fp370;
LIBINT2_REALTYPE fp374;
fp374 = inteval->WQ_y[vi] * fp405;
LIBINT2_REALTYPE fp375;
LIBINT2_REALTYPE fp373;
fp373 = libint2::fma_plus(inteval->QC_y[vi], fp408, fp374);
LIBINT2_REALTYPE fp310;
LIBINT2_REALTYPE fp308;
fp308 = libint2::fma_plus(inteval->QC_z[vi], fp373, fp309);
LIBINT2_REALTYPE fp312;
fp312 = fp381 * fp308;
LIBINT2_REALTYPE fp461;
fp461 = inteval->WQ_x[vi] * fp229;
LIBINT2_REALTYPE fp462;
LIBINT2_REALTYPE fp460;
fp460 = libint2::fma_plus(inteval->QC_x[vi], fp281, fp461);
LIBINT2_REALTYPE fp464;
fp464 = inteval->WQ_y[vi] * fp460;
LIBINT2_REALTYPE fp465;
LIBINT2_REALTYPE fp463;
fp463 = libint2::fma_plus(inteval->QC_y[vi], fp292, fp464);
LIBINT2_REALTYPE fp96;
LIBINT2_REALTYPE fp95;
fp95 = libint2::fma_plus(inteval->WP_z[vi], fp463, fp312);
LIBINT2_REALTYPE fp66;
fp66 = fp95;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+63)*1+lsi)*1]),&(fp66),1);
LIBINT2_REALTYPE fp110;
fp110 = fp327 * fp373;
LIBINT2_REALTYPE fp111;
LIBINT2_REALTYPE fp109;
fp109 = libint2::fma_plus(inteval->WP_z[vi], fp308, fp110);
LIBINT2_REALTYPE fp59;
fp59 = fp109;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+62)*1+lsi)*1]),&(fp59),1);
LIBINT2_REALTYPE fp330;
fp330 = inteval->WQ_x[vi] * fp317;
LIBINT2_REALTYPE fp331;
LIBINT2_REALTYPE fp329;
fp329 = libint2::fma_plus(inteval->QC_x[vi], fp321, fp330);
LIBINT2_REALTYPE fp100;
fp100 = fp327 * fp329;
LIBINT2_REALTYPE fp470;
fp470 = inteval->WQ_x[vi] * fp253;
LIBINT2_REALTYPE fp471;
LIBINT2_REALTYPE fp469;
fp469 = libint2::fma_plus(inteval->QC_x[vi], fp317, fp470);
LIBINT2_REALTYPE fp467;
fp467 = inteval->WQ_z[vi] * fp469;
LIBINT2_REALTYPE fp468;
LIBINT2_REALTYPE fp466;
fp466 = libint2::fma_plus(inteval->QC_z[vi], fp329, fp467);
LIBINT2_REALTYPE fp101;
LIBINT2_REALTYPE fp99;
fp99 = libint2::fma_plus(inteval->WP_z[vi], fp466, fp100);
LIBINT2_REALTYPE fp64;
fp64 = fp99;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+61)*1+lsi)*1]),&(fp64),1);
LIBINT2_REALTYPE fp273;
fp273 = inteval->WQ_x[vi] * fp257;
LIBINT2_REALTYPE fp274;
LIBINT2_REALTYPE fp272;
fp272 = libint2::fma_plus(inteval->QC_x[vi], fp265, fp273);
LIBINT2_REALTYPE fp103;
fp103 = inteval->WP_z[vi] * fp272;
LIBINT2_REALTYPE fp62;
fp62 = fp103;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+60)*1+lsi)*1]),&(fp62),1);
LIBINT2_REALTYPE fp115;
fp115 = inteval->WP_z[vi] * fp329;
LIBINT2_REALTYPE fp57;
fp57 = fp115;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+59)*1+lsi)*1]),&(fp57),1);
LIBINT2_REALTYPE fp416;
fp416 = inteval->WQ_x[vi] * fp402;
LIBINT2_REALTYPE fp417;
LIBINT2_REALTYPE fp415;
fp415 = libint2::fma_plus(inteval->QC_x[vi], fp405, fp416);
LIBINT2_REALTYPE fp411;
fp411 = fp415 - fp412;
LIBINT2_REALTYPE fp356;
fp356 = inteval->WQ_z[vi] * fp411;
LIBINT2_REALTYPE fp424;
fp424 = inteval->WQ_x[vi] * fp405;
LIBINT2_REALTYPE fp425;
LIBINT2_REALTYPE fp423;
fp423 = libint2::fma_plus(inteval->QC_x[vi], fp408, fp424);
LIBINT2_REALTYPE fp418;
fp418 = fp423 - fp419;
LIBINT2_REALTYPE fp357;
LIBINT2_REALTYPE fp355;
fp355 = libint2::fma_plus(inteval->QC_z[vi], fp418, fp356);
LIBINT2_REALTYPE fp107;
fp107 = fp381 * fp355;
LIBINT2_REALTYPE fp448;
LIBINT2_REALTYPE fp447;
fp447 = libint2::fma_minus(inteval->roe[vi], fp411, fp418);
LIBINT2_REALTYPE fp333;
fp333 = fp422 * fp447;
LIBINT2_REALTYPE fp393;
fp393 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_5[vi];
LIBINT2_REALTYPE fp394;
LIBINT2_REALTYPE fp392;
fp392 = libint2::fma_plus(inteval->QC_x[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi], fp393);
LIBINT2_REALTYPE fp400;
fp400 = inteval->WQ_x[vi] * fp392;
LIBINT2_REALTYPE fp401;
LIBINT2_REALTYPE fp399;
fp399 = libint2::fma_plus(inteval->QC_x[vi], fp402, fp400);
LIBINT2_REALTYPE fp395;
fp395 = fp399 - fp396;
LIBINT2_REALTYPE fp350;
fp350 = inteval->WQ_z[vi] * fp395;
LIBINT2_REALTYPE fp351;
LIBINT2_REALTYPE fp349;
fp349 = libint2::fma_plus(inteval->QC_z[vi], fp411, fp350);
LIBINT2_REALTYPE fp297;
fp297 = inteval->WQ_z[vi] * fp349;
LIBINT2_REALTYPE fp298;
LIBINT2_REALTYPE fp296;
fp296 = libint2::fma_plus(inteval->QC_z[vi], fp355, fp297);
LIBINT2_REALTYPE fp295;
fp295 = fp296 - fp333;
LIBINT2_REALTYPE fp108;
LIBINT2_REALTYPE fp106;
fp106 = libint2::fma_plus(inteval->WP_z[vi], fp295, fp107);
LIBINT2_REALTYPE fp60;
fp60 = fp106;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+58)*1+lsi)*1]),&(fp60),1);
LIBINT2_REALTYPE fp171;
fp171 = fp327 * fp418;
LIBINT2_REALTYPE fp118;
LIBINT2_REALTYPE fp117;
fp117 = libint2::fma_plus(inteval->WP_z[vi], fp355, fp171);
LIBINT2_REALTYPE fp55;
fp55 = fp117;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+57)*1+lsi)*1]),&(fp55),1);
LIBINT2_REALTYPE fp384;
fp384 = inteval->WQ_y[vi] * fp411;
LIBINT2_REALTYPE fp385;
LIBINT2_REALTYPE fp383;
fp383 = libint2::fma_plus(inteval->QC_y[vi], fp418, fp384);
LIBINT2_REALTYPE fp113;
fp113 = fp327 * fp383;
LIBINT2_REALTYPE fp377;
fp377 = inteval->WQ_y[vi] * fp395;
LIBINT2_REALTYPE fp378;
LIBINT2_REALTYPE fp376;
fp376 = libint2::fma_plus(inteval->QC_y[vi], fp411, fp377);
LIBINT2_REALTYPE fp473;
fp473 = inteval->WQ_z[vi] * fp376;
LIBINT2_REALTYPE fp474;
LIBINT2_REALTYPE fp472;
fp472 = libint2::fma_plus(inteval->QC_z[vi], fp383, fp473);
LIBINT2_REALTYPE fp114;
LIBINT2_REALTYPE fp112;
fp112 = libint2::fma_plus(inteval->WP_z[vi], fp472, fp113);
LIBINT2_REALTYPE fp58;
fp58 = fp112;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+56)*1+lsi)*1]),&(fp58),1);
LIBINT2_REALTYPE fp335;
fp335 = inteval->WQ_y[vi] * fp376;
LIBINT2_REALTYPE fp336;
LIBINT2_REALTYPE fp334;
fp334 = libint2::fma_plus(inteval->QC_y[vi], fp383, fp335);
LIBINT2_REALTYPE fp332;
fp332 = fp334 - fp333;
LIBINT2_REALTYPE fp116;
fp116 = inteval->WP_z[vi] * fp332;
LIBINT2_REALTYPE fp56;
fp56 = fp116;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+55)*1+lsi)*1]),&(fp56),1);
LIBINT2_REALTYPE fp121;
fp121 = inteval->WP_z[vi] * fp383;
LIBINT2_REALTYPE fp53;
fp53 = fp121;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+54)*1+lsi)*1]),&(fp53),1);
LIBINT2_REALTYPE fp440;
LIBINT2_REALTYPE fp439;
fp439 = libint2::fma_minus(inteval->roe[vi], fp405, fp408);
LIBINT2_REALTYPE fp438;
fp438 = fp441 * fp439;
LIBINT2_REALTYPE fp443;
fp443 = inteval->WQ_x[vi] * fp411;
LIBINT2_REALTYPE fp444;
LIBINT2_REALTYPE fp442;
fp442 = libint2::fma_plus(inteval->QC_x[vi], fp418, fp443);
LIBINT2_REALTYPE fp437;
fp437 = fp442 - fp438;
LIBINT2_REALTYPE fp174;
fp174 = fp327 * fp437;
LIBINT2_REALTYPE fp429;
LIBINT2_REALTYPE fp428;
fp428 = libint2::fma_minus(inteval->roe[vi], fp402, fp405);
LIBINT2_REALTYPE fp427;
fp427 = fp441 * fp428;
LIBINT2_REALTYPE fp431;
fp431 = inteval->WQ_x[vi] * fp395;
LIBINT2_REALTYPE fp432;
LIBINT2_REALTYPE fp430;
fp430 = libint2::fma_plus(inteval->QC_x[vi], fp411, fp431);
LIBINT2_REALTYPE fp426;
fp426 = fp430 - fp427;
LIBINT2_REALTYPE fp359;
fp359 = inteval->WQ_z[vi] * fp426;
LIBINT2_REALTYPE fp360;
LIBINT2_REALTYPE fp358;
fp358 = libint2::fma_plus(inteval->QC_z[vi], fp437, fp359);
LIBINT2_REALTYPE fp120;
LIBINT2_REALTYPE fp119;
fp119 = libint2::fma_plus(inteval->WP_z[vi], fp358, fp174);
LIBINT2_REALTYPE fp54;
fp54 = fp119;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+53)*1+lsi)*1]),&(fp54),1);
LIBINT2_REALTYPE fp387;
fp387 = inteval->WQ_y[vi] * fp426;
LIBINT2_REALTYPE fp388;
LIBINT2_REALTYPE fp386;
fp386 = libint2::fma_plus(inteval->QC_y[vi], fp437, fp387);
LIBINT2_REALTYPE fp122;
fp122 = inteval->WP_z[vi] * fp386;
LIBINT2_REALTYPE fp52;
fp52 = fp122;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+52)*1+lsi)*1]),&(fp52),1);
LIBINT2_REALTYPE fp123;
fp123 = inteval->WP_z[vi] * fp437;
LIBINT2_REALTYPE fp51;
fp51 = fp123;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+51)*1+lsi)*1]),&(fp51),1);
LIBINT2_REALTYPE fp446;
fp446 = fp449 * fp447;
LIBINT2_REALTYPE fp451;
fp451 = inteval->WQ_x[vi] * fp426;
LIBINT2_REALTYPE fp452;
LIBINT2_REALTYPE fp450;
fp450 = libint2::fma_plus(inteval->QC_x[vi], fp437, fp451);
LIBINT2_REALTYPE fp445;
fp445 = fp450 - fp446;
LIBINT2_REALTYPE fp124;
fp124 = inteval->WP_z[vi] * fp445;
LIBINT2_REALTYPE fp50;
fp50 = fp124;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+50)*1+lsi)*1]),&(fp50),1);
LIBINT2_REALTYPE fp125;
fp125 = inteval->WP_y[vi] * fp178;
LIBINT2_REALTYPE fp49;
fp49 = fp125;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+49)*1+lsi)*1]),&(fp49),1);
LIBINT2_REALTYPE fp137;
fp137 = inteval->WP_y[vi] * fp213;
LIBINT2_REALTYPE fp44;
fp44 = fp137;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+48)*1+lsi)*1]),&(fp44),1);
LIBINT2_REALTYPE fp224;
fp224 = fp327 * fp213;
LIBINT2_REALTYPE fp127;
LIBINT2_REALTYPE fp126;
fp126 = libint2::fma_plus(inteval->WP_y[vi], fp457, fp224);
LIBINT2_REALTYPE fp48;
fp48 = fp126;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+47)*1+lsi)*1]),&(fp48),1);
LIBINT2_REALTYPE fp290;
fp290 = fp327 * fp285;
LIBINT2_REALTYPE fp140;
LIBINT2_REALTYPE fp139;
fp139 = libint2::fma_plus(inteval->WP_y[vi], fp234, fp290);
LIBINT2_REALTYPE fp42;
fp42 = fp139;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+46)*1+lsi)*1]),&(fp42),1);
LIBINT2_REALTYPE fp129;
fp129 = fp381 * fp234;
LIBINT2_REALTYPE fp130;
LIBINT2_REALTYPE fp128;
fp128 = libint2::fma_plus(inteval->WP_y[vi], fp187, fp129);
LIBINT2_REALTYPE fp47;
fp47 = fp128;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+45)*1+lsi)*1]),&(fp47),1);
LIBINT2_REALTYPE fp146;
LIBINT2_REALTYPE fp144;
fp144 = libint2::fma_plus(inteval->WP_y[vi], fp244, fp145);
LIBINT2_REALTYPE fp40;
fp40 = fp144;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+44)*1+lsi)*1]),&(fp40),1);
LIBINT2_REALTYPE fp132;
fp132 = fp435 * fp244;
LIBINT2_REALTYPE fp133;
LIBINT2_REALTYPE fp131;
fp131 = libint2::fma_plus(inteval->WP_y[vi], fp193, fp132);
LIBINT2_REALTYPE fp46;
fp46 = fp131;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+43)*1+lsi)*1]),&(fp46),1);
LIBINT2_REALTYPE fp135;
fp135 = fp455 * fp265;
LIBINT2_REALTYPE fp136;
LIBINT2_REALTYPE fp134;
fp134 = libint2::fma_plus(inteval->WP_y[vi], fp197, fp135);
LIBINT2_REALTYPE fp45;
fp45 = fp134;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+42)*1+lsi)*1]),&(fp45),1);
LIBINT2_REALTYPE fp150;
fp150 = fp435 * fp321;
LIBINT2_REALTYPE fp151;
LIBINT2_REALTYPE fp149;
fp149 = libint2::fma_plus(inteval->WP_y[vi], fp265, fp150);
LIBINT2_REALTYPE fp38;
fp38 = fp149;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+41)*1+lsi)*1]),&(fp38),1);
LIBINT2_REALTYPE fp138;
fp138 = inteval->WP_y[vi] * fp220;
LIBINT2_REALTYPE fp43;
fp43 = fp138;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+40)*1+lsi)*1]),&(fp43),1);
LIBINT2_REALTYPE fp155;
fp155 = inteval->WP_y[vi] * fp292;
LIBINT2_REALTYPE fp36;
fp36 = fp155;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+39)*1+lsi)*1]),&(fp36),1);
LIBINT2_REALTYPE fp142;
fp142 = fp327 * fp292;
LIBINT2_REALTYPE fp143;
LIBINT2_REALTYPE fp141;
fp141 = libint2::fma_plus(inteval->WP_y[vi], fp463, fp142);
LIBINT2_REALTYPE fp41;
fp41 = fp141;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+38)*1+lsi)*1]),&(fp41),1);
LIBINT2_REALTYPE fp158;
fp158 = fp327 * fp346;
LIBINT2_REALTYPE fp159;
LIBINT2_REALTYPE fp157;
fp157 = libint2::fma_plus(inteval->WP_y[vi], fp308, fp158);
LIBINT2_REALTYPE fp34;
fp34 = fp157;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+37)*1+lsi)*1]),&(fp34),1);
LIBINT2_REALTYPE fp148;
LIBINT2_REALTYPE fp147;
fp147 = libint2::fma_plus(inteval->WP_y[vi], fp466, fp312);
LIBINT2_REALTYPE fp39;
fp39 = fp147;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+36)*1+lsi)*1]),&(fp39),1);
LIBINT2_REALTYPE fp153;
fp153 = fp435 * fp329;
LIBINT2_REALTYPE fp154;
LIBINT2_REALTYPE fp152;
fp152 = libint2::fma_plus(inteval->WP_y[vi], fp272, fp153);
LIBINT2_REALTYPE fp37;
fp37 = fp152;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+35)*1+lsi)*1]),&(fp37),1);
LIBINT2_REALTYPE fp380;
fp380 = fp381 * fp373;
LIBINT2_REALTYPE fp164;
LIBINT2_REALTYPE fp163;
fp163 = libint2::fma_plus(inteval->WP_y[vi], fp329, fp380);
LIBINT2_REALTYPE fp32;
fp32 = fp163;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+34)*1+lsi)*1]),&(fp32),1);
LIBINT2_REALTYPE fp156;
fp156 = inteval->WP_y[vi] * fp295;
LIBINT2_REALTYPE fp35;
fp35 = fp156;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+33)*1+lsi)*1]),&(fp35),1);
LIBINT2_REALTYPE fp168;
fp168 = inteval->WP_y[vi] * fp355;
LIBINT2_REALTYPE fp30;
fp30 = fp168;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+32)*1+lsi)*1]),&(fp30),1);
LIBINT2_REALTYPE fp161;
fp161 = fp327 * fp355;
LIBINT2_REALTYPE fp162;
LIBINT2_REALTYPE fp160;
fp160 = libint2::fma_plus(inteval->WP_y[vi], fp472, fp161);
LIBINT2_REALTYPE fp33;
fp33 = fp160;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+31)*1+lsi)*1]),&(fp33),1);
LIBINT2_REALTYPE fp166;
fp166 = fp381 * fp383;
LIBINT2_REALTYPE fp167;
LIBINT2_REALTYPE fp165;
fp165 = libint2::fma_plus(inteval->WP_y[vi], fp332, fp166);
LIBINT2_REALTYPE fp31;
fp31 = fp165;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+30)*1+lsi)*1]),&(fp31),1);
LIBINT2_REALTYPE fp172;
LIBINT2_REALTYPE fp170;
fp170 = libint2::fma_plus(inteval->WP_y[vi], fp383, fp171);
LIBINT2_REALTYPE fp28;
fp28 = fp170;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+29)*1+lsi)*1]),&(fp28),1);
LIBINT2_REALTYPE fp169;
fp169 = inteval->WP_y[vi] * fp358;
LIBINT2_REALTYPE fp29;
fp29 = fp169;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+28)*1+lsi)*1]),&(fp29),1);
LIBINT2_REALTYPE fp175;
LIBINT2_REALTYPE fp173;
fp173 = libint2::fma_plus(inteval->WP_y[vi], fp386, fp174);
LIBINT2_REALTYPE fp27;
fp27 = fp173;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+27)*1+lsi)*1]),&(fp27),1);
LIBINT2_REALTYPE fp176;
fp176 = inteval->WP_y[vi] * fp437;
LIBINT2_REALTYPE fp26;
fp26 = fp176;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+26)*1+lsi)*1]),&(fp26),1);
LIBINT2_REALTYPE fp177;
fp177 = inteval->WP_y[vi] * fp445;
LIBINT2_REALTYPE fp25;
fp25 = fp177;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+25)*1+lsi)*1]),&(fp25),1);
LIBINT2_REALTYPE fp185;
fp185 = inteval->WP_x[vi] * fp178;
LIBINT2_REALTYPE fp24;
fp24 = fp185;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+24)*1+lsi)*1]),&(fp24),1);
LIBINT2_REALTYPE fp212;
fp212 = inteval->WP_x[vi] * fp213;
LIBINT2_REALTYPE fp19;
fp19 = fp212;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+23)*1+lsi)*1]),&(fp19),1);
LIBINT2_REALTYPE fp186;
fp186 = inteval->WP_x[vi] * fp457;
LIBINT2_REALTYPE fp23;
fp23 = fp186;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+22)*1+lsi)*1]),&(fp23),1);
LIBINT2_REALTYPE fp233;
fp233 = inteval->WP_x[vi] * fp234;
LIBINT2_REALTYPE fp17;
fp17 = fp233;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+21)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp192;
fp192 = inteval->WP_x[vi] * fp187;
LIBINT2_REALTYPE fp22;
fp22 = fp192;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+20)*1+lsi)*1]),&(fp22),1);
LIBINT2_REALTYPE fp243;
fp243 = inteval->WP_x[vi] * fp244;
LIBINT2_REALTYPE fp15;
fp15 = fp243;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+19)*1+lsi)*1]),&(fp15),1);
LIBINT2_REALTYPE fp196;
fp196 = inteval->WP_x[vi] * fp193;
LIBINT2_REALTYPE fp21;
fp21 = fp196;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+18)*1+lsi)*1]),&(fp21),1);
LIBINT2_REALTYPE fp204;
fp204 = inteval->WP_x[vi] * fp197;
LIBINT2_REALTYPE fp20;
fp20 = fp204;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+17)*1+lsi)*1]),&(fp20),1);
LIBINT2_REALTYPE fp264;
fp264 = inteval->WP_x[vi] * fp265;
LIBINT2_REALTYPE fp13;
fp13 = fp264;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+16)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp225;
LIBINT2_REALTYPE fp223;
fp223 = libint2::fma_plus(inteval->WP_x[vi], fp220, fp224);
LIBINT2_REALTYPE fp18;
fp18 = fp223;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+15)*1+lsi)*1]),&(fp18),1);
LIBINT2_REALTYPE fp291;
LIBINT2_REALTYPE fp289;
fp289 = libint2::fma_plus(inteval->WP_x[vi], fp292, fp290);
LIBINT2_REALTYPE fp11;
fp11 = fp289;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+14)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp238;
fp238 = fp327 * fp234;
LIBINT2_REALTYPE fp239;
LIBINT2_REALTYPE fp237;
fp237 = libint2::fma_plus(inteval->WP_x[vi], fp463, fp238);
LIBINT2_REALTYPE fp16;
fp16 = fp237;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+13)*1+lsi)*1]),&(fp16),1);
LIBINT2_REALTYPE fp306;
fp306 = fp327 * fp302;
LIBINT2_REALTYPE fp307;
LIBINT2_REALTYPE fp305;
fp305 = libint2::fma_plus(inteval->WP_x[vi], fp308, fp306);
LIBINT2_REALTYPE fp9;
fp9 = fp305;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+12)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp248;
fp248 = fp327 * fp244;
LIBINT2_REALTYPE fp249;
LIBINT2_REALTYPE fp247;
fp247 = libint2::fma_plus(inteval->WP_x[vi], fp466, fp248);
LIBINT2_REALTYPE fp14;
fp14 = fp247;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+11)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp277;
LIBINT2_REALTYPE fp275;
fp275 = libint2::fma_plus(inteval->WP_x[vi], fp272, fp276);
LIBINT2_REALTYPE fp12;
fp12 = fp275;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+10)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp328;
LIBINT2_REALTYPE fp325;
fp325 = libint2::fma_plus(inteval->WP_x[vi], fp329, fp326);
LIBINT2_REALTYPE fp7;
fp7 = fp325;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+9)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp300;
fp300 = fp381 * fp292;
LIBINT2_REALTYPE fp301;
LIBINT2_REALTYPE fp299;
fp299 = libint2::fma_plus(inteval->WP_x[vi], fp295, fp300);
LIBINT2_REALTYPE fp10;
fp10 = fp299;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+8)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp354;
LIBINT2_REALTYPE fp352;
fp352 = libint2::fma_plus(inteval->WP_x[vi], fp355, fp353);
LIBINT2_REALTYPE fp5;
fp5 = fp352;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+7)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp313;
LIBINT2_REALTYPE fp311;
fp311 = libint2::fma_plus(inteval->WP_x[vi], fp472, fp312);
LIBINT2_REALTYPE fp8;
fp8 = fp311;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+6)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp338;
fp338 = fp381 * fp329;
LIBINT2_REALTYPE fp339;
LIBINT2_REALTYPE fp337;
fp337 = libint2::fma_plus(inteval->WP_x[vi], fp332, fp338);
LIBINT2_REALTYPE fp6;
fp6 = fp337;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+5)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp382;
LIBINT2_REALTYPE fp379;
fp379 = libint2::fma_plus(inteval->WP_x[vi], fp383, fp380);
LIBINT2_REALTYPE fp3;
fp3 = fp379;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+4)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp362;
fp362 = fp435 * fp355;
LIBINT2_REALTYPE fp363;
LIBINT2_REALTYPE fp361;
fp361 = libint2::fma_plus(inteval->WP_x[vi], fp358, fp362);
LIBINT2_REALTYPE fp4;
fp4 = fp361;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+3)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp390;
fp390 = fp435 * fp383;
LIBINT2_REALTYPE fp391;
LIBINT2_REALTYPE fp389;
fp389 = libint2::fma_plus(inteval->WP_x[vi], fp386, fp390);
LIBINT2_REALTYPE fp2;
fp2 = fp389;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp434;
fp434 = fp435 * fp418;
LIBINT2_REALTYPE fp436;
LIBINT2_REALTYPE fp433;
fp433 = libint2::fma_plus(inteval->WP_x[vi], fp437, fp434);
LIBINT2_REALTYPE fp1;
fp1 = fp433;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp454;
fp454 = fp455 * fp437;
LIBINT2_REALTYPE fp456;
LIBINT2_REALTYPE fp453;
fp453 = libint2::fma_plus(inteval->WP_x[vi], fp445, fp454);
LIBINT2_REALTYPE fp0;
fp0 = fp453;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 475 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
