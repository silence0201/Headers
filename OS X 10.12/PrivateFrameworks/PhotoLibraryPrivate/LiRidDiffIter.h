//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryPrivate/LiRidIter.h>

@interface LiRidDiffIter : LiRidIter
{
    LiRidIter *_baseIter;
    LiRidIter *_minusIter;
}

+ (id)diffRidIter:(id)arg1 minusIter:(id)arg2;
- (void).cxx_destruct;
- (void)gotoRid:(unsigned long long)arg1;
- (void)gotoBegin;
- (BOOL)atEnd;
- (BOOL)nextRid:(unsigned long long *)arg1;
- (id)initWithRidIter:(id)arg1 minusIter:(id)arg2;

@end

