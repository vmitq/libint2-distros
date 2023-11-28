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
void eri3_aB_S__0__F__1___TwoPRep_unit__0__P__1___Ab__up_0_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp250;
fp250 = 3.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp227;
LIBINT2_REALTYPE fp226;
fp226 = libint2::fma_minus(inteval->roe[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi]);
LIBINT2_REALTYPE fp225;
fp225 = inteval->oo2e[vi] * fp226;
LIBINT2_REALTYPE fp135;
fp135 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp136;
LIBINT2_REALTYPE fp134;
fp134 = libint2::fma_plus(inteval->QC_z[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi], fp135);
LIBINT2_REALTYPE fp122;
fp122 = inteval->WQ_z[vi] * fp134;
LIBINT2_REALTYPE fp138;
fp138 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp139;
LIBINT2_REALTYPE fp137;
fp137 = libint2::fma_plus(inteval->QC_z[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi], fp138);
LIBINT2_REALTYPE fp123;
LIBINT2_REALTYPE fp121;
fp121 = libint2::fma_plus(inteval->QC_z[vi], fp137, fp122);
LIBINT2_REALTYPE fp120;
fp120 = fp121 - fp225;
LIBINT2_REALTYPE fp220;
LIBINT2_REALTYPE fp219;
fp219 = libint2::fma_minus(inteval->roe[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi]);
LIBINT2_REALTYPE fp218;
fp218 = inteval->oo2e[vi] * fp219;
LIBINT2_REALTYPE fp114;
fp114 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp115;
LIBINT2_REALTYPE fp113;
fp113 = libint2::fma_plus(inteval->QC_z[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi], fp114);
LIBINT2_REALTYPE fp118;
fp118 = inteval->WQ_z[vi] * fp113;
LIBINT2_REALTYPE fp119;
LIBINT2_REALTYPE fp117;
fp117 = libint2::fma_plus(inteval->QC_z[vi], fp134, fp118);
LIBINT2_REALTYPE fp116;
fp116 = fp117 - fp218;
LIBINT2_REALTYPE fp28;
LIBINT2_REALTYPE fp27;
fp27 = libint2::fma_minus(inteval->roe[vi], fp116, fp120);
LIBINT2_REALTYPE fp26;
fp26 = fp250 * fp27;
LIBINT2_REALTYPE fp242;
fp242 = 2.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp53;
LIBINT2_REALTYPE fp52;
fp52 = libint2::fma_minus(inteval->roe[vi], fp113, fp134);
LIBINT2_REALTYPE fp51;
fp51 = fp242 * fp52;
LIBINT2_REALTYPE fp204;
LIBINT2_REALTYPE fp203;
fp203 = libint2::fma_minus(inteval->roe[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi]);
LIBINT2_REALTYPE fp202;
fp202 = inteval->oo2e[vi] * fp203;
LIBINT2_REALTYPE fp68;
fp68 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp69;
LIBINT2_REALTYPE fp67;
fp67 = libint2::fma_plus(inteval->QC_z[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi], fp68);
LIBINT2_REALTYPE fp72;
fp72 = inteval->WQ_z[vi] * fp67;
LIBINT2_REALTYPE fp73;
LIBINT2_REALTYPE fp71;
fp71 = libint2::fma_plus(inteval->QC_z[vi], fp113, fp72);
LIBINT2_REALTYPE fp70;
fp70 = fp71 - fp202;
LIBINT2_REALTYPE fp55;
fp55 = inteval->WQ_z[vi] * fp70;
LIBINT2_REALTYPE fp56;
LIBINT2_REALTYPE fp54;
fp54 = libint2::fma_plus(inteval->QC_z[vi], fp116, fp55);
LIBINT2_REALTYPE fp50;
fp50 = fp54 - fp51;
LIBINT2_REALTYPE fp30;
fp30 = inteval->WQ_z[vi] * fp50;
LIBINT2_REALTYPE fp60;
LIBINT2_REALTYPE fp59;
fp59 = libint2::fma_minus(inteval->roe[vi], fp134, fp137);
LIBINT2_REALTYPE fp58;
fp58 = fp242 * fp59;
LIBINT2_REALTYPE fp62;
fp62 = inteval->WQ_z[vi] * fp116;
LIBINT2_REALTYPE fp63;
LIBINT2_REALTYPE fp61;
fp61 = libint2::fma_plus(inteval->QC_z[vi], fp120, fp62);
LIBINT2_REALTYPE fp57;
fp57 = fp61 - fp58;
LIBINT2_REALTYPE fp19;
fp19 = fp57;
LIBINT2_REALTYPE fp31;
LIBINT2_REALTYPE fp29;
fp29 = libint2::fma_plus(inteval->QC_z[vi], fp19, fp30);
LIBINT2_REALTYPE fp25;
fp25 = fp29 - fp26;
LIBINT2_REALTYPE fp24;
fp24 = fp25;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+24)*1+lsi)*1]),&(fp24),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+23)*1+lsi)*1]),&(fp19),1);
LIBINT2_REALTYPE fp33;
fp33 = inteval->WQ_y[vi] * fp50;
LIBINT2_REALTYPE fp34;
LIBINT2_REALTYPE fp32;
fp32 = libint2::fma_plus(inteval->QC_y[vi], fp19, fp33);
LIBINT2_REALTYPE fp23;
fp23 = fp32;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+22)*1+lsi)*1]),&(fp23),1);
LIBINT2_REALTYPE fp75;
fp75 = inteval->WQ_y[vi] * fp116;
LIBINT2_REALTYPE fp76;
LIBINT2_REALTYPE fp74;
fp74 = libint2::fma_plus(inteval->QC_y[vi], fp120, fp75);
LIBINT2_REALTYPE fp17;
fp17 = fp74;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+21)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp169;
fp169 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp170;
LIBINT2_REALTYPE fp168;
fp168 = libint2::fma_plus(inteval->QC_y[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi], fp169);
LIBINT2_REALTYPE fp155;
fp155 = inteval->WQ_y[vi] * fp168;
LIBINT2_REALTYPE fp172;
fp172 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp173;
LIBINT2_REALTYPE fp171;
fp171 = libint2::fma_plus(inteval->QC_y[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi], fp172);
LIBINT2_REALTYPE fp156;
LIBINT2_REALTYPE fp154;
fp154 = libint2::fma_plus(inteval->QC_y[vi], fp171, fp155);
LIBINT2_REALTYPE fp153;
fp153 = fp154 - fp225;
LIBINT2_REALTYPE fp147;
fp147 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp148;
LIBINT2_REALTYPE fp146;
fp146 = libint2::fma_plus(inteval->QC_y[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi], fp147);
LIBINT2_REALTYPE fp151;
fp151 = inteval->WQ_y[vi] * fp146;
LIBINT2_REALTYPE fp152;
LIBINT2_REALTYPE fp150;
fp150 = libint2::fma_plus(inteval->QC_y[vi], fp168, fp151);
LIBINT2_REALTYPE fp149;
fp149 = fp150 - fp218;
LIBINT2_REALTYPE fp46;
LIBINT2_REALTYPE fp45;
fp45 = libint2::fma_minus(inteval->roe[vi], fp149, fp153);
LIBINT2_REALTYPE fp36;
fp36 = inteval->oo2e[vi] * fp45;
LIBINT2_REALTYPE fp90;
fp90 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp91;
LIBINT2_REALTYPE fp89;
fp89 = libint2::fma_plus(inteval->QC_y[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi], fp90);
LIBINT2_REALTYPE fp94;
fp94 = inteval->WQ_y[vi] * fp89;
LIBINT2_REALTYPE fp95;
LIBINT2_REALTYPE fp93;
fp93 = libint2::fma_plus(inteval->QC_y[vi], fp146, fp94);
LIBINT2_REALTYPE fp92;
fp92 = fp93 - fp202;
LIBINT2_REALTYPE fp81;
fp81 = inteval->WQ_z[vi] * fp92;
LIBINT2_REALTYPE fp82;
LIBINT2_REALTYPE fp80;
fp80 = libint2::fma_plus(inteval->QC_z[vi], fp149, fp81);
LIBINT2_REALTYPE fp38;
fp38 = inteval->WQ_z[vi] * fp80;
LIBINT2_REALTYPE fp84;
fp84 = inteval->WQ_z[vi] * fp149;
LIBINT2_REALTYPE fp85;
LIBINT2_REALTYPE fp83;
fp83 = libint2::fma_plus(inteval->QC_z[vi], fp153, fp84);
LIBINT2_REALTYPE fp15;
fp15 = fp83;
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp37;
fp37 = libint2::fma_plus(inteval->QC_z[vi], fp15, fp38);
LIBINT2_REALTYPE fp35;
fp35 = fp37 - fp36;
LIBINT2_REALTYPE fp22;
fp22 = fp35;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+20)*1+lsi)*1]),&(fp22),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+19)*1+lsi)*1]),&(fp15),1);
LIBINT2_REALTYPE fp99;
LIBINT2_REALTYPE fp98;
fp98 = libint2::fma_minus(inteval->roe[vi], fp146, fp168);
LIBINT2_REALTYPE fp97;
fp97 = fp242 * fp98;
LIBINT2_REALTYPE fp101;
fp101 = inteval->WQ_y[vi] * fp92;
LIBINT2_REALTYPE fp102;
LIBINT2_REALTYPE fp100;
fp100 = libint2::fma_plus(inteval->QC_y[vi], fp149, fp101);
LIBINT2_REALTYPE fp96;
fp96 = fp100 - fp97;
LIBINT2_REALTYPE fp41;
fp41 = inteval->WQ_z[vi] * fp96;
LIBINT2_REALTYPE fp106;
LIBINT2_REALTYPE fp105;
fp105 = libint2::fma_minus(inteval->roe[vi], fp168, fp171);
LIBINT2_REALTYPE fp104;
fp104 = fp242 * fp105;
LIBINT2_REALTYPE fp108;
fp108 = inteval->WQ_y[vi] * fp149;
LIBINT2_REALTYPE fp109;
LIBINT2_REALTYPE fp107;
fp107 = libint2::fma_plus(inteval->QC_y[vi], fp153, fp108);
LIBINT2_REALTYPE fp103;
fp103 = fp107 - fp104;
LIBINT2_REALTYPE fp13;
fp13 = fp103;
LIBINT2_REALTYPE fp42;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_plus(inteval->QC_z[vi], fp13, fp41);
LIBINT2_REALTYPE fp21;
fp21 = fp40;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+18)*1+lsi)*1]),&(fp21),1);
LIBINT2_REALTYPE fp44;
fp44 = fp250 * fp45;
LIBINT2_REALTYPE fp48;
fp48 = inteval->WQ_y[vi] * fp96;
LIBINT2_REALTYPE fp49;
LIBINT2_REALTYPE fp47;
fp47 = libint2::fma_plus(inteval->QC_y[vi], fp13, fp48);
LIBINT2_REALTYPE fp43;
fp43 = fp47 - fp44;
LIBINT2_REALTYPE fp20;
fp20 = fp43;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+17)*1+lsi)*1]),&(fp20),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+16)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp65;
fp65 = inteval->WQ_x[vi] * fp50;
LIBINT2_REALTYPE fp66;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_plus(inteval->QC_x[vi], fp19, fp65);
LIBINT2_REALTYPE fp18;
fp18 = fp64;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+15)*1+lsi)*1]),&(fp18),1);
LIBINT2_REALTYPE fp128;
fp128 = inteval->WQ_x[vi] * fp116;
LIBINT2_REALTYPE fp129;
LIBINT2_REALTYPE fp127;
fp127 = libint2::fma_plus(inteval->QC_x[vi], fp120, fp128);
LIBINT2_REALTYPE fp11;
fp11 = fp127;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+14)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp125;
fp125 = inteval->WQ_x[vi] * fp70;
LIBINT2_REALTYPE fp126;
LIBINT2_REALTYPE fp124;
fp124 = libint2::fma_plus(inteval->QC_x[vi], fp116, fp125);
LIBINT2_REALTYPE fp78;
fp78 = inteval->WQ_y[vi] * fp124;
LIBINT2_REALTYPE fp79;
LIBINT2_REALTYPE fp77;
fp77 = libint2::fma_plus(inteval->QC_y[vi], fp11, fp78);
LIBINT2_REALTYPE fp16;
fp16 = fp77;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+13)*1+lsi)*1]),&(fp16),1);
LIBINT2_REALTYPE fp209;
fp209 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp210;
LIBINT2_REALTYPE fp208;
fp208 = libint2::fma_plus(inteval->QC_x[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi], fp209);
LIBINT2_REALTYPE fp184;
fp184 = inteval->WQ_y[vi] * fp208;
LIBINT2_REALTYPE fp212;
fp212 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp213;
LIBINT2_REALTYPE fp211;
fp211 = libint2::fma_plus(inteval->QC_x[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi], fp212);
LIBINT2_REALTYPE fp185;
LIBINT2_REALTYPE fp183;
fp183 = libint2::fma_plus(inteval->QC_y[vi], fp211, fp184);
LIBINT2_REALTYPE fp141;
fp141 = inteval->WQ_z[vi] * fp183;
LIBINT2_REALTYPE fp187;
fp187 = inteval->WQ_y[vi] * fp211;
LIBINT2_REALTYPE fp215;
fp215 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp216;
LIBINT2_REALTYPE fp214;
fp214 = libint2::fma_plus(inteval->QC_x[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi], fp215);
LIBINT2_REALTYPE fp188;
LIBINT2_REALTYPE fp186;
fp186 = libint2::fma_plus(inteval->QC_y[vi], fp214, fp187);
LIBINT2_REALTYPE fp142;
LIBINT2_REALTYPE fp140;
fp140 = libint2::fma_plus(inteval->QC_z[vi], fp186, fp141);
LIBINT2_REALTYPE fp9;
fp9 = fp140;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+12)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp158;
fp158 = inteval->WQ_x[vi] * fp92;
LIBINT2_REALTYPE fp159;
LIBINT2_REALTYPE fp157;
fp157 = libint2::fma_plus(inteval->QC_x[vi], fp149, fp158);
LIBINT2_REALTYPE fp87;
fp87 = inteval->WQ_z[vi] * fp157;
LIBINT2_REALTYPE fp161;
fp161 = inteval->WQ_x[vi] * fp149;
LIBINT2_REALTYPE fp162;
LIBINT2_REALTYPE fp160;
fp160 = libint2::fma_plus(inteval->QC_x[vi], fp153, fp161);
LIBINT2_REALTYPE fp7;
fp7 = fp160;
LIBINT2_REALTYPE fp88;
LIBINT2_REALTYPE fp86;
fp86 = libint2::fma_plus(inteval->QC_z[vi], fp7, fp87);
LIBINT2_REALTYPE fp14;
fp14 = fp86;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+11)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp111;
fp111 = inteval->WQ_x[vi] * fp96;
LIBINT2_REALTYPE fp112;
LIBINT2_REALTYPE fp110;
fp110 = libint2::fma_plus(inteval->QC_x[vi], fp13, fp111);
LIBINT2_REALTYPE fp12;
fp12 = fp110;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+10)*1+lsi)*1]),&(fp12),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+9)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp229;
fp229 = inteval->WQ_x[vi] * fp211;
LIBINT2_REALTYPE fp230;
LIBINT2_REALTYPE fp228;
fp228 = libint2::fma_plus(inteval->QC_x[vi], fp214, fp229);
LIBINT2_REALTYPE fp224;
fp224 = fp228 - fp225;
LIBINT2_REALTYPE fp222;
fp222 = inteval->WQ_x[vi] * fp208;
LIBINT2_REALTYPE fp223;
LIBINT2_REALTYPE fp221;
fp221 = libint2::fma_plus(inteval->QC_x[vi], fp211, fp222);
LIBINT2_REALTYPE fp217;
fp217 = fp221 - fp218;
LIBINT2_REALTYPE fp249;
LIBINT2_REALTYPE fp248;
fp248 = libint2::fma_minus(inteval->roe[vi], fp217, fp224);
LIBINT2_REALTYPE fp164;
fp164 = inteval->oo2e[vi] * fp248;
LIBINT2_REALTYPE fp199;
fp199 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp200;
LIBINT2_REALTYPE fp198;
fp198 = libint2::fma_plus(inteval->QC_x[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi], fp199);
LIBINT2_REALTYPE fp206;
fp206 = inteval->WQ_x[vi] * fp198;
LIBINT2_REALTYPE fp207;
LIBINT2_REALTYPE fp205;
fp205 = libint2::fma_plus(inteval->QC_x[vi], fp208, fp206);
LIBINT2_REALTYPE fp201;
fp201 = fp205 - fp202;
LIBINT2_REALTYPE fp175;
fp175 = inteval->WQ_z[vi] * fp201;
LIBINT2_REALTYPE fp176;
LIBINT2_REALTYPE fp174;
fp174 = libint2::fma_plus(inteval->QC_z[vi], fp217, fp175);
LIBINT2_REALTYPE fp132;
fp132 = inteval->WQ_z[vi] * fp174;
LIBINT2_REALTYPE fp178;
fp178 = inteval->WQ_z[vi] * fp217;
LIBINT2_REALTYPE fp179;
LIBINT2_REALTYPE fp177;
fp177 = libint2::fma_plus(inteval->QC_z[vi], fp224, fp178);
LIBINT2_REALTYPE fp5;
fp5 = fp177;
LIBINT2_REALTYPE fp133;
LIBINT2_REALTYPE fp131;
fp131 = libint2::fma_plus(inteval->QC_z[vi], fp5, fp132);
LIBINT2_REALTYPE fp130;
fp130 = fp131 - fp164;
LIBINT2_REALTYPE fp10;
fp10 = fp130;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+8)*1+lsi)*1]),&(fp10),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+7)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp190;
fp190 = inteval->WQ_y[vi] * fp201;
LIBINT2_REALTYPE fp191;
LIBINT2_REALTYPE fp189;
fp189 = libint2::fma_plus(inteval->QC_y[vi], fp217, fp190);
LIBINT2_REALTYPE fp144;
fp144 = inteval->WQ_z[vi] * fp189;
LIBINT2_REALTYPE fp193;
fp193 = inteval->WQ_y[vi] * fp217;
LIBINT2_REALTYPE fp194;
LIBINT2_REALTYPE fp192;
fp192 = libint2::fma_plus(inteval->QC_y[vi], fp224, fp193);
LIBINT2_REALTYPE fp3;
fp3 = fp192;
LIBINT2_REALTYPE fp145;
LIBINT2_REALTYPE fp143;
fp143 = libint2::fma_plus(inteval->QC_z[vi], fp3, fp144);
LIBINT2_REALTYPE fp8;
fp8 = fp143;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+6)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp166;
fp166 = inteval->WQ_y[vi] * fp189;
LIBINT2_REALTYPE fp167;
LIBINT2_REALTYPE fp165;
fp165 = libint2::fma_plus(inteval->QC_y[vi], fp3, fp166);
LIBINT2_REALTYPE fp163;
fp163 = fp165 - fp164;
LIBINT2_REALTYPE fp6;
fp6 = fp163;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+5)*1+lsi)*1]),&(fp6),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+4)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp234;
LIBINT2_REALTYPE fp233;
fp233 = libint2::fma_minus(inteval->roe[vi], fp208, fp211);
LIBINT2_REALTYPE fp232;
fp232 = fp242 * fp233;
LIBINT2_REALTYPE fp236;
fp236 = inteval->WQ_x[vi] * fp201;
LIBINT2_REALTYPE fp237;
LIBINT2_REALTYPE fp235;
fp235 = libint2::fma_plus(inteval->QC_x[vi], fp217, fp236);
LIBINT2_REALTYPE fp231;
fp231 = fp235 - fp232;
LIBINT2_REALTYPE fp181;
fp181 = inteval->WQ_z[vi] * fp231;
LIBINT2_REALTYPE fp241;
LIBINT2_REALTYPE fp240;
fp240 = libint2::fma_minus(inteval->roe[vi], fp211, fp214);
LIBINT2_REALTYPE fp239;
fp239 = fp242 * fp240;
LIBINT2_REALTYPE fp244;
fp244 = inteval->WQ_x[vi] * fp217;
LIBINT2_REALTYPE fp245;
LIBINT2_REALTYPE fp243;
fp243 = libint2::fma_plus(inteval->QC_x[vi], fp224, fp244);
LIBINT2_REALTYPE fp238;
fp238 = fp243 - fp239;
LIBINT2_REALTYPE fp1;
fp1 = fp238;
LIBINT2_REALTYPE fp182;
LIBINT2_REALTYPE fp180;
fp180 = libint2::fma_plus(inteval->QC_z[vi], fp1, fp181);
LIBINT2_REALTYPE fp4;
fp4 = fp180;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+3)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp196;
fp196 = inteval->WQ_y[vi] * fp231;
LIBINT2_REALTYPE fp197;
LIBINT2_REALTYPE fp195;
fp195 = libint2::fma_plus(inteval->QC_y[vi], fp1, fp196);
LIBINT2_REALTYPE fp2;
fp2 = fp195;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+2)*1+lsi)*1]),&(fp2),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp247;
fp247 = fp250 * fp248;
LIBINT2_REALTYPE fp252;
fp252 = inteval->WQ_x[vi] * fp231;
LIBINT2_REALTYPE fp253;
LIBINT2_REALTYPE fp251;
fp251 = libint2::fma_plus(inteval->QC_x[vi], fp1, fp252);
LIBINT2_REALTYPE fp246;
fp246 = fp251 - fp247;
LIBINT2_REALTYPE fp0;
fp0 = fp246;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 254 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
