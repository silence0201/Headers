//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (UIStringDrawingSuperCrufty)
- (struct CGSize)drawAtPoint:(struct CGPoint)arg1 forWidth:(double)arg2 withFont:(id)arg3 minFontSize:(double)arg4 actualFontSize:(double *)arg5 lineBreakMode:(long long)arg6 baselineAdjustment:(long long)arg7 includeEmoji:(_Bool)arg8;
- (struct CGSize)drawAtPoint:(struct CGPoint)arg1 forWidth:(double)arg2 withFont:(id)arg3 fontSize:(double)arg4 lineBreakMode:(long long)arg5 baselineAdjustment:(long long)arg6 includeEmoji:(_Bool)arg7;
- (struct CGSize)_drawInRect:(struct CGRect)arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3 alignment:(long long)arg4 lineSpacing:(int)arg5 includeEmoji:(_Bool)arg6 truncationRect:(struct CGRect *)arg7;
- (struct CGSize)drawInRect:(struct CGRect)arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3 alignment:(long long)arg4 lineSpacing:(int)arg5 includeEmoji:(_Bool)arg6;
- (struct CGSize)drawInRect:(struct CGRect)arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3 alignment:(long long)arg4 lineSpacing:(int)arg5;
- (struct CGSize)sizeWithFont:(id)arg1 constrainedToSize:(struct CGSize)arg2 lineBreakMode:(long long)arg3 lineSpacing:(int)arg4;
- (struct CGSize)drawAtPoint:(struct CGPoint)arg1 forWidth:(double)arg2 withFont:(id)arg3 lineBreakMode:(long long)arg4 letterSpacing:(double)arg5 includeEmoji:(_Bool)arg6;
- (struct CGSize)drawAtPoint:(struct CGPoint)arg1 forWidth:(double)arg2 withFont:(id)arg3 lineBreakMode:(long long)arg4 letterSpacing:(double)arg5;
- (struct CGSize)sizeWithFont:(id)arg1 forWidth:(double)arg2 lineBreakMode:(long long)arg3 letterSpacing:(double)arg4;
@end

