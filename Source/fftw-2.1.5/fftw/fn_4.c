/*
 * Copyright (c) 1997-1999, 2003 Massachusetts Institute of Technology
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

/* This file was automatically generated --- DO NOT EDIT */
/* Generated on Mon Mar 24 02:05:37 EST 2003 */

#include "fftw-int.h"
#include "fftw.h"

/* Generated by: /homee/stevenj/cvs/fftw/gensrc/genfft -magic-alignment-check -magic-twiddle-load-all -magic-variables 4 -magic-loopi -notwiddle 4 */

/*
 * This function contains 16 FP additions, 0 FP multiplications,
 * (or, 16 additions, 0 multiplications, 0 fused multiply/add),
 * 12 stack variables, and 16 memory accesses
 */

/*
 * Generator Id's : 
 * $Id: exprdag.ml,v 1.43 2003/03/16 23:43:46 stevenj Exp $
 * $Id: fft.ml,v 1.44 2003/03/16 23:43:46 stevenj Exp $
 * $Id: to_c.ml,v 1.26 2003/03/16 23:43:46 stevenj Exp $
 */

void fftw_no_twiddle_4(const fftw_complex *input, fftw_complex *output,
		       int istride, int ostride)
{
     fftw_real tmp3;
     fftw_real tmp11;
     fftw_real tmp9;
     fftw_real tmp15;
     fftw_real tmp6;
     fftw_real tmp10;
     fftw_real tmp14;
     fftw_real tmp16;
     ASSERT_ALIGNED_DOUBLE;
     {
	  fftw_real tmp1;
	  fftw_real tmp2;
	  fftw_real tmp7;
	  fftw_real tmp8;
	  ASSERT_ALIGNED_DOUBLE;
	  tmp1 = c_re(input[0]);
	  tmp2 = c_re(input[2 * istride]);
	  tmp3 = tmp1 + tmp2;
	  tmp11 = tmp1 - tmp2;
	  tmp7 = c_im(input[0]);
	  tmp8 = c_im(input[2 * istride]);
	  tmp9 = tmp7 - tmp8;
	  tmp15 = tmp7 + tmp8;
     }
     {
	  fftw_real tmp4;
	  fftw_real tmp5;
	  fftw_real tmp12;
	  fftw_real tmp13;
	  ASSERT_ALIGNED_DOUBLE;
	  tmp4 = c_re(input[istride]);
	  tmp5 = c_re(input[3 * istride]);
	  tmp6 = tmp4 + tmp5;
	  tmp10 = tmp4 - tmp5;
	  tmp12 = c_im(input[istride]);
	  tmp13 = c_im(input[3 * istride]);
	  tmp14 = tmp12 - tmp13;
	  tmp16 = tmp12 + tmp13;
     }
     c_re(output[2 * ostride]) = tmp3 - tmp6;
     c_re(output[0]) = tmp3 + tmp6;
     c_im(output[ostride]) = tmp9 - tmp10;
     c_im(output[3 * ostride]) = tmp10 + tmp9;
     c_re(output[3 * ostride]) = tmp11 - tmp14;
     c_re(output[ostride]) = tmp11 + tmp14;
     c_im(output[2 * ostride]) = tmp15 - tmp16;
     c_im(output[0]) = tmp15 + tmp16;
}

fftw_codelet_desc fftw_no_twiddle_4_desc = {
     "fftw_no_twiddle_4",
     (void (*)()) fftw_no_twiddle_4,
     4,
     FFTW_FORWARD,
     FFTW_NOTW,
     89,
     0,
     (const int *) 0,
};
