//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <LinkPresentation/NSCopying-Protocol.h>

@class LPPointUnit;

__attribute__((visibility("hidden")))
@interface LPSize : NSObject <NSCopying>
{
    LPPointUnit *_width;
    LPPointUnit *_height;
}

@property(retain, nonatomic) LPPointUnit *height; // @synthesize height=_height;
@property(retain, nonatomic) LPPointUnit *width; // @synthesize width=_width;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGSize asSize;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSize:(struct CGSize)arg1;

@end

