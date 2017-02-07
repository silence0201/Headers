//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreImage/CICodeGenerator.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface CIPDF417BarcodeGenerator : CICodeGenerator
{
    NSNumber *inputMinWidth;
    NSNumber *inputMaxWidth;
    NSNumber *inputMinHeight;
    NSNumber *inputMaxHeight;
    NSNumber *inputDataColumns;
    NSNumber *inputRows;
    NSNumber *inputPreferredAspectRatio;
    NSNumber *inputCompactionMode;
    NSNumber *inputCompactStyle;
    NSNumber *inputCorrectionLevel;
    NSNumber *inputAlwaysSpecifyCompaction;
}

+ (id)customAttributes;
@property(copy, nonatomic) NSNumber *inputAlwaysSpecifyCompaction; // @synthesize inputAlwaysSpecifyCompaction;
@property(copy, nonatomic) NSNumber *inputCorrectionLevel; // @synthesize inputCorrectionLevel;
@property(copy, nonatomic) NSNumber *inputCompactStyle; // @synthesize inputCompactStyle;
@property(copy, nonatomic) NSNumber *inputCompactionMode; // @synthesize inputCompactionMode;
@property(copy, nonatomic) NSNumber *inputPreferredAspectRatio; // @synthesize inputPreferredAspectRatio;
@property(copy, nonatomic) NSNumber *inputRows; // @synthesize inputRows;
@property(copy, nonatomic) NSNumber *inputDataColumns; // @synthesize inputDataColumns;
@property(copy, nonatomic) NSNumber *inputMaxHeight; // @synthesize inputMaxHeight;
@property(copy, nonatomic) NSNumber *inputMinHeight; // @synthesize inputMinHeight;
@property(copy, nonatomic) NSNumber *inputMaxWidth; // @synthesize inputMaxWidth;
@property(copy, nonatomic) NSNumber *inputMinWidth; // @synthesize inputMinWidth;
- (struct CGImage *)outputCGImage;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;

@end
