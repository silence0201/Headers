//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <WebKit/UIGestureRecognizerDelegate-Protocol.h>
#import <WebKit/UIPreviewItemDelegate-Protocol.h>
#import <WebKit/UITextInputPrivate-Protocol.h>
#import <WebKit/UIWKInteractionViewProtocol-Protocol.h>
#import <WebKit/UIWebFormAccessoryDelegate-Protocol.h>
#import <WebKit/UIWebTouchEventsGestureRecognizerDelegate-Protocol.h>
#import <WebKit/WKActionSheetAssistantDelegate-Protocol.h>
#import <WebKit/WKFileUploadPanelDelegate-Protocol.h>

@class NSDictionary, NSIndexSet, NSString, UIColor, UIImage, UITextInteractionAssistant, UITextPosition, UITextRange, UIWebFormAccessory, WKBrowsingContextController, WKWebView;
@protocol UITextInputDelegate, UITextInputTokenizer;

__attribute__((visibility("hidden")))
@interface WKContentView : UIView <UIGestureRecognizerDelegate, UIWebTouchEventsGestureRecognizerDelegate, UITextInputPrivate, UIWebFormAccessoryDelegate, UIWKInteractionViewProtocol, WKFileUploadPanelDelegate, WKActionSheetAssistantDelegate, UIPreviewItemDelegate>
{
    struct RefPtr<WebKit::WebPageProxy> _page;
    WKWebView *_webView;
    struct RetainPtr<UIWebTouchEventsGestureRecognizer> _touchEventGestureRecognizer;
    _Bool _canSendTouchEventsAsynchronously;
    struct RetainPtr<WKSyntheticClickTapGestureRecognizer> _singleTapGestureRecognizer;
    struct RetainPtr<_UIWebHighlightLongPressGestureRecognizer> _highlightLongPressGestureRecognizer;
    struct RetainPtr<UILongPressGestureRecognizer> _longPressGestureRecognizer;
    struct RetainPtr<UITapGestureRecognizer> _doubleTapGestureRecognizer;
    struct RetainPtr<UITapGestureRecognizer> _fastDoubleTapGestureRecognizer;
    struct RetainPtr<UITapGestureRecognizer> _twoFingerDoubleTapGestureRecognizer;
    struct RetainPtr<WKInspectorNodeSearchGestureRecognizer> _inspectorNodeSearchGestureRecognizer;
    struct RetainPtr<UIWKTextInteractionAssistant> _textSelectionAssistant;
    struct RetainPtr<UIWKSelectionAssistant> _webSelectionAssistant;
    struct RetainPtr<UITextInputTraits> _traits;
    struct RetainPtr<UIWebFormAccessory> _formAccessoryView;
    struct RetainPtr<_UIHighlightView> _highlightView;
    struct RetainPtr<UIView> _interactionViewsContainerView;
    struct RetainPtr<NSString> _markedText;
    struct RetainPtr<WKActionSheetAssistant> _actionSheetAssistant;
    struct RetainPtr<WKAirPlayRoutePicker> _airPlayRoutePicker;
    struct RetainPtr<WKFormInputSession> _formInputSession;
    struct RetainPtr<WKFileUploadPanel> _fileUploadPanel;
    struct RetainPtr<UIGestureRecognizer> _previewGestureRecognizer;
    struct RetainPtr<UIGestureRecognizer> _previewSecondaryGestureRecognizer;
    struct RetainPtr<UIPreviewItemController> _previewItemController;
    struct unique_ptr<WebKit::SmartMagnificationController, std::__1::default_delete<WebKit::SmartMagnificationController>> _smartMagnificationController;
    id <UITextInputDelegate> _inputDelegate;
    unsigned long long _latestTapID;
    struct TapHighlightInformation _tapHighlightInformation;
    struct WKAutoCorrectionData _autocorrectionData;
    struct InteractionInformationAtPosition _positionInformation;
    struct AssistedNodeInformation _assistedNodeInformation;
    struct RetainPtr<NSObject<WKFormPeripheral>> _inputPeripheral;
    struct RetainPtr<UIEvent> _uiEventBeingResent;
    struct CGPoint _lastInteractionLocation;
    struct WKSelectionDrawingInfo _lastSelectionDrawingInfo;
    _Bool _isEditable;
    _Bool _showingTextStyleOptions;
    _Bool _hasValidPositionInformation;
    _Bool _isTapHighlightIDValid;
    _Bool _potentialTapInProgress;
    _Bool _isDoubleTapPending;
    _Bool _highlightLongPressCanClick;
    _Bool _hasTapHighlightForPotentialTap;
    _Bool _selectionNeedsUpdate;
    _Bool _shouldRestoreSelection;
    _Bool _usingGestureForSelection;
    _Bool _inspectorNodeSearchEnabled;
    _Bool _didAccessoryTabInitiateFocus;
    _Bool _isExpectingFastSingleTapCommit;
    _Bool _showDebugTapHighlightsForFastClicking;
    _Bool _resigningFirstResponder;
    struct unique_ptr<WebKit::PageClientImpl, std::__1::default_delete<WebKit::PageClientImpl>> _pageClient;
    struct RetainPtr<WKBrowsingContextController> _browsingContextController;
    struct RetainPtr<UIView> _rootContentView;
    struct RetainPtr<UIView> _fixedClippingView;
    struct RetainPtr<WKInspectorIndicationView> _inspectorIndicationView;
    struct RetainPtr<WKInspectorHighlightView> _inspectorHighlightView;
    struct HistoricalVelocityData _historicalKinematicData;
    struct RetainPtr<NSUndoManager> _undoManager;
    struct unique_ptr<WebKit::ApplicationStateTracker, std::__1::default_delete<WebKit::ApplicationStateTracker>> _applicationStateTracker;
}

@property(readonly, nonatomic, getter=isResigningFirstResponder) _Bool resigningFirstResponder; // @synthesize resigningFirstResponder=_resigningFirstResponder;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillEnterForeground;
- (void)_applicationDidEnterBackground;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_zoomToInitialScaleWithOrigin:(struct CGPoint)arg1;
- (void)_zoomOutWithOrigin:(struct CGPoint)arg1;
- (_Bool)_zoomToRect:(struct CGRect)arg1 withOrigin:(struct CGPoint)arg2 fitEntireRect:(_Bool)arg3 minimumScale:(double)arg4 maximumScale:(double)arg5 minimumScrollDistance:(double)arg6;
- (void)_zoomToFocusRect:(struct CGRect)arg1 selectionRect:(struct CGRect)arg2 fontSize:(float)arg3 minimumScale:(double)arg4 maximumScale:(double)arg5 allowScaling:(_Bool)arg6 forceScroll:(_Bool)arg7;
- (_Bool)_scrollToRect:(struct CGRect)arg1 withOrigin:(struct CGPoint)arg2 minimumScrollDistance:(double)arg3;
- (void)_setAcceleratedCompositingRootView:(id)arg1;
- (void)_didCommitLayerTree:(const struct RemoteLayerTreeTransaction *)arg1;
- (void)_didCommitLoadForMainFrame;
- (void)_didRelaunchProcess;
- (void)_processDidExit;
- (unique_ptr_54a90528)_createDrawingAreaProxy;
- (void)_webViewDestroyed;
- (void)_accessibilityRegisterUIProcessTokens;
- (void)_setAccessibilityWebProcessToken:(id)arg1;
- (void)_updateForScreen:(id)arg1;
- (void)_windowDidMoveToScreenNotification:(id)arg1;
- (id)undoManager;
- (void)didZoomToScale:(double)arg1;
- (void)willStartZoomOrScroll;
- (void)didInterruptScrolling;
- (void)didFinishScrolling;
- (void)didUpdateVisibleRect:(struct CGRect)arg1 unobscuredRect:(struct CGRect)arg2 unobscuredRectInScrollViewCoordinates:(struct CGRect)arg3 scale:(double)arg4 minimumScale:(double)arg5 inStableState:(_Bool)arg6 isChangingObscuredInsetsInteractively:(_Bool)arg7;
- (void)updateFixedClippingView:(struct FloatRect)arg1;
@property(nonatomic, getter=isShowingInspectorIndication) _Bool showingInspectorIndication;
- (void)_hideInspectorHighlight;
- (void)_showInspectorHighlight:(const struct Highlight *)arg1;
@property(readonly, nonatomic) _Bool isBackground;
@property(readonly, nonatomic) _Bool isAssistingNode;
- (struct OpaqueWKPage *)_pageRef;
@property(readonly, nonatomic) WKBrowsingContextController *browsingContextController;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
@property(readonly, nonatomic) struct WebPageProxy *page;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 processPool:(struct WebProcessPool *)arg2 configuration:(struct WebPageConfiguration)arg3 wkView:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1 processPool:(struct WebProcessPool *)arg2 configuration:(struct WebPageConfiguration)arg3 webView:(id)arg4;
- (id)_commonInitializationWithProcessPool:(struct WebProcessPool *)arg1 configuration:(struct WebPageConfiguration)arg2;
- (void)actionSheetAssistantDidStopInteraction:(id)arg1;
- (void)actionSheetAssistant:(id)arg1 willStartInteractionWithElement:(id)arg2;
- (RetainPtr_f649c0c3)actionSheetAssistant:(id)arg1 decideActionsForElement:(id)arg2 defaultActions:(RetainPtr_f649c0c3)arg3;
- (_Bool)actionSheetAssistant:(id)arg1 shouldIncludeAppLinkActionsForElement:(id)arg2;
- (void)actionSheetAssistant:(id)arg1 openElementAtLocation:(struct CGPoint)arg2;
- (void)actionSheetAssistant:(id)arg1 performAction:(int)arg2;
- (void)updatePositionInformationForActionSheetAssistant:(id)arg1;
- (const struct InteractionInformationAtPosition *)positionInformationForActionSheetAssistant:(id)arg1;
- (_Bool)isAnyTouchOverActiveArea:(id)arg1;
- (_Bool)shouldIgnoreWebTouch;
- (void)fileUploadPanelDidDismiss:(id)arg1;
- (void)_showRunOpenPanel:(struct WebOpenPanelParameters *)arg1 resultListener:(struct WebOpenPanelResultListenerProxy *)arg2;
- (void)_showPlaybackTargetPicker:(_Bool)arg1 fromRect:(const struct IntRect *)arg2;
- (void)_updateChangedSelection:(_Bool)arg1;
- (void)_updateChangedSelection;
- (void)selectWordForReplacement;
- (void)_selectionChanged;
- (void)_stopAssistingNode;
- (void)_startAssistingNode:(const struct AssistedNodeInformation *)arg1 userIsInteracting:(_Bool)arg2 blurPreviousNode:(_Bool)arg3 userObject:(id)arg4;
@property(readonly, nonatomic) UIWebFormAccessory *formAccessoryView;
- (Vector_116a0919 *)assistedNodeSelectOptions;
@property(readonly, nonatomic) const struct AssistedNodeInformation *assistedNodeInformation;
- (void)_stopAssistingKeyboard;
- (void)_startAssistingKeyboard;
- (void)takeTraitsFrom:(id)arg1;
- (id)rangeEnclosingPosition:(id)arg1 withGranularity:(long long)arg2 inDirection:(long long)arg3;
- (_Bool)isPosition:(id)arg1 withinTextUnit:(long long)arg2 inDirection:(long long)arg3;
- (id)positionFromPosition:(id)arg1 toBoundary:(long long)arg2 inDirection:(long long)arg3;
- (_Bool)isPosition:(id)arg1 atBoundary:(long long)arg2 inDirection:(long long)arg3;
- (_Bool)hasSelection;
- (id)fontForCaretSelection;
- (id)textColorForCaretSelection;
- (void)selectAll;
- (_Bool)hasContent;
- (void)setMarkedText:(id)arg1;
- (id)wordRangeContainingCaretSelection;
- (id)wordContainingCaretSelection;
- (unsigned short)characterBeforeCaretSelection;
- (void)moveForward:(unsigned int)arg1;
- (void)moveBackward:(unsigned int)arg1;
- (id)nextUnperturbedDictationResultBoundaryFromPosition:(id)arg1;
- (id)previousUnperturbedDictationResultBoundaryFromPosition:(id)arg1;
- (id)metadataDictionariesForDictationResults;
@property(nonatomic) long long selectionGranularity;
- (id)automaticallySelectedOverlay;
- (void)setBottomBufferHeight:(double)arg1;
- (id)_moveToEndOfDocument:(_Bool)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfLine:(_Bool)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfParagraph:(_Bool)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfWord:(_Bool)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfDocument:(_Bool)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfLine:(_Bool)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfParagraph:(_Bool)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfWord:(_Bool)arg1 withHistory:(id)arg2;
- (id)_moveRight:(_Bool)arg1 withHistory:(id)arg2;
- (id)_moveLeft:(_Bool)arg1 withHistory:(id)arg2;
- (id)_moveDown:(_Bool)arg1 withHistory:(id)arg2;
- (id)_moveUp:(_Bool)arg1 withHistory:(id)arg2;
- (void)executeEditCommandWithCallback:(id)arg1;
- (_Bool)_interpretKeyEvent:(id)arg1 isCharEvent:(_Bool)arg2;
- (Optional_dd601f4a)_scrollOffsetForEvent:(id)arg1;
- (void)_didHandleKeyEvent:(id)arg1 eventWasHandled:(_Bool)arg2;
- (void)handleKeyWebEvent:(id)arg1;
- (void)handleKeyEvent:(id)arg1;
- (void)_handleKeyUIEvent:(id)arg1;
- (_Bool)requiresKeyEvents;
- (struct CGRect)rectContainingCaretSelection;
- (void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2;
- (void)setSelectedDOMRange:(id)arg1 affinityDownstream:(_Bool)arg2;
- (id)selectedDOMRange;
- (struct _NSRange)_markedTextNSRange;
- (struct CGRect)rectForNSRange:(struct _NSRange)arg1;
- (struct _NSRange)selectionRange;
- (id)selectionInteractionAssistant;
- (id)webSelectionAssistant;
@property(readonly, nonatomic) UITextInteractionAssistant *interactionAssistant;
- (id)textInputTraits;
- (_Bool)hasText;
- (void)insertText:(id)arg1;
- (void)deleteBackward;
- (id)characterRangeAtPoint:(struct CGPoint)arg1;
- (id)closestPositionToPoint:(struct CGPoint)arg1 withinRange:(id)arg2;
- (id)closestPositionToPoint:(struct CGPoint)arg1;
- (struct CGRect)firstRectForRange:(id)arg1;
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;
- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;
@property(readonly, nonatomic) id <UITextInputTokenizer> tokenizer;
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;
- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
@property(readonly, nonatomic) UITextPosition *endOfDocument;
@property(readonly, nonatomic) UITextPosition *beginningOfDocument;
- (void)unmarkText;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
@property(copy, nonatomic) NSDictionary *markedTextStyle;
@property(readonly, nonatomic) UITextRange *markedTextRange;
- (id)markedText;
- (_Bool)hasMarkedText;
@property(copy) UITextRange *selectedTextRange;
- (id)selectionRectsForRange:(id)arg1;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (id)textInRange:(id)arg1;
- (void)endSelectionChange;
- (void)beginSelectionChange;
- (void)_updateAccessory;
- (void)accessoryClear;
- (void)accessoryAutoFill;
- (void)_setDoubleTapGesturesEnabled:(_Bool)arg1;
- (struct Color)_tapHighlightColorForFastClick:(_Bool)arg1;
- (void)_becomeFirstResponderWithSelectionMovingForward:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)accessoryTab:(_Bool)arg1;
- (void)_prevAccessoryTab:(id)arg1;
- (void)_nextAccessoryTab:(id)arg1;
- (void)_arrowKey:(id)arg1;
- (id)keyCommands;
- (void)accessoryDone;
- (void)requestAutocorrectionContextWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)applyAutocorrection:(id)arg1 toString:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)requestDictationContext:(CDUnknownBlockType)arg1;
- (void)replaceDictatedText:(id)arg1 withText:(id)arg2;
- (struct CGRect)textLastRect;
- (struct CGRect)textFirstRect;
- (_Bool)_selectionAtDocumentStart;
- (unsigned int)_characterInRelationToCaretSelection:(int)arg1;
- (unsigned int)_characterBeforeCaretSelection;
- (void)updateSelectionWithExtentPoint:(struct CGPoint)arg1 withBoundary:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateSelectionWithExtentPoint:(struct CGPoint)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)beginSelectionInDirection:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)selectTextWithGranularity:(long long)arg1 atPoint:(struct CGPoint)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)moveSelectionAtBoundary:(long long)arg1 inDirection:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)selectPositionAtBoundary:(long long)arg1 inDirection:(long long)arg2 fromPoint:(struct CGPoint)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)selectPositionAtPoint:(struct CGPoint)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)requestAutocorrectionRectsForString:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) const struct WKAutoCorrectionData *autocorrectionData;
- (void)moveByOffset:(long long)arg1;
- (void)changeBlockSelectionWithTouchAt:(struct CGPoint)arg1 withSelectionTouch:(long long)arg2 forHandle:(long long)arg3;
- (void)changeSelectionWithTouchesFrom:(struct CGPoint)arg1 to:(struct CGPoint)arg2 withGesture:(long long)arg3 withState:(long long)arg4;
- (void)changeSelectionWithTouchAt:(struct CGPoint)arg1 withSelectionTouch:(long long)arg2 baseIsStart:(_Bool)arg3;
- (void)changeSelectionWithGestureAt:(struct CGPoint)arg1 withGesture:(long long)arg2 withState:(long long)arg3;
- (_Bool)_isInteractingWithAssistedNode;
- (void)_didUpdateBlockSelectionWithTouch:(int)arg1 withFlags:(int)arg2 growThreshold:(double)arg3 shrinkThreshold:(double)arg4;
- (void)accessibilityRetrieveSpeakSelectionContent;
- (void)_define:(id)arg1;
- (void)_showDictionary:(id)arg1;
- (void)_showTextStyleOptions:(id)arg1;
- (void)toggleUnderline:(id)arg1;
- (void)toggleItalics:(id)arg1;
- (void)toggleBoldface:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)select:(id)arg1;
- (void)paste:(id)arg1;
- (void)cut:(id)arg1;
- (void)copy:(id)arg1;
- (void)_resetShowingTextStyle:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)textStylingAtPosition:(id)arg1 inDirection:(long long)arg2;
- (void)replace:(id)arg1;
- (void)_reanalyze:(id)arg1;
- (void)_transliterateChinese:(id)arg1;
- (void)_promptForReplace:(id)arg1;
- (void)selectWordBackward;
- (void)replaceText:(id)arg1 withText:(id)arg2;
- (_Bool)isReplaceAllowed;
- (id)selectedText;
- (void)_addShortcut:(id)arg1;
- (void)_share:(id)arg1;
- (void)_lookup:(struct CGPoint)arg1;
- (id)supportedPasteboardTypesForCurrentSelection;
- (id)inputAccessoryView;
- (_Bool)requiresAccessoryView;
- (void)_didEndScrollingOrZooming;
- (void)scrollViewWillStartPanOrPinchGesture;
- (void)_willStartScrollingOrZooming;
- (void)_positionInformationDidChange:(const struct InteractionInformationAtPosition *)arg1;
- (void)clearSelection;
- (void)useSelectionAssistantWithMode:(int)arg1;
- (void)_attemptClickAtLocation:(struct CGPoint)arg1;
- (void)_twoFingerDoubleTapRecognized:(id)arg1;
- (void)_fastDoubleTapRecognized:(id)arg1;
- (void)_resetIsDoubleTapPending;
- (void)_doubleTapRecognized:(id)arg1;
- (void)_singleTapCommited:(id)arg1;
- (void)_didNotHandleTapAsClick;
- (void)_commitPotentialTapFailed;
- (void)_singleTapDidReset:(id)arg1;
- (void)_singleTapRecognized:(id)arg1;
- (void)_endPotentialTapAndEnableDoubleTapGesturesIfNecessary;
- (void)_longPressRecognized:(id)arg1;
- (void)_highlightLongPressRecognized:(id)arg1;
- (id)webSelectionRects;
- (_Bool)pointIsInAssistedNode:(struct CGPoint)arg1;
- (_Bool)pointIsNearMarkedText:(struct CGPoint)arg1;
- (_Bool)hasSelectablePositionAtPoint:(struct CGPoint)arg1;
- (void)_finishInteraction;
- (void)_cancelInteraction;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)ensurePositionInformationIsUpToDate:(struct CGPoint)arg1;
- (SEL)_actionForLongPress;
- (void)_showDataDetectorsSheet;
- (void)_showLinkSheet;
- (void)_showImageSheet;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 canBePreventedByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 canPreventGestureRecognizer:(id)arg2;
- (struct CGRect)_selectionClipRect;
- (id)inputView;
- (void)_displayFormNodeInputView;
- (_Bool)_requiresKeyboardResetOnReload;
- (_Bool)_requiresKeyboardWhenFirstResponder;
- (void)_overflowScrollingDidEnd;
- (void)_overflowScrollingWillBegin;
- (void)_didScroll;
- (void)_cancelLongPressGestureRecognizer;
- (void)_disableDoubleTapGesturesDuringTapIfNecessary:(unsigned long long)arg1;
- (_Bool)_mayDisableDoubleTapGesturesDuringSingleTap;
- (void)_didGetTapHighlightForRequest:(unsigned long long)arg1 color:(const struct Color *)arg2 quads:(const Vector_c1077595 *)arg3 topLeftRadius:(const struct IntSize *)arg4 topRightRadius:(const struct IntSize *)arg5 bottomLeftRadius:(const struct IntSize *)arg6 bottomRightRadius:(const struct IntSize *)arg7;
- (void)_showTapHighlight;
- (void)_updateTapHighlight;
- (void)_webTouchEvent:(const struct NativeWebTouchEvent *)arg1 preventsNativeGestures:(_Bool)arg2;
- (void)_inspectorNodeSearchRecognized:(id)arg1;
- (void)_webTouchEventsRecognized:(id)arg1;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
@property(readonly, nonatomic) _Bool isEditable;
@property(readonly, nonatomic) struct CGPoint lastInteractionLocation;
@property(nonatomic) __weak id <UITextInputDelegate> inputDelegate;
@property(readonly, nonatomic) const struct InteractionInformationAtPosition *positionInformation;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_disableInspectorNodeSearch;
- (void)_enableInspectorNodeSearch;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (struct CGRect)unobscuredContentRect;
- (id)_scroller;
- (double)inverseScale;
- (id)unscaledView;
- (void)_addDefaultGestureRecognizers;
- (void)_removeDefaultGestureRecognizers;
- (void)cleanupInteraction;
- (void)setupInteraction;
- (void)_createAndConfigureDoubleTapGestureRecognizer;
- (void)_previewItemControllerDidCancelPreview:(id)arg1;
- (id)_presentationRectsForPreviewItemController:(id)arg1;
- (id)_presentationSnapshotForPreviewItemController:(id)arg1;
- (void)_previewItemController:(id)arg1 didDismissPreview:(id)arg2 committing:(_Bool)arg3;
- (void)_interactionStoppedFromPreviewItemController:(id)arg1;
- (void)_interactionStartedFromPreviewItemController:(id)arg1;
- (void)_previewItemController:(id)arg1 commitPreview:(id)arg2;
- (id)_presentedViewControllerForPreviewItemController:(id)arg1;
- (struct CGRect)_presentationRectForPreviewItemController:(id)arg1;
- (id)_dataForPreviewItemController:(id)arg1 atPosition:(struct CGPoint)arg2 type:(long long *)arg3;
- (_Bool)_interactionShouldBeginFromPreviewItemController:(id)arg1 forPosition:(struct CGPoint)arg2;
- (void)_unregisterPreview;
- (void)_registerPreview;

// Remaining properties
@property(copy, nonatomic) NSIndexSet *PINEntrySeparatorIndexes;
@property(nonatomic) _Bool acceptsEmoji;
@property(nonatomic) _Bool acceptsFloatingKeyboard;
@property(nonatomic) _Bool acceptsSplitKeyboard;
@property(nonatomic) long long autocapitalizationType;
@property(copy, nonatomic) NSString *autocorrectionContext;
@property(nonatomic) long long autocorrectionType;
@property(nonatomic) _Bool contentsIsSingleValue;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) _Bool deferBecomingResponder;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool disablePrediction;
@property(nonatomic) _Bool displaySecureEditsUsingPlainText;
@property(nonatomic) _Bool displaySecureTextUsingPlainText;
@property(nonatomic) int emptyContentReturnKeyType;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(nonatomic) _Bool enablesReturnKeyOnNonWhiteSpaceContent;
@property(nonatomic) _Bool forceEnableDictation;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) UIColor *insertionPointColor;
@property(nonatomic) unsigned long long insertionPointWidth;
@property(nonatomic) _Bool isCarPlayIdiom;
@property(nonatomic) _Bool isSingleLineDocument;
@property(nonatomic) long long keyboardAppearance;
@property(nonatomic) long long keyboardType;
@property(nonatomic) _Bool learnsCorrections;
@property(copy, nonatomic) NSString *recentInputIdentifier;
@property(copy, nonatomic) NSString *responseContext;
@property(nonatomic) _Bool returnKeyGoesToNextResponder;
@property(nonatomic) long long returnKeyType;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
@property(nonatomic) long long selectionAffinity;
@property(retain, nonatomic) UIColor *selectionBarColor;
@property(retain, nonatomic) UIImage *selectionDragDotImage;
@property(retain, nonatomic) UIColor *selectionHighlightColor;
@property(nonatomic) int shortcutConversionType;
@property(nonatomic) long long spellCheckingType;
@property(readonly) Class superclass;
@property(nonatomic) _Bool suppressReturnKeyStyling;
@property(readonly, nonatomic) UIView *textInputView;
@property(nonatomic) int textLoupeVisibility;
@property(nonatomic) int textSelectionBehavior;
@property(nonatomic) id textSuggestionDelegate;
@property(nonatomic) struct __CFCharacterSet *textTrimmingSet;
@property(nonatomic) _Bool useInterfaceLanguageForLocalization;
@property(nonatomic) struct _NSRange validTextRange;

@end

