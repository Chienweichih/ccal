/*
   As part of the ccal program by Zhuo Meng, this version is
   distributed under the terms of the GNU Lesser General Public License as
   published by the Free Software Foundation; either version 2 of the
   License, or (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

   Adapted from novascon.h from the NOVAS-C package
   The whole package can be obtained from
   http://aa.usno.navy.mil/AA/software/novas/novas_c/novasc_info.html

   The original header comments:

   NOVAS-C Version 2.0 (1 Nov 98)
   Header file for novascon.c

   Naval Observatory Vector Astrometry Subroutines
   C Version

   U. S. Naval Observatory
   Astronomical Applications Dept.
   3450 Massachusetts Ave., NW
   Washington, DC  20392-5420
*/

#ifndef _CONSTS_H
   #define _CONSTS_H

   extern const short int FN0;

/*
   TDB Julian date of epoch J2000.0.
*/

   extern const double T0;

/*
   Speed of light in AU/Day.
*/

   extern const double C;

/*
   Value of 2.0 * pi in radians.
*/

   extern const double TWOPI;

/*
   Angle conversion constants.
*/

   extern const double RAD2SEC;
   extern const double DEG2RAD;
   extern const double RAD2DEG;

#endif
