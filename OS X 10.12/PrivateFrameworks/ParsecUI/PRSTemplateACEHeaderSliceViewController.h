//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ParsecUI/PRSCardSectionSliceViewController.h>

@class PRSRichTitleCardSection;

@interface PRSTemplateACEHeaderSliceViewController : PRSCardSectionSliceViewController
{
}

- (id)richTitleSliceView;
- (void)syncAttributes;
- (double)height;
- (void)awakeFromNib;
@property(retain, nonatomic) PRSRichTitleCardSection *richTitleCardSection;
- (id)initWithCardSection:(id)arg1 nibName:(id)arg2;
- (id)initWithRichTitleCardSection:(id)arg1;

@end
