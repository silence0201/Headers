//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableString.h>

@class NSMutableAttributedString;

@interface NSMutableStringProxyForMutableAttributedString : NSMutableString
{
    NSMutableAttributedString *mutableAttributedString;
}

- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (unsigned long long)length;
- (void)finalize;
- (void)dealloc;
- (id)initWithMutableAttributedString:(id)arg1;

@end

