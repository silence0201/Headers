//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 19 2016 22:08:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCopying-Protocol.h>

@class NSString, UIAlertController, UIColor, UIImage, UIInterfaceAction, UIViewController;
@protocol UIAlertActionMutablePropertyObservering, UIAlertActionViewRepresentation_Internal;

@interface UIAlertAction : NSObject <NSCopying>
{
    NSString *_title;
    long long _titleTextAlignment;
    _Bool _enabled;
    _Bool _checked;
    _Bool _isPreferred;
    UIColor *_imageTintColor;
    UIColor *_titleTextColor;
    long long _style;
    CDUnknownBlockType _handler;
    CDUnknownBlockType _simpleHandler;
    UIImage *_image;
    CDUnknownBlockType _shouldDismissHandler;
    NSString *__descriptiveText;
    UIViewController *_contentViewController;
    NSString *_keyCommandInput;
    long long _keyCommandModifierFlags;
    id <UIAlertActionViewRepresentation_Internal> __representer;
    UIInterfaceAction<UIAlertActionMutablePropertyObservering> *__interfaceActionRepresentation;
    UIAlertController *__alertController;
}

+ (id)actionWithTitle:(id)arg1 style:(long long)arg2 handler:(CDUnknownBlockType)arg3;
+ (id)_actionWithContentViewController:(id)arg1 style:(long long)arg2 handler:(CDUnknownBlockType)arg3;
+ (id)_actionWithContentViewController:(id)arg1 style:(long long)arg2;
+ (id)_actionWithTitle:(id)arg1 image:(id)arg2 style:(long long)arg3 handler:(CDUnknownBlockType)arg4 shouldDismissHandler:(CDUnknownBlockType)arg5;
+ (id)_actionWithTitle:(id)arg1 descriptiveText:(id)arg2 image:(id)arg3 style:(long long)arg4 handler:(CDUnknownBlockType)arg5 shouldDismissHandler:(CDUnknownBlockType)arg6;
@property(nonatomic, setter=_setAlertController:) UIAlertController *_alertController; // @synthesize _alertController=__alertController;
@property(setter=_setInterfaceActionRepresentation:) UIInterfaceAction<UIAlertActionMutablePropertyObservering> *_interfaceActionRepresentation; // @synthesize _interfaceActionRepresentation=__interfaceActionRepresentation;
@property(setter=_setRepresenter:) id <UIAlertActionViewRepresentation_Internal> _representer; // @synthesize _representer=__representer;
@property(nonatomic, getter=_keyCommandModifierFlags, setter=_setKeyCommandModifierFlags:) long long keyCommandModifierFlags; // @synthesize keyCommandModifierFlags=_keyCommandModifierFlags;
@property(copy, nonatomic, getter=_keyCommandInput, setter=_setKeyCommandInput:) NSString *keyCommandInput; // @synthesize keyCommandInput=_keyCommandInput;
@property(retain, nonatomic, getter=_contentViewController, setter=_setContentViewController:) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(copy, nonatomic, setter=_setDescriptiveText:) NSString *_descriptiveText; // @synthesize _descriptiveText=__descriptiveText;
@property(copy, nonatomic) CDUnknownBlockType shouldDismissHandler; // @synthesize shouldDismissHandler=_shouldDismissHandler;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) CDUnknownBlockType simpleHandler; // @synthesize simpleHandler=_simpleHandler;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)_setKeyCommandInput:(id)arg1 modifierFlags:(long long)arg2;
- (void)_didAddContentViewController;
- (void)_willAddContentViewController;
- (id)_titleTextColor;
- (void)_setTitleTextColor:(id)arg1;
- (id)_imageTintColor;
- (void)_setImageTintColor:(id)arg1;
@property(setter=_setIsPreferred:) _Bool _isPreferred;
- (_Bool)_isChecked;
- (void)_setChecked:(_Bool)arg1;
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (void)_setTitleTextAlignment:(long long)arg1;
- (long long)_titleTextAlignment;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

