//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaPlayer/NSCoding-Protocol.h>

@interface MPModelKind : NSObject <NSCoding>
{
    Class _modelClass;
}

+ (id)kindWithModelClass:(Class)arg1;
@property(readonly, nonatomic) Class modelClass; // @synthesize modelClass=_modelClass;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;
- (shared_ptr_cf7b8a22)predicateWithBaseProperty:(struct ModelPropertyBase *)arg1;
- (shared_ptr_cf7b8a22)representedSearchScopePredicate;
- (void)applyToView:(shared_ptr_f45adb51)arg1 withContext:(id)arg2;

@end
