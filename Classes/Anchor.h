//
//  Anchor.h
//  iPhoneListSample
//
//  Copyright 2010 Microsoft. All rights reserved.
//

#import <CoreData/CoreData.h>


@interface Anchor :  NSManagedObject  
{
}

@property (nonatomic, strong) NSString * syncBlob;
@property (nonatomic, strong) NSString * userID;
@property (nonatomic, strong) NSNumber * hasSynced;
@property (nonatomic, strong) NSString * userName;
@end



