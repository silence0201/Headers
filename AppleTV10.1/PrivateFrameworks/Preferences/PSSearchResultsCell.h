//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@interface PSSearchResultsCell : UITableViewCell
{
    _Bool _shouldIndentContent;
    _Bool _shouldIndentSeparator;
}

+ (id)reuseIdentifier;
@property(nonatomic) _Bool shouldIndentSeparator; // @synthesize shouldIndentSeparator=_shouldIndentSeparator;
@property(nonatomic) _Bool shouldIndentContent; // @synthesize shouldIndentContent=_shouldIndentContent;
- (void)_resetIndentation;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
