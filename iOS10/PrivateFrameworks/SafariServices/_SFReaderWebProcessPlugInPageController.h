//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariServices/_SFWebProcessPlugInPageController.h>

@class WKWebProcessPlugInScriptWorld, _SFWebProcessPlugInReaderEnabledPageController;

@interface _SFReaderWebProcessPlugInPageController : _SFWebProcessPlugInPageController
{
    struct unique_ptr<SafariServices::WebProcessPlugInReaderJSController, std::__1::default_delete<SafariServices::WebProcessPlugInReaderJSController>> _readerJSController;
    WKWebProcessPlugInScriptWorld *_isolatedWorldForNextPageDetection;
    _SFWebProcessPlugInReaderEnabledPageController *_originalPageController;
}

+ (id)readerPageControllerForContextHandle:(id)arg1;
@property(nonatomic) __weak _SFWebProcessPlugInReaderEnabledPageController *originalPageController; // @synthesize originalPageController=_originalPageController;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)webProcessPlugInBrowserContextController:(id)arg1 globalObjectIsAvailableForFrame:(id)arg2 inScriptWorld:(id)arg3;
- (id)printingMailingFrame;
- (id)collectReaderContentFromPrintAndMailingFrame;
- (id)isolatedWorldForNextPageDetection;
- (void)decreaseReaderTextSize;
- (void)increaseReaderTextSize;
- (void)setReaderTheme:(id)arg1;
- (void)setReaderFont:(id)arg1;
- (void)loadNewArticle;
- (void)_initializeReaderJSControllerForFrame:(id)arg1;
- (struct OpaqueJSValue *)originalArticleFinder;
- (void)willDestroyBrowserContextController:(id)arg1;
- (id)initWithPlugIn:(id)arg1 contextController:(id)arg2;

@end
