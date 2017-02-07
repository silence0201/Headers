//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMapTable, NSMutableArray, NSMutableSet, NSProgressIndicator, NSString, NSTextAttachment, NSTimer, NSTouchBar, NSWindowController, SGTCompletionTableView, SGTCompletionWindow, SGTDFRTokenBarViewController, SGTFadeWindowEffect, SGTInput, SGTQueryGenius, SGTSuggestion, _SGTQueryScopeMenuOverride;
@protocol SGTSearchFieldQueryScopeDelegate;

__attribute__((visibility("hidden")))
@interface SGTSearchFieldReserved : NSObject
{
    NSArray *suggesters;
    SGTInput *currentInput;
    NSMutableArray *categories;
    NSMapTable *suggestionsByCategory;
    NSMutableSet *categoriesWithIntermediateResults;
    NSArray *displayCategories;
    NSMapTable *displaySuggestionsByCategory;
    SGTCompletionWindow *completionWindow;
    SGTCompletionTableView *completionTableView;
    BOOL settingValue;
    NSString *userTypedString;
    NSMutableArray *suggestions;
    SGTSuggestion *currentSuggestion;
    NSArray *freeTextSuggestions;
    BOOL abortSearchWhenEmptyString;
    BOOL textChangingProgrammatically;
    BOOL open;
    BOOL isDisplayingStaticSuggestions;
    BOOL observingApplicationState;
    BOOL interactingWithButton;
    BOOL textIsMarked;
    BOOL ignoreNextTextValidation;
    double minimumCompletionWindowWidth;
    unsigned long long textChangedID;
    long long typingScope;
    BOOL acceptsScopeSuggestion;
    SGTQueryGenius *genius;
    id eventMonitor;
    NSTimer *autocloseTimer;
    SGTFadeWindowEffect *autocloseFadeEffect;
    double lastInputStartTime;
    id debugEventMonitor;
    NSWindowController *debugWindowController;
    long long savedSelectionIndex;
    BOOL currentSelectionIsAutofirst;
    BOOL selectingBestSuggestion;
    BOOL enforceSelectionWhenPossible;
    BOOL keepCompletionWindowOnWindowDrag;
    BOOL ignoreWindowResizeNotifications;
    BOOL _highlightsMatches;
    id <SGTSearchFieldQueryScopeDelegate> queryScopeDelegate;
    _SGTQueryScopeMenuOverride *queryScopeMenuOverride;
    NSProgressIndicator *spinner;
    long long currentRequest;
    double queryScopeMenuSpinTime;
    NSDictionary *searchDelegateUserInfo;
    NSMutableArray *selectionEventCache;
    SEL selectionSelectorCache;
    BOOL queryStringChangesAreTransient;
    unsigned long long oldStringLength;
    unsigned long long maximumEffectiveInputLength;
    SGTDFRTokenBarViewController *dfrTokenBarViewController;
    BOOL needToReloadDFRIdentifiers;
    unsigned long long dfrIdentifierCounter;
    long long selectedTokenPosition;
    NSTextAttachment *selectedToken;
    NSTouchBar *touchBar;
    CDUnknownBlockType _didFindSuggestionsCallback;
}

- (void)dealloc;
- (id)init;

@end
