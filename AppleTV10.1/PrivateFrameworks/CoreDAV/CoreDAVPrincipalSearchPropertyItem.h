//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVLeafItem;

@interface CoreDAVPrincipalSearchPropertyItem : CoreDAVItem
{
    CoreDAVItem *_prop;
    CoreDAVLeafItem *_descriptionItem;
}

+ (id)copyParseRules;
@property(retain, nonatomic) CoreDAVLeafItem *descriptionItem; // @synthesize descriptionItem=_descriptionItem;
@property(retain, nonatomic) CoreDAVItem *prop; // @synthesize prop=_prop;
- (id)description;
- (void)dealloc;
- (id)init;

@end

