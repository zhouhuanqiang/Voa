//
//  XSYEssayPicModel.h
//  Voa
//
//  Created by xin on 2017/2/11.
//  Copyright © 2017年 DogeEggEgg. All rights reserved.
//

#import <Foundation/Foundation.h>
@class XSYEssayImageModel;
@interface XSYEssayDataModel : NSObject
@property (nonatomic, copy) NSString *text;
@property (nonatomic, strong) XSYEssayImageModel *image;

@end
