//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIViewController;

__attribute__((visibility("hidden")))
@interface UIViewControllerAction : NSObject
{
    NSString *_name;
    int _transition;
    CDUnknownBlockType _completion;
    double _curlUpRevealedHeight;
    UIViewController *_viewController;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) int transition; // @synthesize transition=_transition;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic, setter=_setCurlUpRevealedHeight:) double _curlUpRevealedHeight; // @synthesize _curlUpRevealedHeight;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool animated;
- (id)initWithViewController:(id)arg1 name:(id)arg2 transition:(int)arg3;

@end

