//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class NSString;
@protocol UIKeyboardInput;

@protocol UIKeyboardInput <NSObject>

@optional
- (void)keyboardInputChangedSelection:(id <UIKeyboardInput>)arg1;
- (_Bool)keyboardInputChanged:(id <UIKeyboardInput>)arg1;
- (_Bool)keyboardInputShouldDelete:(id <UIKeyboardInput>)arg1;
- (_Bool)keyboardInput:(id <UIKeyboardInput>)arg1 shouldInsertText:(NSString *)arg2 isMarkedText:(_Bool)arg3;
- (_Bool)keyboardInput:(id <UIKeyboardInput>)arg1 shouldReplaceTextInRange:(struct _NSRange)arg2 replacementText:(NSString *)arg3;
@end

