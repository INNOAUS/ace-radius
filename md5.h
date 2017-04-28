#ifndef __MD5_H_
#define __MD5_H_

/*
 * This code implements the MD5 message-digest algorithm.
 * The algorithm is due to Ron Rivest.  This code was
 * written by Colin Plumb in 1993, no copyright is claimed.
 * This code is in the public domain; do with it what you wish.
 *
 * Equivalent code is available from RSA Data Security, Inc.
 * This code has been tested against that, and is equivalent,
 * except that you don't need to include two pages of legalese
 * with every copy.
 *
 * To compute the message digest of a chunk of bytes, declare an
 * MD5Context structure, pass it to MD5Init, call MD5Update as
 * needed on buffers full of bytes, and then call MD5Final, which
 * will fill a supplied 16-byte array with the digest.
 *
 * Changes made by Alex Agranov:
 *   - use types from inttypes.h header for multi-platform support
 *   - support both big-endian and little-endian architectures
 * 
 */

#ifdef _MSC_VER
    #include "Radius.h"
#else
    #include <inttypes.h>
#endif     

typedef struct MD5Context 
{
    uint32_t buf[4];
    uint32_t bits[2];
    unsigned char in[64];
} MD5_CTX;

extern void MD5Init(struct MD5Context * ctx);
extern void MD5Update(struct MD5Context *ctx, unsigned char *buf, uint32_t len);
extern void MD5Final(unsigned char digest[16], struct MD5Context *ctx);
extern void MD5Transform(uint32_t buf[4], uint32_t in[16]);

extern void MD5Calc(unsigned char *output,unsigned char *input, uint32_t len);

#endif /* __MD5_H_ */

