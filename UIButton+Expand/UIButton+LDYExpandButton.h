//
//  UIButton+LDYExpandButton.h
//  UIButton+Expand
//
//  Created by 李东岩 on 2019/1/18.
//  Copyright © 2019 李东岩. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, LDYButtonEdgeInsetsStyle) {
    LDYButtonEdgeInsetsStyleTop, // image在上，label在下
    LDYButtonEdgeInsetsStyleLeft, // image在左，label在右
    LDYButtonEdgeInsetsStyleBottom, // image在下，label在上
    LDYButtonEdgeInsetsStyleRight // image在右，label在左
};


#define  Font(f) [UIFont systemFontOfSize:(f)]

typedef void (^ButtonBlock)(UIButton *button);

@interface UIButton (LDYExpandButton)

@property(nonatomic,strong)NSString *buttonId;//标识
@property(nonatomic,copy)ButtonBlock block;//添加点击事件
@property (nonatomic,assign) UIEdgeInsets hitTestEdgeInsets;//点击区域，默认为（0，0，0，0）; 负的为扩大


//frame初始化
+(UIButton *)LDYButtonWithTitle:(NSString *)title  titleFont:(UIFont *)titleLabelFont Image:(UIImage *)image backgroundImage:(UIImage *)backgroundImage backgroundColor:(UIColor *)backgroundColor titleColor:(UIColor *)titleLabelColor frame:(CGRect)frame;
//约束初始化
+(UIButton *)LDYButtonNoFrameWithTitle:(NSString *)title  titleFont:(UIFont *)titleLabelFont Image:(UIImage *)image backgroundImage:(UIImage *)backgroundImage backgroundColor:(UIColor *)backgroundColor titleColor:(UIColor *)titleLabelColor;

//添加block
-(void)addClickBlock:(ButtonBlock)block;


/**
 *  设置button的titleLabel和imageView的布局样式，及间距
 *
 *  @param style titleLabel和imageView的布局样式
 *  @param space titleLabel和imageView的间距
 */
- (void)layoutButtonWithEdgeInsetsStyle:(LDYButtonEdgeInsetsStyle)style
                        imageTitleSpace:(CGFloat)space;

@end

NS_ASSUME_NONNULL_END
