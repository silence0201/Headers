//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CALayer, NSString;

__attribute__((visibility("hidden")))
@interface CAStateControllerAnimation : NSObject
{
    CALayer *_layer;
    NSString *_key;
}

@property(readonly, nonatomic) NSString *key; // @synthesize key=_key;
@property(readonly, nonatomic) CALayer *layer; // @synthesize layer=_layer;
- (void)dealloc;
- (id)initWithLayer:(id)arg1 key:(id)arg2;

@end

