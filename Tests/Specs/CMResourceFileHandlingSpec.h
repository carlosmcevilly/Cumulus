//
//  CMResourceFileHandlingSpec.h
//  Cumulus
//
//  Created by John Clayton on 11/23/11.
//  Copyright 2011 Fivesquare Software, LLC. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "OCExampleGroup.h"

@class CMResource;

@interface CMResourceFileHandlingSpec : OCExampleGroup {
 // add any ivars you need to store state for specs
}

// add properties as needed

@property (nonatomic, strong) CMResource *service;
@property (strong) NSURL *downloadedFileURL;
@property (strong) NSURL *copiedFileURL;
@property (nonatomic, strong) NSString *cachesDir;

@end
