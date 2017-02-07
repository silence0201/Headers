//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUI/ABCardCollectionViewDataSource-Protocol.h>
#import <ContactsUI/ABCardCollectionViewDelegate-Protocol.h>

@class ABAddressBook, ABCNContact, ABCNContactStore, ABCollectionViewItemFactory, AKCardViewDataSource, CNContactListCellView, CNContactPickerCardViewStyleProvider, NSArray, NSString;
@protocol CNContactListCellViewControllerDelegate;

@interface CNContactListCellViewController : NSObject <ABCardCollectionViewDataSource, ABCardCollectionViewDelegate>
{
    ABCollectionViewItemFactory *_itemFactory;
    AKCardViewDataSource *_dataSource;
    AKCardViewDataSource *_suggestionDataSource;
    ABCNContactStore *_contactStore;
    ABCNContactStore *_suggestionContactStore;
    ABAddressBook *_addressBook;
    ABAddressBook *_suggestionAddressBook;
    CNContactPickerCardViewStyleProvider *_styleProvider;
    NSString *_contactIdentifier;
    NSString *_linkIdentifier;
    BOOL _expanded;
    CNContactListCellView *_cellView;
    id <CNContactListCellViewControllerDelegate> _delegate;
    NSArray *_displayedKeys;
}

@property(copy) NSArray *displayedKeys; // @synthesize displayedKeys=_displayedKeys;
@property(nonatomic, getter=isExpanded) BOOL expanded; // @synthesize expanded=_expanded;
@property __weak id <CNContactListCellViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property __weak CNContactListCellView *cellView; // @synthesize cellView=_cellView;
- (void).cxx_destruct;
- (id)scopeForItem:(id)arg1;
- (void)itemWasClicked:(id)arg1;
- (id)dataSource;
- (id)colorForProperty:(id)arg1 identifier:(id)arg2;
- (void)editExistingKey:(id)arg1 identifier:(id)arg2 yOffset:(double)arg3;
- (void)cardViewNoteDidChange;
- (BOOL)isPrivateMeEnabled;
- (id)superview;
- (BOOL)isSelectable;
- (BOOL)suggestedCardMode;
- (BOOL)isTemplate;
- (BOOL)isEditable;
- (BOOL)isUnified;
- (BOOL)importMode;
- (BOOL)editMode;
- (BOOL)isEditing;
- (id)collectionItems;
- (BOOL)isMe;
- (BOOL)hasValuesForDisplayedKeys;
- (BOOL)hasDisplayedKeys;
- (BOOL)shouldEnableCell;
- (id)fetchContact;
- (id)makeSuggestionDataSource;
- (id)makeDataSource;
- (void)refreshCollectionView;
- (void)setEntry:(id)arg1;
@property(readonly) ABCNContact *contact;
- (void)setSuggestionAddressBook:(id)arg1;
- (void)setAddressBook:(id)arg1;
- (void)awakeFromNib;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
