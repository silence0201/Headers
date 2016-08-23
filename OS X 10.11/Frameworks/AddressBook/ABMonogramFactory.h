//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ABMonogramFactory : NSObject
{
}

+ (BOOL)colorIsClear:(id)arg1;
+ (id)imageWithOptions:(id)arg1 drawBorder:(BOOL)arg2 drawHandler:(CDUnknownBlockType)arg3;
+ (unsigned long long)linesOfTextInString:(id)arg1;
+ (double)addPhotoBaselineForString:(id)arg1;
+ (id)addPhotoImageWithOptions:(id)arg1;
+ (id)imageWithThumbnail:(id)arg1 options:(id)arg2;
+ (id)imageWithSilhouette:(id)arg1 options:(id)arg2;
+ (id)imageWithCompanySilhouetteWithOptions:(id)arg1;
+ (id)imageWithContactSilhouetteWithOptions:(id)arg1;
+ (double)fontWeightForDiameter:(double)arg1;
+ (double)fontSizeForDiameter:(double)arg1;
+ (id)fontForDiameter:(double)arg1;
+ (unsigned long long)compositingOperationForColor:(id)arg1;
+ (void)drawString:(id)arg1 color:(id)arg2 diameter:(double)arg3;
+ (struct CGRect)adjustRect:(struct CGRect)arg1 toCenterString:(id)arg2 withAttributes:(id)arg3;
+ (id)imageWithInitials:(id)arg1 options:(id)arg2;

@end
