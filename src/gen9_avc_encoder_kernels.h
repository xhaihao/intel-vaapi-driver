/*
 * Copyright @ 2017 Intel Corporation
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sub license, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice (including the
 * next paragraph) shall be included in all copies or substantial portions
 * of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT.
 * IN NO EVENT SHALL PRECISION INSIGHT AND/OR ITS SUPPLIERS BE LIABLE FOR
 * ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWAR OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * Authors:
 *    Pengfei Qu <Pengfei.qu@intel.com>
 *    Sreerenj Balachandran <sreerenj.balachandran@intel.com>
 *
 */

#ifndef _GEN9_AVC_ENCODER_KERNELS_H
#define _GEN9_AVC_ENCODER_KERNELS_H

#define AVC_ENC_SKL_SZ 96346
extern const unsigned int skl_avc_encoder_kernels[AVC_ENC_SKL_SZ];

#define AVC_ENC_FEI_SKL_SZ 38000
extern const unsigned int skl_avc_fei_encoder_kernels[AVC_ENC_FEI_SKL_SZ];

#define AVC_ENC_KBL_SZ 101994
extern const unsigned int kbl_avc_encoder_kernels[AVC_ENC_KBL_SZ];

#endif//_GEN9_AVC_ENCODER_KERNELS_H
