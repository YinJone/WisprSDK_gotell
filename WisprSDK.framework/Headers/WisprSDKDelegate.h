//
//  WisprSDKDelegate.h
//  WisprSDK
//
//  Created by Pablo Rueda on 17/10/16.
//  Copyright © 2016 Fon. All rights reserved.
//

@import Foundation;
#import "FWRUserCredentials.h"
#import "FWRCheckInternetData.h"
#import "FWRNetworkInfo.h"

/**
 Delegate of the WisprSDK.
 */
@protocol WisprSDKDelegate<NSObject>

/**
 Credentials to use for the wispr login operation.

 @return Credentials to use for the wispr login operation.
 */
- (FWRUserCredentials *)userCredentials;

/**
 Return if the URL is secure to connect.

 @param loginURLString URL to check.

 @return YES if the URL is secure, NO if it is not.
 */
- (BOOL)isURLLoginSecure:(NSString *)loginURLString network:(FWRNetworkInfo*) networkInfo;

/**
 Model to check if there is internet connection.

 @return Model to check if there is internet connection.
 */
- (FWRCheckInternetData *)evaluateCheckInternetDataContent;

@end
