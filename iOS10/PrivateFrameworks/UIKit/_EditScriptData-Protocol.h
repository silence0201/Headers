//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class NSArray, NSString;
@protocol _EditScriptData;

@protocol _EditScriptData <NSObject>
+ (id <_EditScriptData>)EditScriptDataWithArray:(NSArray *)arg1;
+ (id <_EditScriptData>)EditScriptDataWithString:(NSString *)arg1 chunkSize:(long long)arg2;
- (long long)indexOfFirstDifferenceWithOtherData:(id <_EditScriptData>)arg1 shouldReverseIterate:(_Bool)arg2;
- (long long)characterIndexForItem:(long long)arg1;
- (long long)lengthOfItem:(long long)arg1;
- (NSString *)stringValue;
- (NSString *)stringAtIndex:(long long)arg1;
- (long long)length;
@end

