//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDictionary, NSString, _UIKeyboardChangedInformation;

@protocol _UIKeyboardArbitrationClient
- (void)queue_applicationLostFocusWithCompletion:(void (^)(void))arg1;
- (void)queue_keyboardSuppressed:(_Bool)arg1 withCompletion:(void (^)(void))arg2;
- (void)queue_keyboardTransition:(NSString *)arg1 event:(unsigned long long)arg2 withInfo:(NSDictionary *)arg3 onComplete:(void (^)(void))arg4;
- (void)queue_keyboardChangedWithCompletion:(void (^)(void))arg1;
- (void)queue_keyboardChanged:(_UIKeyboardChangedInformation *)arg1 onComplete:(void (^)(void))arg2;
@end

