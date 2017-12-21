//
//  FWRArchiverManager.h
//  WisprSDK
//
//  Created by Pablo Rueda on 18/10/16.
//  Copyright © 2016 Fon. All rights reserved.
//

@import Foundation;

/**
 Helper class for easier storage of objects.
 */
@interface FWRArchiverManager : NSObject

/**
 Store an object in persistant memory.

 @param object Object to store.
 @param path Path where to store the object.

 @return YES if the object was stored in the path, NO if it could not be stored.
 */
- (BOOL)archiveObject:(id)object toFile:(NSString *)path;

/**
 Retrieve an object from persistant memory.

 @param path Path where to retrieve the object.

 @return Object stored.
 */
- (id)unarchiveObjectWithFile:(NSString *)path;

@end
