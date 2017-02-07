//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLocale, NSString;

@interface APDProfile : NSObject
{
    NSString *_boardID;
    double _scalingFactor;
    NSString *_previousSystem;
    NSLocale *_locale;
}

@property(retain) NSLocale *locale; // @synthesize locale=_locale;
@property(retain) NSString *previousSystem; // @synthesize previousSystem=_previousSystem;
@property double scalingFactor; // @synthesize scalingFactor=_scalingFactor;
@property(retain) NSString *boardID; // @synthesize boardID=_boardID;
- (void).cxx_destruct;
- (id)_detectPreviousSystem;
- (double)_detectScalingFactor;
- (id)_detectBoardID;
- (id)json;
- (id)description;
- (id)initWithBoardID:(id)arg1 scalingFactor:(id)arg2 previousSystem:(id)arg3 locale:(id)arg4;
- (id)init;

@end
