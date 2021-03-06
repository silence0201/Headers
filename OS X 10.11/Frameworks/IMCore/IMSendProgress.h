//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSTimer;
@protocol IMSendProgressDelegate;

@interface IMSendProgress : NSObject
{
    id <IMSendProgressDelegate> _delegate;
    id _context;
    NSTimer *_sendProgressTimer;
    NSDictionary *_sendingItems;
    float _cachedSendProgress;
}

@property(copy, nonatomic) NSDictionary *sendingItems; // @synthesize sendingItems=_sendingItems;
@property(nonatomic) id context; // @synthesize context=_context;
@property(nonatomic) id <IMSendProgressDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_sendProgressTimerFired:(id)arg1;
- (void)_scheduleSendProgressTimerIfNeeded;
- (void)_updateSendProgress;
- (void)_resetSendProgress;
- (BOOL)_hasSendingMessages;
- (void)invalidate;
- (void)updateForItems:(id)arg1 forced:(BOOL)arg2;
- (id)initWithDelegate:(id)arg1 context:(id)arg2;
- (id)description;
- (void)dealloc;

@end

