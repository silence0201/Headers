//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideoSubscriberAccount/VSCuratedViewModel.h>

@class NSString;
@protocol VSAutoAuthenticationViewModelDelegate;

__attribute__((visibility("hidden")))
@interface VSAutoAuthenticationViewModel : VSCuratedViewModel
{
    id <VSAutoAuthenticationViewModelDelegate> _delegate;
    NSString *_messageTitle;
    NSString *_accountName;
    NSString *_manualSignInTitle;
    NSString *_manualSignInButtonText;
}

@property(copy, nonatomic) NSString *manualSignInButtonText; // @synthesize manualSignInButtonText=_manualSignInButtonText;
@property(copy, nonatomic) NSString *manualSignInTitle; // @synthesize manualSignInTitle=_manualSignInTitle;
@property(copy, nonatomic) NSString *accountName; // @synthesize accountName=_accountName;
@property(copy, nonatomic) NSString *messageTitle; // @synthesize messageTitle=_messageTitle;
@property(nonatomic) __weak id <VSAutoAuthenticationViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didSelectManualSignInButton;
- (id)init;

@end

