//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIInputViewSetPlacementOnScreen.h>

#import <UIKit/NSSecureCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface _UIInputViewSetPlacementDragToDismiss : UIInputViewSetPlacementOnScreen <NSSecureCoding>
{
    double _offset;
}

+ (id)placementWithOffset:(double)arg1;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) double offset; // @synthesize offset=_offset;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isInteractive;
- (id)verticalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)applicatorClassForKeyboard:(_Bool)arg1;

@end

