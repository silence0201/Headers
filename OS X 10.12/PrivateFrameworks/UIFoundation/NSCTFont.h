//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIFoundation/NSFont.h>

@interface NSCTFont : NSFont
{
}

- (id)fontWithSize:(double)arg1;
- (id)fontForAppearance:(id)arg1;
- (BOOL)isVertical;
- (id)verticalFont;
- (id)bestMatchingFontForCharacters:(const unsigned short *)arg1 length:(unsigned long long)arg2 attributes:(id)arg3 actualCoveredLength:(unsigned long long *)arg4;
- (id)nameOfGlyph:(unsigned int)arg1;
- (unsigned int)hyphenGlyphForLocale:(id)arg1;
- (id)lastResortFont;
- (const void *)ctFontRef;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)renderingMode;
- (id)screenFontWithRenderingMode:(unsigned long long)arg1;
- (id)screenFont;
- (id)printerFont;
- (void)setInContext:(id)arg1;
- (void)getAdvancements:(struct CGSize *)arg1 forCGGlyphs:(const unsigned short *)arg2 count:(unsigned long long)arg3;
- (void)getAdvancements:(struct CGSize *)arg1 forPackedGlyphs:(const void *)arg2 length:(unsigned long long)arg3;
- (void)getAdvancements:(struct CGSize *)arg1 forGlyphs:(const unsigned int *)arg2 count:(unsigned long long)arg3;
- (void)getBoundingRects:(struct CGRect *)arg1 forCGGlyphs:(const unsigned short *)arg2 count:(unsigned long long)arg3;
- (void)getBoundingRects:(struct CGRect *)arg1 forGlyphs:(const unsigned int *)arg2 count:(unsigned long long)arg3;
- (struct CGSize)advancementForGlyph:(unsigned int)arg1;
- (struct CGRect)boundingRectForGlyph:(unsigned int)arg1;
- (BOOL)isFixedPitch;
- (double)xHeight;
- (double)capHeight;
- (double)italicAngle;
- (double)underlineThickness;
- (double)underlinePosition;
- (double)leading;
- (double)descender;
- (double)ascender;
- (struct CGSize)maximumAdvancement;
- (struct CGRect)boundingRectForFont;
- (id)coveredCharacterSet;
- (unsigned int)glyphWithName:(id)arg1;
- (unsigned long long)mostCompatibleStringEncoding;
- (unsigned long long)numberOfGlyphs;
- (id)description;
- (id)textTransform;
- (id)_safeFontDescriptor;
- (id)fontDescriptor;
- (id)displayName;
- (id)familyName;
- (const double *)matrix;
- (double)pointSize;
- (id)fontName;
- (BOOL)_usesAppearanceFontSize;
- (unsigned long long)_metaType;
- (_Bool)_getLatin1GlyphMapping:(const unsigned short **)arg1 andAdvanceMapping:(const struct CGSize **)arg2;
- (BOOL)_hasColorGlyphs;
- (id)_similarFontWithName:(id)arg1;
- (double)_totalAdvancementForNativeGlyphs:(const unsigned short *)arg1 count:(long long)arg2;
- (struct CGAffineTransform)_textMatrixTransformForContext:(id)arg1;
- (id)_kernOverride;
- (const unsigned short *)_latin1MappingTable:(_Bool *)arg1;
- (unsigned int)_atsFontID;
- (struct CGFont *)_backingCGSFont;
- (double)_leading;
- (double)_descenderDeltaForBehavior:(long long)arg1;
- (double)_ascenderDeltaForBehavior:(long long)arg1;
- (double)_baseLineHeightForFont:(BOOL)arg1;
- (double)_defaultLineHeightForUILayout;
- (id)_sharedFontInstanceInfo;
- (BOOL)_hasNonNominalDescriptor;
- (BOOL)_isIdealMetricsOnly;
- (BOOL)_isHiraginoFont;
- (BOOL)_isDefaultFace;
- (BOOL)__isSystemFont;
- (unsigned long long)retainCount;
- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (oneway void)release;
- (id)retain;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)_cfTypeID;

@end
