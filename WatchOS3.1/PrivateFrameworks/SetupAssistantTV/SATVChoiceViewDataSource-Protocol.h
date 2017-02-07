//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SetupAssistantTV/NSObject-Protocol.h>

@class NSString, SATVChoiceView;

@protocol SATVChoiceViewDataSource <NSObject>
- (NSString *)choiceHeaderButtonTextForChoiceView:(SATVChoiceView *)arg1;
- (NSString *)subtitleTextForChoiceView:(SATVChoiceView *)arg1;
- (NSString *)titleTextForChoiceView:(SATVChoiceView *)arg1;
- (NSString *)choiceView:(SATVChoiceView *)arg1 textForChoice:(unsigned long long)arg2;

@optional
- (NSString *)footnoteTextForChoiceView:(SATVChoiceView *)arg1;
- (NSString *)footerButtonTextForChoiceView:(SATVChoiceView *)arg1;
@end
