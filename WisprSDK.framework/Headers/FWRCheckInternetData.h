//
//  FWRCheckInternetData.h
//  WisprSDK
//
//  Created by Pablo Rueda on 17/10/16.
//  Copyright © 2016 Fon. All rights reserved.
//

@import Foundation;

/**
 Model to check if there is internet connection.
 */
@interface FWRCheckInternetData : NSObject

/**
 URL in which it will try to connect.
 */
@property (copy, nonatomic) NSString *urlString;

/**
 Content of the URL.
 */
@property (copy, nonatomic) NSString *content;

@end
