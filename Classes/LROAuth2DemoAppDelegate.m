//
//  LROAuth2DemoAppDelegate.m
//  LROAuth2Demo
//
//  Created by Luke Redpath on 01/06/2010.
//  Copyright LJR Software Limited 2010. All rights reserved.
//

#import "LROAuth2DemoAppDelegate.h"
#import "LROAuth2DemoViewController.h"

@implementation LROAuth2DemoAppDelegate

@synthesize window;
@synthesize viewController;


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {    
	UINavigationController* navController = [[UINavigationController alloc] init];
	
	LROAuth2DemoViewController* viewCont = [[LROAuth2DemoViewController alloc] initWithNibName:@"LROAuth2DemoViewController" bundle:[NSBundle mainBundle]]; 
	[navController pushViewController:viewCont animated:YES];
	[viewCont release];
	[window addSubview:navController.view];
	[window makeKeyAndVisible];

	return YES;
}

- (void)dealloc 
{
  [viewController release];
  [window release];
  [super dealloc];
}

@end
