//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface ABRecordMerger : NSObject
{
}

+ (void)mergeVCardRecord:(void *)arg1 withProperties:(struct __CFArray *)arg2 intoRecord:(void *)arg3;
+ (_Bool)_propertiesArray:(id)arg1 containsProperty:(int)arg2;
+ (_Bool)mergeMultiValueProperty:(int)arg1 fromRecord:(void *)arg2 intoRecord:(void *)arg3;
+ (_Bool)_addMultiValueEntry:(void *)arg1 atIndex:(long long)arg2 toMultiValue:(void *)arg3 withProperty:(int)arg4 existingValues:(struct __CFSet *)arg5;
+ (void)_addValue:(void *)arg1 withProperty:(int)arg2 toExistingValues:(struct __CFSet *)arg3;
+ (_Bool)_mergeSingleValueProperty:(int)arg1 fromRecord:(void *)arg2 intoRecord:(void *)arg3;

@end

