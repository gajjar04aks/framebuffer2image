#ifndef __ENCODE_JPEG_H_INCLUDED__
#define __ENCODE_JPEG_H_INCLUDED__

#ifndef __USE_POSIX
#define __USE_POSIX
#endif /* __USE_POSIX */

#include <limits.h>
#include <inttypes.h>
#include <stdint.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <linux/fb.h>
#include <jpeglib.h>
#include "encode_jpeg.h"
#include "fill_bits.h"

	void encode_jpeg_init(struct fb_var_screeninfo sc, uint8_t fb_effective_bytes_per_pixel_arg, long clevel_cmd);
	uint8_t *encode_jpeg(void *fb_buf_1dim, uint32_t *imagesize);
	void encode_jpeg_finalize();

#endif /* __ENCODE_JPEG_H_INCLUDED__ */
