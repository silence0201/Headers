//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DataDetectors/DDAction.h>

__attribute__((visibility("hidden")))
@interface DDBubbleAction : DDAction
{
}

- (BOOL)runForURL:(id)arg1 context:(id)arg2;
- (BOOL)runForTextCheckingResult:(id)arg1 context:(id)arg2;
- (BOOL)runForResult:(struct __DDResult *)arg1 context:(id)arg2;
- (BOOL)runForResult:(struct __DDResult *)arg1 textCheckingResult:(id)arg2 URL:(id)arg3 context:(id)arg4;
- (id)menuItemForResult:(struct __DDResult *)arg1 textCheckingResult:(id)arg2 URL:(id)arg3 uiReady:(BOOL)arg4 context:(id)arg5 actionTarget:(id)arg6;
- (BOOL)displaysUI;
- (void)dealloc;
- (id)initWithDict:(id)arg1 bundle:(id)arg2;

@end
