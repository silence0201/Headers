//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface EKBatchChangeInfo : NSObject
{
    BOOL _changePending;
    NSString *_originalUID;
    NSString *_currentUID;
}

@property(retain) NSString *currentUID; // @synthesize currentUID=_currentUID;
@property(retain) NSString *originalUID; // @synthesize originalUID=_originalUID;
@property BOOL changePending; // @synthesize changePending=_changePending;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)relatedIdentifier:(id)arg1;
- (id)updatedIdentifier:(id)arg1;
- (BOOL)affectsObject:(id)arg1;
- (id)initWithCurrentUID:(id)arg1 originalUID:(id)arg2;

@end

