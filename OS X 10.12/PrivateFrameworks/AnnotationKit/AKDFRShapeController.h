//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AnnotationKit/AKDFRAnnotationPropertiesController.h>

@class NSSlider, NSStackView, NSTouchBarItem;

@interface AKDFRShapeController : AKDFRAnnotationPropertiesController
{
    NSTouchBarItem *_lineStyleItem;
    NSSlider *_lineWidthSlider;
    NSStackView *_lineStyleView;
}

+ (id)_accessibilityIdentifierForTag:(long long)arg1;
+ (id)_accessibilityLabelFromTag:(long long)arg1;
+ (id)_imageFromTag:(long long)arg1;
@property(retain) NSStackView *lineStyleView; // @synthesize lineStyleView=_lineStyleView;
@property(retain) NSSlider *lineWidthSlider; // @synthesize lineWidthSlider=_lineWidthSlider;
@property(retain) NSTouchBarItem *lineStyleItem; // @synthesize lineStyleItem=_lineStyleItem;
- (void).cxx_destruct;
- (id)_createButtonWithTag:(long long)arg1;
- (id)_createLineWidthSlider;
- (void)_initializeLineStyleView;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)itemIdentifiers;
- (id)initWithIdentifier:(id)arg1 delegate:(id)arg2;

@end
