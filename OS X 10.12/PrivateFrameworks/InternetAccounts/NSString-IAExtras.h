//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (IAExtras)
+ (id)UUIDString;
- (id)urlParameterEscapedString;
- (id)stringByURLEscapingCharactersInString:(id)arg1 forEncoding:(unsigned long long)arg2;
- (id)dictionaryWithResponseStringUsingSeparator:(id)arg1 unescape:(BOOL)arg2;
- (id)otherMeOrMacDotComEmail;
- (BOOL)serverAddrIsInDomain:(id)arg1;
- (id)urlDomain;
- (id)emailUserName;
- (id)emailHostName;
- (id)stringByTrimmingWhitespace;
@end
