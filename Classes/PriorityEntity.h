//
//  Priority.h
//  iPhoneListSample
//
//  Copyright 2010 Microsoft. All rights reserved.
//

#import <CoreData/CoreData.h>


@interface PriorityEntity : NSManagedObject 
{
}

@property (nonatomic, strong) NSNumber* ID;
@property (nonatomic, strong) NSString * priorityName;

@end
