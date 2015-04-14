//
//  XMLDataViewController.h
//  ThirdKu
//
//  Created by ad  on 15-3-25.
//  Copyright (c) 2015年 qianhang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface XMLDataViewController : UIViewController<UITableViewDelegate,UITableViewDataSource>
@property (strong,nonatomic) NSMutableArray *message;
@end
