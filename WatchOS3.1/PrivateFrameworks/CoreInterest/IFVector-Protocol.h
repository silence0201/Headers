//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreInterest/IFVectorOperating-Protocol.h>
#import <CoreInterest/NSCopying-Protocol.h>
#import <CoreInterest/NSObject-Protocol.h>

@protocol IFVector;

@protocol IFVector <NSObject, NSCopying, IFVectorOperating>
+ (id <IFVector>)vectorWithElements:(double *)arg1 length:(unsigned long long)arg2;
+ (id <IFVector>)ones:(unsigned long long)arg1;
+ (id <IFVector>)zeros:(unsigned long long)arg1;
@property(readonly) unsigned long long length;
@property(readonly) double *vector;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
@end
