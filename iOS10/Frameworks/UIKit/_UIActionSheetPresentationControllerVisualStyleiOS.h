//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/UIActionSheetPresentationControllerVisualStyle-Protocol.h>

@class NSString, UIActionSheetiOSDismissActionView, UIColor;

__attribute__((visibility("hidden")))
@interface _UIActionSheetPresentationControllerVisualStyleiOS : NSObject <UIActionSheetPresentationControllerVisualStyle>
{
    UIActionSheetiOSDismissActionView *_dismissActionView;
}

@property(retain, nonatomic) UIActionSheetiOSDismissActionView *dismissActionView; // @synthesize dismissActionView=_dismissActionView;
- (void).cxx_destruct;
@property(readonly) double cornerRadius;
@property(readonly) UIColor *dimmingViewColor;
@property(readonly) struct UIEdgeInsets contentInsets;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

