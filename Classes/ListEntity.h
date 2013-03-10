//
//  ListEntity.h
//  iPhoneListSample
//
//  Copyright 2010 Microsoft. All rights reserved.
//


#import <CoreData/CoreData.h>


@interface ListEntity : NSManagedObject {
	
}

@property (nonatomic, strong) NSString * ID;
@property (nonatomic, strong) NSString * listName;
@property (nonatomic, strong) NSString * listDescription;
@property (nonatomic, strong) NSDate *createDate;
@property (nonatomic, strong) NSNumber *IsTombstone;
@property (nonatomic, strong) NSNumber *localUpdate;

-(void) logList;
@end
