//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMCore/IMAccount.h>

@interface IMAccount (AliasAdditions)
- (id)loginName;
- (id)phoneNumberAlias;
- (id)allAliases;
- (long long)numberOfActiveAliases;
- (BOOL)isAliasActivated:(id)arg1;
- (double)timeIntervalSinceEmailWasSentForAlias:(id)arg1;
- (void)removeCreationMarker:(id)arg1;
- (void)setCreationMarker:(id)arg1;
@end

