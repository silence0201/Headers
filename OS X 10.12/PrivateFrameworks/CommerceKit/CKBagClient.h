//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CommerceKit/ISURLBagObserver-Protocol.h>

@class CKBag;

@interface CKBagClient : NSObject <ISURLBagObserver>
{
    CKBag *_bag;
    CDUnknownBlockType _observerBlock;
}

@property(copy) CDUnknownBlockType observerBlock; // @synthesize observerBlock=_observerBlock;
@property(retain) CKBag *bag; // @synthesize bag=_bag;
- (void).cxx_destruct;
- (void)urlBagDidUpdateWithSuccess:(BOOL)arg1 error:(id)arg2;

@end
