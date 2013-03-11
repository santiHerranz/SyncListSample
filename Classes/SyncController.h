//
//  SyncController.h
//  iPhoneListSample
//
//  Copyright 2010 Microsoft. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface SyncController : NSObject 
{
	NSManagedObjectContext *managedObjectContext;
	id __weak delegate;
	NSString *baseURL;
	NSURL *downloadURL;
	NSURL *uploadURL;
}

@property (nonatomic, strong) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, weak) id delegate;
@property (nonatomic, strong) NSString *baseURL;
@property (nonatomic, strong) NSURL *downloadURL;
@property (nonatomic, strong) NSURL *uploadURL;

- (id)initWithContext:(NSManagedObjectContext *)inContext withBaseUrl:(NSString *)url delegate:(id)myDelegate;
- (void)processDownloadResponse:(NSString *) responseString;
-(void) downloadChanges;
-(void) uploadChanges;
- (NSString *)getUploadData;
-(void) processUploadResponse:(NSString *) responseString;
-(void) synchronize;
@end


