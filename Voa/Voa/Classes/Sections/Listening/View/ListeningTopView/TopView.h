//
//  TopView.h
//  Voa
//
//  Created by xin on 2017/2/5.
//  Copyright © 2017年 DogeEggEgg. All rights reserved.
//

#import <UIKit/UIKit.h>
@class XSYParentModel;
@class TopView;
@protocol TopViewDelegate <UIScrollViewDelegate>
- (void)topView:(TopView *)top didClickButton:(UIButton *)button;
@end

@interface TopView : UIScrollView
@property (nonatomic, weak) id<TopViewDelegate>Delegate;
@property (nonatomic, assign) CGFloat offsetNum;
@property (nonatomic, strong) NSMutableArray<XSYParentModel *> *modelArr;
- (instancetype)initWithModelArr:(NSArray<XSYParentModel *>*)modelArr;
- (void)initialization;

@end
