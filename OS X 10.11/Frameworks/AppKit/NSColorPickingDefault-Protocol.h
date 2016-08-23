//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSButtonCell, NSColorList, NSColorPanel, NSImage, NSString;

@protocol NSColorPickingDefault
- (struct CGSize)minContentSize;
- (NSString *)buttonToolTip;
- (void)setMode:(long long)arg1;
- (void)detachColorList:(NSColorList *)arg1;
- (void)attachColorList:(NSColorList *)arg1;
- (void)alphaControlAddedOrRemoved:(id)arg1;
- (void)viewSizeChanged:(id)arg1;
- (void)insertNewButtonImage:(NSImage *)arg1 in:(NSButtonCell *)arg2;
- (NSImage *)provideNewButtonImage;
- (id)initWithPickerMask:(unsigned long long)arg1 colorPanel:(NSColorPanel *)arg2;
@end
