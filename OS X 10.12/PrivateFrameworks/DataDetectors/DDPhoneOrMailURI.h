//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DDPhoneOrMailURI : NSObject
{
    NSString *_value;
    BOOL _isMailScheme;
    BOOL _isHttpScheme;
}

+ (id)URIWithString:(id)arg1;
- (id)value;
- (BOOL)isHttp;
- (BOOL)isPhone;
- (BOOL)isMail;
- (void)dealloc;
- (id)initWithString:(id)arg1;

@end

