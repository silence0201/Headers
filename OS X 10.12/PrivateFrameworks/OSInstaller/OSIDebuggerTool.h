//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SKDisk;

@interface OSIDebuggerTool : NSObject
{
    SKDisk *_target;
    NSString *_opToFail;
    double _failAtProgress;
}

@property double failAtProgress; // @synthesize failAtProgress=_failAtProgress;
@property NSString *opToFail; // @synthesize opToFail=_opToFail;
@property(retain) SKDisk *target; // @synthesize target=_target;
- (void)updateStatusWithQueueElement:(id)arg1 progress:(double)arg2;
- (BOOL)loadDebuggerPropertyList;
- (void)dealloc;
- (id)initWithTarget:(id)arg1;

@end

