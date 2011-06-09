//
//  LROAuth2DemoViewController.h
//  LROAuth2Demo
//
//  Created by Luke Redpath on 01/06/2010.
//  Copyright LJR Software Limited 2010. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ASIHTTPRequestDelegate.h"

@class LROAuth2AccessToken;

@interface LROAuth2DemoViewController : UIViewController <ASIHTTPRequestDelegate, UITableViewDelegate,UITableViewDataSource, UISearchBarDelegate> {
	IBOutlet UISearchBar* search;
	IBOutlet UITableView* recentSearchesTable;
  LROAuth2AccessToken *accessToken;
  NSArray *friends;
  NSMutableData *_data;
	//IBOutlet UIView* myView;
}
@property (nonatomic, retain) UISearchBar* search;
@property (nonatomic, retain) UITableView* recentSearchesTable;
//@property (nonatomic, retain) UIView* myView;
@property (nonatomic, retain) LROAuth2AccessToken *accessToken;
@property (nonatomic, retain) NSArray *friends;

- (void)saveAccessTokenToDisk;
- (void)beginAuthorization;
- (void)loadFacebookFriends;
@end

