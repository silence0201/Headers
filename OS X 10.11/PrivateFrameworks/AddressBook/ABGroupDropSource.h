//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABRecordContext;

@interface ABGroupDropSource : NSObject
{
    ABRecordContext *_recordContext;
    BOOL _isLocalToWindow;
}

@property(readonly) BOOL isLocalToWindow; // @synthesize isLocalToWindow=_isLocalToWindow;
@property(readonly) ABRecordContext *recordContext; // @synthesize recordContext=_recordContext;
- (id)description;
- (void)dealloc;
- (id)initWithRecordContext:(id)arg1 isLocalToWindow:(BOOL)arg2;

@end
