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
void CR_aB_p__0___CartesianMultipole_sB_2_c_1_c_0_Sb__p__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src1[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
LIBINT2_REALTYPE fp16;
fp16 = libint2::fma_plus(inteval->BO_y[vi], fp14, fp15);
LIBINT2_REALTYPE fp24;
fp24 = 0.0000000000000000e+00 + src0[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = 0.0000000000000000e+00 + src0[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp26;
fp26 = libint2::fma_plus(inteval->BO_x[vi], fp23, fp24);
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + src0[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
LIBINT2_REALTYPE fp19;
fp19 = libint2::fma_plus(inteval->BO_x[vi], fp18, fp23);
LIBINT2_REALTYPE fp22;
LIBINT2_REALTYPE fp21;
fp21 = libint2::fma_plus(inteval->BO_x[vi], fp19, fp26);
LIBINT2_REALTYPE fp47;
fp47 = fp21 * fp16;
LIBINT2_REALTYPE fp46;
fp46 = fp47 * fp0;
target[((hsi*9+8)*1+lsi)*1] = fp46;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = inteval->BO_y[vi] * fp15;
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src1[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = fp11 + fp13;
LIBINT2_REALTYPE fp49;
fp49 = fp21 * fp12;
LIBINT2_REALTYPE fp48;
fp48 = fp49 * fp1;
target[((hsi*9+7)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp31;
fp31 = inteval->BO_x[vi] * fp26;
LIBINT2_REALTYPE fp29;
fp29 = inteval->BO_x[vi] * fp24;
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src0[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = fp25 + fp29;
LIBINT2_REALTYPE fp30;
fp30 = fp28 + fp31;
LIBINT2_REALTYPE fp51;
fp51 = fp30 * fp16;
LIBINT2_REALTYPE fp50;
fp50 = fp51 * fp1;
target[((hsi*9+6)*1+lsi)*1] = fp50;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src1[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src1[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
LIBINT2_REALTYPE fp9;
fp9 = libint2::fma_plus(inteval->BO_y[vi], fp7, fp8);
LIBINT2_REALTYPE fp53;
fp53 = fp21 * fp9;
LIBINT2_REALTYPE fp52;
fp52 = fp53 * fp2;
target[((hsi*9+5)*1+lsi)*1] = fp52;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = inteval->BO_y[vi] * fp8;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src1[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = fp4 + fp6;
LIBINT2_REALTYPE fp55;
fp55 = fp21 * fp5;
LIBINT2_REALTYPE fp54;
fp54 = fp55 * fp3;
target[((hsi*9+4)*1+lsi)*1] = fp54;
LIBINT2_REALTYPE fp57;
fp57 = fp30 * fp9;
LIBINT2_REALTYPE fp56;
fp56 = fp57 * fp3;
target[((hsi*9+3)*1+lsi)*1] = fp56;
LIBINT2_REALTYPE fp38;
fp38 = 0.0000000000000000e+00 + src0[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = 0.0000000000000000e+00 + src0[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_plus(inteval->BO_x[vi], fp37, fp38);
LIBINT2_REALTYPE fp32;
fp32 = 0.0000000000000000e+00 + src0[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
LIBINT2_REALTYPE fp33;
fp33 = libint2::fma_plus(inteval->BO_x[vi], fp32, fp37);
LIBINT2_REALTYPE fp36;
LIBINT2_REALTYPE fp35;
fp35 = libint2::fma_plus(inteval->BO_x[vi], fp33, fp40);
LIBINT2_REALTYPE fp59;
fp59 = fp35 * fp16;
LIBINT2_REALTYPE fp58;
fp58 = fp59 * fp2;
target[((hsi*9+2)*1+lsi)*1] = fp58;
LIBINT2_REALTYPE fp61;
fp61 = fp35 * fp12;
LIBINT2_REALTYPE fp60;
fp60 = fp61 * fp3;
target[((hsi*9+1)*1+lsi)*1] = fp60;
LIBINT2_REALTYPE fp45;
fp45 = inteval->BO_x[vi] * fp40;
LIBINT2_REALTYPE fp43;
fp43 = inteval->BO_x[vi] * fp38;
LIBINT2_REALTYPE fp39;
fp39 = 0.0000000000000000e+00 + src0[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = fp39 + fp43;
LIBINT2_REALTYPE fp44;
fp44 = fp42 + fp45;
LIBINT2_REALTYPE fp63;
fp63 = fp44 * fp16;
LIBINT2_REALTYPE fp62;
fp62 = fp63 * fp3;
target[((hsi*9+0)*1+lsi)*1] = fp62;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 64 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
