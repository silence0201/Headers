//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface TVCKUIFactory : NSObject
{
    NSArray *_factories;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSArray *factories; // @synthesize factories=_factories;
- (void).cxx_destruct;
- (void)_registerViewElements;
- (void)setup;

@end
