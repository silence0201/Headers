//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextInputTraits-Protocol.h>

@class NSString;

@protocol UIKeyInput <UITextInputTraits>
@property(readonly, nonatomic) _Bool hasText;
- (void)deleteBackward;
- (void)insertText:(NSString *)arg1;
@end

