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
void _1emultipole_P_D_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp103;
fp103 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_y[vi];
LIBINT2_REALTYPE fp161;
fp161 = 0.0000000000000000e+00 + fp103;
LIBINT2_REALTYPE fp110;
fp110 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_x[vi];
LIBINT2_REALTYPE fp176;
fp176 = 0.0000000000000000e+00 + fp110;
LIBINT2_REALTYPE fp273;
fp273 = fp176 * fp161;
LIBINT2_REALTYPE fp87;
fp87 = 0.0000000000000000e+00 + inteval->_0_Overlap_0_z[vi];
LIBINT2_REALTYPE fp86;
fp86 = inteval->PB_z[vi] * fp87;
LIBINT2_REALTYPE fp120;
fp120 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp78;
fp78 = fp120 * fp86;
LIBINT2_REALTYPE fp84;
fp84 = inteval->oo2z[vi] * fp87;
LIBINT2_REALTYPE fp85;
LIBINT2_REALTYPE fp83;
fp83 = libint2::fma_plus(inteval->PB_z[vi], fp86, fp84);
LIBINT2_REALTYPE fp79;
LIBINT2_REALTYPE fp77;
fp77 = libint2::fma_plus(inteval->PA_z[vi], fp83, fp78);
LIBINT2_REALTYPE fp136;
fp136 = 0.0000000000000000e+00 + fp77;
LIBINT2_REALTYPE fp124;
fp124 = inteval->BO_z[vi] * fp136;
LIBINT2_REALTYPE fp108;
fp108 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp73;
fp73 = fp108 * fp83;
LIBINT2_REALTYPE fp76;
LIBINT2_REALTYPE fp75;
fp75 = libint2::fma_plus(inteval->PB_z[vi], fp83, fp78);
LIBINT2_REALTYPE fp74;
LIBINT2_REALTYPE fp72;
fp72 = libint2::fma_plus(inteval->PA_z[vi], fp75, fp73);
LIBINT2_REALTYPE fp122;
fp122 = 0.0000000000000000e+00 + fp72;
LIBINT2_REALTYPE fp123;
fp123 = fp122 + fp124;
LIBINT2_REALTYPE fp182;
fp182 = fp273 * fp123;
LIBINT2_REALTYPE fp71;
fp71 = fp182;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+71)*1+lsi)*1]),&(fp71),1);
LIBINT2_REALTYPE fp81;
LIBINT2_REALTYPE fp80;
fp80 = libint2::fma_plus(inteval->PA_z[vi], fp86, fp84);
LIBINT2_REALTYPE fp137;
fp137 = 0.0000000000000000e+00 + fp80;
LIBINT2_REALTYPE fp126;
LIBINT2_REALTYPE fp125;
fp125 = libint2::fma_plus(inteval->BO_z[vi], fp137, fp136);
LIBINT2_REALTYPE fp102;
fp102 = inteval->PB_y[vi] * fp103;
LIBINT2_REALTYPE fp160;
fp160 = 0.0000000000000000e+00 + fp102;
LIBINT2_REALTYPE fp275;
fp275 = fp176 * fp160;
LIBINT2_REALTYPE fp183;
fp183 = fp275 * fp125;
LIBINT2_REALTYPE fp70;
fp70 = fp183;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+70)*1+lsi)*1]),&(fp70),1);
LIBINT2_REALTYPE fp82;
LIBINT2_REALTYPE fp138;
fp138 = libint2::fma_plus(inteval->PA_z[vi], fp87, 0.0000000000000000e+00);
LIBINT2_REALTYPE fp128;
LIBINT2_REALTYPE fp127;
fp127 = libint2::fma_plus(inteval->BO_z[vi], fp138, fp137);
LIBINT2_REALTYPE fp100;
fp100 = inteval->oo2z[vi] * fp103;
LIBINT2_REALTYPE fp101;
LIBINT2_REALTYPE fp99;
fp99 = libint2::fma_plus(inteval->PB_y[vi], fp102, fp100);
LIBINT2_REALTYPE fp159;
fp159 = 0.0000000000000000e+00 + fp99;
LIBINT2_REALTYPE fp277;
fp277 = fp176 * fp159;
LIBINT2_REALTYPE fp184;
fp184 = fp277 * fp127;
LIBINT2_REALTYPE fp69;
fp69 = fp184;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+69)*1+lsi)*1]),&(fp69),1);
LIBINT2_REALTYPE fp114;
fp114 = inteval->PB_x[vi] * fp110;
LIBINT2_REALTYPE fp177;
fp177 = 0.0000000000000000e+00 + fp114;
LIBINT2_REALTYPE fp279;
fp279 = fp177 * fp161;
LIBINT2_REALTYPE fp185;
fp185 = fp279 * fp125;
LIBINT2_REALTYPE fp68;
fp68 = fp185;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+68)*1+lsi)*1]),&(fp68),1);
LIBINT2_REALTYPE fp281;
fp281 = fp177 * fp160;
LIBINT2_REALTYPE fp186;
fp186 = fp281 * fp127;
LIBINT2_REALTYPE fp67;
fp67 = fp186;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+67)*1+lsi)*1]),&(fp67),1);
LIBINT2_REALTYPE fp116;
fp116 = inteval->oo2z[vi] * fp110;
LIBINT2_REALTYPE fp117;
LIBINT2_REALTYPE fp115;
fp115 = libint2::fma_plus(inteval->PB_x[vi], fp114, fp116);
LIBINT2_REALTYPE fp178;
fp178 = 0.0000000000000000e+00 + fp115;
LIBINT2_REALTYPE fp283;
fp283 = fp178 * fp161;
LIBINT2_REALTYPE fp187;
fp187 = fp283 * fp127;
LIBINT2_REALTYPE fp66;
fp66 = fp187;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+66)*1+lsi)*1]),&(fp66),1);
LIBINT2_REALTYPE fp139;
fp139 = 0.0000000000000000e+00 + fp83;
LIBINT2_REALTYPE fp131;
fp131 = inteval->BO_z[vi] * fp139;
LIBINT2_REALTYPE fp129;
fp129 = 0.0000000000000000e+00 + fp75;
LIBINT2_REALTYPE fp130;
fp130 = fp129 + fp131;
LIBINT2_REALTYPE fp98;
LIBINT2_REALTYPE fp158;
fp158 = libint2::fma_plus(inteval->PA_y[vi], fp103, 0.0000000000000000e+00);
LIBINT2_REALTYPE fp285;
fp285 = fp176 * fp158;
LIBINT2_REALTYPE fp188;
fp188 = fp285 * fp130;
LIBINT2_REALTYPE fp65;
fp65 = fp188;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+65)*1+lsi)*1]),&(fp65),1);
LIBINT2_REALTYPE fp140;
fp140 = 0.0000000000000000e+00 + fp86;
LIBINT2_REALTYPE fp133;
LIBINT2_REALTYPE fp132;
fp132 = libint2::fma_plus(inteval->BO_z[vi], fp140, fp139);
LIBINT2_REALTYPE fp97;
LIBINT2_REALTYPE fp96;
fp96 = libint2::fma_plus(inteval->PA_y[vi], fp102, fp100);
LIBINT2_REALTYPE fp157;
fp157 = 0.0000000000000000e+00 + fp96;
LIBINT2_REALTYPE fp287;
fp287 = fp176 * fp157;
LIBINT2_REALTYPE fp189;
fp189 = fp287 * fp132;
LIBINT2_REALTYPE fp64;
fp64 = fp189;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+64)*1+lsi)*1]),&(fp64),1);
LIBINT2_REALTYPE fp141;
fp141 = 0.0000000000000000e+00 + fp87;
LIBINT2_REALTYPE fp135;
LIBINT2_REALTYPE fp134;
fp134 = libint2::fma_plus(inteval->BO_z[vi], fp141, fp140);
LIBINT2_REALTYPE fp94;
fp94 = fp120 * fp102;
LIBINT2_REALTYPE fp95;
LIBINT2_REALTYPE fp93;
fp93 = libint2::fma_plus(inteval->PA_y[vi], fp99, fp94);
LIBINT2_REALTYPE fp156;
fp156 = 0.0000000000000000e+00 + fp93;
LIBINT2_REALTYPE fp289;
fp289 = fp176 * fp156;
LIBINT2_REALTYPE fp190;
fp190 = fp289 * fp134;
LIBINT2_REALTYPE fp63;
fp63 = fp190;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+63)*1+lsi)*1]),&(fp63),1);
LIBINT2_REALTYPE fp291;
fp291 = fp177 * fp158;
LIBINT2_REALTYPE fp191;
fp191 = fp291 * fp132;
LIBINT2_REALTYPE fp62;
fp62 = fp191;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+62)*1+lsi)*1]),&(fp62),1);
LIBINT2_REALTYPE fp293;
fp293 = fp177 * fp157;
LIBINT2_REALTYPE fp192;
fp192 = fp293 * fp134;
LIBINT2_REALTYPE fp61;
fp61 = fp192;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+61)*1+lsi)*1]),&(fp61),1);
LIBINT2_REALTYPE fp295;
fp295 = fp178 * fp158;
LIBINT2_REALTYPE fp193;
fp193 = fp295 * fp134;
LIBINT2_REALTYPE fp60;
fp60 = fp193;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+60)*1+lsi)*1]),&(fp60),1);
LIBINT2_REALTYPE fp111;
LIBINT2_REALTYPE fp179;
fp179 = libint2::fma_plus(inteval->PA_x[vi], fp110, 0.0000000000000000e+00);
LIBINT2_REALTYPE fp297;
fp297 = fp179 * fp161;
LIBINT2_REALTYPE fp194;
fp194 = fp297 * fp130;
LIBINT2_REALTYPE fp59;
fp59 = fp194;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+59)*1+lsi)*1]),&(fp59),1);
LIBINT2_REALTYPE fp299;
fp299 = fp179 * fp160;
LIBINT2_REALTYPE fp195;
fp195 = fp299 * fp132;
LIBINT2_REALTYPE fp58;
fp58 = fp195;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+58)*1+lsi)*1]),&(fp58),1);
LIBINT2_REALTYPE fp301;
fp301 = fp179 * fp159;
LIBINT2_REALTYPE fp196;
fp196 = fp301 * fp134;
LIBINT2_REALTYPE fp57;
fp57 = fp196;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+57)*1+lsi)*1]),&(fp57),1);
LIBINT2_REALTYPE fp113;
LIBINT2_REALTYPE fp112;
fp112 = libint2::fma_plus(inteval->PA_x[vi], fp114, fp116);
LIBINT2_REALTYPE fp180;
fp180 = 0.0000000000000000e+00 + fp112;
LIBINT2_REALTYPE fp303;
fp303 = fp180 * fp161;
LIBINT2_REALTYPE fp197;
fp197 = fp303 * fp132;
LIBINT2_REALTYPE fp56;
fp56 = fp197;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+56)*1+lsi)*1]),&(fp56),1);
LIBINT2_REALTYPE fp305;
fp305 = fp180 * fp160;
LIBINT2_REALTYPE fp198;
fp198 = fp305 * fp134;
LIBINT2_REALTYPE fp55;
fp55 = fp198;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+55)*1+lsi)*1]),&(fp55),1);
LIBINT2_REALTYPE fp119;
fp119 = fp120 * fp114;
LIBINT2_REALTYPE fp121;
LIBINT2_REALTYPE fp118;
fp118 = libint2::fma_plus(inteval->PA_x[vi], fp115, fp119);
LIBINT2_REALTYPE fp181;
fp181 = 0.0000000000000000e+00 + fp118;
LIBINT2_REALTYPE fp307;
fp307 = fp181 * fp161;
LIBINT2_REALTYPE fp199;
fp199 = fp307 * fp134;
LIBINT2_REALTYPE fp54;
fp54 = fp199;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+54)*1+lsi)*1]),&(fp54),1);
LIBINT2_REALTYPE fp155;
LIBINT2_REALTYPE fp154;
fp154 = libint2::fma_plus(inteval->BO_y[vi], fp161, fp160);
LIBINT2_REALTYPE fp201;
fp201 = fp176 * fp154;
LIBINT2_REALTYPE fp200;
fp200 = fp201 * fp136;
LIBINT2_REALTYPE fp53;
fp53 = fp200;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+53)*1+lsi)*1]),&(fp53),1);
LIBINT2_REALTYPE fp153;
LIBINT2_REALTYPE fp152;
fp152 = libint2::fma_plus(inteval->BO_y[vi], fp160, fp159);
LIBINT2_REALTYPE fp203;
fp203 = fp176 * fp152;
LIBINT2_REALTYPE fp202;
fp202 = fp203 * fp137;
LIBINT2_REALTYPE fp52;
fp52 = fp202;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+52)*1+lsi)*1]),&(fp52),1);
LIBINT2_REALTYPE fp151;
fp151 = inteval->BO_y[vi] * fp159;
LIBINT2_REALTYPE fp92;
LIBINT2_REALTYPE fp91;
fp91 = libint2::fma_plus(inteval->PB_y[vi], fp99, fp94);
LIBINT2_REALTYPE fp149;
fp149 = 0.0000000000000000e+00 + fp91;
LIBINT2_REALTYPE fp150;
fp150 = fp149 + fp151;
LIBINT2_REALTYPE fp205;
fp205 = fp176 * fp150;
LIBINT2_REALTYPE fp204;
fp204 = fp205 * fp138;
LIBINT2_REALTYPE fp51;
fp51 = fp204;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+51)*1+lsi)*1]),&(fp51),1);
LIBINT2_REALTYPE fp207;
fp207 = fp177 * fp154;
LIBINT2_REALTYPE fp206;
fp206 = fp207 * fp137;
LIBINT2_REALTYPE fp50;
fp50 = fp206;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+50)*1+lsi)*1]),&(fp50),1);
LIBINT2_REALTYPE fp209;
fp209 = fp177 * fp152;
LIBINT2_REALTYPE fp208;
fp208 = fp209 * fp138;
LIBINT2_REALTYPE fp49;
fp49 = fp208;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+49)*1+lsi)*1]),&(fp49),1);
LIBINT2_REALTYPE fp211;
fp211 = fp178 * fp154;
LIBINT2_REALTYPE fp210;
fp210 = fp211 * fp138;
LIBINT2_REALTYPE fp48;
fp48 = fp210;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+48)*1+lsi)*1]),&(fp48),1);
LIBINT2_REALTYPE fp148;
LIBINT2_REALTYPE fp147;
fp147 = libint2::fma_plus(inteval->BO_y[vi], fp158, fp157);
LIBINT2_REALTYPE fp213;
fp213 = fp176 * fp147;
LIBINT2_REALTYPE fp212;
fp212 = fp213 * fp139;
LIBINT2_REALTYPE fp47;
fp47 = fp212;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+47)*1+lsi)*1]),&(fp47),1);
LIBINT2_REALTYPE fp146;
LIBINT2_REALTYPE fp145;
fp145 = libint2::fma_plus(inteval->BO_y[vi], fp157, fp156);
LIBINT2_REALTYPE fp215;
fp215 = fp176 * fp145;
LIBINT2_REALTYPE fp214;
fp214 = fp215 * fp140;
LIBINT2_REALTYPE fp46;
fp46 = fp214;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+46)*1+lsi)*1]),&(fp46),1);
LIBINT2_REALTYPE fp144;
fp144 = inteval->BO_y[vi] * fp156;
LIBINT2_REALTYPE fp89;
fp89 = fp108 * fp99;
LIBINT2_REALTYPE fp90;
LIBINT2_REALTYPE fp88;
fp88 = libint2::fma_plus(inteval->PA_y[vi], fp91, fp89);
LIBINT2_REALTYPE fp142;
fp142 = 0.0000000000000000e+00 + fp88;
LIBINT2_REALTYPE fp143;
fp143 = fp142 + fp144;
LIBINT2_REALTYPE fp217;
fp217 = fp176 * fp143;
LIBINT2_REALTYPE fp216;
fp216 = fp217 * fp141;
LIBINT2_REALTYPE fp45;
fp45 = fp216;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+45)*1+lsi)*1]),&(fp45),1);
LIBINT2_REALTYPE fp219;
fp219 = fp177 * fp147;
LIBINT2_REALTYPE fp218;
fp218 = fp219 * fp140;
LIBINT2_REALTYPE fp44;
fp44 = fp218;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+44)*1+lsi)*1]),&(fp44),1);
LIBINT2_REALTYPE fp221;
fp221 = fp177 * fp145;
LIBINT2_REALTYPE fp220;
fp220 = fp221 * fp141;
LIBINT2_REALTYPE fp43;
fp43 = fp220;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+43)*1+lsi)*1]),&(fp43),1);
LIBINT2_REALTYPE fp223;
fp223 = fp178 * fp147;
LIBINT2_REALTYPE fp222;
fp222 = fp223 * fp141;
LIBINT2_REALTYPE fp42;
fp42 = fp222;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+42)*1+lsi)*1]),&(fp42),1);
LIBINT2_REALTYPE fp225;
fp225 = fp179 * fp154;
LIBINT2_REALTYPE fp224;
fp224 = fp225 * fp139;
LIBINT2_REALTYPE fp41;
fp41 = fp224;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+41)*1+lsi)*1]),&(fp41),1);
LIBINT2_REALTYPE fp227;
fp227 = fp179 * fp152;
LIBINT2_REALTYPE fp226;
fp226 = fp227 * fp140;
LIBINT2_REALTYPE fp40;
fp40 = fp226;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+40)*1+lsi)*1]),&(fp40),1);
LIBINT2_REALTYPE fp229;
fp229 = fp179 * fp150;
LIBINT2_REALTYPE fp228;
fp228 = fp229 * fp141;
LIBINT2_REALTYPE fp39;
fp39 = fp228;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+39)*1+lsi)*1]),&(fp39),1);
LIBINT2_REALTYPE fp231;
fp231 = fp180 * fp154;
LIBINT2_REALTYPE fp230;
fp230 = fp231 * fp140;
LIBINT2_REALTYPE fp38;
fp38 = fp230;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+38)*1+lsi)*1]),&(fp38),1);
LIBINT2_REALTYPE fp233;
fp233 = fp180 * fp152;
LIBINT2_REALTYPE fp232;
fp232 = fp233 * fp141;
LIBINT2_REALTYPE fp37;
fp37 = fp232;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+37)*1+lsi)*1]),&(fp37),1);
LIBINT2_REALTYPE fp235;
fp235 = fp181 * fp154;
LIBINT2_REALTYPE fp234;
fp234 = fp235 * fp141;
LIBINT2_REALTYPE fp36;
fp36 = fp234;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+36)*1+lsi)*1]),&(fp36),1);
LIBINT2_REALTYPE fp163;
LIBINT2_REALTYPE fp162;
fp162 = libint2::fma_plus(inteval->BO_x[vi], fp176, fp177);
LIBINT2_REALTYPE fp237;
fp237 = fp162 * fp161;
LIBINT2_REALTYPE fp236;
fp236 = fp237 * fp136;
LIBINT2_REALTYPE fp35;
fp35 = fp236;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+35)*1+lsi)*1]),&(fp35),1);
LIBINT2_REALTYPE fp239;
fp239 = fp162 * fp160;
LIBINT2_REALTYPE fp238;
fp238 = fp239 * fp137;
LIBINT2_REALTYPE fp34;
fp34 = fp238;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+34)*1+lsi)*1]),&(fp34),1);
LIBINT2_REALTYPE fp241;
fp241 = fp162 * fp159;
LIBINT2_REALTYPE fp240;
fp240 = fp241 * fp138;
LIBINT2_REALTYPE fp33;
fp33 = fp240;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+33)*1+lsi)*1]),&(fp33),1);
LIBINT2_REALTYPE fp165;
LIBINT2_REALTYPE fp164;
fp164 = libint2::fma_plus(inteval->BO_x[vi], fp177, fp178);
LIBINT2_REALTYPE fp243;
fp243 = fp164 * fp161;
LIBINT2_REALTYPE fp242;
fp242 = fp243 * fp137;
LIBINT2_REALTYPE fp32;
fp32 = fp242;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+32)*1+lsi)*1]),&(fp32),1);
LIBINT2_REALTYPE fp245;
fp245 = fp164 * fp160;
LIBINT2_REALTYPE fp244;
fp244 = fp245 * fp138;
LIBINT2_REALTYPE fp31;
fp31 = fp244;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+31)*1+lsi)*1]),&(fp31),1);
LIBINT2_REALTYPE fp168;
fp168 = inteval->BO_x[vi] * fp178;
LIBINT2_REALTYPE fp105;
LIBINT2_REALTYPE fp104;
fp104 = libint2::fma_plus(inteval->PB_x[vi], fp115, fp119);
LIBINT2_REALTYPE fp166;
fp166 = 0.0000000000000000e+00 + fp104;
LIBINT2_REALTYPE fp167;
fp167 = fp166 + fp168;
LIBINT2_REALTYPE fp247;
fp247 = fp167 * fp161;
LIBINT2_REALTYPE fp246;
fp246 = fp247 * fp138;
LIBINT2_REALTYPE fp30;
fp30 = fp246;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+30)*1+lsi)*1]),&(fp30),1);
LIBINT2_REALTYPE fp249;
fp249 = fp162 * fp158;
LIBINT2_REALTYPE fp248;
fp248 = fp249 * fp139;
LIBINT2_REALTYPE fp29;
fp29 = fp248;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+29)*1+lsi)*1]),&(fp29),1);
LIBINT2_REALTYPE fp251;
fp251 = fp162 * fp157;
LIBINT2_REALTYPE fp250;
fp250 = fp251 * fp140;
LIBINT2_REALTYPE fp28;
fp28 = fp250;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+28)*1+lsi)*1]),&(fp28),1);
LIBINT2_REALTYPE fp253;
fp253 = fp162 * fp156;
LIBINT2_REALTYPE fp252;
fp252 = fp253 * fp141;
LIBINT2_REALTYPE fp27;
fp27 = fp252;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+27)*1+lsi)*1]),&(fp27),1);
LIBINT2_REALTYPE fp255;
fp255 = fp164 * fp158;
LIBINT2_REALTYPE fp254;
fp254 = fp255 * fp140;
LIBINT2_REALTYPE fp26;
fp26 = fp254;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+26)*1+lsi)*1]),&(fp26),1);
LIBINT2_REALTYPE fp257;
fp257 = fp164 * fp157;
LIBINT2_REALTYPE fp256;
fp256 = fp257 * fp141;
LIBINT2_REALTYPE fp25;
fp25 = fp256;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+25)*1+lsi)*1]),&(fp25),1);
LIBINT2_REALTYPE fp259;
fp259 = fp167 * fp158;
LIBINT2_REALTYPE fp258;
fp258 = fp259 * fp141;
LIBINT2_REALTYPE fp24;
fp24 = fp258;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+24)*1+lsi)*1]),&(fp24),1);
LIBINT2_REALTYPE fp170;
LIBINT2_REALTYPE fp169;
fp169 = libint2::fma_plus(inteval->BO_x[vi], fp179, fp180);
LIBINT2_REALTYPE fp261;
fp261 = fp169 * fp161;
LIBINT2_REALTYPE fp260;
fp260 = fp261 * fp139;
LIBINT2_REALTYPE fp23;
fp23 = fp260;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+23)*1+lsi)*1]),&(fp23),1);
LIBINT2_REALTYPE fp263;
fp263 = fp169 * fp160;
LIBINT2_REALTYPE fp262;
fp262 = fp263 * fp140;
LIBINT2_REALTYPE fp22;
fp22 = fp262;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+22)*1+lsi)*1]),&(fp22),1);
LIBINT2_REALTYPE fp265;
fp265 = fp169 * fp159;
LIBINT2_REALTYPE fp264;
fp264 = fp265 * fp141;
LIBINT2_REALTYPE fp21;
fp21 = fp264;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+21)*1+lsi)*1]),&(fp21),1);
LIBINT2_REALTYPE fp172;
LIBINT2_REALTYPE fp171;
fp171 = libint2::fma_plus(inteval->BO_x[vi], fp180, fp181);
LIBINT2_REALTYPE fp267;
fp267 = fp171 * fp161;
LIBINT2_REALTYPE fp266;
fp266 = fp267 * fp140;
LIBINT2_REALTYPE fp20;
fp20 = fp266;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+20)*1+lsi)*1]),&(fp20),1);
LIBINT2_REALTYPE fp269;
fp269 = fp171 * fp160;
LIBINT2_REALTYPE fp268;
fp268 = fp269 * fp141;
LIBINT2_REALTYPE fp19;
fp19 = fp268;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+19)*1+lsi)*1]),&(fp19),1);
LIBINT2_REALTYPE fp175;
fp175 = inteval->BO_x[vi] * fp181;
LIBINT2_REALTYPE fp107;
fp107 = fp108 * fp115;
LIBINT2_REALTYPE fp109;
LIBINT2_REALTYPE fp106;
fp106 = libint2::fma_plus(inteval->PA_x[vi], fp104, fp107);
LIBINT2_REALTYPE fp173;
fp173 = 0.0000000000000000e+00 + fp106;
LIBINT2_REALTYPE fp174;
fp174 = fp173 + fp175;
LIBINT2_REALTYPE fp271;
fp271 = fp174 * fp161;
LIBINT2_REALTYPE fp270;
fp270 = fp271 * fp141;
LIBINT2_REALTYPE fp18;
fp18 = fp270;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+18)*1+lsi)*1]),&(fp18),1);
LIBINT2_REALTYPE fp272;
fp272 = fp273 * fp136;
LIBINT2_REALTYPE fp17;
fp17 = fp272;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+17)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp274;
fp274 = fp275 * fp137;
LIBINT2_REALTYPE fp16;
fp16 = fp274;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+16)*1+lsi)*1]),&(fp16),1);
LIBINT2_REALTYPE fp276;
fp276 = fp277 * fp138;
LIBINT2_REALTYPE fp15;
fp15 = fp276;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+15)*1+lsi)*1]),&(fp15),1);
LIBINT2_REALTYPE fp278;
fp278 = fp279 * fp137;
LIBINT2_REALTYPE fp14;
fp14 = fp278;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+14)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp280;
fp280 = fp281 * fp138;
LIBINT2_REALTYPE fp13;
fp13 = fp280;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+13)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp282;
fp282 = fp283 * fp138;
LIBINT2_REALTYPE fp12;
fp12 = fp282;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+12)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp284;
fp284 = fp285 * fp139;
LIBINT2_REALTYPE fp11;
fp11 = fp284;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+11)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp286;
fp286 = fp287 * fp140;
LIBINT2_REALTYPE fp10;
fp10 = fp286;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+10)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp288;
fp288 = fp289 * fp141;
LIBINT2_REALTYPE fp9;
fp9 = fp288;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp290;
fp290 = fp291 * fp140;
LIBINT2_REALTYPE fp8;
fp8 = fp290;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp292;
fp292 = fp293 * fp141;
LIBINT2_REALTYPE fp7;
fp7 = fp292;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp294;
fp294 = fp295 * fp141;
LIBINT2_REALTYPE fp6;
fp6 = fp294;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp296;
fp296 = fp297 * fp139;
LIBINT2_REALTYPE fp5;
fp5 = fp296;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp298;
fp298 = fp299 * fp140;
LIBINT2_REALTYPE fp4;
fp4 = fp298;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp300;
fp300 = fp301 * fp141;
LIBINT2_REALTYPE fp3;
fp3 = fp300;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp302;
fp302 = fp303 * fp140;
LIBINT2_REALTYPE fp2;
fp2 = fp302;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp304;
fp304 = fp305 * fp141;
LIBINT2_REALTYPE fp1;
fp1 = fp304;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp306;
fp306 = fp307 * fp141;
LIBINT2_REALTYPE fp0;
fp0 = fp306;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 308 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
