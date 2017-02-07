//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FuseUI/NSObject-Protocol.h>

@class IKAppContext, IKDOMNode, IKJSObject, IKViewElement, NSString;
@protocol IKDOMFeature;

@protocol IKDOMFeature <NSObject>
+ (IKJSObject *)makeFeatureJSObjectForFeature:(id <IKDOMFeature>)arg1;
@property(readonly, nonatomic) __weak IKAppContext *appContext;
@property(readonly, copy, nonatomic) NSString *featureName;
- (id)initWithDOMNode:(IKDOMNode *)arg1 featureName:(NSString *)arg2;

@optional
- (void)migrateToViewElement:(IKViewElement *)arg1;
@end
