//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSDictionary, NSString;

@interface TVSCarMVerificationOperation : ISOperation
{
    NSString *_customerTitle;
    NSString *_customerMessage;
    NSDictionary *_failureClientInfo;
}

@property(retain, nonatomic) NSDictionary *failureClientInfo; // @synthesize failureClientInfo=_failureClientInfo;
@property(retain, nonatomic) NSString *customerMessage; // @synthesize customerMessage=_customerMessage;
@property(retain, nonatomic) NSString *customerTitle; // @synthesize customerTitle=_customerTitle;
- (void).cxx_destruct;
- (id)_copyVerifyResponseWithCode:(id)arg1 error:(id *)arg2;
- (id)_copySendCodeResponseWithError:(id *)arg1;
- (_Bool)_verifySMSCode:(id)arg1 error:(id *)arg2;
- (_Bool)_sendNewCodeShowingDialogs:(_Bool)arg1 error:(id *)arg2;
- (id)_copySMSCodeFromUser;
- (void)run;
- (void)presentFailureAlertWithTitle:(id)arg1 message:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentCodeEntryAlertWithTitle:(id)arg1 message:(id)arg2 newCodeLabel:(id)arg3 submitLabel:(id)arg4 newCodeRequestHandler:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;

@end
