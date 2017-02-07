//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MessageUI/NSObject-Protocol.h>

@class NSString, UITextContentView;

@protocol UITextContentViewDelegate <NSObject>

@optional
- (void)textContentView:(UITextContentView *)arg1 didChangeSize:(struct CGSize)arg2;
- (_Bool)textContentView:(UITextContentView *)arg1 shouldChangeSizeForContentSize:(struct CGSize)arg2;
- (_Bool)textContentView:(UITextContentView *)arg1 shouldScrollForPendingContentSize:(struct CGSize)arg2;
- (void)textContentViewDidChangeSelection:(UITextContentView *)arg1;
- (void)textContentViewDidChange:(UITextContentView *)arg1;
- (_Bool)textContentView:(UITextContentView *)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(NSString *)arg3;
- (void)textContentViewDidEndEditing:(UITextContentView *)arg1;
- (void)textContentViewDidBeginEditing:(UITextContentView *)arg1;
- (_Bool)textContentViewShouldEndEditing:(UITextContentView *)arg1;
- (_Bool)textContentViewShouldBeginEditing:(UITextContentView *)arg1;
@end

