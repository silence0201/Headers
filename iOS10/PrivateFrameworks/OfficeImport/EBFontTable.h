//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EBFontTable : NSObject
{
}

+ (unsigned int)xlFontIndexFromEDFontIndex:(unsigned long long)arg1;
+ (unsigned long long)edFontIndexFromXlFontIndex:(unsigned int)arg1;
+ (void)readWithState:(id)arg1;

@end
