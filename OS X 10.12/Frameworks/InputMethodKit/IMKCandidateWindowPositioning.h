//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IMKCandidateController;
@protocol IMKTextInput><NSObject;

@interface IMKCandidateWindowPositioning : NSObject
{
    id <IMKTextInput><NSObject> _client;
    IMKCandidateController *_candidateController;
    BOOL _forceNoIncrementalSearchPositioning;
    BOOL _isRTL;
    BOOL _isUsingIncrementalSearch;
    BOOL _isVerticallyAligned;
    struct CGRect _screenVisibleFrame;
    struct CGRect _textFrame;
    BOOL _updatePositionOnEachKeyPress;
    struct CGRect _windowFrame;
}

@property(nonatomic) struct CGRect windowFrame; // @synthesize windowFrame=_windowFrame;
@property(nonatomic) BOOL updatePositionOnEachKeyPress; // @synthesize updatePositionOnEachKeyPress=_updatePositionOnEachKeyPress;
@property(nonatomic) struct CGRect screenVisibleFrame; // @synthesize screenVisibleFrame=_screenVisibleFrame;
@property(nonatomic) struct CGRect textFrame; // @synthesize textFrame=_textFrame;
@property(nonatomic) BOOL isVerticallyAligned; // @synthesize isVerticallyAligned=_isVerticallyAligned;
@property(nonatomic) BOOL isUsingIncrementalSearch; // @synthesize isUsingIncrementalSearch=_isUsingIncrementalSearch;
@property(nonatomic) BOOL isRTL; // @synthesize isRTL=_isRTL;
@property(retain, nonatomic) id client; // @synthesize client=_client;
@property(nonatomic) BOOL forceNoIncrementalSearchPositioning; // @synthesize forceNoIncrementalSearchPositioning=_forceNoIncrementalSearchPositioning;
@property(nonatomic) IMKCandidateController *candidateController; // @synthesize candidateController=_candidateController;
@property(readonly, nonatomic) struct CGPoint topWindowPosition;
- (struct CGRect)frameOfCurrentlyVisibleScreen;
- (struct CGPoint)positionWithPreferenceArray:(id)arg1 inlineAlignment:(unsigned long long)arg2;
- (struct CGPoint)positionForWindowInLocation:(unsigned long long)arg1 textFrame:(struct CGRect)arg2 inlineAlignment:(unsigned long long)arg3;
- (BOOL)canFitWindowInLocation:(unsigned long long)arg1 textFrame:(struct CGRect)arg2;
- (struct CGRect)inlineFrameWithClient:(id)arg1;
- (void)dealloc;

@end
