							/*All rights reserved */
/*********************************************************************
Copyright (C), 2010-2013, C*Core Technology Co., Ltd
File name: eflash_table.h
Author:        Version:        Date: 20121230
Description:  eflash�洢���ݵĵ�ַ����
Others: 
History:                 
  1. Date:
      Author:
      Modification:
  2. ...
**********************************************************************/

//SM1��Կ
#define EFLASH_SM1_EK_ADDR		EFLASH_START_ADDRESS		//0x20000
#define EFLASH_SM1_EK_SIZE		16

#define EFLASH_SM1_AK_ADDR		(EFLASH_SM1_EK_ADDR+EFLASH_SM1_EK_SIZE)
#define EFLASH_SM1_AK_SIZE		16

#define EFLASH_SM1_SK_ADDR		(EFLASH_SM1_AK_ADDR+EFLASH_SM1_AK_SIZE)
#define EFLASH_SM1_SK_SIZE		16

#define EFLASH_SM1_IV_ADDR		(EFLASH_SM1_SK_ADDR+EFLASH_SM1_SK_SIZE)
#define EFLASH_SM1_IV_SIZE		16

//SM2��Կ�ԣ�С�˽ṹ
#define EFLASH_SM2_PUBKEY_192_ADDR	(EFLASH_SM1_IV_ADDR+EFLASH_SM1_IV_SIZE)
#define EFLASH_SM2_PUBKEY_192_SIZE	64

#define EFLASH_SM2_PRIVKEY_192_ADDR	(EFLASH_SM2_PUBKEY_192_ADDR+EFLASH_SM2_PUBKEY_192_SIZE)
#define EFLASH_SM2_PRIVKEY_192_SIZE	32

#define EFLASH_SM2_PUBKEY_256_ADDR	(EFLASH_SM2_PRIVKEY_192_ADDR+EFLASH_SM2_PRIVKEY_192_SIZE)
#define EFLASH_SM2_PUBKEY_256_SIZE	64

#define EFLASH_SM2_PRIVKEY_256_ADDR	(EFLASH_SM2_PUBKEY_256_ADDR+EFLASH_SM2_PUBKEY_256_SIZE)
#define EFLASH_SM2_PRIVKEY_256_SIZE	32

//SM2ǩ���û�ID
#define EFLASH_SM2_USERID_LENGTH_ADDR	(EFLASH_SM2_PRIVKEY_256_ADDR+EFLASH_SM2_PRIVKEY_256_SIZE)
#define EFLASH_SM2_USERID_LENGTH_SIZE		4
#define EFLASH_SM2_USERID_ADDR	(EFLASH_SM2_USERID_LENGTH_ADDR+EFLASH_SM2_USERID_LENGTH_SIZE)
#define EFLASH_SM2_USERID_SIZE		64

//RSA��Կ��
#define EFLASH_RSA_PUBKEY_512_ADDR	(EFLASH_SM2_USERID_ADDR+EFLASH_SM2_USERID_SIZE)
#define EFLASH_RSA_PUBKEY_512_SIZE	(4+512)

#define EFLASH_RSA_PRIVKEY_512_ADDR	(EFLASH_RSA_PUBKEY_512_ADDR+EFLASH_RSA_PUBKEY_512_SIZE)
#define EFLASH_RSA_PRIVKEY_512_SIZE	(4+1408)

#define EFLASH_RSA_PUBKEY_1024_ADDR	(EFLASH_RSA_PRIVKEY_512_ADDR+EFLASH_RSA_PRIVKEY_512_SIZE)
#define EFLASH_RSA_PUBKEY_1024_SIZE	(4+512)

#define EFLASH_RSA_PRIVKEY_1024_ADDR	(EFLASH_RSA_PUBKEY_1024_ADDR+EFLASH_RSA_PUBKEY_1024_SIZE)
#define EFLASH_RSA_PRIVKEY_1024_SIZE	(4+1408)

#define EFLASH_RSA_PUBKEY_2048_ADDR	(EFLASH_RSA_PRIVKEY_1024_ADDR+EFLASH_RSA_PRIVKEY_1024_SIZE)
#define EFLASH_RSA_PUBKEY_2048_SIZE	(4+512)

#define EFLASH_RSA_PRIVKEY_2048_ADDR	(EFLASH_RSA_PUBKEY_2048_ADDR+EFLASH_RSA_PUBKEY_2048_SIZE)
#define EFLASH_RSA_PRIVKEY_2048_SIZE	(4+1408)


//DES��Կ
#define EFLASH_DES_KEY_ADDR		(EFLASH_RSA_PRIVKEY_2048_ADDR+EFLASH_RSA_PRIVKEY_2048_SIZE)
#define EFLASH_DES_KEY_SIZE		24

#define EFLASH_DES_IV_ADDR		(EFLASH_DES_KEY_ADDR+EFLASH_DES_KEY_SIZE)
#define EFLASH_DES_IV_SIZE		8

//AES��Կ
#define EFLASH_AES_KEY_ADDR		(EFLASH_DES_IV_ADDR+EFLASH_DES_IV_SIZE)
#define EFLASH_AES_KEY_SIZE		32

#define EFLASH_AES_IV_ADDR		(EFLASH_AES_KEY_ADDR+EFLASH_AES_KEY_SIZE)
#define EFLASH_AES_IV_SIZE		16

//SMS4��Կ
#define EFLASH_SMS4_KEY_ADDR		(EFLASH_AES_IV_ADDR+EFLASH_AES_IV_SIZE)
#define EFLASH_SMS4_KEY_SIZE		16

#define EFLASH_SMS4_IV_ADDR		(EFLASH_SMS4_KEY_ADDR+EFLASH_SMS4_KEY_SIZE)
#define EFLASH_SMS4_IV_SIZE		16

//SSF33��Կ
#define EFLASH_SSF33_MK_ADDR		(EFLASH_SMS4_IV_ADDR+EFLASH_SMS4_IV_SIZE)
#define EFLASH_SSF33_MK_SIZE		16

#define EFLASH_SSF33_SK_ADDR		(EFLASH_SSF33_MK_ADDR+EFLASH_SSF33_MK_SIZE)
#define EFLASH_SSF33_SK_SIZE		16

#define EFLASH_SSF33_IV_ADDR		(EFLASH_SSF33_SK_ADDR+EFLASH_SSF33_SK_SIZE)
#define EFLASH_SSF33_IV_SIZE		16

//eflash���Ե�ַ
#define EFLASH_TEST_START_ADDR		(EFLASH_SSF33_IV_ADDR+EFLASH_SSF33_IV_SIZE)

