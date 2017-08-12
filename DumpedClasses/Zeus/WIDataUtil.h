//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WIDataUtil : NSObject
{
    NSString *_md5Hash;
    NSString *_sha1Hash;
}

+ (id)desEncryptWithKey:(id)arg1 data:(id)arg2;
+ (id)des3DecryptWithKey:(id)arg1 data:(id)arg2;
+ (id)des3EncryptWithKey:(id)arg1 data:(id)arg2;
+ (id)des3Operation:(unsigned int)arg1 key:(id)arg2 iv:(id)arg3 data:(id)arg4;
+ (id)aes128Decrypt:(id)arg1 iv:(id)arg2 salt:(id)arg3 data:(id)arg4;
+ (id)aes128Encrypt:(id)arg1 iv:(id)arg2 salt:(id)arg3 data:(id)arg4;
+ (id)aes128Operation:(unsigned int)arg1 key:(id)arg2 iv:(id)arg3 salt:(id)arg4 data:(id)arg5;
+ (id)base64EncodingData:(id)arg1;
+ (id)dataWithBase64EncodedString:(id)arg1;
+ (id)sha1HashData:(id)arg1;
+ (id)md5HashData:(id)arg1;
@property(readonly, nonatomic) NSString *sha1Hash; // @synthesize sha1Hash=_sha1Hash;
@property(readonly, nonatomic) NSString *md5Hash; // @synthesize md5Hash=_md5Hash;

@end
