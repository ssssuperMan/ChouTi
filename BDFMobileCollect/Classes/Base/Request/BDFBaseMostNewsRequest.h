//
//  BDFBaseMostNewsRequest.h
//  BDFMobileCollect
//
//  Created by 张声扬 on 2018/11/7.
//  Copyright © 2018 zhangshengyang. All rights reserved.
//

#import "BDFBaseRequest.h"

NS_ASSUME_NONNULL_BEGIN

@interface BDFBaseMostNewsRequest : BDFBaseRequest
@property (nonatomic, assign) NSInteger after_time;
@end

NS_ASSUME_NONNULL_END