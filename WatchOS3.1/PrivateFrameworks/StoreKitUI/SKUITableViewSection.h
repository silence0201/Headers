//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SKUITableViewSectionDelegate;

@interface SKUITableViewSection : NSObject
{
    id <SKUITableViewSectionDelegate> _delegate;
    _Bool _hidesHeaderView;
    long long _sectionIndex;
}

@property(nonatomic) long long sectionIndex; // @synthesize sectionIndex=_sectionIndex;
@property(nonatomic) _Bool hidesHeaderView; // @synthesize hidesHeaderView=_hidesHeaderView;
@property(nonatomic) __weak id <SKUITableViewSectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forIndexPath:(id)arg3;
- (id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2;
@property(readonly, nonatomic) long long numberOfRowsInSection;
- (double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2;
- (id)headerViewForTableView:(id)arg1;
- (id)footerViewForTableView:(id)arg1;

@end

