//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary;

@interface SFTableAlignmentSchema : NSObject <NSSecureCoding>
{
    NSArray *_tableColumnAlignment;
    NSDictionary *_metadata;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(copy, nonatomic) NSArray *tableColumnAlignment; // @synthesize tableColumnAlignment=_tableColumnAlignment;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)tableColumnAlignment:(unsigned long long)arg1;

@end
