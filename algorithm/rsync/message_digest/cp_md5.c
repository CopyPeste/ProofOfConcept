/*--------------------------------------------------------------------*/
/*		     Epitech EIP 2017 groupe Copypeste		      */
/*								      */
/*			    Algo Levenshtein			      */
/*								      */
/* @by :	Guillaume Krier					      */
/* @created :	19/09/2015					      */
/* @update :	19/09/201					      */
/*--------------------------------------------------------------------*/

/*\* INCLUDES *\*/
#include "cp_md5.h"

/*
** void cp_md5_init(cp_md5_ctx *ctx)
** @param: ctx - structure of hash generate
**
** Init a key with a define value
*/
void cp_md5_init(cp_md5_ctx *ctx)
{
#if defined(MD5_OPENSSL)
  MD5_Init(ctx);
#else
  md5_begin(ctx);
#endif /* MD5_OPENSSL */
}

/*
** void cp_md5_update(cp_md5_ctx *ctx, const uchar *input, uint32 length)
** @param: ctx - structure of hash generate
** @param: input - contain the array 
** @param: length - input size
**
** Update key with the array into input.
*/
void cp_md5_update(cp_md5_ctx *ctx, const uchar *input, uint32 length)
{
#if defined(MD5_OPENSSL)
  MD5_Update(ctx, input, length);
#else
  md5_update(ctx, input, length);
#endif /* MD5_OPENSSL */
}

/*
** void cp_md5_final(cp_md5_ctx *ctx, uchar *digest)
** @param: ctx - structure of hash generate
** @param: digest - size = MAX_CP_MD_LEN and empty array
**
** It is fill digest with a hash generated
*/
void cp_md5_final(cp_md5_ctx *ctx, uchar digest[MAX_CP_MD_LEN])
{
#if defined(MD5_OPENSSL)
  MD5_Final((uchar *)digest, ctx);
#else
  md5_result(ctx, (uchar *)digest);
#endif /* MD5_OPENSSL */
}
