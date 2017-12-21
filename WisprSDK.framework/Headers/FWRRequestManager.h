//
//  FWRRequestManager.h
//  WisprSDK
//
//  Created by Pablo Rueda on 17/10/16.
//  Copyright © 2016 Fon. All rights reserved.
//

#import <Foundation/Foundation.h>
@import NetworkExtension;

/**
 Kind of operation used for the REST request.
 */
typedef NS_ENUM(NSUInteger, FWROperationType) {
    /**
     GET operation.
     */
    FWROperationTypeGET,
    /**
     POST operation.
     */
    FWROperationTypePOST,
    /**
     PUT operation.
     */
    FWROperationTypePUT
};

/**
 Protocol that must implement the helper class for easier REST operation requests.
 */
@protocol FWRRequestProtocol <NSObject, NSURLSessionDataDelegate, NSURLSessionTaskDelegate>
    
/**
 Retrieves the content of the url building the request with the parameters passed.

 @param command Binds the request to the network with the NEHotspotHelperCommand object.
 @param serverUrl URL where to do the request.
 @param requestBody Data to send in the body request.
 @param operationType Kind of operation used for the REST request.

 @return Response of the request as NSString.
 */
- (NSString *)responseStringCommand:(NEHotspotHelperCommand *)command urlString:(NSString *)serverUrl requestBody:(NSData *)requestBody operation:(FWROperationType)operationType;

/**
 Retrieves the content of the url building the request with the parameters passed.
 
 @param command Binds the request to the network with the NEHotspotHelperCommand object.
 @param serverUrl URL where to do the request.
 @param requestBody Data to send in the body request.
 @param operationType Kind of operation used for the REST request.
 
 @return Response of the request as NSData.
 */
- (NSData *)responseDataCommand:(NEHotspotHelperCommand *)command urlString:(NSString *)serverUrl requestBody:(NSData *)requestBody operation:(FWROperationType)operationType;
    
@end

/**
 Helper class for easier REST operation requests.
 */
@interface FWRRequestManager : NSObject<FWRRequestProtocol>

@end
