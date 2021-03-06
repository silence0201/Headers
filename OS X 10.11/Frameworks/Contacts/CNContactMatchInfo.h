//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSDictionary, NSNumber;

@interface CNContactMatchInfo : NSObject
{
    BOOL _matchedNameProperty;
    NSNumber *_relevanceScore;
    NSDictionary *_matchedProperties;
    NSAttributedString *_excerpt;
}

@property BOOL matchedNameProperty; // @synthesize matchedNameProperty=_matchedNameProperty;
@property(retain) NSAttributedString *excerpt; // @synthesize excerpt=_excerpt;
@property(copy) NSDictionary *matchedProperties; // @synthesize matchedProperties=_matchedProperties;
@property(copy) NSNumber *relevanceScore; // @synthesize relevanceScore=_relevanceScore;
- (void)dealloc;

@end

