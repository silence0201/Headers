//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, _SFFluidProgressView, _SFNavigationBar;

@interface _SFNavigationBarItem : NSObject
{
    _Bool _showsLockIcon;
    _Bool _showsSearchIndicator;
    _Bool _showsStopReloadButtons;
    _Bool _stopReloadButtonShowsStop;
    _Bool _textHasEVCertificateTint;
    _Bool _lockIconHasEVCertificateTint;
    _Bool _readerButtonSelected;
    _Bool _showsReaderButton;
    _Bool _overrideBarStyleForSecurityWarning;
    NSString *_text;
    NSString *_textWhenExpanded;
    unsigned long long _startIndexOfTextInExpandedText;
    NSString *_customPlaceholderText;
    _SFFluidProgressView *_progressView;
    _SFNavigationBar *_navigationBar;
}

@property(nonatomic, setter=_setNavigationBar:) __weak _SFNavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(retain, nonatomic) _SFFluidProgressView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) _Bool overrideBarStyleForSecurityWarning; // @synthesize overrideBarStyleForSecurityWarning=_overrideBarStyleForSecurityWarning;
@property(nonatomic) _Bool showsReaderButton; // @synthesize showsReaderButton=_showsReaderButton;
@property(nonatomic) _Bool readerButtonSelected; // @synthesize readerButtonSelected=_readerButtonSelected;
@property(nonatomic) _Bool lockIconHasEVCertificateTint; // @synthesize lockIconHasEVCertificateTint=_lockIconHasEVCertificateTint;
@property(nonatomic) _Bool textHasEVCertificateTint; // @synthesize textHasEVCertificateTint=_textHasEVCertificateTint;
@property(nonatomic) _Bool stopReloadButtonShowsStop; // @synthesize stopReloadButtonShowsStop=_stopReloadButtonShowsStop;
@property(nonatomic) _Bool showsStopReloadButtons; // @synthesize showsStopReloadButtons=_showsStopReloadButtons;
@property(nonatomic) _Bool showsSearchIndicator; // @synthesize showsSearchIndicator=_showsSearchIndicator;
@property(nonatomic) _Bool showsLockIcon; // @synthesize showsLockIcon=_showsLockIcon;
@property(copy, nonatomic) NSString *customPlaceholderText; // @synthesize customPlaceholderText=_customPlaceholderText;
@property(readonly, nonatomic) unsigned long long startIndexOfTextInExpandedText; // @synthesize startIndexOfTextInExpandedText=_startIndexOfTextInExpandedText;
@property(readonly, nonatomic) NSString *textWhenExpanded; // @synthesize textWhenExpanded=_textWhenExpanded;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)setText:(id)arg1 textWhenExpanded:(id)arg2 startIndex:(unsigned long long)arg3;
- (id)init;

@end

