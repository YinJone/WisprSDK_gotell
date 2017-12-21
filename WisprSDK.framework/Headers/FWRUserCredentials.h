//
//  FWRUserCredentials.h
//  WisprSDK
//
//  Created by Pablo Rueda on 17/10/16.
//  Copyright © 2016 Fon. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 A model class with the data to authenticate in the network.
 */
@interface FWRUserCredentials : NSObject

/**
 The username to authenticate. It should be unique.
 */
@property (copy, nonatomic) NSString *username;

/**
 The password of the user.
 */
@property (copy, nonatomic) NSString *password;
    
@end
