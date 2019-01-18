//
//  ViewController.m
//  UIButton+Expand
//
//  Created by 李东岩 on 2019/1/18.
//  Copyright © 2019 李东岩. All rights reserved.
//

#import "ViewController.h"
#import "UIButton+LDYExpandButton.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    //扩大点击区域
    UIButton *button2 =[UIButton LDYButtonWithTitle:@"button2" titleFont:Font(15) Image:nil backgroundImage:nil backgroundColor:[UIColor whiteColor] titleColor:[UIColor blackColor] frame:CGRectMake(0, 0, 200, 200)];
    
    [button2 setTitleColor:[UIColor purpleColor] forState:UIControlStateHighlighted];
    
    [button2 setTitle:@"button2点到了" forState:UIControlStateHighlighted];
    button2.layer.borderColor =[UIColor redColor].CGColor;
    button2.layer.borderWidth = 5;
    button2.center = CGPointMake(125, 125);
    
    button2.hitTestEdgeInsets =UIEdgeInsetsMake(-50, -50, -50, -50);
    [self.view addSubview:button2];
    
    [button2 addClickBlock:^(UIButton *button) {
        NSLog(@"点击了button2");
    }];
}


@end
