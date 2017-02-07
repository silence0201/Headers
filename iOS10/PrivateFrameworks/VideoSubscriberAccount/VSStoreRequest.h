//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccount/NSCopying-Protocol.h>
#import <VideoSubscriberAccount/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VSStoreRequest : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_methodName;
    NSString *_bagKey;
    NSDictionary *_parameters;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(copy, nonatomic) NSString *bagKey; // @synthesize bagKey=_bagKey;
@property(copy, nonatomic) NSString *methodName; // @synthesize methodName=_methodName;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

