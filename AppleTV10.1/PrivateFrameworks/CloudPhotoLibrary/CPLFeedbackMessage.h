//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CPLServerFeedbackMessage, NSDate, NSString;

@interface CPLFeedbackMessage : NSObject
{
    NSDate *_creationDate;
    NSString *_feedbackType;
}

+ (id)feedbackType;
@property(readonly, nonatomic) NSString *feedbackType; // @synthesize feedbackType=_feedbackType;
- (void).cxx_destruct;
@property(readonly, nonatomic) CPLServerFeedbackMessage *serverMessage;
- (id)init;

@end
