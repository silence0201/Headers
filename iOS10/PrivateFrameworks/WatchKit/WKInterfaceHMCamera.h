//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WatchKit/WKInterfaceObject.h>

@class CAContext, UIView;

@interface WKInterfaceHMCamera : WKInterfaceObject
{
    UIView *_containerView;
    UIView *_cameraView;
    CAContext *_context;
    struct CGSize _containerViewSize;
}

@property(nonatomic) struct CGSize containerViewSize; // @synthesize containerViewSize=_containerViewSize;
@property(retain, nonatomic) CAContext *context; // @synthesize context=_context;
@property(retain, nonatomic) UIView *cameraView; // @synthesize cameraView=_cameraView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)updateContainerViewSize;
- (void)remoteSetHeight:(double)arg1;
- (void)remoteSetWidth:(double)arg1;
- (void)setCameraSource:(id)arg1;
- (id)_initWithInterfaceProperty:(id)arg1 viewControllerID:(id)arg2 propertyIndex:(long long)arg3 tableIndex:(long long)arg4 rowIndex:(long long)arg5;

@end

