//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaPlayer/NSSecureCoding-Protocol.h>

@class NSArray;

@interface MPMediaItemArray : NSObject <NSSecureCoding>
{
    Class _itemArrayCoderPIDDataCodingClass;
    NSArray *_items;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItems:(id)arg1;

@end

