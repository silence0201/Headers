//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsFoundation/CNObservableEvent.h>

__attribute__((visibility("hidden")))
@interface _CNObservableResultEvent : CNObservableEvent
{
    id _result;
}

- (void).cxx_destruct;
- (void)dematerializeWithObserver:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)error;
- (id)value;
- (BOOL)hasValue;
- (unsigned long long)eventType;
- (id)initWithResult:(id)arg1;

@end

