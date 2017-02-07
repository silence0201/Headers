//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Metal/MTLResource-Protocol.h>

@class MTLTextureDescriptor, NSString;
@protocol MTLTexture;

@protocol MTLBuffer <MTLResource>
@property(readonly) unsigned long long length;
- (void)removeAllDebugMarkers;
- (void)addDebugMarker:(NSString *)arg1 range:(struct _NSRange)arg2;
- (id <MTLTexture>)newTextureWithDescriptor:(MTLTextureDescriptor *)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3;
- (void)didModifyRange:(struct _NSRange)arg1;
- (void *)contents;
@end

