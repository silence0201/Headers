//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIFoundation/NSCopying-Protocol.h>
#import <UIFoundation/NSSecureCoding-Protocol.h>

@class NSString;

@interface NSGlyphInfo : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_baseString;
}

+ (_Bool)supportsSecureCoding;
+ (void)initialize;
+ (id)glyphInfoWithCharacterIdentifier:(unsigned long long)arg1 collection:(unsigned long long)arg2 baseString:(id)arg3;
+ (id)glyphInfoWithGlyph:(unsigned int)arg1 forFont:(id)arg2 baseString:(id)arg3;
+ (id)glyphInfoWithGlyphName:(id)arg1 forFont:(id)arg2 baseString:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForKeyedArchiver;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)characterCollection;
- (unsigned long long)characterIdentifier;
- (id)glyphName;
- (id)_baseString;
- (unsigned int)_glyphForFont:(id)arg1 baseString:(id)arg2;
- (void)dealloc;
- (id)initWithBaseString:(id)arg1;

@end
