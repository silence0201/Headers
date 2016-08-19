//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIAlertView, UIPrintingProgressViewController;

__attribute__((visibility("hidden")))
@interface UIPrintingProgress : NSObject
{
    NSString *_printerName;
    CDUnknownBlockType _cancelHandler;
    double _startTime;
    double _displayTime;
    UIAlertView *_alert;
    UIPrintingProgressViewController *_viewController;
    _Bool _donePrinting;
    _Bool _forceDisplayAsAlert;
    _Bool _creatingPDF;
    double _lastPageUpdate;
    double _progressAlertDelay;
}

@property double progressAlertDelay; // @synthesize progressAlertDelay=_progressAlertDelay;
@property double lastPageUpdate; // @synthesize lastPageUpdate=_lastPageUpdate;
@property _Bool creatingPDF; // @synthesize creatingPDF=_creatingPDF;
- (void).cxx_destruct;
- (double)nextPrintDelay;
- (void)setPage:(long long)arg1 ofPage:(long long)arg2;
- (void)setPrintInfoState:(int)arg1;
- (void)endProgress;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertViewCancel:(id)arg1;
- (void)didPresentAlertView:(id)arg1;
- (void)progressCancel;
- (void)hideProgressAnimated:(_Bool)arg1;
- (void)showProgress:(id)arg1 immediately:(_Bool)arg2;
@property(readonly) NSString *title;
- (_Bool)progressVisible;
- (id)initPDFCreationWithCancelHandler:(CDUnknownBlockType)arg1;
- (id)initWithPrinterName:(id)arg1 forceDisplayAsAlert:(_Bool)arg2 cancelHandler:(CDUnknownBlockType)arg3;

@end

