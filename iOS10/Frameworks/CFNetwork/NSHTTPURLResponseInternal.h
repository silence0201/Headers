//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CFNetwork/NSCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface NSHTTPURLResponseInternal : NSObject <NSCoding>
{
    struct __SecTrust *peerTrust;
    _Bool isMixedReplace;
}

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

