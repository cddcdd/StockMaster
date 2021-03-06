//
//  TimeLine.h
//  StockMaster
//
//  Created by dalikeji on 15/3/11.
//  Copyright (c) 2015年 Rebloom. All rights reserved.
//

//typedef enum LINETYPE
//{
//    LINE_CANDLE = 1,
//    LINE_VOLUME,
//    LINE_CURRENT_PRICE,
//    LINE_AVG_PRICE,
//}_LINETYPE;

#import <UIKit/UIKit.h>

#import "Utility.h"

@interface TimeLine : UIView
@property (nonatomic,assign) CGPoint startPoint;        // 线条起点
@property (nonatomic,assign) CGPoint endPoint;          // 线条终点
@property (nonatomic,strong) NSMutableArray *points;    // 多点连线数组
@property (nonatomic,copy)   NSString *color;           // 线条颜色
@property (nonatomic,assign) CGFloat lineWidth;         // 线条宽度
@property (nonatomic,assign) NSInteger lineType;        // 线的种类

@end
