//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSString;

@interface WDRecItem : NSObject
{
    NSString *_title;
    NSString *_shortDescription;
    NSAttributedString *_detailedDescription;
    BOOL _failed;
}

@property BOOL failed; // @synthesize failed=_failed;
@property(copy) NSAttributedString *detailedDescription; // @synthesize detailedDescription=_detailedDescription;
@property(copy) NSString *shortDescription; // @synthesize shortDescription=_shortDescription;
@property(copy) NSString *title; // @synthesize title=_title;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithProblemTitle:(id)arg1;

@end
