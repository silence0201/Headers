//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class NSImageView, NSTextField;

@interface PKUICardRowView : NSTableCellView
{
    NSImageView *_cardIcon;
    NSTextField *_cardLastDigits;
}

@property(retain) NSTextField *cardLastDigits; // @synthesize cardLastDigits=_cardLastDigits;
@property(retain) NSImageView *cardIcon; // @synthesize cardIcon=_cardIcon;
- (void).cxx_destruct;
- (void)setBackgroundStyle:(long long)arg1;

@end
