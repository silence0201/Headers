//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface CNVCardParsedParameter : NSObject
{
    NSString *_name;
    NSArray *_values;
}

+ (id)parameterWithName:(id)arg1 values:(id)arg2;
@property(readonly, copy) NSArray *values; // @synthesize values=_values;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)arg1 values:(id)arg2;

@end
