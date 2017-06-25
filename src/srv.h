/*************************************************************************************************
 * srv.h -- Module includes
 *
 * Author: Ebin Baby
 *
 * Copyright: 2011 - Ebin Baby
 *
 *************************************************************************************************/

#ifndef SRV_H_INCLUDED
#define SRV_H_INCLUDED

#define srv_setbit(var, bitno) ((var) |= 1UL << (bitno))
#define srv_clrbit(var, bitno) ((var) &= ~(1UL << (bitno)))
#define srv_getbit(var, bitno) ((var) &  1UL << (bitno))

#define srv_getlnibbleu8(var) ((var) & 0x0F)
#define srv_gethnibbleu8(var) (((var) >> 0x04) & 0x0F)

#define srv_getlsbu16(var) ((var) & 0x00FF)
#define srv_getmsbu16(var) (((var) >> 0x08) & 0x00FF)

#define srv_limit(var,min,max)	((var)>(max)?(max):((var)<(min)?(min):(var)))

#ifdef DEBUG
    //	Debug define here
#endif

#ifdef RELEASE
    //	Release define here
#endif

#endif // SRV_H_INCLUDED
