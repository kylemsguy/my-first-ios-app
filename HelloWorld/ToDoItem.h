//
//  ToDoItem.h
//  HelloWorld
//
//  Created by Kyle Zhou on 2016-01-06.
//  Copyright © 2016 Kyle Zhou. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
