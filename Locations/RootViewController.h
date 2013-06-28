//
//  RootViewController.h
//  Locations
//
//  Created by James on 6/27/13.
//  Copyright (c) 2013 James. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import "Event.h"

@interface RootViewController : UITableViewController <CLLocationManagerDelegate>

@property (nonatomic, retain) NSMutableArray *eventsArray;
@property (nonatomic, retain) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain) CLLocationManager *locationManager;
@property (nonatomic, retain) UIBarButtonItem *addButton;

- (void)addEvent;

@end

