//
//  FWRLogger.h
//  WisprSDK
//
//  Created by Pablo Rueda on 17/10/16.
//  Copyright © 2016 Fon. All rights reserved.
//

@import Foundation;

/**
Log levels are used to filter out logs. Used together with flags.
 */
typedef NS_ENUM(NSUInteger, FWRLogLevel){
    /**
     No logs.
     */
    FWRLogLevelOff = 0,
    /**
     Error logs only.
     */
    FWRLogLevelError = (1 << 0),
    /**
     Error and warning logs.
     */
    FWRLogLevelWarning = (1 << 1),
    /**
     Error, warning and info logs.
     */
    FWRLogLevelInfo = (1 << 2),
    /**
     Error, warning, info and debug logs.
     */
    FWRLogLevelDebug = (1 << 3),
    /**
     Error, warning, info, debug and verbose logs.
     */
    FWRLogLevelVerbose = (1 << 4),
    /**
     All logs.
     */
    FWRLogLevelAll = NSUIntegerMax
};

/**
 Provides log of all methods of the framework to help to debug or analyze errors. It supports different levels of tracking.
 */
@interface FWRLogger : NSObject

/*!
 *  Setup logger
 *
 *  @param logLevel FONLogLevel for indicate de level of log
 */

/**
 Setup the logger with a level of tracking.

 @param logLevel Indicates the different levels of tracking we want to log.
 */
+ (void)setupLoggerWithLevel:(FWRLogLevel)logLevel;

/**
 Get the whole registry of logs.

 @return The whole registry of logs.
 */
+ (NSString *)getLog;

/**
 Deletes the registry of logs.
 */
+ (void)deleteLog;

@end
