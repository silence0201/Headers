//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CallKit/NSCopying-Protocol.h>
#import <CallKit/NSSecureCoding-Protocol.h>

@class CXHandle, NSString;

@interface CXLabeledHandle : NSObject <NSCopying, NSSecureCoding>
{
    CXHandle *_handle;
    NSString *_localizedLabel;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *localizedLabel; // @synthesize localizedLabel=_localizedLabel;
@property(retain, nonatomic) CXHandle *handle; // @synthesize handle=_handle;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToLabeledHandle:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithHandle:(id)arg1 localizedLabel:(id)arg2;

@end

