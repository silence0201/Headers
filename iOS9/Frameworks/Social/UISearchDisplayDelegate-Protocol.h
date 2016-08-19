//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Social/NSObject-Protocol.h>

@class NSString, UISearchDisplayController, UITableView;

@protocol UISearchDisplayDelegate <NSObject>

@optional
- (_Bool)searchDisplayController:(UISearchDisplayController *)arg1 shouldReloadTableForSearchScope:(long long)arg2;
- (_Bool)searchDisplayController:(UISearchDisplayController *)arg1 shouldReloadTableForSearchString:(NSString *)arg2;
- (void)searchDisplayController:(UISearchDisplayController *)arg1 didHideSearchResultsTableView:(UITableView *)arg2;
- (void)searchDisplayController:(UISearchDisplayController *)arg1 willHideSearchResultsTableView:(UITableView *)arg2;
- (void)searchDisplayController:(UISearchDisplayController *)arg1 didShowSearchResultsTableView:(UITableView *)arg2;
- (void)searchDisplayController:(UISearchDisplayController *)arg1 willShowSearchResultsTableView:(UITableView *)arg2;
- (void)searchDisplayController:(UISearchDisplayController *)arg1 willUnloadSearchResultsTableView:(UITableView *)arg2;
- (void)searchDisplayController:(UISearchDisplayController *)arg1 didLoadSearchResultsTableView:(UITableView *)arg2;
- (void)searchDisplayControllerDidEndSearch:(UISearchDisplayController *)arg1;
- (void)searchDisplayControllerWillEndSearch:(UISearchDisplayController *)arg1;
- (void)searchDisplayControllerDidBeginSearch:(UISearchDisplayController *)arg1;
- (void)searchDisplayControllerWillBeginSearch:(UISearchDisplayController *)arg1;
@end

