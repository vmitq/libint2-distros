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
void eri2_aB_WD__0__WF__1___TwoPRep_unit__0__unit__1___Ab__up_0_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp289;
fp289 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp282;
fp282 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp247;
fp247 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp142;
fp142 = fp282 * fp247;
LIBINT2_REALTYPE fp231;
fp231 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp224;
fp224 = inteval->WQ_z[vi] * fp231;
LIBINT2_REALTYPE fp143;
LIBINT2_REALTYPE fp141;
fp141 = libint2::fma_plus(inteval->WP_z[vi], fp224, fp142);
LIBINT2_REALTYPE fp61;
fp61 = fp289 * fp141;
LIBINT2_REALTYPE fp126;
fp126 = fp289 * fp224;
LIBINT2_REALTYPE fp209;
fp209 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_5[vi];
LIBINT2_REALTYPE fp210;
fp210 = inteval->WQ_z[vi] * fp209;
LIBINT2_REALTYPE fp206;
fp206 = inteval->WQ_z[vi] * fp210;
LIBINT2_REALTYPE fp127;
LIBINT2_REALTYPE fp125;
fp125 = libint2::fma_plus(inteval->WP_z[vi], fp206, fp126);
LIBINT2_REALTYPE fp62;
LIBINT2_REALTYPE fp60;
fp60 = libint2::fma_plus(inteval->WP_z[vi], fp125, fp61);
LIBINT2_REALTYPE fp59;
fp59 = fp60;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+59)*1+lsi)*1]),&(fp59),1);
LIBINT2_REALTYPE fp269;
fp269 = inteval->oo2ze[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp71;
LIBINT2_REALTYPE fp70;
fp70 = libint2::fma_plus(inteval->WP_z[vi], fp231, fp269);
LIBINT2_REALTYPE fp147;
fp147 = inteval->WQ_y[vi] * fp70;
LIBINT2_REALTYPE fp64;
fp64 = fp282 * fp147;
LIBINT2_REALTYPE fp130;
fp130 = fp282 * fp231;
LIBINT2_REALTYPE fp131;
LIBINT2_REALTYPE fp129;
fp129 = libint2::fma_plus(inteval->WP_z[vi], fp210, fp130);
LIBINT2_REALTYPE fp132;
fp132 = inteval->WQ_y[vi] * fp129;
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp63;
fp63 = libint2::fma_plus(inteval->WP_z[vi], fp132, fp64);
LIBINT2_REALTYPE fp58;
fp58 = fp63;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+58)*1+lsi)*1]),&(fp58),1);
LIBINT2_REALTYPE fp238;
fp238 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp240;
fp240 = inteval->WQ_y[vi] * fp238;
LIBINT2_REALTYPE fp152;
fp152 = inteval->WP_z[vi] * fp240;
LIBINT2_REALTYPE fp67;
fp67 = inteval->oo2ze[vi] * fp152;
LIBINT2_REALTYPE fp258;
fp258 = inteval->oo2ze[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp135;
LIBINT2_REALTYPE fp134;
fp134 = libint2::fma_plus(inteval->WP_z[vi], fp209, fp258);
LIBINT2_REALTYPE fp136;
fp136 = inteval->WQ_y[vi] * fp134;
LIBINT2_REALTYPE fp137;
fp137 = inteval->WQ_y[vi] * fp136;
LIBINT2_REALTYPE fp68;
LIBINT2_REALTYPE fp66;
fp66 = libint2::fma_plus(inteval->WP_z[vi], fp137, fp67);
LIBINT2_REALTYPE fp57;
fp57 = fp66;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+57)*1+lsi)*1]),&(fp57),1);
LIBINT2_REALTYPE fp218;
fp218 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_5[vi];
LIBINT2_REALTYPE fp219;
fp219 = inteval->WQ_y[vi] * fp218;
LIBINT2_REALTYPE fp220;
fp220 = inteval->WQ_y[vi] * fp219;
LIBINT2_REALTYPE fp139;
fp139 = inteval->WP_z[vi] * fp220;
LIBINT2_REALTYPE fp69;
fp69 = inteval->WP_z[vi] * fp139;
LIBINT2_REALTYPE fp56;
fp56 = fp69;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+56)*1+lsi)*1]),&(fp56),1);
LIBINT2_REALTYPE fp155;
fp155 = inteval->WQ_x[vi] * fp70;
LIBINT2_REALTYPE fp73;
fp73 = fp282 * fp155;
LIBINT2_REALTYPE fp144;
fp144 = inteval->WQ_x[vi] * fp129;
LIBINT2_REALTYPE fp74;
LIBINT2_REALTYPE fp72;
fp72 = libint2::fma_plus(inteval->WP_z[vi], fp144, fp73);
LIBINT2_REALTYPE fp55;
fp55 = fp72;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+55)*1+lsi)*1]),&(fp55),1);
LIBINT2_REALTYPE fp272;
fp272 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp261;
fp261 = inteval->WQ_y[vi] * fp272;
LIBINT2_REALTYPE fp159;
fp159 = inteval->WP_z[vi] * fp261;
LIBINT2_REALTYPE fp76;
fp76 = inteval->oo2ze[vi] * fp159;
LIBINT2_REALTYPE fp96;
fp96 = inteval->WQ_x[vi] * fp134;
LIBINT2_REALTYPE fp148;
fp148 = inteval->WQ_y[vi] * fp96;
LIBINT2_REALTYPE fp77;
LIBINT2_REALTYPE fp75;
fp75 = libint2::fma_plus(inteval->WP_z[vi], fp148, fp76);
LIBINT2_REALTYPE fp54;
fp54 = fp75;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+54)*1+lsi)*1]),&(fp54),1);
LIBINT2_REALTYPE fp273;
fp273 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_5[vi];
LIBINT2_REALTYPE fp239;
fp239 = inteval->WQ_y[vi] * fp273;
LIBINT2_REALTYPE fp241;
fp241 = inteval->WQ_y[vi] * fp239;
LIBINT2_REALTYPE fp153;
fp153 = inteval->WP_z[vi] * fp241;
LIBINT2_REALTYPE fp78;
fp78 = inteval->WP_z[vi] * fp153;
LIBINT2_REALTYPE fp53;
fp53 = fp78;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+53)*1+lsi)*1]),&(fp53),1);
LIBINT2_REALTYPE fp278;
fp278 = inteval->WQ_x[vi] * fp272;
LIBINT2_REALTYPE fp162;
fp162 = inteval->WP_z[vi] * fp278;
LIBINT2_REALTYPE fp80;
fp80 = inteval->oo2ze[vi] * fp162;
LIBINT2_REALTYPE fp156;
fp156 = inteval->WQ_x[vi] * fp96;
LIBINT2_REALTYPE fp81;
LIBINT2_REALTYPE fp79;
fp79 = libint2::fma_plus(inteval->WP_z[vi], fp156, fp80);
LIBINT2_REALTYPE fp52;
fp52 = fp79;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+52)*1+lsi)*1]),&(fp52),1);
LIBINT2_REALTYPE fp274;
fp274 = inteval->WQ_x[vi] * fp273;
LIBINT2_REALTYPE fp262;
fp262 = inteval->WQ_y[vi] * fp274;
LIBINT2_REALTYPE fp160;
fp160 = inteval->WP_z[vi] * fp262;
LIBINT2_REALTYPE fp82;
fp82 = inteval->WP_z[vi] * fp160;
LIBINT2_REALTYPE fp51;
fp51 = fp82;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+51)*1+lsi)*1]),&(fp51),1);
LIBINT2_REALTYPE fp279;
fp279 = inteval->WQ_x[vi] * fp274;
LIBINT2_REALTYPE fp163;
fp163 = inteval->WP_z[vi] * fp279;
LIBINT2_REALTYPE fp83;
fp83 = inteval->WP_z[vi] * fp163;
LIBINT2_REALTYPE fp50;
fp50 = fp83;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+50)*1+lsi)*1]),&(fp50),1);
LIBINT2_REALTYPE fp84;
fp84 = inteval->WP_y[vi] * fp125;
LIBINT2_REALTYPE fp49;
fp49 = fp84;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+49)*1+lsi)*1]),&(fp49),1);
LIBINT2_REALTYPE fp115;
LIBINT2_REALTYPE fp114;
fp114 = libint2::fma_plus(inteval->WP_y[vi], fp238, fp269);
LIBINT2_REALTYPE fp184;
fp184 = inteval->WQ_z[vi] * fp114;
LIBINT2_REALTYPE fp105;
fp105 = fp282 * fp184;
LIBINT2_REALTYPE fp170;
LIBINT2_REALTYPE fp169;
fp169 = libint2::fma_plus(inteval->WP_y[vi], fp218, fp258);
LIBINT2_REALTYPE fp171;
fp171 = inteval->WQ_z[vi] * fp169;
LIBINT2_REALTYPE fp167;
fp167 = inteval->WQ_z[vi] * fp171;
LIBINT2_REALTYPE fp86;
LIBINT2_REALTYPE fp85;
fp85 = libint2::fma_plus(inteval->WP_z[vi], fp167, fp105);
LIBINT2_REALTYPE fp48;
fp48 = fp85;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+48)*1+lsi)*1]),&(fp48),1);
LIBINT2_REALTYPE fp256;
fp256 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp190;
fp190 = fp282 * fp256;
LIBINT2_REALTYPE fp191;
LIBINT2_REALTYPE fp189;
fp189 = libint2::fma_plus(inteval->WP_y[vi], fp240, fp190);
LIBINT2_REALTYPE fp88;
fp88 = inteval->oo2ze[vi] * fp189;
LIBINT2_REALTYPE fp175;
fp175 = fp282 * fp238;
LIBINT2_REALTYPE fp176;
LIBINT2_REALTYPE fp174;
fp174 = libint2::fma_plus(inteval->WP_y[vi], fp219, fp175);
LIBINT2_REALTYPE fp172;
fp172 = inteval->WQ_z[vi] * fp174;
LIBINT2_REALTYPE fp89;
LIBINT2_REALTYPE fp87;
fp87 = libint2::fma_plus(inteval->WP_z[vi], fp172, fp88);
LIBINT2_REALTYPE fp47;
fp47 = fp87;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+47)*1+lsi)*1]),&(fp47),1);
LIBINT2_REALTYPE fp178;
fp178 = fp289 * fp240;
LIBINT2_REALTYPE fp179;
LIBINT2_REALTYPE fp177;
fp177 = libint2::fma_plus(inteval->WP_y[vi], fp220, fp178);
LIBINT2_REALTYPE fp90;
fp90 = inteval->WP_z[vi] * fp177;
LIBINT2_REALTYPE fp46;
fp46 = fp90;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+46)*1+lsi)*1]),&(fp46),1);
LIBINT2_REALTYPE fp91;
fp91 = inteval->WP_y[vi] * fp144;
LIBINT2_REALTYPE fp45;
fp45 = fp91;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+45)*1+lsi)*1]),&(fp45),1);
LIBINT2_REALTYPE fp198;
fp198 = inteval->WQ_x[vi] * fp114;
LIBINT2_REALTYPE fp93;
fp93 = inteval->oo2ze[vi] * fp198;
LIBINT2_REALTYPE fp120;
fp120 = inteval->WQ_x[vi] * fp169;
LIBINT2_REALTYPE fp185;
fp185 = inteval->WQ_z[vi] * fp120;
LIBINT2_REALTYPE fp94;
LIBINT2_REALTYPE fp92;
fp92 = libint2::fma_plus(inteval->WP_z[vi], fp185, fp93);
LIBINT2_REALTYPE fp44;
fp44 = fp92;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+44)*1+lsi)*1]),&(fp44),1);
LIBINT2_REALTYPE fp192;
fp192 = inteval->WQ_x[vi] * fp174;
LIBINT2_REALTYPE fp95;
fp95 = inteval->WP_z[vi] * fp192;
LIBINT2_REALTYPE fp43;
fp43 = fp95;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+43)*1+lsi)*1]),&(fp43),1);
LIBINT2_REALTYPE fp97;
fp97 = inteval->WP_y[vi] * fp156;
LIBINT2_REALTYPE fp42;
fp42 = fp97;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+42)*1+lsi)*1]),&(fp42),1);
LIBINT2_REALTYPE fp199;
fp199 = inteval->WQ_x[vi] * fp120;
LIBINT2_REALTYPE fp98;
fp98 = inteval->WP_z[vi] * fp199;
LIBINT2_REALTYPE fp41;
fp41 = fp98;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+41)*1+lsi)*1]),&(fp41),1);
LIBINT2_REALTYPE fp204;
fp204 = inteval->WP_y[vi] * fp279;
LIBINT2_REALTYPE fp99;
fp99 = inteval->WP_z[vi] * fp204;
LIBINT2_REALTYPE fp40;
fp40 = fp99;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+40)*1+lsi)*1]),&(fp40),1);
LIBINT2_REALTYPE fp165;
fp165 = inteval->WP_y[vi] * fp206;
LIBINT2_REALTYPE fp100;
fp100 = inteval->WP_y[vi] * fp165;
LIBINT2_REALTYPE fp39;
fp39 = fp100;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+39)*1+lsi)*1]),&(fp39),1);
LIBINT2_REALTYPE fp181;
fp181 = inteval->WP_y[vi] * fp224;
LIBINT2_REALTYPE fp102;
fp102 = inteval->oo2ze[vi] * fp181;
LIBINT2_REALTYPE fp103;
LIBINT2_REALTYPE fp101;
fp101 = libint2::fma_plus(inteval->WP_y[vi], fp167, fp102);
LIBINT2_REALTYPE fp38;
fp38 = fp101;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+38)*1+lsi)*1]),&(fp38),1);
LIBINT2_REALTYPE fp106;
LIBINT2_REALTYPE fp104;
fp104 = libint2::fma_plus(inteval->WP_y[vi], fp172, fp105);
LIBINT2_REALTYPE fp37;
fp37 = fp104;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+37)*1+lsi)*1]),&(fp37),1);
LIBINT2_REALTYPE fp108;
fp108 = fp289 * fp189;
LIBINT2_REALTYPE fp109;
LIBINT2_REALTYPE fp107;
fp107 = libint2::fma_plus(inteval->WP_y[vi], fp177, fp108);
LIBINT2_REALTYPE fp36;
fp36 = fp107;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+36)*1+lsi)*1]),&(fp36),1);
LIBINT2_REALTYPE fp223;
fp223 = inteval->WQ_z[vi] * fp273;
LIBINT2_REALTYPE fp225;
fp225 = inteval->WQ_z[vi] * fp223;
LIBINT2_REALTYPE fp182;
fp182 = inteval->WP_y[vi] * fp225;
LIBINT2_REALTYPE fp110;
fp110 = inteval->WP_y[vi] * fp182;
LIBINT2_REALTYPE fp35;
fp35 = fp110;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+35)*1+lsi)*1]),&(fp35),1);
LIBINT2_REALTYPE fp249;
fp249 = inteval->WQ_z[vi] * fp272;
LIBINT2_REALTYPE fp195;
fp195 = inteval->WP_y[vi] * fp249;
LIBINT2_REALTYPE fp112;
fp112 = inteval->oo2ze[vi] * fp195;
LIBINT2_REALTYPE fp113;
LIBINT2_REALTYPE fp111;
fp111 = libint2::fma_plus(inteval->WP_y[vi], fp185, fp112);
LIBINT2_REALTYPE fp34;
fp34 = fp111;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+34)*1+lsi)*1]),&(fp34),1);
LIBINT2_REALTYPE fp117;
fp117 = fp282 * fp198;
LIBINT2_REALTYPE fp118;
LIBINT2_REALTYPE fp116;
fp116 = libint2::fma_plus(inteval->WP_y[vi], fp192, fp117);
LIBINT2_REALTYPE fp33;
fp33 = fp116;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+33)*1+lsi)*1]),&(fp33),1);
LIBINT2_REALTYPE fp250;
fp250 = inteval->WQ_z[vi] * fp274;
LIBINT2_REALTYPE fp196;
fp196 = inteval->WP_y[vi] * fp250;
LIBINT2_REALTYPE fp119;
fp119 = inteval->WP_y[vi] * fp196;
LIBINT2_REALTYPE fp32;
fp32 = fp119;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+32)*1+lsi)*1]),&(fp32),1);
LIBINT2_REALTYPE fp203;
fp203 = inteval->WP_y[vi] * fp278;
LIBINT2_REALTYPE fp122;
fp122 = inteval->oo2ze[vi] * fp203;
LIBINT2_REALTYPE fp123;
LIBINT2_REALTYPE fp121;
fp121 = libint2::fma_plus(inteval->WP_y[vi], fp199, fp122);
LIBINT2_REALTYPE fp31;
fp31 = fp121;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+31)*1+lsi)*1]),&(fp31),1);
LIBINT2_REALTYPE fp124;
fp124 = inteval->WP_y[vi] * fp204;
LIBINT2_REALTYPE fp30;
fp30 = fp124;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+30)*1+lsi)*1]),&(fp30),1);
LIBINT2_REALTYPE fp128;
fp128 = inteval->WP_x[vi] * fp125;
LIBINT2_REALTYPE fp29;
fp29 = fp128;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+29)*1+lsi)*1]),&(fp29),1);
LIBINT2_REALTYPE fp133;
fp133 = inteval->WP_x[vi] * fp132;
LIBINT2_REALTYPE fp28;
fp28 = fp133;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+28)*1+lsi)*1]),&(fp28),1);
LIBINT2_REALTYPE fp138;
fp138 = inteval->WP_x[vi] * fp137;
LIBINT2_REALTYPE fp27;
fp27 = fp138;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+27)*1+lsi)*1]),&(fp27),1);
LIBINT2_REALTYPE fp221;
fp221 = inteval->WP_x[vi] * fp220;
LIBINT2_REALTYPE fp140;
fp140 = inteval->WP_z[vi] * fp221;
LIBINT2_REALTYPE fp26;
fp26 = fp140;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+26)*1+lsi)*1]),&(fp26),1);
LIBINT2_REALTYPE fp270;
LIBINT2_REALTYPE fp268;
fp268 = libint2::fma_plus(inteval->WP_x[vi], fp272, fp269);
LIBINT2_REALTYPE fp251;
fp251 = inteval->WQ_z[vi] * fp268;
LIBINT2_REALTYPE fp254;
fp254 = fp282 * fp251;
LIBINT2_REALTYPE fp259;
LIBINT2_REALTYPE fp257;
fp257 = libint2::fma_plus(inteval->WP_x[vi], fp273, fp258);
LIBINT2_REALTYPE fp248;
fp248 = inteval->WQ_z[vi] * fp257;
LIBINT2_REALTYPE fp227;
fp227 = inteval->WQ_z[vi] * fp248;
LIBINT2_REALTYPE fp146;
LIBINT2_REALTYPE fp145;
fp145 = libint2::fma_plus(inteval->WP_z[vi], fp227, fp254);
LIBINT2_REALTYPE fp25;
fp25 = fp145;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+25)*1+lsi)*1]),&(fp25),1);
LIBINT2_REALTYPE fp263;
fp263 = inteval->WQ_y[vi] * fp268;
LIBINT2_REALTYPE fp150;
fp150 = inteval->oo2ze[vi] * fp263;
LIBINT2_REALTYPE fp260;
fp260 = inteval->WQ_y[vi] * fp257;
LIBINT2_REALTYPE fp234;
fp234 = inteval->WQ_z[vi] * fp260;
LIBINT2_REALTYPE fp151;
LIBINT2_REALTYPE fp149;
fp149 = libint2::fma_plus(inteval->WP_z[vi], fp234, fp150);
LIBINT2_REALTYPE fp24;
fp24 = fp149;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+24)*1+lsi)*1]),&(fp24),1);
LIBINT2_REALTYPE fp243;
fp243 = inteval->WQ_y[vi] * fp260;
LIBINT2_REALTYPE fp154;
fp154 = inteval->WP_z[vi] * fp243;
LIBINT2_REALTYPE fp23;
fp23 = fp154;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+23)*1+lsi)*1]),&(fp23),1);
LIBINT2_REALTYPE fp271;
fp271 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp281;
fp281 = fp282 * fp271;
LIBINT2_REALTYPE fp283;
LIBINT2_REALTYPE fp280;
fp280 = libint2::fma_plus(inteval->WP_x[vi], fp278, fp281);
LIBINT2_REALTYPE fp201;
fp201 = inteval->oo2ze[vi] * fp280;
LIBINT2_REALTYPE fp276;
fp276 = fp282 * fp272;
LIBINT2_REALTYPE fp277;
LIBINT2_REALTYPE fp275;
fp275 = libint2::fma_plus(inteval->WP_x[vi], fp274, fp276);
LIBINT2_REALTYPE fp252;
fp252 = inteval->WQ_z[vi] * fp275;
LIBINT2_REALTYPE fp158;
LIBINT2_REALTYPE fp157;
fp157 = libint2::fma_plus(inteval->WP_z[vi], fp252, fp201);
LIBINT2_REALTYPE fp22;
fp22 = fp157;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+22)*1+lsi)*1]),&(fp22),1);
LIBINT2_REALTYPE fp264;
fp264 = inteval->WQ_y[vi] * fp275;
LIBINT2_REALTYPE fp161;
fp161 = inteval->WP_z[vi] * fp264;
LIBINT2_REALTYPE fp21;
fp21 = fp161;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+21)*1+lsi)*1]),&(fp21),1);
LIBINT2_REALTYPE fp285;
fp285 = fp289 * fp278;
LIBINT2_REALTYPE fp286;
LIBINT2_REALTYPE fp284;
fp284 = libint2::fma_plus(inteval->WP_x[vi], fp279, fp285);
LIBINT2_REALTYPE fp164;
fp164 = inteval->WP_z[vi] * fp284;
LIBINT2_REALTYPE fp20;
fp20 = fp164;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+20)*1+lsi)*1]),&(fp20),1);
LIBINT2_REALTYPE fp207;
fp207 = inteval->WP_x[vi] * fp206;
LIBINT2_REALTYPE fp166;
fp166 = inteval->WP_y[vi] * fp207;
LIBINT2_REALTYPE fp19;
fp19 = fp166;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+19)*1+lsi)*1]),&(fp19),1);
LIBINT2_REALTYPE fp168;
fp168 = inteval->WP_x[vi] * fp167;
LIBINT2_REALTYPE fp18;
fp18 = fp168;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+18)*1+lsi)*1]),&(fp18),1);
LIBINT2_REALTYPE fp173;
fp173 = inteval->WP_x[vi] * fp172;
LIBINT2_REALTYPE fp17;
fp17 = fp173;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+17)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp180;
fp180 = inteval->WP_x[vi] * fp177;
LIBINT2_REALTYPE fp16;
fp16 = fp180;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+16)*1+lsi)*1]),&(fp16),1);
LIBINT2_REALTYPE fp183;
fp183 = inteval->WP_y[vi] * fp227;
LIBINT2_REALTYPE fp15;
fp15 = fp183;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+15)*1+lsi)*1]),&(fp15),1);
LIBINT2_REALTYPE fp187;
fp187 = inteval->oo2ze[vi] * fp251;
LIBINT2_REALTYPE fp188;
LIBINT2_REALTYPE fp186;
fp186 = libint2::fma_plus(inteval->WP_y[vi], fp234, fp187);
LIBINT2_REALTYPE fp14;
fp14 = fp186;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+14)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp266;
fp266 = fp282 * fp263;
LIBINT2_REALTYPE fp194;
LIBINT2_REALTYPE fp193;
fp193 = libint2::fma_plus(inteval->WP_y[vi], fp243, fp266);
LIBINT2_REALTYPE fp13;
fp13 = fp193;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+13)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp197;
fp197 = inteval->WP_y[vi] * fp252;
LIBINT2_REALTYPE fp12;
fp12 = fp197;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+12)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp202;
LIBINT2_REALTYPE fp200;
fp200 = libint2::fma_plus(inteval->WP_y[vi], fp264, fp201);
LIBINT2_REALTYPE fp11;
fp11 = fp200;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+11)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp205;
fp205 = inteval->WP_y[vi] * fp284;
LIBINT2_REALTYPE fp10;
fp10 = fp205;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+10)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp208;
fp208 = inteval->WP_x[vi] * fp207;
LIBINT2_REALTYPE fp9;
fp9 = fp208;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp214;
fp214 = inteval->WQ_z[vi] * fp218;
LIBINT2_REALTYPE fp211;
fp211 = inteval->WQ_z[vi] * fp214;
LIBINT2_REALTYPE fp212;
fp212 = inteval->WP_x[vi] * fp211;
LIBINT2_REALTYPE fp213;
fp213 = inteval->WP_x[vi] * fp212;
LIBINT2_REALTYPE fp8;
fp8 = fp213;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp215;
fp215 = inteval->WQ_z[vi] * fp219;
LIBINT2_REALTYPE fp216;
fp216 = inteval->WP_x[vi] * fp215;
LIBINT2_REALTYPE fp217;
fp217 = inteval->WP_x[vi] * fp216;
LIBINT2_REALTYPE fp7;
fp7 = fp217;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp222;
fp222 = inteval->WP_x[vi] * fp221;
LIBINT2_REALTYPE fp6;
fp6 = fp222;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp226;
fp226 = inteval->WP_x[vi] * fp224;
LIBINT2_REALTYPE fp229;
fp229 = inteval->oo2ze[vi] * fp226;
LIBINT2_REALTYPE fp230;
LIBINT2_REALTYPE fp228;
fp228 = libint2::fma_plus(inteval->WP_x[vi], fp227, fp229);
LIBINT2_REALTYPE fp5;
fp5 = fp228;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp232;
fp232 = inteval->WQ_z[vi] * fp238;
LIBINT2_REALTYPE fp233;
fp233 = inteval->WP_x[vi] * fp232;
LIBINT2_REALTYPE fp236;
fp236 = inteval->oo2ze[vi] * fp233;
LIBINT2_REALTYPE fp237;
LIBINT2_REALTYPE fp235;
fp235 = libint2::fma_plus(inteval->WP_x[vi], fp234, fp236);
LIBINT2_REALTYPE fp4;
fp4 = fp235;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp242;
fp242 = inteval->WP_x[vi] * fp240;
LIBINT2_REALTYPE fp245;
fp245 = inteval->oo2ze[vi] * fp242;
LIBINT2_REALTYPE fp246;
LIBINT2_REALTYPE fp244;
fp244 = libint2::fma_plus(inteval->WP_x[vi], fp243, fp245);
LIBINT2_REALTYPE fp3;
fp3 = fp244;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp255;
LIBINT2_REALTYPE fp253;
fp253 = libint2::fma_plus(inteval->WP_x[vi], fp252, fp254);
LIBINT2_REALTYPE fp2;
fp2 = fp253;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp267;
LIBINT2_REALTYPE fp265;
fp265 = libint2::fma_plus(inteval->WP_x[vi], fp264, fp266);
LIBINT2_REALTYPE fp1;
fp1 = fp265;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp288;
fp288 = fp289 * fp280;
LIBINT2_REALTYPE fp290;
LIBINT2_REALTYPE fp287;
fp287 = libint2::fma_plus(inteval->WP_x[vi], fp284, fp288);
LIBINT2_REALTYPE fp0;
fp0 = fp287;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 291 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
