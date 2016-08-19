//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ReplayKit/RPVideoEditorViewControllerDelegate-Protocol.h>

@protocol RPPreviewViewControllerDelegate;

@interface RPPreviewViewController : UIViewController <RPVideoEditorViewControllerDelegate>
{
    id <RPPreviewViewControllerDelegate> _previewControllerDelegate;
}

+ (void)viewControllerForExtension:(id)arg1 inputItems:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)loadPreviewViewControllerWithMovieURL:(id)arg1 attachmentURL:(id)arg2 overrideShareMessage:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)loadPreviewViewControllerWithMovieURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(nonatomic) __weak id <RPPreviewViewControllerDelegate> previewControllerDelegate; // @synthesize previewControllerDelegate=_previewControllerDelegate;
- (void).cxx_destruct;
- (void)extensionDidFinishWithActivityTypes:(id)arg1;
- (void)videoEditor:(id)arg1 didFinishWithActivityTypes:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

@end

