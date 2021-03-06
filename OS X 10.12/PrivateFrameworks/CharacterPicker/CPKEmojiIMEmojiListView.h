//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSScrollView.h>

@class EMIMDFREmojiCategoryListDocumentView, NSLayoutConstraint;

__attribute__((visibility("hidden")))
@interface CPKEmojiIMEmojiListView : NSScrollView
{
    BOOL _categoryExpanded;
    BOOL _dontPinningContent;
    BOOL _adjustedLeadingForEdgeShadow;
    BOOL _settingInitialState;
    BOOL _categoryPullOutOverRun;
    BOOL _categoryPullingOut;
    NSLayoutConstraint *_listLeadingConstraint;
    double _categoryPullOutLimitWidth;
    EMIMDFREmojiCategoryListDocumentView *_savedCategoryDocument;
    double _normalLeadingConstant;
    double _categoryPullOutBasePos;
    double _categoryPullOutCurrentPos;
    struct CGRect _pinningStartVisibleRect;
}

@property BOOL categoryPullingOut; // @synthesize categoryPullingOut=_categoryPullingOut;
@property BOOL categoryPullOutOverRun; // @synthesize categoryPullOutOverRun=_categoryPullOutOverRun;
@property double categoryPullOutCurrentPos; // @synthesize categoryPullOutCurrentPos=_categoryPullOutCurrentPos;
@property double categoryPullOutBasePos; // @synthesize categoryPullOutBasePos=_categoryPullOutBasePos;
@property BOOL settingInitialState; // @synthesize settingInitialState=_settingInitialState;
@property struct CGRect pinningStartVisibleRect; // @synthesize pinningStartVisibleRect=_pinningStartVisibleRect;
@property double normalLeadingConstant; // @synthesize normalLeadingConstant=_normalLeadingConstant;
@property(retain) EMIMDFREmojiCategoryListDocumentView *savedCategoryDocument; // @synthesize savedCategoryDocument=_savedCategoryDocument;
@property double categoryPullOutLimitWidth; // @synthesize categoryPullOutLimitWidth=_categoryPullOutLimitWidth;
@property BOOL adjustedLeadingForEdgeShadow; // @synthesize adjustedLeadingForEdgeShadow=_adjustedLeadingForEdgeShadow;
@property BOOL dontPinningContent; // @synthesize dontPinningContent=_dontPinningContent;
@property BOOL categoryExpanded; // @synthesize categoryExpanded=_categoryExpanded;
@property NSLayoutConstraint *listLeadingConstraint; // @synthesize listLeadingConstraint=_listLeadingConstraint;
- (void)setStateInfo:(id)arg1;
- (id)getStateInfo;
- (void)reset;
- (void)setSearchResults:(id)arg1;
- (void)closeSkinToneSelector;
- (void)startOrFinishContentPinning:(BOOL)arg1;
- (void)adjustListAvoidEdgeShadow:(BOOL)arg1 adjustContent:(BOOL)arg2;
- (void)refresh;
- (void)scrollToCategory:(long long)arg1;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 previewWindow:(id)arg3;

@end

