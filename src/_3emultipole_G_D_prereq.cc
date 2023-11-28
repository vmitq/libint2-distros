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
#include <CR_aB_X4__0___Overlap_X2__0___Ab__up_.h>
#include <CR_aB_X4__0___Overlap_X3__0___Ab__up_.h>
#include <CR_aB_X4__0___Overlap_X4__0___Ab__up_.h>
#include <CR_aB_X4__0___Overlap_X5__0___Ab__up_.h>
#include <CR_aB_Y4__0___Overlap_Y2__0___Ab__up_.h>
#include <CR_aB_Y4__0___Overlap_Y3__0___Ab__up_.h>
#include <CR_aB_Y4__0___Overlap_Y4__0___Ab__up_.h>
#include <CR_aB_Y4__0___Overlap_Y5__0___Ab__up_.h>
#include <CR_aB_Z4__0___Overlap_Z2__0___Ab__up_.h>
#include <CR_aB_Z4__0___Overlap_Z3__0___Ab__up_.h>
#include <CR_aB_Z4__0___Overlap_Z4__0___Ab__up_.h>
#include <CR_aB_Z4__0___Overlap_Z5__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_1_Sb__d__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_2_Sb__d__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_3_Sb__d__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_0_c_1_c_0_Sb__d__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_0_c_1_c_1_Sb__d__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_0_c_1_c_2_Sb__d__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_0_c_2_c_0_Sb__d__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_0_c_2_c_1_Sb__d__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_0_c_3_c_0_Sb__d__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_1_c_0_c_0_Sb__d__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_1_c_0_c_1_Sb__d__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_1_c_0_c_2_Sb__d__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_1_c_1_c_0_Sb__d__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_1_c_1_c_1_Sb__d__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_1_c_2_c_0_Sb__d__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_2_c_0_c_0_Sb__d__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_2_c_0_c_1_Sb__d__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_2_c_1_c_0_Sb__d__0___Ab__up_.h>
#include <CR_aB_g__0___CartesianMultipole_sB_3_c_0_c_0_Sb__d__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _3emultipole_G_D_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z4__0___Overlap_Z5__0___Ab__up_(inteval, &(stack[((hsi*30+1800)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y4__0___Overlap_Y5__0___Ab__up_(inteval, &(stack[((hsi*30+1830)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X4__0___Overlap_X5__0___Ab__up_(inteval, &(stack[((hsi*30+1860)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_3_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*90+1890)*1+lsi)*1]), &(stack[((hsi*30+1860)*1+lsi)*1]), &(stack[((hsi*30+1830)*1+lsi)*1]), &(stack[((hsi*30+1800)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+1710)*1+lsi)*1]),&(stack[((hsi*90+1890)*1+lsi)*1]),90);
CR_aB_g__0___CartesianMultipole_sB_0_c_1_c_2_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*90+1980)*1+lsi)*1]), &(stack[((hsi*30+1860)*1+lsi)*1]), &(stack[((hsi*30+1830)*1+lsi)*1]), &(stack[((hsi*30+1800)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+1620)*1+lsi)*1]),&(stack[((hsi*90+1980)*1+lsi)*1]),90);
CR_aB_g__0___CartesianMultipole_sB_0_c_2_c_1_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*90+2070)*1+lsi)*1]), &(stack[((hsi*30+1860)*1+lsi)*1]), &(stack[((hsi*30+1830)*1+lsi)*1]), &(stack[((hsi*30+1800)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+1530)*1+lsi)*1]),&(stack[((hsi*90+2070)*1+lsi)*1]),90);
CR_aB_g__0___CartesianMultipole_sB_0_c_3_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*90+2160)*1+lsi)*1]), &(stack[((hsi*30+1860)*1+lsi)*1]), &(stack[((hsi*30+1830)*1+lsi)*1]), &(stack[((hsi*30+1800)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+1440)*1+lsi)*1]),&(stack[((hsi*90+2160)*1+lsi)*1]),90);
CR_aB_g__0___CartesianMultipole_sB_1_c_0_c_2_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*90+2250)*1+lsi)*1]), &(stack[((hsi*30+1860)*1+lsi)*1]), &(stack[((hsi*30+1830)*1+lsi)*1]), &(stack[((hsi*30+1800)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+1350)*1+lsi)*1]),&(stack[((hsi*90+2250)*1+lsi)*1]),90);
CR_aB_g__0___CartesianMultipole_sB_1_c_1_c_1_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*90+2340)*1+lsi)*1]), &(stack[((hsi*30+1860)*1+lsi)*1]), &(stack[((hsi*30+1830)*1+lsi)*1]), &(stack[((hsi*30+1800)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+1260)*1+lsi)*1]),&(stack[((hsi*90+2340)*1+lsi)*1]),90);
CR_aB_g__0___CartesianMultipole_sB_1_c_2_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*90+2430)*1+lsi)*1]), &(stack[((hsi*30+1860)*1+lsi)*1]), &(stack[((hsi*30+1830)*1+lsi)*1]), &(stack[((hsi*30+1800)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+1170)*1+lsi)*1]),&(stack[((hsi*90+2430)*1+lsi)*1]),90);
CR_aB_g__0___CartesianMultipole_sB_2_c_0_c_1_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*90+2520)*1+lsi)*1]), &(stack[((hsi*30+1860)*1+lsi)*1]), &(stack[((hsi*30+1830)*1+lsi)*1]), &(stack[((hsi*30+1800)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+1080)*1+lsi)*1]),&(stack[((hsi*90+2520)*1+lsi)*1]),90);
CR_aB_g__0___CartesianMultipole_sB_2_c_1_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*90+2610)*1+lsi)*1]), &(stack[((hsi*30+1860)*1+lsi)*1]), &(stack[((hsi*30+1830)*1+lsi)*1]), &(stack[((hsi*30+1800)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+990)*1+lsi)*1]),&(stack[((hsi*90+2610)*1+lsi)*1]),90);
CR_aB_g__0___CartesianMultipole_sB_3_c_0_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*90+2700)*1+lsi)*1]), &(stack[((hsi*30+1860)*1+lsi)*1]), &(stack[((hsi*30+1830)*1+lsi)*1]), &(stack[((hsi*30+1800)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+900)*1+lsi)*1]),&(stack[((hsi*90+2700)*1+lsi)*1]),90);
CR_aB_Z4__0___Overlap_Z4__0___Ab__up_(inteval, &(stack[((hsi*25+1800)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y4__0___Overlap_Y4__0___Ab__up_(inteval, &(stack[((hsi*25+1825)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X4__0___Overlap_X4__0___Ab__up_(inteval, &(stack[((hsi*25+1850)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_2_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*90+2790)*1+lsi)*1]), &(stack[((hsi*25+1850)*1+lsi)*1]), &(stack[((hsi*25+1825)*1+lsi)*1]), &(stack[((hsi*25+1800)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+810)*1+lsi)*1]),&(stack[((hsi*90+2790)*1+lsi)*1]),90);
CR_aB_g__0___CartesianMultipole_sB_0_c_1_c_1_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*90+2880)*1+lsi)*1]), &(stack[((hsi*25+1850)*1+lsi)*1]), &(stack[((hsi*25+1825)*1+lsi)*1]), &(stack[((hsi*25+1800)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+720)*1+lsi)*1]),&(stack[((hsi*90+2880)*1+lsi)*1]),90);
CR_aB_g__0___CartesianMultipole_sB_0_c_2_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*90+2970)*1+lsi)*1]), &(stack[((hsi*25+1850)*1+lsi)*1]), &(stack[((hsi*25+1825)*1+lsi)*1]), &(stack[((hsi*25+1800)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+630)*1+lsi)*1]),&(stack[((hsi*90+2970)*1+lsi)*1]),90);
CR_aB_g__0___CartesianMultipole_sB_1_c_0_c_1_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*90+3060)*1+lsi)*1]), &(stack[((hsi*25+1850)*1+lsi)*1]), &(stack[((hsi*25+1825)*1+lsi)*1]), &(stack[((hsi*25+1800)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+540)*1+lsi)*1]),&(stack[((hsi*90+3060)*1+lsi)*1]),90);
CR_aB_g__0___CartesianMultipole_sB_1_c_1_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*90+3150)*1+lsi)*1]), &(stack[((hsi*25+1850)*1+lsi)*1]), &(stack[((hsi*25+1825)*1+lsi)*1]), &(stack[((hsi*25+1800)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+450)*1+lsi)*1]),&(stack[((hsi*90+3150)*1+lsi)*1]),90);
CR_aB_g__0___CartesianMultipole_sB_2_c_0_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*90+3240)*1+lsi)*1]), &(stack[((hsi*25+1850)*1+lsi)*1]), &(stack[((hsi*25+1825)*1+lsi)*1]), &(stack[((hsi*25+1800)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+360)*1+lsi)*1]),&(stack[((hsi*90+3240)*1+lsi)*1]),90);
CR_aB_Z4__0___Overlap_Z3__0___Ab__up_(inteval, &(stack[((hsi*20+1800)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y4__0___Overlap_Y3__0___Ab__up_(inteval, &(stack[((hsi*20+1820)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X4__0___Overlap_X3__0___Ab__up_(inteval, &(stack[((hsi*20+1840)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_1_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*90+3330)*1+lsi)*1]), &(stack[((hsi*20+1840)*1+lsi)*1]), &(stack[((hsi*20+1820)*1+lsi)*1]), &(stack[((hsi*20+1800)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+270)*1+lsi)*1]),&(stack[((hsi*90+3330)*1+lsi)*1]),90);
CR_aB_g__0___CartesianMultipole_sB_0_c_1_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*90+3420)*1+lsi)*1]), &(stack[((hsi*20+1840)*1+lsi)*1]), &(stack[((hsi*20+1820)*1+lsi)*1]), &(stack[((hsi*20+1800)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+180)*1+lsi)*1]),&(stack[((hsi*90+3420)*1+lsi)*1]),90);
CR_aB_g__0___CartesianMultipole_sB_1_c_0_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*90+3510)*1+lsi)*1]), &(stack[((hsi*20+1840)*1+lsi)*1]), &(stack[((hsi*20+1820)*1+lsi)*1]), &(stack[((hsi*20+1800)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+90)*1+lsi)*1]),&(stack[((hsi*90+3510)*1+lsi)*1]),90);
CR_aB_Z4__0___Overlap_Z2__0___Ab__up_(inteval, &(stack[((hsi*15+1800)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y4__0___Overlap_Y2__0___Ab__up_(inteval, &(stack[((hsi*15+1815)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X4__0___Overlap_X2__0___Ab__up_(inteval, &(stack[((hsi*15+1830)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_g__0___CartesianMultipole_sB_0_c_0_c_0_Sb__d__0___Ab__up_(inteval, &(stack[((hsi*90+3600)*1+lsi)*1]), &(stack[((hsi*15+1830)*1+lsi)*1]), &(stack[((hsi*15+1815)*1+lsi)*1]), &(stack[((hsi*15+1800)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*90+0)*1+lsi)*1]),&(stack[((hsi*90+3600)*1+lsi)*1]),90);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 1800 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
