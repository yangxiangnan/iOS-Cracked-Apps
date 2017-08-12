//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface EncryptUtil : NSObject
{
}

+ (id)RSA_decrypt:(id)arg1 key:(struct __SecKey *)arg2;
+ (id)RSA_encrypt:(id)arg1 key:(struct __SecKey *)arg2;
+ (struct __SecKey *)getRSAPrivateKey:(id)arg1 passphrase:(id)arg2;
+ (struct __SecKey *)getRSAPublicKey:(id)arg1;
+ (id)encryptUseRSA:(id)arg1 key:(id)arg2;
+ (id)decryptUseRSA:(id)arg1 key:(id)arg2 password:(id)arg3;
+ (id)hMacSHA1:(id)arg1 secret:(id)arg2;
+ (id)decodeBase64String:(id)arg1;
+ (id)encodeBase64String:(id)arg1;
+ (id)decryptUseDES:(id)arg1 key:(id)arg2;
+ (id)encryptUseDES:(id)arg1 key:(id)arg2;
+ (id)decodeStringUseAESForKey:(id)arg1 key:(id)arg2 iv:(id)arg3;
+ (id)decodeStringUseAES:(id)arg1 key:(id)arg2 iv:(id)arg3;
+ (id)decryptDataUseAES:(id)arg1 key:(id)arg2 iv:(id)arg3;
+ (id)encryptDataUseAES:(id)arg1 key:(id)arg2 iv:(id)arg3;
+ (id)convertHexStrToData:(id)arg1;
+ (id)nsdataToHexString:(id)arg1;
+ (id)encryptDataToStringUseAES:(id)arg1 key:(id)arg2 iv:(id)arg3;
+ (id)md5:(id)arg1;

@end
