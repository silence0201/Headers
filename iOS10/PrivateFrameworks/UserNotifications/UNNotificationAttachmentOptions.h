//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotifications/NSCopying-Protocol.h>
#import <UserNotifications/NSSecureCoding-Protocol.h>

@interface UNNotificationAttachmentOptions : NSObject <NSCopying, NSSecureCoding>
{
}

+ (_Bool)supportsSecureCoding;
+ (struct CGRect)santizedClippingRect:(struct CGRect)arg1;
+ (Class)optionsClassForFamily:(unsigned long long)arg1;
+ (id)optionsClasses;
+ (id)optionsForFamily:(unsigned long long)arg1 fromOptionsDictionary:(id)arg2;
+ (id)optionsFromOptionsDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

