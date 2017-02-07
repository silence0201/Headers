//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCopying-Protocol.h>

@class NSString, UISystemNavigationAction;

__attribute__((visibility("hidden")))
@interface UIStatusBarComposedData : NSObject <NSCopying>
{
    CDStruct_18395a89 _rawData;
    _Bool _itemEnabled[41];
    NSString *_doubleHeightStatus;
    UISystemNavigationAction *_systemNavigationItem;
}

@property(retain, nonatomic) UISystemNavigationAction *systemNavigationItem; // @synthesize systemNavigationItem=_systemNavigationItem;
@property(copy, nonatomic) NSString *doubleHeightStatus; // @synthesize doubleHeightStatus=_doubleHeightStatus;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (void)setItem:(int)arg1 enabled:(_Bool)arg2;
- (_Bool)isItemEnabled:(int)arg1;
@property(readonly, nonatomic) CDStruct_18395a89 *rawData;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRawData:(const CDStruct_18395a89 *)arg1;

@end

