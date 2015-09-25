/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKGame : NSObject <NSCoding, NSSecureCoding> {
    int _environment;
    GKGameInternal *_internal;
}

@property (nonatomic, readonly) NSNumber *adamID;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *bundleVersion;
@property (nonatomic, readonly) NSString *cacheKey;
@property (nonatomic, readonly) NSString *defaultCategory;
@property (getter=isDownloading, nonatomic, readonly) BOOL downloading;
@property (nonatomic, retain) NSString *engineID;
@property (nonatomic) int environment;
@property (nonatomic, readonly) NSNumber *externalVersion;
@property (nonatomic, readonly) NSDictionary *gameDescriptor;
@property (nonatomic, readonly) struct GKGameInfo { BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; } gameInfo;
@property (getter=isInstalled, nonatomic, readonly) BOOL installedGame;
@property (retain) GKGameInternal *internal;
@property (nonatomic, readonly) BOOL isGameRecommendation;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic) unsigned char platform;
@property (getter=isPrerendered, nonatomic) BOOL prerendered;
@property (nonatomic, retain) NSString *reason;
@property (nonatomic, retain) GKStoreItemInternal *storeItem;
@property (nonatomic, readonly) BOOL supportsMultiplayer;
@property (nonatomic, readonly) BOOL supportsTurnBasedMultiplayer;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

+ (id)currentGame;
+ (id)currentGameIncludingGameCenter:(BOOL)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (BOOL)instancesRespondToSelector:(SEL)arg1;
+ (BOOL)isGameCenter;
+ (BOOL)isPreferences;
+ (void)loadGamesWithBundleIDs:(id)arg1 withCompletionHandler:(id /* block */)arg2;
+ (void)loadTopGamesWithCompletionHandler:(id /* block */)arg1;
+ (void)markGameRecommendationsDisplayed:(id)arg1 complete:(id /* block */)arg2;
+ (void)markGameRecommendationsViewed:(id)arg1 complete:(id /* block */)arg2;
+ (void)setCurrentGameFromInternal:(id)arg1 serverEnvironment:(int)arg2;
+ (BOOL)supportsSecureCoding;
+ (void)updateGames:(id)arg1 withCompletionHandler:(id /* block */)arg2;

- (id)cacheKey;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (int)environment;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)gameDescriptor;
- (struct GKGameInfo { BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; })gameInfo;
- (void)getFriendPlayersForAchievement:(id)arg1 handler:(id /* block */)arg2;
- (void)getFriendPlayersForLeaderboard:(id)arg1 handler:(id /* block */)arg2;
- (void)getFriendPlayersIncludingCompatibleGames:(BOOL)arg1 handler:(id /* block */)arg2;
- (unsigned int)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)internal;
- (BOOL)isDownloading;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isGameCenter;
- (BOOL)isGameRecommendation;
- (BOOL)isInstalled;
- (BOOL)isStoreItemUnexpired;
- (void)loadGameRatingWithCompletionHandler:(id /* block */)arg1;
- (void)loadTellAFriendMessageWithCompletionHandler:(id /* block */)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)setEnvironment:(int)arg1;
- (void)setInternal:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)submitRating:(float)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)valueForUndefinedKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI

+ (void)gameCenterGamePurchasedWithBundleIdentifier:(id)arg1;
+ (void)launchAppStoreWithGameCenterGames;
+ (void)preloadIconsForGames:(id)arg1 style:(int)arg2 handler:(id /* block */)arg3;
+ (void)removeHistoryForGameWithBundleIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
+ (struct CGSize { float x1; float x2; })serverImageSizeForIconStyle:(int)arg1;

- (id)URLStringForImageWithShineIfNeeded;
- (void)_gkSetSharingInfo:(id)arg1;
- (id)_gkSharingInfo;
- (id)_imageSourceForIconSize:(struct CGSize { float x1; float x2; })arg1;
- (id)_imageURLForIconStyle:(int)arg1;
- (int)activityViewController:(id)arg1 attachmentULRTypeForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 itemsForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 thumbnailForActivityType:(id)arg2;
- (id)activityViewControllerOperation:(id)arg1;
- (id)activityViewControllerPlaceholderItems:(id)arg1;
- (id)activityViewControllerSubject:(id)arg1;
- (id)cachedIconForStyle:(int)arg1;
- (id)fetchSharingInfo;
- (id)iconForStyle:(int)arg1;
- (id)imageSourceForIconStyle:(int)arg1;
- (id)imageSourceForiOSIconStyle:(int)arg1;
- (id)loadIconForSize:(struct CGSize { float x1; float x2; })arg1 scale:(float)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)loadIconForStyle:(int)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)logoImageWithMaximumSize:(struct CGSize { float x1; float x2; })arg1;
- (id)macBrushForIconStyle:(int)arg1;
- (void)presentStoreSheetFromViewController:(id)arg1 context:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)removeGameWithCompletionHandler:(id /* block */)arg1;
- (void)uninstallApplicationWithBundleIdentifier:(id)arg1 withCompletionHandler:(id /* block */)arg2;

@end
