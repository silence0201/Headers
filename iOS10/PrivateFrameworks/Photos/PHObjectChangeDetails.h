//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PHObject;

@interface PHObjectChangeDetails : NSObject
{
    PHObject *_objectBeforeChanges;
    PHObject *_objectAfterChanges;
    _Bool _assetContentChanged;
    _Bool _assetCollectionTitlePropertiesChanged;
}

- (void).cxx_destruct;
- (id)description;
@property(readonly) _Bool objectWasDeleted;
@property(readonly, nonatomic) _Bool assetCollectionTitlePropertiesChanged;
@property(readonly) _Bool assetContentChanged;
- (void)_calculateDiffs;
@property(readonly) PHObject *objectAfterChanges;
@property(readonly) PHObject *objectBeforeChanges;
- (id)initWithPHObject:(id)arg1;

@end

