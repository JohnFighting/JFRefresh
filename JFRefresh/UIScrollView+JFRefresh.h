//
//  UIScrollView+JFRefresh.h
//  JFRefresh
//
//  Created by JohnFighting on 15/12/21.
//  Copyright © 2015年 john. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MJRefresh.h>

@interface UIScrollView (JFRefresh)
/** 添加头部刷新 */
- (void)addHeaderRefresh:(MJRefreshComponentRefreshingBlock)refreshBlock;
/** 开始头部刷新 */
- (void)beginHeaderRefresh;
/** 结束头部刷新 */
- (void)endHeaderRefresh;
/** 添加脚部刷新 */
- (void)addFooterRefresh:(MJRefreshComponentRefreshingBlock)refreshBlock;
/** 开始脚部刷新 */
- (void)beginFooterRefresh;
/** 结束脚部刷新 */
- (void)endFooterRefresh;
@end
