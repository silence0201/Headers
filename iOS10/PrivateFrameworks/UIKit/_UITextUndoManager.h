//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSUndoManager.h>

@class UITextInputController;

__attribute__((visibility("hidden")))
@interface _UITextUndoManager : NSUndoManager
{
    UITextInputController *_inputController;
}

@property(nonatomic) __weak UITextInputController *inputController; // @synthesize inputController=_inputController;
- (void).cxx_destruct;
- (void)removeAllActions;

@end
