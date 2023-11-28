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
#include <HRRPart0ket0bra0fd.h>
#include <HRRPart0ket0bra0fp.h>
#include <HRRPart0ket0bra0gp.h>
#include <_sphemultipole_D_F_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _sphemultipole_D_F(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1150)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_D_F_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+2650)*1+lsi)*1]), &(inteval->stack[((hsi*15+1135)*1+lsi)*1]), &(inteval->stack[((hsi*10+240)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+2680)*1+lsi)*1]), &(inteval->stack[((hsi*21+1114)*1+lsi)*1]), &(inteval->stack[((hsi*15+1135)*1+lsi)*1]),1);
HRRPart0ket0bra0fd(inteval, &(inteval->stack[((hsi*60+2590)*1+lsi)*1]), &(inteval->stack[((hsi*45+2680)*1+lsi)*1]), &(inteval->stack[((hsi*30+2650)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+1114)*1+lsi)*1]), &(inteval->stack[((hsi*15+1099)*1+lsi)*1]), &(inteval->stack[((hsi*10+230)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+2725)*1+lsi)*1]), &(inteval->stack[((hsi*21+1078)*1+lsi)*1]), &(inteval->stack[((hsi*15+1099)*1+lsi)*1]),1);
HRRPart0ket0bra0fd(inteval, &(inteval->stack[((hsi*60+2530)*1+lsi)*1]), &(inteval->stack[((hsi*45+2725)*1+lsi)*1]), &(inteval->stack[((hsi*30+1114)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+1078)*1+lsi)*1]), &(inteval->stack[((hsi*15+1063)*1+lsi)*1]), &(inteval->stack[((hsi*10+220)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+2770)*1+lsi)*1]), &(inteval->stack[((hsi*21+1042)*1+lsi)*1]), &(inteval->stack[((hsi*15+1063)*1+lsi)*1]),1);
HRRPart0ket0bra0fd(inteval, &(inteval->stack[((hsi*60+2470)*1+lsi)*1]), &(inteval->stack[((hsi*45+2770)*1+lsi)*1]), &(inteval->stack[((hsi*30+1078)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+220)*1+lsi)*1]), &(inteval->stack[((hsi*15+1027)*1+lsi)*1]), &(inteval->stack[((hsi*10+210)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+2815)*1+lsi)*1]), &(inteval->stack[((hsi*21+1006)*1+lsi)*1]), &(inteval->stack[((hsi*15+1027)*1+lsi)*1]),1);
HRRPart0ket0bra0fd(inteval, &(inteval->stack[((hsi*60+2410)*1+lsi)*1]), &(inteval->stack[((hsi*45+2815)*1+lsi)*1]), &(inteval->stack[((hsi*30+220)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+1006)*1+lsi)*1]), &(inteval->stack[((hsi*15+991)*1+lsi)*1]), &(inteval->stack[((hsi*10+200)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+2860)*1+lsi)*1]), &(inteval->stack[((hsi*21+970)*1+lsi)*1]), &(inteval->stack[((hsi*15+991)*1+lsi)*1]),1);
HRRPart0ket0bra0fd(inteval, &(inteval->stack[((hsi*60+2350)*1+lsi)*1]), &(inteval->stack[((hsi*45+2860)*1+lsi)*1]), &(inteval->stack[((hsi*30+1006)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+1036)*1+lsi)*1]), &(inteval->stack[((hsi*15+955)*1+lsi)*1]), &(inteval->stack[((hsi*10+190)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+2905)*1+lsi)*1]), &(inteval->stack[((hsi*21+934)*1+lsi)*1]), &(inteval->stack[((hsi*15+955)*1+lsi)*1]),1);
HRRPart0ket0bra0fd(inteval, &(inteval->stack[((hsi*60+2290)*1+lsi)*1]), &(inteval->stack[((hsi*45+2905)*1+lsi)*1]), &(inteval->stack[((hsi*30+1036)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+190)*1+lsi)*1]), &(inteval->stack[((hsi*15+919)*1+lsi)*1]), &(inteval->stack[((hsi*10+180)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+934)*1+lsi)*1]), &(inteval->stack[((hsi*21+898)*1+lsi)*1]), &(inteval->stack[((hsi*15+919)*1+lsi)*1]),1);
HRRPart0ket0bra0fd(inteval, &(inteval->stack[((hsi*60+2230)*1+lsi)*1]), &(inteval->stack[((hsi*45+934)*1+lsi)*1]), &(inteval->stack[((hsi*30+190)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+898)*1+lsi)*1]), &(inteval->stack[((hsi*15+883)*1+lsi)*1]), &(inteval->stack[((hsi*10+170)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+2950)*1+lsi)*1]), &(inteval->stack[((hsi*21+862)*1+lsi)*1]), &(inteval->stack[((hsi*15+883)*1+lsi)*1]),1);
HRRPart0ket0bra0fd(inteval, &(inteval->stack[((hsi*60+2170)*1+lsi)*1]), &(inteval->stack[((hsi*45+2950)*1+lsi)*1]), &(inteval->stack[((hsi*30+898)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+862)*1+lsi)*1]), &(inteval->stack[((hsi*15+847)*1+lsi)*1]), &(inteval->stack[((hsi*10+160)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+2995)*1+lsi)*1]), &(inteval->stack[((hsi*21+826)*1+lsi)*1]), &(inteval->stack[((hsi*15+847)*1+lsi)*1]),1);
HRRPart0ket0bra0fd(inteval, &(inteval->stack[((hsi*60+2110)*1+lsi)*1]), &(inteval->stack[((hsi*45+2995)*1+lsi)*1]), &(inteval->stack[((hsi*30+862)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+160)*1+lsi)*1]), &(inteval->stack[((hsi*15+811)*1+lsi)*1]), &(inteval->stack[((hsi*10+150)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+3040)*1+lsi)*1]), &(inteval->stack[((hsi*21+790)*1+lsi)*1]), &(inteval->stack[((hsi*15+811)*1+lsi)*1]),1);
HRRPart0ket0bra0fd(inteval, &(inteval->stack[((hsi*60+2050)*1+lsi)*1]), &(inteval->stack[((hsi*45+3040)*1+lsi)*1]), &(inteval->stack[((hsi*30+160)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+790)*1+lsi)*1]), &(inteval->stack[((hsi*15+775)*1+lsi)*1]), &(inteval->stack[((hsi*10+140)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+3085)*1+lsi)*1]), &(inteval->stack[((hsi*21+754)*1+lsi)*1]), &(inteval->stack[((hsi*15+775)*1+lsi)*1]),1);
HRRPart0ket0bra0fd(inteval, &(inteval->stack[((hsi*60+1990)*1+lsi)*1]), &(inteval->stack[((hsi*45+3085)*1+lsi)*1]), &(inteval->stack[((hsi*30+790)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+820)*1+lsi)*1]), &(inteval->stack[((hsi*15+739)*1+lsi)*1]), &(inteval->stack[((hsi*10+130)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+3130)*1+lsi)*1]), &(inteval->stack[((hsi*21+718)*1+lsi)*1]), &(inteval->stack[((hsi*15+739)*1+lsi)*1]),1);
HRRPart0ket0bra0fd(inteval, &(inteval->stack[((hsi*60+1930)*1+lsi)*1]), &(inteval->stack[((hsi*45+3130)*1+lsi)*1]), &(inteval->stack[((hsi*30+820)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+130)*1+lsi)*1]), &(inteval->stack[((hsi*15+703)*1+lsi)*1]), &(inteval->stack[((hsi*10+120)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+718)*1+lsi)*1]), &(inteval->stack[((hsi*21+682)*1+lsi)*1]), &(inteval->stack[((hsi*15+703)*1+lsi)*1]),1);
HRRPart0ket0bra0fd(inteval, &(inteval->stack[((hsi*60+1870)*1+lsi)*1]), &(inteval->stack[((hsi*45+718)*1+lsi)*1]), &(inteval->stack[((hsi*30+130)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+682)*1+lsi)*1]), &(inteval->stack[((hsi*15+667)*1+lsi)*1]), &(inteval->stack[((hsi*10+110)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+3175)*1+lsi)*1]), &(inteval->stack[((hsi*21+646)*1+lsi)*1]), &(inteval->stack[((hsi*15+667)*1+lsi)*1]),1);
HRRPart0ket0bra0fd(inteval, &(inteval->stack[((hsi*60+1810)*1+lsi)*1]), &(inteval->stack[((hsi*45+3175)*1+lsi)*1]), &(inteval->stack[((hsi*30+682)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+646)*1+lsi)*1]), &(inteval->stack[((hsi*15+631)*1+lsi)*1]), &(inteval->stack[((hsi*10+100)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+3220)*1+lsi)*1]), &(inteval->stack[((hsi*21+610)*1+lsi)*1]), &(inteval->stack[((hsi*15+631)*1+lsi)*1]),1);
HRRPart0ket0bra0fd(inteval, &(inteval->stack[((hsi*60+1750)*1+lsi)*1]), &(inteval->stack[((hsi*45+3220)*1+lsi)*1]), &(inteval->stack[((hsi*30+646)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+100)*1+lsi)*1]), &(inteval->stack[((hsi*15+595)*1+lsi)*1]), &(inteval->stack[((hsi*10+90)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+3265)*1+lsi)*1]), &(inteval->stack[((hsi*21+574)*1+lsi)*1]), &(inteval->stack[((hsi*15+595)*1+lsi)*1]),1);
HRRPart0ket0bra0fd(inteval, &(inteval->stack[((hsi*60+1690)*1+lsi)*1]), &(inteval->stack[((hsi*45+3265)*1+lsi)*1]), &(inteval->stack[((hsi*30+100)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+574)*1+lsi)*1]), &(inteval->stack[((hsi*15+559)*1+lsi)*1]), &(inteval->stack[((hsi*10+80)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+3310)*1+lsi)*1]), &(inteval->stack[((hsi*21+538)*1+lsi)*1]), &(inteval->stack[((hsi*15+559)*1+lsi)*1]),1);
HRRPart0ket0bra0fd(inteval, &(inteval->stack[((hsi*60+1630)*1+lsi)*1]), &(inteval->stack[((hsi*45+3310)*1+lsi)*1]), &(inteval->stack[((hsi*30+574)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+604)*1+lsi)*1]), &(inteval->stack[((hsi*15+523)*1+lsi)*1]), &(inteval->stack[((hsi*10+70)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+3355)*1+lsi)*1]), &(inteval->stack[((hsi*21+502)*1+lsi)*1]), &(inteval->stack[((hsi*15+523)*1+lsi)*1]),1);
HRRPart0ket0bra0fd(inteval, &(inteval->stack[((hsi*60+1570)*1+lsi)*1]), &(inteval->stack[((hsi*45+3355)*1+lsi)*1]), &(inteval->stack[((hsi*30+604)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+70)*1+lsi)*1]), &(inteval->stack[((hsi*15+487)*1+lsi)*1]), &(inteval->stack[((hsi*10+60)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+502)*1+lsi)*1]), &(inteval->stack[((hsi*21+466)*1+lsi)*1]), &(inteval->stack[((hsi*15+487)*1+lsi)*1]),1);
HRRPart0ket0bra0fd(inteval, &(inteval->stack[((hsi*60+1510)*1+lsi)*1]), &(inteval->stack[((hsi*45+502)*1+lsi)*1]), &(inteval->stack[((hsi*30+70)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+466)*1+lsi)*1]), &(inteval->stack[((hsi*15+451)*1+lsi)*1]), &(inteval->stack[((hsi*10+50)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+3400)*1+lsi)*1]), &(inteval->stack[((hsi*21+430)*1+lsi)*1]), &(inteval->stack[((hsi*15+451)*1+lsi)*1]),1);
HRRPart0ket0bra0fd(inteval, &(inteval->stack[((hsi*60+1450)*1+lsi)*1]), &(inteval->stack[((hsi*45+3400)*1+lsi)*1]), &(inteval->stack[((hsi*30+466)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+430)*1+lsi)*1]), &(inteval->stack[((hsi*15+415)*1+lsi)*1]), &(inteval->stack[((hsi*10+40)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+3445)*1+lsi)*1]), &(inteval->stack[((hsi*21+394)*1+lsi)*1]), &(inteval->stack[((hsi*15+415)*1+lsi)*1]),1);
HRRPart0ket0bra0fd(inteval, &(inteval->stack[((hsi*60+1390)*1+lsi)*1]), &(inteval->stack[((hsi*45+3445)*1+lsi)*1]), &(inteval->stack[((hsi*30+430)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+40)*1+lsi)*1]), &(inteval->stack[((hsi*15+379)*1+lsi)*1]), &(inteval->stack[((hsi*10+30)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+3490)*1+lsi)*1]), &(inteval->stack[((hsi*21+358)*1+lsi)*1]), &(inteval->stack[((hsi*15+379)*1+lsi)*1]),1);
HRRPart0ket0bra0fd(inteval, &(inteval->stack[((hsi*60+1330)*1+lsi)*1]), &(inteval->stack[((hsi*45+3490)*1+lsi)*1]), &(inteval->stack[((hsi*30+40)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+358)*1+lsi)*1]), &(inteval->stack[((hsi*15+343)*1+lsi)*1]), &(inteval->stack[((hsi*10+20)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+3535)*1+lsi)*1]), &(inteval->stack[((hsi*21+322)*1+lsi)*1]), &(inteval->stack[((hsi*15+343)*1+lsi)*1]),1);
HRRPart0ket0bra0fd(inteval, &(inteval->stack[((hsi*60+1270)*1+lsi)*1]), &(inteval->stack[((hsi*45+3535)*1+lsi)*1]), &(inteval->stack[((hsi*30+358)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+388)*1+lsi)*1]), &(inteval->stack[((hsi*15+307)*1+lsi)*1]), &(inteval->stack[((hsi*10+10)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+3580)*1+lsi)*1]), &(inteval->stack[((hsi*21+286)*1+lsi)*1]), &(inteval->stack[((hsi*15+307)*1+lsi)*1]),1);
HRRPart0ket0bra0fd(inteval, &(inteval->stack[((hsi*60+1210)*1+lsi)*1]), &(inteval->stack[((hsi*45+3580)*1+lsi)*1]), &(inteval->stack[((hsi*30+388)*1+lsi)*1]),1);
HRRPart0ket0bra0fp(inteval, &(inteval->stack[((hsi*30+10)*1+lsi)*1]), &(inteval->stack[((hsi*15+271)*1+lsi)*1]), &(inteval->stack[((hsi*10+0)*1+lsi)*1]),1);
HRRPart0ket0bra0gp(inteval, &(inteval->stack[((hsi*45+286)*1+lsi)*1]), &(inteval->stack[((hsi*21+250)*1+lsi)*1]), &(inteval->stack[((hsi*15+271)*1+lsi)*1]),1);
HRRPart0ket0bra0fd(inteval, &(inteval->stack[((hsi*60+1150)*1+lsi)*1]), &(inteval->stack[((hsi*45+286)*1+lsi)*1]), &(inteval->stack[((hsi*30+10)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*60+1150)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*60+1210)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*60+1270)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*60+1330)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*60+1390)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*60+1450)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*60+1510)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*60+1570)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*60+1630)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*60+1690)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*60+1750)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*60+1810)*1+lsi)*1]);
inteval->targets[12] = &(inteval->stack[((hsi*60+1870)*1+lsi)*1]);
inteval->targets[13] = &(inteval->stack[((hsi*60+1930)*1+lsi)*1]);
inteval->targets[14] = &(inteval->stack[((hsi*60+1990)*1+lsi)*1]);
inteval->targets[15] = &(inteval->stack[((hsi*60+2050)*1+lsi)*1]);
inteval->targets[16] = &(inteval->stack[((hsi*60+2110)*1+lsi)*1]);
inteval->targets[17] = &(inteval->stack[((hsi*60+2170)*1+lsi)*1]);
inteval->targets[18] = &(inteval->stack[((hsi*60+2230)*1+lsi)*1]);
inteval->targets[19] = &(inteval->stack[((hsi*60+2290)*1+lsi)*1]);
inteval->targets[20] = &(inteval->stack[((hsi*60+2350)*1+lsi)*1]);
inteval->targets[21] = &(inteval->stack[((hsi*60+2410)*1+lsi)*1]);
inteval->targets[22] = &(inteval->stack[((hsi*60+2470)*1+lsi)*1]);
inteval->targets[23] = &(inteval->stack[((hsi*60+2530)*1+lsi)*1]);
inteval->targets[24] = &(inteval->stack[((hsi*60+2590)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
