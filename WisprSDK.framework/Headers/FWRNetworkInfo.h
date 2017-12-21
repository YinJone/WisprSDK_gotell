//
//  FWRNetworkInfo.h
//  WisprSDK
//
//  Created by Pablo Rueda on 17/10/16.
//  Copyright © 2016 Fon. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 The FWRNetworkInfo class conveys information about the network.
 */
@interface FWRNetworkInfo : NSObject

/**
 The SSID for the Wi-Fi network.
 */
@property (copy, nonatomic) NSString *SSID;

/**
 The BSSID for the Wi-Fi network.
 */
@property (copy, nonatomic) NSString *BSSID;

/**
 The signal strength for the Wi-Fi network. The value lies within the range 0.0 (weak/no signal) to 1.0 (strong signal).
 */
@property (assign, nonatomic) double signalStrength;

/**
 Indicates whether the network is secure.
 */
@property (assign, nonatomic) BOOL secure;

/**
 Indicates whether the network was joined automatically (YES) or joined by the user (NO).
 */
@property (assign, nonatomic) BOOL autoJoined;

/**
 Indicates whether the HotspotHelper is the chosen helper for the network. The NEHotspotNetwork must have been instantiated via a
 call to the +[NEHotspotHelper supportedNetworkInterfaces] method. This is useful to restore state after the HotspotHelper application is quit
 and restarted.
 */
@property (assign, nonatomic) BOOL chosenHelper;

/**
 Provide the password for a secure network.
 @warning The format password string must adhere to IEEE 802.11 guidelines appropriate for the particular security scheme.
 */
@property (copy, nonatomic) NSString *password;

/**
 The login url of Wispr Login.
 */
@property (copy, nonatomic) NSString *loginUrl;

/**
 The logoff url of Wispr Login
 */
@property (copy, nonatomic) NSString *logoffUrl;

/**
 Date login
 */
@property (strong, nonatomic) NSDate *dateLogin;

@end
