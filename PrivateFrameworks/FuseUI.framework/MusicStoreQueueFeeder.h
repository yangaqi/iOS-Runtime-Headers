/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicStoreQueueFeeder : MPQueueFeeder <MPShuffleControllerDataSource, MPStoreAVItemDownloadMetadataConsuming> {
    MusicEntityValueContext *_containerEntityValueContext;
    unsigned int _feederRevisionID;
    MusicStorePlaybackContext *_pendingLoadPlaybackContext;
    MPPlaceholderAVItem *_placeholderAVItem;
    BOOL _shouldIgnoreEntityProviderInvalidationForContentsChange;
    MPShuffleController *_shuffleController;
    MusicStoreEntityProvider *_storeEntityProvider;
    NSArray *_storeMetadataContexts;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)_operationQueue;
+ (BOOL)supportsStateRestoration;

- (void).cxx_destruct;
- (id)MPU_contentItemIdentifierCollection;
- (void)_allowsHighQualityMusicStreamingOnCellularDidChangeNotification:(id)arg1;
- (void)_configurePlaceholderItem;
- (BOOL)_hasPlaceholderItemAtIndex:(unsigned int)arg1;
- (BOOL)_reloadStoreMetadataContexts;
- (void)_resolveItemMetadataContexts:(id)arg1 clientContext:(id)arg2 responseHandler:(id /* block */)arg3;
- (unsigned int)_songShuffledIndexForIndex:(unsigned int)arg1;
- (void)_storeEntityProviderDidInvalidateNotification:(id)arg1;
- (id)_storeItemMetadataContextAtIndex:(unsigned int)arg1;
- (id)audioSessionModeForItemAtIndex:(unsigned int)arg1;
- (BOOL)canSkipToPreviousItem;
- (id)copyRawItemAtIndex:(unsigned int)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)errorResolverForItem:(id)arg1;
- (BOOL)hasValidItemAtIndex:(unsigned int)arg1;
- (id)identifierAtIndex:(unsigned int)arg1;
- (unsigned int)indexOfItemWithIdentifier:(id)arg1;
- (unsigned int)indexOfMediaItem:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned int)initialPlaybackQueueDepthForStartingIndex:(unsigned int)arg1;
- (Class)itemClass;
- (unsigned int)itemCount;
- (unsigned int)itemCountForShuffleController:(id)arg1;
- (unsigned int)itemTypeForIndex:(unsigned int)arg1;
- (id)mediaItemAtIndex:(unsigned int)arg1;
- (BOOL)playerPreparesItemsForPlaybackAsynchronously;
- (unsigned int)realRepeatType;
- (unsigned int)realShuffleType;
- (void)reloadWithPlaybackContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (unsigned int)shuffleController:(id)arg1 countOfItemIdentifier:(id)arg2 withMaximumCount:(unsigned int)arg3;
- (id)shuffleController:(id)arg1 identifierForItemAtIndex:(unsigned int)arg2;
- (void)shuffleItemsWithAnchor:(unsigned int*)arg1;
- (void)storeAVItem:(id)arg1 didReceiveResponseAssetDictionary:(id)arg2;
- (id)valueForEntityProperty:(id)arg1;
- (id)valuesForEntityProperties:(id)arg1;

@end
