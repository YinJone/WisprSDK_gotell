//
//  WisprSDK.h
//  WisprSDK
//
//  Created by Pablo Rueda on 17/10/16.
//  Copyright © 2016 Fon. All rights reserved.
//

@import NetworkExtension;
@import CocoaLumberjack;

#import "WisprSDKDelegate.h"
#import "FWRWisprResult.h"
#import "FWRRequestManager.h"
#import "FWRArchiverManager.h"
#import "FWRLogger.h"
#import "FWRCheckInternetManager.h"
#import "FWRCheckInternetData.h"
#import "FWRUserCredentials.h"
#import "FWRNetworkInfo.h"

//! Project version number for WisprSDK.
FOUNDATION_EXPORT double WisprSDKVersionNumber;

//! Project version string for WisprSDK.
FOUNDATION_EXPORT const unsigned char WisprSDKVersionString[];

#undef LOG_LEVEL_DEF
#define LOG_LEVEL_DEF WisprSDKLogLevel
FOUNDATION_EXPORT DDLogLevel const WisprSDKLogLevel;

/**
 Manages the Wispr connections.
 */
@interface WisprSDK : NSObject

/**
 Initializes a `WisprSDK` object with all the parameters needed for wispr operations.

 @param delegate The delegate of the WisprSDK.
 @param command The command that we are handling.

 @return The newly-initialized WisprSDK.
 */
- (instancetype)initWithDelegate:(id<WisprSDKDelegate>)delegate command:(NEHotspotHelperCommand *)command;

/**
 Attempts to login in the network contained in the command. This method is synchronous.

 @return Result of the login request.
 */
- (FWRWisprResult *)wisprLogin;

/**
 Attempts to logoff from the current connected network. This method is synchronous.

 @return YES if a current connected network logoff successfully, NO in any other case.
 */
- (BOOL)wisprLogoff;

@end
