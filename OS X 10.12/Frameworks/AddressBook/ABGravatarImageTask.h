//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AddressBook/ABTask.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface ABGravatarImageTask : ABTask
{
    NSArray *_emailAddresses;
}

- (id)run:(id *)arg1;
- (id)urlForEmailAddress:(id)arg1;
- (id)filenameForEmailAddress:(id)arg1;
- (id)hashForEmailAddress:(id)arg1;
- (long long)imageSize;
- (void)dealloc;
- (id)initWithEmailAddresses:(id)arg1;

@end
