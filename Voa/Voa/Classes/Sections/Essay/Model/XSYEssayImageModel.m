//
//  XSYEssayImageModel.m
//  Voa
//
//  Created by xin on 2017/2/12.
//  Copyright © 2017年 DogeEggEgg. All rights reserved.
//

#import "XSYEssayImageModel.h"

@implementation XSYEssayImageModel
// 替换系统关键字 新的 -》 系统关键字
+ (NSDictionary *)mj_replacedKeyFromPropertyName{
    return @{@"URL" : @"_url"};
}
@end
