//
//  DEHTTPRequest.h
//  unoffical-twitter-sdk
//
//  Created by Jay Graves on 11/28/11.
//  Copyright (c) 2011 Double Encore Inc. All rights reserved.
//
// A quick class that mimics ASIHTTPRequest
// Warning! This is not a full ASIHTTPRequest replacement.
// It only does what is necessary to authenticate with Twitter.

#import <Foundation/Foundation.h>

@interface DEHTTPRequest : NSObject <NSURLConnectionDelegate, NSURLConnectionDataDelegate>

@property (nonatomic, retain) NSURL *url;
@property (nonatomic, retain) NSString *requestMethod;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, assign) int responseStatusCode;
@property (nonatomic, retain) NSString *responseStatusMessage;
@property (nonatomic, retain) NSString *responseString;
@property (nonatomic, retain) NSMutableData *responseData;
@property (nonatomic, retain) NSURLConnection *urlConnection;

+ (id)requestWithURL:(NSURL *)newURL;

- (id)initWithURL:(NSURL *)newURL;
- (void)addRequestHeader:(NSString *)header value:(NSString *)value;
- (void)startSynchronous;

@end
