//
//  ItemDetailViewController.h
//  iPhoneListSample
//
//  Copyright 2010 Microsoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ItemEntity.h"
#import "ListEntity.h"


@interface ItemDescriptionViewController : UIViewController <UIPickerViewDelegate, UIPickerViewDataSource>
{
	bool inAddMode;
	IBOutlet UITextField *nameTextField;
	IBOutlet UITextView *descriptionTextField;
	IBOutlet UIPickerView *priorityStatusPicker;
	ItemEntity *item;
	ListEntity *list;
	NSManagedObjectContext *managedObjectContext;
	int selectedPriority;
	int selectedStatus;
	NSArray *priorityList;
	NSArray *statusList;
}

@property (nonatomic, strong) NSArray *priorityList;
@property (nonatomic, strong) NSArray *statusList;
@property (nonatomic, strong) NSManagedObjectContext *managedObjectContext;
@property (nonatomic) int selectedPriority;
@property (nonatomic) int selectedStatus;
@property (nonatomic, strong) ListEntity *list;
@property (nonatomic, strong) ItemEntity *item;
@property (nonatomic) bool inAddMode;
@property (nonatomic, strong) IBOutlet UITextField *nameTextField;
@property (nonatomic, strong) IBOutlet UITextView *descriptionTextField;
@property (nonatomic, strong) IBOutlet UIPickerView *priorityStatusPicker;
-(IBAction)dismissKeyboard: (id) sender;
@end
