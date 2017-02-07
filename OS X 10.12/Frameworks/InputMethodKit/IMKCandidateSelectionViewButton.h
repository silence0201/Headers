//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSButton.h>

@class IMKUIProperties;

@interface IMKCandidateSelectionViewButton : NSButton
{
    BOOL _mousePointerInside;
    BOOL _radarButton;
    IMKUIProperties *_properties;
    long long _trackingRectTag;
}

@property(nonatomic, getter=isRadarButton) BOOL radarButton; // @synthesize radarButton=_radarButton;
@property(retain, nonatomic) IMKUIProperties *properties; // @synthesize properties=_properties;
@property(nonatomic) long long trackingRectTag; // @synthesize trackingRectTag=_trackingRectTag;
@property(nonatomic) BOOL mousePointerInside; // @synthesize mousePointerInside=_mousePointerInside;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (void)setFrame:(struct CGRect)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
