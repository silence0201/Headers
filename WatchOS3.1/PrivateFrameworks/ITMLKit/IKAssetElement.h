//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/IKViewElement.h>

@class NSString, NSURL;

@interface IKAssetElement : IKViewElement
{
    _Bool _infiniteDuration;
}

+ (_Bool)shouldParseChildDOMElements;
@property(readonly, nonatomic, getter=isInfiniteDuration) _Bool infiniteDuration; // @synthesize infiniteDuration=_infiniteDuration;
@property(readonly, retain, nonatomic) NSString *serviceID;
@property(readonly, retain, nonatomic) NSString *externalID;
@property(readonly, retain, nonatomic) NSString *contentID;
@property(readonly, retain, nonatomic) NSString *bookmarkID;
@property(readonly, retain, nonatomic) NSString *adamID;
@property(readonly, retain, nonatomic) NSString *actionParams;
- (_Bool)infiniteDuration;
@property(readonly, nonatomic) long long keyDelivery;
@property(readonly, nonatomic) long long type;
@property(readonly, retain, nonatomic) NSURL *url;

@end
