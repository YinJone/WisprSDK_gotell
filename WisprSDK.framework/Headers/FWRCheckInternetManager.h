//
//  FWRCheckInternet.h
//  WisprSDK
//
//  Created by Pablo Rueda on 17/10/16.
//  Copyright © 2016 Fon. All rights reserved.
//

@import Foundation;
@import NetworkExtension;
#import "FWRCheckInternetData.h"

/**
 Manager used to verify if there is internet connection available.
 */
@interface FWRCheckInternetManager : NSObject

/**
 Unique instance of the class.

 @return Unique instance of the class.
 */
+ (instancetype)sharedInstance;

/**
 Model to check if there is internet connection.
 */
@property (strong, nonatomic) FWRCheckInternetData *checkInternetData;

/**
 URL in which it will try to connect to check if there is internet connection.
 */
@property (readonly, nonatomic) NSString *urlCheckInternet;

/**
 Check if the content passed as parameter is the same as the content of FWRCheckInternetManager instance.

 @param content Value of the content we are comparing.

 @return YES if it the content is equal, NO in any other case.
 */
- (BOOL)hasEqualContent:(NSString *)content;

/**
 Verify if there is internet connection available.

 @return YES if there is internet connection available, NO in any other case.
 */
- (BOOL)isInternetAvailable;

/**
 Verify if there is internet connection available.

 @param command Binds the request to the network with the NEHotspotHelperCommand object.
 
 @return YES if there is internet connection available, NO in any other case.
 */
- (BOOL)isInternetAvailableWithCommand:(NEHotspotHelperCommand *)command;

/**
 Verify if there is internet connection available.

 @param command Binds the request to the network with the NEHotspotHelperCommand object.
 @param host URL in which it will try to connect instead of the FWRCheckInternetManager instance's URL.
 
 @return YES if there is internet connection available, NO in any other case.
 */
- (BOOL)isInternetAvailableWithCommand:(NEHotspotHelperCommand *)command host:(NSString *)host;

@end
