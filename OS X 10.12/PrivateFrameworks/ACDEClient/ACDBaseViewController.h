//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class ACDStateManager, NSLayoutConstraint, NSString, NSTextField;

@interface ACDBaseViewController : NSViewController
{
    BOOL _isActivityInProgress;
    ACDStateManager *_stateManager;
    NSString *_warningMessage;
    double _messageNonZeroConstrain;
    NSTextField *_messageView;
    NSLayoutConstraint *_messageConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *messageConstraint; // @synthesize messageConstraint=_messageConstraint;
@property(retain, nonatomic) NSTextField *messageView; // @synthesize messageView=_messageView;
@property(nonatomic) double messageNonZeroConstrain; // @synthesize messageNonZeroConstrain=_messageNonZeroConstrain;
@property(copy, nonatomic) NSString *warningMessage; // @synthesize warningMessage=_warningMessage;
@property(nonatomic) BOOL isActivityInProgress; // @synthesize isActivityInProgress=_isActivityInProgress;
@property(nonatomic) ACDStateManager *stateManager; // @synthesize stateManager=_stateManager;
- (void)handleFailoverWithCompletion:(CDUnknownBlockType)arg1;
- (void)setMessage:(id)arg1 type:(unsigned long long)arg2;
@property(readonly, nonatomic) double messageZeroConstrain;
- (void)awakeFromNib;
- (void)dealloc;
- (void)didBecomeActive;
- (void)willBecomeActive;
- (void)didResignActive;
- (void)willResignActive;
- (id)init;

@end
