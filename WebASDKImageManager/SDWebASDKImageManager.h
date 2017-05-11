// Copyright 2015-present James Ide. All rights reserved.

#import <AsyncDisplayKit/AsyncDisplayKit.h>
#import <SDWebImage/SDWebImageManager.h>
#import "SDWebASDKImageManagerOptions.h"

@interface SDWebASDKImageManager : NSObject <ASImageCacheProtocol, ASImageDownloaderProtocol>

@property (nonatomic, assign) SDWebImageOptions webImageOptions;
@property (nonatomic, strong, readonly, nonnull) SDWebImageManager *webImageManager;
@property (nonatomic, assign) SDWebASDKImageManagerOptions imageManagerOptions;

@property (class, strong, readonly, nonnull) SDWebASDKImageManager * sharedManager;

- (instancetype _Nonnull )initWithWebImageManager:(SDWebImageManager* _Nonnull)manager NS_DESIGNATED_INITIALIZER;

@end
