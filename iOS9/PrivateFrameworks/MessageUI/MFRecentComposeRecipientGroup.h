//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MessageUI/MFComposeRecipientGroup.h>

@class CRRecentContact;

@interface MFRecentComposeRecipientGroup : MFComposeRecipientGroup
{
    CRRecentContact *_recentContact;
}

@property(readonly, retain, nonatomic) CRRecentContact *recentContact; // @synthesize recentContact=_recentContact;
- (id)unlocalizedLabel;
- (id)placeholderName;
- (id)label;
- (void)dealloc;
- (id)initWithChildren:(id)arg1 displayString:(id)arg2 recentContact:(id)arg3;

@end

