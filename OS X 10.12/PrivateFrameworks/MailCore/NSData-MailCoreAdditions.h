//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSData.h>

@interface NSData (MailCoreAdditions)
@property(readonly, copy, nonatomic) NSData *MD5Digest;
- (struct _NSRange)rangeOfCString:(const char *)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3;
- (struct _NSRange)rangeOfCString:(const char *)arg1 options:(unsigned long long)arg2;
- (struct _NSRange)rangeOfCString:(const char *)arg1;
@property(readonly, nonatomic) struct _NSRange rangeOfRFC822HeaderData;
@property(readonly, copy, nonatomic) NSData *quotedFromSpaceDataForMessage;
- (id)unquotedFromSpaceDataWithRange:(struct _NSRange)arg1;
- (id)initWithDataConvertingLineEndingsFromNetworkToUnix:(id)arg1;
- (id)initWithDataConvertingLineEndingsFromUnixToNetwork:(id)arg1;
@end
