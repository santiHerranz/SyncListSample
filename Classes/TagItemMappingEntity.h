//
//  TagItemMappingEntity.h
//  iPhoneListSample
//
//  Copyright 2010 Microsoft. All rights reserved.
//

#import <CoreData/CoreData.h>


@interface TagItemMappingEntity :  NSManagedObject  
{
}

@property (nonatomic, strong) NSNumber * tagID;
@property (nonatomic, strong) NSString * itemID;
@property (nonatomic, strong) NSNumber * IsTombstone;
@property (nonatomic, strong) NSNumber * localUpdate;

@end



