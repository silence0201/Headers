//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreAudioKit/CAToolTipParameterStrip.h>

@class NSArray, NSPopUpButton;

__attribute__((visibility("hidden")))
@interface CAToolTipPopupMenuStrip : CAToolTipParameterStrip
{
    NSPopUpButton *valuePopup;
    NSArray *buttonImages;
}

- (void)setLabelWidth:(float)arg1;
- (float)value;
- (void)setValue:(float)arg1;
- (void)setImage:(id)arg1 forValue:(float)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 parameter:(unsigned int)arg2 label:(id)arg3 minValue:(float)arg4 maxValue:(float)arg5 valueStrings:(id)arg6;

@end
