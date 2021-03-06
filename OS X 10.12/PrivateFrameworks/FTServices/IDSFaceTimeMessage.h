//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FTServices/FTIDSMessage.h>

#import <FTServices/NSCopying-Protocol.h>

@class NSData;

@interface IDSFaceTimeMessage : FTIDSMessage <NSCopying>
{
    NSData *_sessionToken;
}

@property(copy) NSData *sessionToken; // @synthesize sessionToken=_sessionToken;
- (id)messageBody;
- (id)requiredKeys;
- (BOOL)isValidMessage;
- (BOOL)hasRequiredKeys:(id *)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

