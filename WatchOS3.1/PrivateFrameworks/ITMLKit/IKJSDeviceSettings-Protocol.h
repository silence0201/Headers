//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/JSExport-Protocol.h>

@class IKJSRestrictions, NSString;

@protocol IKJSDeviceSettings <JSExport>
@property(readonly, nonatomic) IKJSRestrictions *restrictions;
@property(readonly, retain, nonatomic) NSString *storefrontCountryCode;
@property(readonly, retain, nonatomic) NSString *language;
@end
