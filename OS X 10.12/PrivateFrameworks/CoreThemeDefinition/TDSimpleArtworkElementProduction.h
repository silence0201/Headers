//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreThemeDefinition/TDElementProduction.h>

@class TDTemplateRenderingMode;

@interface TDSimpleArtworkElementProduction : TDElementProduction
{
}

- (id)associatedFileModificationDateWithDocument:(id)arg1;
- (void)deleteRenditionsInDocument:(id)arg1 shouldDeleteAssetFiles:(BOOL)arg2;

// Remaining properties
@property(nonatomic) BOOL isFlippable; // @dynamic isFlippable;
@property(nonatomic) BOOL optOutOfThinning; // @dynamic optOutOfThinning;
@property(retain, nonatomic) TDTemplateRenderingMode *templateRenderingMode; // @dynamic templateRenderingMode;

@end

