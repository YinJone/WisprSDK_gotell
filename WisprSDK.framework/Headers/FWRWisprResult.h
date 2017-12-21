//
//  FWRWisprResult.h
//  WisprSDK
//
//  Created by Pablo Rueda on 17/10/16.
//  Copyright © 2016 Fon. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 Types messages Wispr.
 */
typedef NS_ENUM (NSInteger, FONWisprMessageType) {
    /**
     Initial redirect message.
     */
    FONWisprMessageTypeInicialRedirect = 100,
    /**
     Proxy notification.
     */
    FONWisprMessageTypeProxyNotification = 110,
    /**
     Authentication notification.
     */
    FONWisprMessageTypeAuthentication = 120,
    /**
     Logoff notification.
     */
    FONWisprMessageTypeLogoffNotification = 130,
    /**
     Response to Authentication Poll.
     */
    FONWisprMessageTypeAuthenticaionPoll = 140,
    /**
     Response to Abort Login.
     */
    FONWisprMessageTypeAbortLogin = 150
};

/**
 Response codes Wispr.
 */
typedef NS_ENUM (NSInteger, FONWisprResponseCode) {
    /**
     No error.
     */
    FONWisprResponseCodeNoError = 0,
    /**
     Login succeeded (Access ACCEPT).
     */
    FONWisprResponseCodeLoginSuccess = 50,
    /**
     Already Connected.
     */
    FONWisprResponseCodeAlreadyConnected = 51,
    /**
     Login failed (Access REJECT).
     */
    FONWisprResponseCodeLoginFailed = 100,
    /**
     RADIUS server error/timeout.
     */
    FONWisprResponseCodeServerErrorTimeout = 102,
    /**
     Network Administrator Error: Does not.
     */
    FONWisprResponseCodeErroNetwork = 105,
    /**
     Logoff succeeded.
     */
    FONWisprResponseCodeLogoffSucceded = 150,
    /**
     Login aborted.
     */
    FONWisprResponseCodeLoginAborted = 151,
    /**
     Proxy detection/repeat operation.
     */
    FONWisprResponseCodeProxy = 200,
    /**
     Authentication pending.
     */
    FONWisprResponseCodeAuthenticationPending = 201,
    /**
     Access gateway internal error.
     */
    FONWisprResponseCodeInternalError = 255
};

/**
 Fon Error Wispr
 */
typedef NS_ENUM(NSInteger, FONWisprFonErrorCode) {
    /**
     General Error.
     */
    FONWisprLoginResultErrorCodeGeneralError = 900,
    /**
     Not enough Credit.
     */
    FONWisprLoginResultErrorCodeNotEnoughCredit = 901,
    /**
     Bad Credentials.
     */
    FONWisprLoginResultErrorCodeBadCredentials = 902,
    /**
     /Black Listed.
     */
    FONWisprLoginResultErrorCodeBlackListed = 903,
    /**
     User Limit Exeeded.
     */
    FONWisprLoginResultErrorCodeUserLimitExceeded = 905,
    /**
     Hotspot Limit Exceeded.
     */
    FONWisprLoginResultErrorCodeHotspotLimitExceeded = 906,
    /**
     Not Authorized.
     */
    FONWisprLoginResultErrorCodeNotAuthorized = 907,
    /**
     Partner Error.
     */
    FONWisprLoginResultErrorCodePartnerError = 908,
    /**
     Internal Error.
     */
    FONWisprLoginResultErrorCodeInternalError = 909,
    /**
     Unknown Error.
     */
    FONWisprLoginResultErrorCodeUnknownError = 910,
    /**
     Invalid Temporary Credentials.
     */
    FONWisprLoginResultErrorCodeInvalidtemporaryCredential = 911,
    /**
     Authotization Connection Error.
     */
    FONWisprLoginResultErrorCodeAuthorizationConnectionError = 912,
    /**
     Banned Realm.
     */
    FONWisprLoginResultErrorCodeBannedRealm = 913,
    /**
     Banned User.
     */
    FONWisprLoginResultErrorCodeBannedUser = 914,
    /**
     Flood Limit Exceeded.
     */
    FONWisprLoginResultErrorCodeFloodLimitExceeded = 915,
    /**
     Datacap Exhausted.
     */
    FONWisprLoginResultErrorCodeDatacapExhausted = 916,
    /**
     Suspended.
     */
    FONWisprLoginResultErrorCodeSuspended = 917,
    /**
     Device Not Authorized.
     */
    FONWisprLoginResultErrorCodeDeviceNotAuthorized = 918,
    /**
     Not Credentials.
     */
    FONWisprLoginResultErrorCodeNotCredentials = 920,
    /**
     User has Passes.
     */
    FONWisprLoginResultErrorCodeUserHasPasses = 921,
    /**
     Insert Promocode.
     */
    FONWisprLoginResultErrorCodeInsertPromoCode = 922,
    /**
     View Promo.
     */
    FONWisprLoginResultErrorCodeViewPromo = 923,
    /**
     No Pass Purchase Available.
     */
    FONWisprLoginResultErrorCodeNoPassPurchaseAvailable = 924,
    /**
     Not enought Credit 2.
     */
    FONWisprLoginResultErrorCodeNotEnoughCredit2 = 925,
    /**
     Internal Error 2.
     */
    FONWisprLoginResultErrorCodeInternalError2 = 926,
    /**
     Not Authorized Own Fonspot.
     */
    FONWisprLoginResultErrorCodeNotAuthorizedOwnFonspot = 927
};

/**
 Internarl Error Wispr
 */
typedef NS_ENUM (NSInteger, FONWisprInternalErrorCode) {
    /**
     No Wispr Code.
     */
    FONWisprInternalErrorCodeNoWisprCode = 1,
    /**
     No Url Login.
     */
    FONWisprInternalErrorCodeNotUrlLogin = 2,
    /**
     Network insecure.
     */
    FONWisprInternalErrorCodeNetworkInsecure = 3,
    /**
     No Wispr Login Response.
     */
    FONWisprInternalErrorCodeNotWisprLoginResponse = 4,
    /**
     Error in parse XML Wispr.
     */
    FONWisprInternalErrorCodeErrorParseXML = 5,
    /**
     Error Authentication Wispr.
     */
    FONWisprInternalErrorCodeNotAuthenticationWispr = 6
};

/**
 FWRWisprResult class indicate result of Wispr Login
 */
@interface FWRWisprResult : NSObject

/**
 Response Code of Wispr Login
 */
@property (assign, nonatomic) FONWisprResponseCode responseCode;

/**
 Internarl Error of Wispr Login
 */
@property (assign, nonatomic) FONWisprInternalErrorCode internalCode;

/**
 Type Message Wispr Login
 */
@property (assign, nonatomic) FONWisprMessageType messageType;

/**
 Fon Response Code Wispr Login
 */
@property (assign, nonatomic) FONWisprFonErrorCode fonResponseCode;
    
@end
