//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SFCardSection, SFPunchout;

@interface PRSBaseCardSection : NSObject
{
    BOOL _hideDivider;
    long long _type;
    SFPunchout *_punchout;
    SFCardSection *_sfCardSection;
}

+ (id)sectionWithData:(id)arg1 responseDictionary:(id)arg2;
@property(retain, nonatomic) SFCardSection *sfCardSection; // @synthesize sfCardSection=_sfCardSection;
@property(nonatomic) BOOL hideDivider; // @synthesize hideDivider=_hideDivider;
@property(retain, nonatomic) SFPunchout *punchout; // @synthesize punchout=_punchout;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithSFSearchResult:(id)arg1 cardSection:(id)arg2;

@end
