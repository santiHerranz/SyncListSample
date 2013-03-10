//
//  Item.h
//  iPhoneListSample
//
//  Copyright 2010 Microsoft. All rights reserved.
//

#import <CoreData/CoreData.h>


@interface ItemEntity : NSManagedObject {

}

@property (nonatomic, strong) NSDate * endDate;
@property (nonatomic, strong) NSString * ID;
@property (nonatomic, strong) NSNumber * IsTombstone;
@property (nonatomic, strong) NSString * itemDescription;
@property (nonatomic, strong) NSString * itemName;
@property (nonatomic, strong) NSString * listID;
@property (nonatomic, strong) NSNumber * localUpdate;
@property (nonatomic, strong) NSNumber * priority;
@property (nonatomic, strong) NSDate * startDate;
@property (nonatomic, strong) NSNumber * status;

-(void) logItem;
@end


