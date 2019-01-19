# UIButton-ExpandButton
关于UIButton热区扩大

## 使用方法：

首先引入类别头文件：
> ```
> #import "UIButton+LDYExpandButton.h"
>```

然后设置设置扩大区域的属性
>```
>button2.hitTestEdgeInsets =UIEdgeInsetsMake(-50, -50, -50, -50);
>```

**注意：** 这里的-（负）表示向外围扩大，值为扩大的具体范围。demo里面还扩展了带有图片的button的方法

>```
>/**
> *  设置button的titleLabel和imageView的布局样式，及间距
> *
> *  @param style titleLabel和imageView的布局样式
> *  @param space titleLabel和imageView的间距
> */
> - (void)layoutButtonWithEdgeInsetsStyle:(LDYButtonEdgeInsetsStyle)style
>                        imageTitleSpace:(CGFloat)space;
>```
