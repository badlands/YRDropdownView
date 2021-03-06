//
//  YRDropdownView.h
//  YRDropdownViewExample
//
//  Created by Eli Perkins on 1/27/12.
//  Fork by Marco Marengo on 4/3/13.
//  Copyright (c) 2012 One Mighty Roar. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>

typedef void (^YRTapBlock)(void);

typedef enum {
    YRDefaultStyle,
    YRErrorStyle
} YRDropdownViewStyle;

@interface YRDropdownView : UIView
{
    NSString *titleText;
    NSString *detailText;
    UILabel *titleLabel;
    UILabel *detailLabel;
//    UIImage *backgroundImage;
    UIImageView *backgroundImageView;
//    UIImage *accessoryImage;
    UIImageView *accessoryImageView;
    SEL onTouch;
    NSDate *showStarted;
    BOOL shouldAnimate;
    BOOL isWindow;
    BOOL isView;
    
    YRTapBlock          _tapBlock;
    dispatch_queue_t    _tapQueue;
}

@property (copy) NSString *titleText;
@property (copy) NSString *detailText;
//@property (assign) UIImage *accessoryImage;
@property (nonatomic, copy) UIImage *accessoryImage;
@property (assign) float minHeight;
//@property (nonatomic, assign) UIImage *backgroundImage;
@property (nonatomic, assign) SEL onTouch;
@property (assign) BOOL shouldAnimate;
@property (assign) BOOL isWindow;
@property (assign) BOOL isView;

@property (nonatomic, copy) YRTapBlock  tapBlock;

#pragma mark - View methods

+ (YRDropdownView *)showDropdownInView:(UIView *)view
                                 title:(NSString *)title;

+ (YRDropdownView *)showDropdownInView:(UIView *)view
                                 title:(NSString *)title
                                detail:(NSString *)detail;

// MARCO
//+ (YRDropdownView *)showDropdownInView:(UIView *)view title:(NSString *)title detail:(NSString *)detail image:(UIImage *)image style:(YRDropdownViewStyle)style;


+ (YRDropdownView *)showDropdownInView:(UIView *)view
                                 title:(NSString *)title
                                detail:(NSString *)detail
                              animated:(BOOL)animated;

+ (YRDropdownView *)showDropdownInView:(UIView *)view
                                 title:(NSString *)title
                                detail:(NSString *)detail
                                 image:(UIImage *)image
                              animated:(BOOL)animated;

+ (YRDropdownView *)showDropdownInView:(UIView *)view
                                 title:(NSString *)title
                                detail:(NSString *)detail
                                 image:(UIImage *)image
                              animated:(BOOL)animated
                             hideAfter:(float)delay;

+ (BOOL)hideDropdownInView:(UIView *)view;
+ (BOOL)hideDropdownInView:(UIView *)view animated:(BOOL)animated;


- (void)setTapBlock:(YRTapBlock)tapBlock withQueue:(dispatch_queue_t)dispatchQueue;

#pragma mark -
- (void)flipViewAccordingToStatusBarOrientation:(NSNotification *)notification;
- (void)show:(BOOL)animated;
- (void)hide:(BOOL)animated;

#pragma mark - MARCO
+ (void)setBackgroundImage:(UIImage *)image;

@end