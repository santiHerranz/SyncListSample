//
//  TagEntity.h
//  iPhoneListSample
//
//  Copyright 2010 Microsoft. All rights reserved.
//

#import <CoreData/CoreData.h>


@interface TagEntity :  NSManagedObject  
{
}

@property (nonatomic, strong) NSNumber * ID;
@property (nonatomic, strong) NSString * tagName;

@end



