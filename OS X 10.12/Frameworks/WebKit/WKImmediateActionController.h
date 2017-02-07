//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/NSImmediateActionGestureRecognizerDelegate-Protocol.h>
#import <WebKit/QLPreviewMenuItemDelegate-Protocol.h>

@class NSString, NSView;

__attribute__((visibility("hidden")))
@interface WKImmediateActionController : NSObject <QLPreviewMenuItemDelegate, NSImmediateActionGestureRecognizerDelegate>
{
    struct WebPageProxy *_page;
    NSView *_view;
    struct WebViewImpl *_viewImpl;
    int _state;
    struct WebHitTestResultData _hitTestResultData;
    BOOL _contentPreventsDefault;
    struct RefPtr<API::Object> _userData;
    unsigned int _type;
    struct RetainPtr<NSImmediateActionGestureRecognizer> _immediateActionRecognizer;
    BOOL _hasActivatedActionContext;
    struct RetainPtr<DDActionContext> _currentActionContext;
    struct RetainPtr<QLPreviewMenuItem> _currentQLPreviewMenuItem;
    BOOL _hasActiveImmediateAction;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_animationControllerForText;
- (id)_animationControllerForDataDetectedLink;
- (id)_animationControllerForDataDetectedText;
- (struct CGSize)menuItem:(id)arg1 maxSizeForPoint:(struct CGPoint)arg2;
- (struct CGRect)menuItem:(id)arg1 itemFrameForPoint:(struct CGPoint)arg2;
- (void)menuItemDidClose:(id)arg1;
- (unsigned long long)menuItem:(id)arg1 preferredEdgeForPoint:(struct CGPoint)arg2;
- (id)menuItem:(id)arg1 previewItemAtPoint:(struct CGPoint)arg2;
- (id)menuItem:(id)arg1 viewAtScreenPoint:(struct CGPoint)arg2;
- (void)_updateImmediateActionItem;
- (id)_defaultAnimationController;
- (PassRefPtr_61be5f30)_webHitTestResult;
- (void)immediateActionRecognizerDidCompleteAnimation:(id)arg1;
- (void)immediateActionRecognizerDidCancelAnimation:(id)arg1;
- (void)immediateActionRecognizerDidUpdateAnimation:(id)arg1;
- (void)immediateActionRecognizerWillBeginAnimation:(id)arg1;
- (void)immediateActionRecognizerWillPrepare:(id)arg1;
- (BOOL)hasActiveImmediateAction;
- (void)dismissContentRelativeChildWindows;
- (void)didPerformImmediateActionHitTest:(const struct WebHitTestResultData *)arg1 contentPreventsDefault:(BOOL)arg2 userData:(struct Object *)arg3;
- (void)_clearImmediateActionState;
- (void)_cancelImmediateActionIfNeeded;
- (void)_cancelImmediateAction;
- (void)willDestroyView:(id)arg1;
- (id)initWithPage:(struct WebPageProxy *)arg1 view:(id)arg2 viewImpl:(struct WebViewImpl *)arg3 recognizer:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
