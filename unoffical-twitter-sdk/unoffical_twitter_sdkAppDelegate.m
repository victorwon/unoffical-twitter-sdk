//
//  unoffical_twitter_sdkAppDelegate.m
//  unoffical-twitter-sdk
//
//  Created by Lloyd Sparkes on 14/06/2011.
//  Copyright 2011 Lloyd Sparkes. All rights reserved.
//

#import "unoffical_twitter_sdkAppDelegate.h"

@implementation unoffical_twitter_sdkAppDelegate

@synthesize window=_window;

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    // Override point for customization after application launch.
    [self.window makeKeyAndVisible];
    return YES;
}

- (void)dealloc
{
    [_window release];
    [super dealloc];
}

@end
