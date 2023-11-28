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
void HRRPart1bra0ket0id(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, int highdim) {

LIBINT2_REALTYPE*const  stack = target;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int hsi = 0; hsi<highdim; hsi++) {
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp1;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+83)*1+lsi)*1], src0[((hsi*108+107)*1+lsi)*1]);
target[((hsi*168+167)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp3;
LIBINT2_REALTYPE fp2;
fp2 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+82)*1+lsi)*1], src0[((hsi*108+106)*1+lsi)*1]);
target[((hsi*168+166)*1+lsi)*1] = fp2;
LIBINT2_REALTYPE fp5;
LIBINT2_REALTYPE fp4;
fp4 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*84+82)*1+lsi)*1], src0[((hsi*108+103)*1+lsi)*1]);
target[((hsi*168+165)*1+lsi)*1] = fp4;
LIBINT2_REALTYPE fp7;
LIBINT2_REALTYPE fp6;
fp6 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+81)*1+lsi)*1], src0[((hsi*108+105)*1+lsi)*1]);
target[((hsi*168+164)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp8;
fp8 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*84+81)*1+lsi)*1], src0[((hsi*108+102)*1+lsi)*1]);
target[((hsi*168+163)*1+lsi)*1] = fp8;
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp10;
fp10 = libint2::fma_plus(inteval->CD_x[vi], src1[((hsi*84+81)*1+lsi)*1], src0[((hsi*108+81)*1+lsi)*1]);
target[((hsi*168+162)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+80)*1+lsi)*1], src0[((hsi*108+104)*1+lsi)*1]);
target[((hsi*168+161)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp15;
LIBINT2_REALTYPE fp14;
fp14 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+79)*1+lsi)*1], src0[((hsi*108+103)*1+lsi)*1]);
target[((hsi*168+160)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp17;
LIBINT2_REALTYPE fp16;
fp16 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*84+79)*1+lsi)*1], src0[((hsi*108+100)*1+lsi)*1]);
target[((hsi*168+159)*1+lsi)*1] = fp16;
LIBINT2_REALTYPE fp19;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+78)*1+lsi)*1], src0[((hsi*108+102)*1+lsi)*1]);
target[((hsi*168+158)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp21;
LIBINT2_REALTYPE fp20;
fp20 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*84+78)*1+lsi)*1], src0[((hsi*108+99)*1+lsi)*1]);
target[((hsi*168+157)*1+lsi)*1] = fp20;
LIBINT2_REALTYPE fp23;
LIBINT2_REALTYPE fp22;
fp22 = libint2::fma_plus(inteval->CD_x[vi], src1[((hsi*84+78)*1+lsi)*1], src0[((hsi*108+78)*1+lsi)*1]);
target[((hsi*168+156)*1+lsi)*1] = fp22;
LIBINT2_REALTYPE fp25;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+77)*1+lsi)*1], src0[((hsi*108+101)*1+lsi)*1]);
target[((hsi*168+155)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp26;
fp26 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+76)*1+lsi)*1], src0[((hsi*108+100)*1+lsi)*1]);
target[((hsi*168+154)*1+lsi)*1] = fp26;
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*84+76)*1+lsi)*1], src0[((hsi*108+97)*1+lsi)*1]);
target[((hsi*168+153)*1+lsi)*1] = fp28;
LIBINT2_REALTYPE fp31;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+75)*1+lsi)*1], src0[((hsi*108+99)*1+lsi)*1]);
target[((hsi*168+152)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp33;
LIBINT2_REALTYPE fp32;
fp32 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*84+75)*1+lsi)*1], src0[((hsi*108+96)*1+lsi)*1]);
target[((hsi*168+151)*1+lsi)*1] = fp32;
LIBINT2_REALTYPE fp35;
LIBINT2_REALTYPE fp34;
fp34 = libint2::fma_plus(inteval->CD_x[vi], src1[((hsi*84+75)*1+lsi)*1], src0[((hsi*108+75)*1+lsi)*1]);
target[((hsi*168+150)*1+lsi)*1] = fp34;
LIBINT2_REALTYPE fp37;
LIBINT2_REALTYPE fp36;
fp36 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+74)*1+lsi)*1], src0[((hsi*108+98)*1+lsi)*1]);
target[((hsi*168+149)*1+lsi)*1] = fp36;
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+73)*1+lsi)*1], src0[((hsi*108+97)*1+lsi)*1]);
target[((hsi*168+148)*1+lsi)*1] = fp38;
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*84+73)*1+lsi)*1], src0[((hsi*108+94)*1+lsi)*1]);
target[((hsi*168+147)*1+lsi)*1] = fp40;
LIBINT2_REALTYPE fp43;
LIBINT2_REALTYPE fp42;
fp42 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+72)*1+lsi)*1], src0[((hsi*108+96)*1+lsi)*1]);
target[((hsi*168+146)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp45;
LIBINT2_REALTYPE fp44;
fp44 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*84+72)*1+lsi)*1], src0[((hsi*108+93)*1+lsi)*1]);
target[((hsi*168+145)*1+lsi)*1] = fp44;
LIBINT2_REALTYPE fp47;
LIBINT2_REALTYPE fp46;
fp46 = libint2::fma_plus(inteval->CD_x[vi], src1[((hsi*84+72)*1+lsi)*1], src0[((hsi*108+72)*1+lsi)*1]);
target[((hsi*168+144)*1+lsi)*1] = fp46;
LIBINT2_REALTYPE fp49;
LIBINT2_REALTYPE fp48;
fp48 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+71)*1+lsi)*1], src0[((hsi*108+95)*1+lsi)*1]);
target[((hsi*168+143)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp51;
LIBINT2_REALTYPE fp50;
fp50 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+70)*1+lsi)*1], src0[((hsi*108+94)*1+lsi)*1]);
target[((hsi*168+142)*1+lsi)*1] = fp50;
LIBINT2_REALTYPE fp53;
LIBINT2_REALTYPE fp52;
fp52 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*84+70)*1+lsi)*1], src0[((hsi*108+91)*1+lsi)*1]);
target[((hsi*168+141)*1+lsi)*1] = fp52;
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp54;
fp54 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+69)*1+lsi)*1], src0[((hsi*108+93)*1+lsi)*1]);
target[((hsi*168+140)*1+lsi)*1] = fp54;
LIBINT2_REALTYPE fp57;
LIBINT2_REALTYPE fp56;
fp56 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*84+69)*1+lsi)*1], src0[((hsi*108+90)*1+lsi)*1]);
target[((hsi*168+139)*1+lsi)*1] = fp56;
LIBINT2_REALTYPE fp59;
LIBINT2_REALTYPE fp58;
fp58 = libint2::fma_plus(inteval->CD_x[vi], src1[((hsi*84+69)*1+lsi)*1], src0[((hsi*108+69)*1+lsi)*1]);
target[((hsi*168+138)*1+lsi)*1] = fp58;
LIBINT2_REALTYPE fp61;
LIBINT2_REALTYPE fp60;
fp60 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+68)*1+lsi)*1], src0[((hsi*108+92)*1+lsi)*1]);
target[((hsi*168+137)*1+lsi)*1] = fp60;
LIBINT2_REALTYPE fp63;
LIBINT2_REALTYPE fp62;
fp62 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+67)*1+lsi)*1], src0[((hsi*108+91)*1+lsi)*1]);
target[((hsi*168+136)*1+lsi)*1] = fp62;
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*84+67)*1+lsi)*1], src0[((hsi*108+88)*1+lsi)*1]);
target[((hsi*168+135)*1+lsi)*1] = fp64;
LIBINT2_REALTYPE fp67;
LIBINT2_REALTYPE fp66;
fp66 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+66)*1+lsi)*1], src0[((hsi*108+90)*1+lsi)*1]);
target[((hsi*168+134)*1+lsi)*1] = fp66;
LIBINT2_REALTYPE fp69;
LIBINT2_REALTYPE fp68;
fp68 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*84+66)*1+lsi)*1], src0[((hsi*108+87)*1+lsi)*1]);
target[((hsi*168+133)*1+lsi)*1] = fp68;
LIBINT2_REALTYPE fp71;
LIBINT2_REALTYPE fp70;
fp70 = libint2::fma_plus(inteval->CD_x[vi], src1[((hsi*84+66)*1+lsi)*1], src0[((hsi*108+66)*1+lsi)*1]);
target[((hsi*168+132)*1+lsi)*1] = fp70;
LIBINT2_REALTYPE fp73;
LIBINT2_REALTYPE fp72;
fp72 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+65)*1+lsi)*1], src0[((hsi*108+89)*1+lsi)*1]);
target[((hsi*168+131)*1+lsi)*1] = fp72;
LIBINT2_REALTYPE fp75;
LIBINT2_REALTYPE fp74;
fp74 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+64)*1+lsi)*1], src0[((hsi*108+88)*1+lsi)*1]);
target[((hsi*168+130)*1+lsi)*1] = fp74;
LIBINT2_REALTYPE fp77;
LIBINT2_REALTYPE fp76;
fp76 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*84+64)*1+lsi)*1], src0[((hsi*108+85)*1+lsi)*1]);
target[((hsi*168+129)*1+lsi)*1] = fp76;
LIBINT2_REALTYPE fp79;
LIBINT2_REALTYPE fp78;
fp78 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+63)*1+lsi)*1], src0[((hsi*108+87)*1+lsi)*1]);
target[((hsi*168+128)*1+lsi)*1] = fp78;
LIBINT2_REALTYPE fp81;
LIBINT2_REALTYPE fp80;
fp80 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*84+63)*1+lsi)*1], src0[((hsi*108+84)*1+lsi)*1]);
target[((hsi*168+127)*1+lsi)*1] = fp80;
LIBINT2_REALTYPE fp83;
LIBINT2_REALTYPE fp82;
fp82 = libint2::fma_plus(inteval->CD_x[vi], src1[((hsi*84+63)*1+lsi)*1], src0[((hsi*108+63)*1+lsi)*1]);
target[((hsi*168+126)*1+lsi)*1] = fp82;
LIBINT2_REALTYPE fp85;
LIBINT2_REALTYPE fp84;
fp84 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+62)*1+lsi)*1], src0[((hsi*108+83)*1+lsi)*1]);
target[((hsi*168+125)*1+lsi)*1] = fp84;
LIBINT2_REALTYPE fp87;
LIBINT2_REALTYPE fp86;
fp86 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+61)*1+lsi)*1], src0[((hsi*108+82)*1+lsi)*1]);
target[((hsi*168+124)*1+lsi)*1] = fp86;
LIBINT2_REALTYPE fp89;
LIBINT2_REALTYPE fp88;
fp88 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*84+61)*1+lsi)*1], src0[((hsi*108+79)*1+lsi)*1]);
target[((hsi*168+123)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp91;
LIBINT2_REALTYPE fp90;
fp90 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+60)*1+lsi)*1], src0[((hsi*108+81)*1+lsi)*1]);
target[((hsi*168+122)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp93;
LIBINT2_REALTYPE fp92;
fp92 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*84+60)*1+lsi)*1], src0[((hsi*108+78)*1+lsi)*1]);
target[((hsi*168+121)*1+lsi)*1] = fp92;
LIBINT2_REALTYPE fp95;
LIBINT2_REALTYPE fp94;
fp94 = libint2::fma_plus(inteval->CD_x[vi], src1[((hsi*84+60)*1+lsi)*1], src0[((hsi*108+60)*1+lsi)*1]);
target[((hsi*168+120)*1+lsi)*1] = fp94;
LIBINT2_REALTYPE fp97;
LIBINT2_REALTYPE fp96;
fp96 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+59)*1+lsi)*1], src0[((hsi*108+80)*1+lsi)*1]);
target[((hsi*168+119)*1+lsi)*1] = fp96;
LIBINT2_REALTYPE fp99;
LIBINT2_REALTYPE fp98;
fp98 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+58)*1+lsi)*1], src0[((hsi*108+79)*1+lsi)*1]);
target[((hsi*168+118)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp101;
LIBINT2_REALTYPE fp100;
fp100 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*84+58)*1+lsi)*1], src0[((hsi*108+76)*1+lsi)*1]);
target[((hsi*168+117)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp103;
LIBINT2_REALTYPE fp102;
fp102 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+57)*1+lsi)*1], src0[((hsi*108+78)*1+lsi)*1]);
target[((hsi*168+116)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp105;
LIBINT2_REALTYPE fp104;
fp104 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*84+57)*1+lsi)*1], src0[((hsi*108+75)*1+lsi)*1]);
target[((hsi*168+115)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp107;
LIBINT2_REALTYPE fp106;
fp106 = libint2::fma_plus(inteval->CD_x[vi], src1[((hsi*84+57)*1+lsi)*1], src0[((hsi*108+57)*1+lsi)*1]);
target[((hsi*168+114)*1+lsi)*1] = fp106;
LIBINT2_REALTYPE fp109;
LIBINT2_REALTYPE fp108;
fp108 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+56)*1+lsi)*1], src0[((hsi*108+77)*1+lsi)*1]);
target[((hsi*168+113)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp111;
LIBINT2_REALTYPE fp110;
fp110 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+55)*1+lsi)*1], src0[((hsi*108+76)*1+lsi)*1]);
target[((hsi*168+112)*1+lsi)*1] = fp110;
LIBINT2_REALTYPE fp113;
LIBINT2_REALTYPE fp112;
fp112 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*84+55)*1+lsi)*1], src0[((hsi*108+73)*1+lsi)*1]);
target[((hsi*168+111)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp115;
LIBINT2_REALTYPE fp114;
fp114 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+54)*1+lsi)*1], src0[((hsi*108+75)*1+lsi)*1]);
target[((hsi*168+110)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp117;
LIBINT2_REALTYPE fp116;
fp116 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*84+54)*1+lsi)*1], src0[((hsi*108+72)*1+lsi)*1]);
target[((hsi*168+109)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp119;
LIBINT2_REALTYPE fp118;
fp118 = libint2::fma_plus(inteval->CD_x[vi], src1[((hsi*84+54)*1+lsi)*1], src0[((hsi*108+54)*1+lsi)*1]);
target[((hsi*168+108)*1+lsi)*1] = fp118;
LIBINT2_REALTYPE fp121;
LIBINT2_REALTYPE fp120;
fp120 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+53)*1+lsi)*1], src0[((hsi*108+74)*1+lsi)*1]);
target[((hsi*168+107)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp123;
LIBINT2_REALTYPE fp122;
fp122 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+52)*1+lsi)*1], src0[((hsi*108+73)*1+lsi)*1]);
target[((hsi*168+106)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp125;
LIBINT2_REALTYPE fp124;
fp124 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*84+52)*1+lsi)*1], src0[((hsi*108+70)*1+lsi)*1]);
target[((hsi*168+105)*1+lsi)*1] = fp124;
LIBINT2_REALTYPE fp127;
LIBINT2_REALTYPE fp126;
fp126 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+51)*1+lsi)*1], src0[((hsi*108+72)*1+lsi)*1]);
target[((hsi*168+104)*1+lsi)*1] = fp126;
LIBINT2_REALTYPE fp129;
LIBINT2_REALTYPE fp128;
fp128 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*84+51)*1+lsi)*1], src0[((hsi*108+69)*1+lsi)*1]);
target[((hsi*168+103)*1+lsi)*1] = fp128;
LIBINT2_REALTYPE fp131;
LIBINT2_REALTYPE fp130;
fp130 = libint2::fma_plus(inteval->CD_x[vi], src1[((hsi*84+51)*1+lsi)*1], src0[((hsi*108+51)*1+lsi)*1]);
target[((hsi*168+102)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp133;
LIBINT2_REALTYPE fp132;
fp132 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+50)*1+lsi)*1], src0[((hsi*108+71)*1+lsi)*1]);
target[((hsi*168+101)*1+lsi)*1] = fp132;
LIBINT2_REALTYPE fp135;
LIBINT2_REALTYPE fp134;
fp134 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+49)*1+lsi)*1], src0[((hsi*108+70)*1+lsi)*1]);
target[((hsi*168+100)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp137;
LIBINT2_REALTYPE fp136;
fp136 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*84+49)*1+lsi)*1], src0[((hsi*108+67)*1+lsi)*1]);
target[((hsi*168+99)*1+lsi)*1] = fp136;
LIBINT2_REALTYPE fp139;
LIBINT2_REALTYPE fp138;
fp138 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+48)*1+lsi)*1], src0[((hsi*108+69)*1+lsi)*1]);
target[((hsi*168+98)*1+lsi)*1] = fp138;
LIBINT2_REALTYPE fp141;
LIBINT2_REALTYPE fp140;
fp140 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*84+48)*1+lsi)*1], src0[((hsi*108+66)*1+lsi)*1]);
target[((hsi*168+97)*1+lsi)*1] = fp140;
LIBINT2_REALTYPE fp143;
LIBINT2_REALTYPE fp142;
fp142 = libint2::fma_plus(inteval->CD_x[vi], src1[((hsi*84+48)*1+lsi)*1], src0[((hsi*108+48)*1+lsi)*1]);
target[((hsi*168+96)*1+lsi)*1] = fp142;
LIBINT2_REALTYPE fp145;
LIBINT2_REALTYPE fp144;
fp144 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+47)*1+lsi)*1], src0[((hsi*108+68)*1+lsi)*1]);
target[((hsi*168+95)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp147;
LIBINT2_REALTYPE fp146;
fp146 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+46)*1+lsi)*1], src0[((hsi*108+67)*1+lsi)*1]);
target[((hsi*168+94)*1+lsi)*1] = fp146;
LIBINT2_REALTYPE fp149;
LIBINT2_REALTYPE fp148;
fp148 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*84+46)*1+lsi)*1], src0[((hsi*108+64)*1+lsi)*1]);
target[((hsi*168+93)*1+lsi)*1] = fp148;
LIBINT2_REALTYPE fp151;
LIBINT2_REALTYPE fp150;
fp150 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+45)*1+lsi)*1], src0[((hsi*108+66)*1+lsi)*1]);
target[((hsi*168+92)*1+lsi)*1] = fp150;
LIBINT2_REALTYPE fp153;
LIBINT2_REALTYPE fp152;
fp152 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*84+45)*1+lsi)*1], src0[((hsi*108+63)*1+lsi)*1]);
target[((hsi*168+91)*1+lsi)*1] = fp152;
LIBINT2_REALTYPE fp155;
LIBINT2_REALTYPE fp154;
fp154 = libint2::fma_plus(inteval->CD_x[vi], src1[((hsi*84+45)*1+lsi)*1], src0[((hsi*108+45)*1+lsi)*1]);
target[((hsi*168+90)*1+lsi)*1] = fp154;
LIBINT2_REALTYPE fp157;
LIBINT2_REALTYPE fp156;
fp156 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+44)*1+lsi)*1], src0[((hsi*108+62)*1+lsi)*1]);
target[((hsi*168+89)*1+lsi)*1] = fp156;
LIBINT2_REALTYPE fp159;
LIBINT2_REALTYPE fp158;
fp158 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+43)*1+lsi)*1], src0[((hsi*108+61)*1+lsi)*1]);
target[((hsi*168+88)*1+lsi)*1] = fp158;
LIBINT2_REALTYPE fp161;
LIBINT2_REALTYPE fp160;
fp160 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*84+43)*1+lsi)*1], src0[((hsi*108+58)*1+lsi)*1]);
target[((hsi*168+87)*1+lsi)*1] = fp160;
LIBINT2_REALTYPE fp163;
LIBINT2_REALTYPE fp162;
fp162 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+42)*1+lsi)*1], src0[((hsi*108+60)*1+lsi)*1]);
target[((hsi*168+86)*1+lsi)*1] = fp162;
LIBINT2_REALTYPE fp165;
LIBINT2_REALTYPE fp164;
fp164 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*84+42)*1+lsi)*1], src0[((hsi*108+57)*1+lsi)*1]);
target[((hsi*168+85)*1+lsi)*1] = fp164;
LIBINT2_REALTYPE fp167;
LIBINT2_REALTYPE fp166;
fp166 = libint2::fma_plus(inteval->CD_x[vi], src1[((hsi*84+42)*1+lsi)*1], src0[((hsi*108+42)*1+lsi)*1]);
target[((hsi*168+84)*1+lsi)*1] = fp166;
LIBINT2_REALTYPE fp169;
LIBINT2_REALTYPE fp168;
fp168 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+41)*1+lsi)*1], src0[((hsi*108+59)*1+lsi)*1]);
target[((hsi*168+83)*1+lsi)*1] = fp168;
LIBINT2_REALTYPE fp171;
LIBINT2_REALTYPE fp170;
fp170 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+40)*1+lsi)*1], src0[((hsi*108+58)*1+lsi)*1]);
target[((hsi*168+82)*1+lsi)*1] = fp170;
LIBINT2_REALTYPE fp173;
LIBINT2_REALTYPE fp172;
fp172 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*84+40)*1+lsi)*1], src0[((hsi*108+55)*1+lsi)*1]);
target[((hsi*168+81)*1+lsi)*1] = fp172;
LIBINT2_REALTYPE fp175;
LIBINT2_REALTYPE fp174;
fp174 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+39)*1+lsi)*1], src0[((hsi*108+57)*1+lsi)*1]);
target[((hsi*168+80)*1+lsi)*1] = fp174;
LIBINT2_REALTYPE fp177;
LIBINT2_REALTYPE fp176;
fp176 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*84+39)*1+lsi)*1], src0[((hsi*108+54)*1+lsi)*1]);
target[((hsi*168+79)*1+lsi)*1] = fp176;
LIBINT2_REALTYPE fp179;
LIBINT2_REALTYPE fp178;
fp178 = libint2::fma_plus(inteval->CD_x[vi], src1[((hsi*84+39)*1+lsi)*1], src0[((hsi*108+39)*1+lsi)*1]);
target[((hsi*168+78)*1+lsi)*1] = fp178;
LIBINT2_REALTYPE fp181;
LIBINT2_REALTYPE fp180;
fp180 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+38)*1+lsi)*1], src0[((hsi*108+56)*1+lsi)*1]);
target[((hsi*168+77)*1+lsi)*1] = fp180;
LIBINT2_REALTYPE fp183;
LIBINT2_REALTYPE fp182;
fp182 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+37)*1+lsi)*1], src0[((hsi*108+55)*1+lsi)*1]);
target[((hsi*168+76)*1+lsi)*1] = fp182;
LIBINT2_REALTYPE fp185;
LIBINT2_REALTYPE fp184;
fp184 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*84+37)*1+lsi)*1], src0[((hsi*108+52)*1+lsi)*1]);
target[((hsi*168+75)*1+lsi)*1] = fp184;
LIBINT2_REALTYPE fp187;
LIBINT2_REALTYPE fp186;
fp186 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+36)*1+lsi)*1], src0[((hsi*108+54)*1+lsi)*1]);
target[((hsi*168+74)*1+lsi)*1] = fp186;
LIBINT2_REALTYPE fp189;
LIBINT2_REALTYPE fp188;
fp188 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*84+36)*1+lsi)*1], src0[((hsi*108+51)*1+lsi)*1]);
target[((hsi*168+73)*1+lsi)*1] = fp188;
LIBINT2_REALTYPE fp191;
LIBINT2_REALTYPE fp190;
fp190 = libint2::fma_plus(inteval->CD_x[vi], src1[((hsi*84+36)*1+lsi)*1], src0[((hsi*108+36)*1+lsi)*1]);
target[((hsi*168+72)*1+lsi)*1] = fp190;
LIBINT2_REALTYPE fp193;
LIBINT2_REALTYPE fp192;
fp192 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+35)*1+lsi)*1], src0[((hsi*108+53)*1+lsi)*1]);
target[((hsi*168+71)*1+lsi)*1] = fp192;
LIBINT2_REALTYPE fp195;
LIBINT2_REALTYPE fp194;
fp194 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+34)*1+lsi)*1], src0[((hsi*108+52)*1+lsi)*1]);
target[((hsi*168+70)*1+lsi)*1] = fp194;
LIBINT2_REALTYPE fp197;
LIBINT2_REALTYPE fp196;
fp196 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*84+34)*1+lsi)*1], src0[((hsi*108+49)*1+lsi)*1]);
target[((hsi*168+69)*1+lsi)*1] = fp196;
LIBINT2_REALTYPE fp199;
LIBINT2_REALTYPE fp198;
fp198 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+33)*1+lsi)*1], src0[((hsi*108+51)*1+lsi)*1]);
target[((hsi*168+68)*1+lsi)*1] = fp198;
LIBINT2_REALTYPE fp201;
LIBINT2_REALTYPE fp200;
fp200 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*84+33)*1+lsi)*1], src0[((hsi*108+48)*1+lsi)*1]);
target[((hsi*168+67)*1+lsi)*1] = fp200;
LIBINT2_REALTYPE fp203;
LIBINT2_REALTYPE fp202;
fp202 = libint2::fma_plus(inteval->CD_x[vi], src1[((hsi*84+33)*1+lsi)*1], src0[((hsi*108+33)*1+lsi)*1]);
target[((hsi*168+66)*1+lsi)*1] = fp202;
LIBINT2_REALTYPE fp205;
LIBINT2_REALTYPE fp204;
fp204 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+32)*1+lsi)*1], src0[((hsi*108+50)*1+lsi)*1]);
target[((hsi*168+65)*1+lsi)*1] = fp204;
LIBINT2_REALTYPE fp207;
LIBINT2_REALTYPE fp206;
fp206 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+31)*1+lsi)*1], src0[((hsi*108+49)*1+lsi)*1]);
target[((hsi*168+64)*1+lsi)*1] = fp206;
LIBINT2_REALTYPE fp209;
LIBINT2_REALTYPE fp208;
fp208 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*84+31)*1+lsi)*1], src0[((hsi*108+46)*1+lsi)*1]);
target[((hsi*168+63)*1+lsi)*1] = fp208;
LIBINT2_REALTYPE fp211;
LIBINT2_REALTYPE fp210;
fp210 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+30)*1+lsi)*1], src0[((hsi*108+48)*1+lsi)*1]);
target[((hsi*168+62)*1+lsi)*1] = fp210;
LIBINT2_REALTYPE fp213;
LIBINT2_REALTYPE fp212;
fp212 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*84+30)*1+lsi)*1], src0[((hsi*108+45)*1+lsi)*1]);
target[((hsi*168+61)*1+lsi)*1] = fp212;
LIBINT2_REALTYPE fp215;
LIBINT2_REALTYPE fp214;
fp214 = libint2::fma_plus(inteval->CD_x[vi], src1[((hsi*84+30)*1+lsi)*1], src0[((hsi*108+30)*1+lsi)*1]);
target[((hsi*168+60)*1+lsi)*1] = fp214;
LIBINT2_REALTYPE fp217;
LIBINT2_REALTYPE fp216;
fp216 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+29)*1+lsi)*1], src0[((hsi*108+44)*1+lsi)*1]);
target[((hsi*168+59)*1+lsi)*1] = fp216;
LIBINT2_REALTYPE fp219;
LIBINT2_REALTYPE fp218;
fp218 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+28)*1+lsi)*1], src0[((hsi*108+43)*1+lsi)*1]);
target[((hsi*168+58)*1+lsi)*1] = fp218;
LIBINT2_REALTYPE fp221;
LIBINT2_REALTYPE fp220;
fp220 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*84+28)*1+lsi)*1], src0[((hsi*108+40)*1+lsi)*1]);
target[((hsi*168+57)*1+lsi)*1] = fp220;
LIBINT2_REALTYPE fp223;
LIBINT2_REALTYPE fp222;
fp222 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+27)*1+lsi)*1], src0[((hsi*108+42)*1+lsi)*1]);
target[((hsi*168+56)*1+lsi)*1] = fp222;
LIBINT2_REALTYPE fp225;
LIBINT2_REALTYPE fp224;
fp224 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*84+27)*1+lsi)*1], src0[((hsi*108+39)*1+lsi)*1]);
target[((hsi*168+55)*1+lsi)*1] = fp224;
LIBINT2_REALTYPE fp227;
LIBINT2_REALTYPE fp226;
fp226 = libint2::fma_plus(inteval->CD_x[vi], src1[((hsi*84+27)*1+lsi)*1], src0[((hsi*108+27)*1+lsi)*1]);
target[((hsi*168+54)*1+lsi)*1] = fp226;
LIBINT2_REALTYPE fp229;
LIBINT2_REALTYPE fp228;
fp228 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+26)*1+lsi)*1], src0[((hsi*108+41)*1+lsi)*1]);
target[((hsi*168+53)*1+lsi)*1] = fp228;
LIBINT2_REALTYPE fp231;
LIBINT2_REALTYPE fp230;
fp230 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+25)*1+lsi)*1], src0[((hsi*108+40)*1+lsi)*1]);
target[((hsi*168+52)*1+lsi)*1] = fp230;
LIBINT2_REALTYPE fp233;
LIBINT2_REALTYPE fp232;
fp232 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*84+25)*1+lsi)*1], src0[((hsi*108+37)*1+lsi)*1]);
target[((hsi*168+51)*1+lsi)*1] = fp232;
LIBINT2_REALTYPE fp235;
LIBINT2_REALTYPE fp234;
fp234 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+24)*1+lsi)*1], src0[((hsi*108+39)*1+lsi)*1]);
target[((hsi*168+50)*1+lsi)*1] = fp234;
LIBINT2_REALTYPE fp237;
LIBINT2_REALTYPE fp236;
fp236 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*84+24)*1+lsi)*1], src0[((hsi*108+36)*1+lsi)*1]);
target[((hsi*168+49)*1+lsi)*1] = fp236;
LIBINT2_REALTYPE fp239;
LIBINT2_REALTYPE fp238;
fp238 = libint2::fma_plus(inteval->CD_x[vi], src1[((hsi*84+24)*1+lsi)*1], src0[((hsi*108+24)*1+lsi)*1]);
target[((hsi*168+48)*1+lsi)*1] = fp238;
LIBINT2_REALTYPE fp241;
LIBINT2_REALTYPE fp240;
fp240 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+23)*1+lsi)*1], src0[((hsi*108+38)*1+lsi)*1]);
target[((hsi*168+47)*1+lsi)*1] = fp240;
LIBINT2_REALTYPE fp243;
LIBINT2_REALTYPE fp242;
fp242 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+22)*1+lsi)*1], src0[((hsi*108+37)*1+lsi)*1]);
target[((hsi*168+46)*1+lsi)*1] = fp242;
LIBINT2_REALTYPE fp245;
LIBINT2_REALTYPE fp244;
fp244 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*84+22)*1+lsi)*1], src0[((hsi*108+34)*1+lsi)*1]);
target[((hsi*168+45)*1+lsi)*1] = fp244;
LIBINT2_REALTYPE fp247;
LIBINT2_REALTYPE fp246;
fp246 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+21)*1+lsi)*1], src0[((hsi*108+36)*1+lsi)*1]);
target[((hsi*168+44)*1+lsi)*1] = fp246;
LIBINT2_REALTYPE fp249;
LIBINT2_REALTYPE fp248;
fp248 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*84+21)*1+lsi)*1], src0[((hsi*108+33)*1+lsi)*1]);
target[((hsi*168+43)*1+lsi)*1] = fp248;
LIBINT2_REALTYPE fp251;
LIBINT2_REALTYPE fp250;
fp250 = libint2::fma_plus(inteval->CD_x[vi], src1[((hsi*84+21)*1+lsi)*1], src0[((hsi*108+21)*1+lsi)*1]);
target[((hsi*168+42)*1+lsi)*1] = fp250;
LIBINT2_REALTYPE fp253;
LIBINT2_REALTYPE fp252;
fp252 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+20)*1+lsi)*1], src0[((hsi*108+35)*1+lsi)*1]);
target[((hsi*168+41)*1+lsi)*1] = fp252;
LIBINT2_REALTYPE fp255;
LIBINT2_REALTYPE fp254;
fp254 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+19)*1+lsi)*1], src0[((hsi*108+34)*1+lsi)*1]);
target[((hsi*168+40)*1+lsi)*1] = fp254;
LIBINT2_REALTYPE fp257;
LIBINT2_REALTYPE fp256;
fp256 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*84+19)*1+lsi)*1], src0[((hsi*108+31)*1+lsi)*1]);
target[((hsi*168+39)*1+lsi)*1] = fp256;
LIBINT2_REALTYPE fp259;
LIBINT2_REALTYPE fp258;
fp258 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+18)*1+lsi)*1], src0[((hsi*108+33)*1+lsi)*1]);
target[((hsi*168+38)*1+lsi)*1] = fp258;
LIBINT2_REALTYPE fp261;
LIBINT2_REALTYPE fp260;
fp260 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*84+18)*1+lsi)*1], src0[((hsi*108+30)*1+lsi)*1]);
target[((hsi*168+37)*1+lsi)*1] = fp260;
LIBINT2_REALTYPE fp263;
LIBINT2_REALTYPE fp262;
fp262 = libint2::fma_plus(inteval->CD_x[vi], src1[((hsi*84+18)*1+lsi)*1], src0[((hsi*108+18)*1+lsi)*1]);
target[((hsi*168+36)*1+lsi)*1] = fp262;
LIBINT2_REALTYPE fp265;
LIBINT2_REALTYPE fp264;
fp264 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+17)*1+lsi)*1], src0[((hsi*108+29)*1+lsi)*1]);
target[((hsi*168+35)*1+lsi)*1] = fp264;
LIBINT2_REALTYPE fp267;
LIBINT2_REALTYPE fp266;
fp266 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+16)*1+lsi)*1], src0[((hsi*108+28)*1+lsi)*1]);
target[((hsi*168+34)*1+lsi)*1] = fp266;
LIBINT2_REALTYPE fp269;
LIBINT2_REALTYPE fp268;
fp268 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*84+16)*1+lsi)*1], src0[((hsi*108+25)*1+lsi)*1]);
target[((hsi*168+33)*1+lsi)*1] = fp268;
LIBINT2_REALTYPE fp271;
LIBINT2_REALTYPE fp270;
fp270 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+15)*1+lsi)*1], src0[((hsi*108+27)*1+lsi)*1]);
target[((hsi*168+32)*1+lsi)*1] = fp270;
LIBINT2_REALTYPE fp273;
LIBINT2_REALTYPE fp272;
fp272 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*84+15)*1+lsi)*1], src0[((hsi*108+24)*1+lsi)*1]);
target[((hsi*168+31)*1+lsi)*1] = fp272;
LIBINT2_REALTYPE fp275;
LIBINT2_REALTYPE fp274;
fp274 = libint2::fma_plus(inteval->CD_x[vi], src1[((hsi*84+15)*1+lsi)*1], src0[((hsi*108+15)*1+lsi)*1]);
target[((hsi*168+30)*1+lsi)*1] = fp274;
LIBINT2_REALTYPE fp277;
LIBINT2_REALTYPE fp276;
fp276 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+14)*1+lsi)*1], src0[((hsi*108+26)*1+lsi)*1]);
target[((hsi*168+29)*1+lsi)*1] = fp276;
LIBINT2_REALTYPE fp279;
LIBINT2_REALTYPE fp278;
fp278 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+13)*1+lsi)*1], src0[((hsi*108+25)*1+lsi)*1]);
target[((hsi*168+28)*1+lsi)*1] = fp278;
LIBINT2_REALTYPE fp281;
LIBINT2_REALTYPE fp280;
fp280 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*84+13)*1+lsi)*1], src0[((hsi*108+22)*1+lsi)*1]);
target[((hsi*168+27)*1+lsi)*1] = fp280;
LIBINT2_REALTYPE fp283;
LIBINT2_REALTYPE fp282;
fp282 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+12)*1+lsi)*1], src0[((hsi*108+24)*1+lsi)*1]);
target[((hsi*168+26)*1+lsi)*1] = fp282;
LIBINT2_REALTYPE fp285;
LIBINT2_REALTYPE fp284;
fp284 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*84+12)*1+lsi)*1], src0[((hsi*108+21)*1+lsi)*1]);
target[((hsi*168+25)*1+lsi)*1] = fp284;
LIBINT2_REALTYPE fp287;
LIBINT2_REALTYPE fp286;
fp286 = libint2::fma_plus(inteval->CD_x[vi], src1[((hsi*84+12)*1+lsi)*1], src0[((hsi*108+12)*1+lsi)*1]);
target[((hsi*168+24)*1+lsi)*1] = fp286;
LIBINT2_REALTYPE fp289;
LIBINT2_REALTYPE fp288;
fp288 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+11)*1+lsi)*1], src0[((hsi*108+23)*1+lsi)*1]);
target[((hsi*168+23)*1+lsi)*1] = fp288;
LIBINT2_REALTYPE fp291;
LIBINT2_REALTYPE fp290;
fp290 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+10)*1+lsi)*1], src0[((hsi*108+22)*1+lsi)*1]);
target[((hsi*168+22)*1+lsi)*1] = fp290;
LIBINT2_REALTYPE fp293;
LIBINT2_REALTYPE fp292;
fp292 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*84+10)*1+lsi)*1], src0[((hsi*108+19)*1+lsi)*1]);
target[((hsi*168+21)*1+lsi)*1] = fp292;
LIBINT2_REALTYPE fp295;
LIBINT2_REALTYPE fp294;
fp294 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+9)*1+lsi)*1], src0[((hsi*108+21)*1+lsi)*1]);
target[((hsi*168+20)*1+lsi)*1] = fp294;
LIBINT2_REALTYPE fp297;
LIBINT2_REALTYPE fp296;
fp296 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*84+9)*1+lsi)*1], src0[((hsi*108+18)*1+lsi)*1]);
target[((hsi*168+19)*1+lsi)*1] = fp296;
LIBINT2_REALTYPE fp299;
LIBINT2_REALTYPE fp298;
fp298 = libint2::fma_plus(inteval->CD_x[vi], src1[((hsi*84+9)*1+lsi)*1], src0[((hsi*108+9)*1+lsi)*1]);
target[((hsi*168+18)*1+lsi)*1] = fp298;
LIBINT2_REALTYPE fp301;
LIBINT2_REALTYPE fp300;
fp300 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+8)*1+lsi)*1], src0[((hsi*108+17)*1+lsi)*1]);
target[((hsi*168+17)*1+lsi)*1] = fp300;
LIBINT2_REALTYPE fp303;
LIBINT2_REALTYPE fp302;
fp302 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+7)*1+lsi)*1], src0[((hsi*108+16)*1+lsi)*1]);
target[((hsi*168+16)*1+lsi)*1] = fp302;
LIBINT2_REALTYPE fp305;
LIBINT2_REALTYPE fp304;
fp304 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*84+7)*1+lsi)*1], src0[((hsi*108+13)*1+lsi)*1]);
target[((hsi*168+15)*1+lsi)*1] = fp304;
LIBINT2_REALTYPE fp307;
LIBINT2_REALTYPE fp306;
fp306 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+6)*1+lsi)*1], src0[((hsi*108+15)*1+lsi)*1]);
target[((hsi*168+14)*1+lsi)*1] = fp306;
LIBINT2_REALTYPE fp309;
LIBINT2_REALTYPE fp308;
fp308 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*84+6)*1+lsi)*1], src0[((hsi*108+12)*1+lsi)*1]);
target[((hsi*168+13)*1+lsi)*1] = fp308;
LIBINT2_REALTYPE fp311;
LIBINT2_REALTYPE fp310;
fp310 = libint2::fma_plus(inteval->CD_x[vi], src1[((hsi*84+6)*1+lsi)*1], src0[((hsi*108+6)*1+lsi)*1]);
target[((hsi*168+12)*1+lsi)*1] = fp310;
LIBINT2_REALTYPE fp313;
LIBINT2_REALTYPE fp312;
fp312 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+5)*1+lsi)*1], src0[((hsi*108+14)*1+lsi)*1]);
target[((hsi*168+11)*1+lsi)*1] = fp312;
LIBINT2_REALTYPE fp315;
LIBINT2_REALTYPE fp314;
fp314 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+4)*1+lsi)*1], src0[((hsi*108+13)*1+lsi)*1]);
target[((hsi*168+10)*1+lsi)*1] = fp314;
LIBINT2_REALTYPE fp317;
LIBINT2_REALTYPE fp316;
fp316 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*84+4)*1+lsi)*1], src0[((hsi*108+10)*1+lsi)*1]);
target[((hsi*168+9)*1+lsi)*1] = fp316;
LIBINT2_REALTYPE fp319;
LIBINT2_REALTYPE fp318;
fp318 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+3)*1+lsi)*1], src0[((hsi*108+12)*1+lsi)*1]);
target[((hsi*168+8)*1+lsi)*1] = fp318;
LIBINT2_REALTYPE fp321;
LIBINT2_REALTYPE fp320;
fp320 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*84+3)*1+lsi)*1], src0[((hsi*108+9)*1+lsi)*1]);
target[((hsi*168+7)*1+lsi)*1] = fp320;
LIBINT2_REALTYPE fp323;
LIBINT2_REALTYPE fp322;
fp322 = libint2::fma_plus(inteval->CD_x[vi], src1[((hsi*84+3)*1+lsi)*1], src0[((hsi*108+3)*1+lsi)*1]);
target[((hsi*168+6)*1+lsi)*1] = fp322;
LIBINT2_REALTYPE fp325;
LIBINT2_REALTYPE fp324;
fp324 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+2)*1+lsi)*1], src0[((hsi*108+8)*1+lsi)*1]);
target[((hsi*168+5)*1+lsi)*1] = fp324;
LIBINT2_REALTYPE fp327;
LIBINT2_REALTYPE fp326;
fp326 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+1)*1+lsi)*1], src0[((hsi*108+7)*1+lsi)*1]);
target[((hsi*168+4)*1+lsi)*1] = fp326;
LIBINT2_REALTYPE fp329;
LIBINT2_REALTYPE fp328;
fp328 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*84+1)*1+lsi)*1], src0[((hsi*108+4)*1+lsi)*1]);
target[((hsi*168+3)*1+lsi)*1] = fp328;
LIBINT2_REALTYPE fp331;
LIBINT2_REALTYPE fp330;
fp330 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*84+0)*1+lsi)*1], src0[((hsi*108+6)*1+lsi)*1]);
target[((hsi*168+2)*1+lsi)*1] = fp330;
LIBINT2_REALTYPE fp333;
LIBINT2_REALTYPE fp332;
fp332 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*84+0)*1+lsi)*1], src0[((hsi*108+3)*1+lsi)*1]);
target[((hsi*168+1)*1+lsi)*1] = fp332;
LIBINT2_REALTYPE fp335;
LIBINT2_REALTYPE fp334;
fp334 = libint2::fma_plus(inteval->CD_x[vi], src1[((hsi*84+0)*1+lsi)*1], src0[((hsi*108+0)*1+lsi)*1]);
target[((hsi*168+0)*1+lsi)*1] = fp334;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 336 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
