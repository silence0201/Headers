//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface CNVCardConstantsMapping : NSObject
{
    NSDictionary *_mapping;
}

+ (id)vCardToCNSocialProfileConstantsMapping;
+ (id)CNToVCardSocialProfileConstantsMapping;
+ (id)vCardToCNInstantMessageConstantsMapping;
+ (id)CNToVCardInstantMessageConstantsMapping;
@property(retain, nonatomic) NSDictionary *mapping; // @synthesize mapping=_mapping;
- (id)mappedConstant:(id)arg1;
- (id)invertedMapping;
- (void)dealloc;
- (id)initWithMapping:(id)arg1;

@end

