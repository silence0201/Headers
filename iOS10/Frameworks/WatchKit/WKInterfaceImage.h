//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WatchKit/WKInterfaceObject.h>

#import <WatchKit/WKImageAnimatable-Protocol.h>

@class NSString;

@interface WKInterfaceImage : WKInterfaceObject <WKImageAnimatable>
{
}

- (void)stopAnimating;
- (void)startAnimatingWithImagesInRange:(struct _NSRange)arg1 duration:(double)arg2 repeatCount:(long long)arg3;
- (void)startAnimating;
- (void)setTintColor:(id)arg1;
- (void)setImageNamed:(id)arg1;
- (void)setImageData:(id)arg1;
- (void)setImage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
