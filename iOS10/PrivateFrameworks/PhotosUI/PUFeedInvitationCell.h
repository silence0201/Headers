//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUFeedCell.h>

#import <PhotosUI/UITextViewDelegate-Protocol.h>

@class NSString, UIButton, UITextView, UIView;

__attribute__((visibility("hidden")))
@interface PUFeedInvitationCell : PUFeedCell <UITextViewDelegate>
{
    NSString *_title;
    NSString *_inviterDisplayName;
    NSString *_inviteeDisplayName;
    _Bool _offerToReportAsJunk;
    UITextView *__textView;
    UIButton *__acceptButon;
    UIButton *__declineButton;
    UIView *__bottomSeparatorView;
}

@property(retain, nonatomic, setter=_setBottomSeparatorView:) UIView *_bottomSeparatorView; // @synthesize _bottomSeparatorView=__bottomSeparatorView;
@property(retain, nonatomic, setter=_setDeclineButton:) UIButton *_declineButton; // @synthesize _declineButton=__declineButton;
@property(retain, nonatomic, setter=_setAcceptButton:) UIButton *_acceptButon; // @synthesize _acceptButon=__acceptButon;
@property(retain, nonatomic, setter=_setTextView:) UITextView *_textView; // @synthesize _textView=__textView;
- (void).cxx_destruct;
- (void)_reportJunkButtonAction:(id)arg1;
- (void)_replyButtonAction:(id)arg1;
- (id)_delegate;
- (void)setTitle:(id)arg1 inviterDisplayName:(id)arg2 inviteeDisplayName:(id)arg3 offerToReportAsJunk:(_Bool)arg4;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3;
- (void)_updateTextView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

