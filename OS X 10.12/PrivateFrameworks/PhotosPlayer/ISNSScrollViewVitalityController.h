//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosPlayer/ISScrollViewVitalityController.h>

@class ISNSVisibilityOffsetHelper, NSScrollView;

@interface ISNSScrollViewVitalityController : ISScrollViewVitalityController
{
    BOOL _isListeningToScrollViewNotifications;
    ISNSVisibilityOffsetHelper *_visibilityOffsetHelper;
    NSScrollView *__scrollView;
}

@property(nonatomic, setter=_setScrollView:) __weak NSScrollView *_scrollView; // @synthesize _scrollView=__scrollView;
- (void).cxx_destruct;
- (void)_handleDidEndLiveScrollNotification:(id)arg1;
- (void)_handleDidLiveScrollNotification:(id)arg1;
- (void)_handleWillStartLiveScrollNotification:(id)arg1;
- (void)_stopListeningToScrollViewNotifications;
- (void)_startListeningToScrollViewNotifications;
- (id)visibilityOffsetHelper;
- (void)dealloc;

@end

