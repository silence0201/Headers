//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class ABStyleProvider, ABUIPerson;
@protocol ABStyleProvider;

@interface ABMemberCell : UITableViewCell
{
    ABStyleProvider *_styleProvider;
    _Bool _isMeCard;
    ABUIPerson *_person;
}

@property(nonatomic) _Bool isMeCard; // @synthesize isMeCard=_isMeCard;
@property(retain, nonatomic) ABUIPerson *person; // @synthesize person=_person;
@property(readonly, nonatomic) id <ABStyleProvider> styleProvider; // @synthesize styleProvider=_styleProvider;
- (id)_cachedPlaceholderTextAttributes;
- (id)_cachedBoldTextAttributes;
- (id)_cachedRegularTextAttributes;
- (id)_cachedMemberNameRegularFont;
- (id)_attributedNameWithNameComponents:(id)arg1 delimiter:(id)arg2 highlightedIndex:(long long)arg3 romanName:(_Bool)arg4;
- (void)setUserInteractionEnabled:(_Bool)arg1;
- (void)dealloc;
- (id)initWithStyleProvider:(id)arg1 reuseIdentifier:(id)arg2;

@end

