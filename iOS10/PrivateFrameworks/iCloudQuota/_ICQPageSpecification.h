//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _ICQPageSpecification : NSObject
{
    _Bool _hasCancelButtonForBack;
    NSString *_pageIdentifier;
    NSString *_pageTitle;
    NSString *_pageClassIdentifier;
}

@property(retain, nonatomic) NSString *pageClassIdentifier; // @synthesize pageClassIdentifier=_pageClassIdentifier;
@property(nonatomic) _Bool hasCancelButtonForBack; // @synthesize hasCancelButtonForBack=_hasCancelButtonForBack;
@property(retain, nonatomic) NSString *pageTitle; // @synthesize pageTitle=_pageTitle;
@property(retain, nonatomic) NSString *pageIdentifier; // @synthesize pageIdentifier=_pageIdentifier;
- (void).cxx_destruct;
- (id)debugDescription;

@end
