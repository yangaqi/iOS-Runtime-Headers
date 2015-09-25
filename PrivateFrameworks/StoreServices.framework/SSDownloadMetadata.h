/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSDownloadMetadata : NSObject <NSCoding, NSCopying, SSXPCCoding> {
    NSMutableDictionary *_dictionary;
    int _keyStyle;
    NSLock *_lock;
}

@property (readonly) NSArray *MD5HashStrings;
@property (readonly, retain) NSData *appReceiptData;
@property unsigned long long artistIdentifier;
@property (copy) NSString *artistName;
@property (getter=isAutomaticDownload) BOOL automaticDownload;
@property (retain) NSURL *cancelDownloadURL;
@property (getter=isContentRestricted, readonly) BOOL contentRestricted;
@property (retain) NSString *copyright;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDeviceBasedVPP) BOOL deviceBasedVPP;
@property (retain) NSDictionary *dictionary;
@property (retain) NSString *downloadKey;
@property (readonly) NSNumber *downloaderAccountIdentifier;
@property (retain) NSData *epubRightsData;
@property (retain) NSString *fileExtension;
@property (retain) NSURL *fullSizeImageURL;
@property (retain) NSString *genre;
@property unsigned long long genreIdentifier;
@property (readonly) unsigned int hash;
@property unsigned long long itemIdentifier;
@property int keyStyle;
@property (retain) NSString *kind;
@property (retain) NSURL *launchExtrasUrl;
@property (copy) NSString *longDescription;
@property (readonly) NSNumber *numberOfBytesToHash;
@property (copy) NSString *pageProgressionDirection;
@property unsigned long long preOrderIdentifier;
@property (copy) NSString *preferredAssetFlavor;
@property (readonly) NSDictionary *primaryAssetDictionary;
@property (retain) NSURL *primaryAssetURL;
@property (copy) NSString *redownloadActionParameters;
@property (getter=isRedownloadDownload) BOOL redownloadDownload;
@property (retain) NSDate *releaseDate;
@property (retain) NSString *releaseDateString;
@property (retain) NSNumber *releaseYear;
@property (copy) id requiredDeviceCapabilities;
@property (copy) NSString *shortDescription;
@property BOOL shouldDownloadAutomatically;
@property (retain) NSArray *sinfs;
@property (retain) NSString *sortArtistName;
@property (retain) NSString *sortCollectionName;
@property (retain) NSString *sortTitle;
@property (retain) NSString *subtitle;
@property (readonly) Class superclass;
@property (readonly) SSItemImageCollection *thumbnailImageCollection;
@property (retain) NSURL *thumbnailImageURL;
@property (retain) NSString *thumbnailNewsstandBindingEdge;
@property (retain) NSString *thumbnailNewsstandBindingType;
@property (retain) NSString *title;
@property (retain) NSString *transactionIdentifier;
@property (copy) NSURL *transitMapDataURL;
@property (getter=isTvTemplate) BOOL tvTemplate;

- (id)MD5HashStrings;
- (id)_assetDictionary;
- (id)_dateValueForValue:(id)arg1;
- (id)_newDateFormatter;
- (id)_newImageCollectionWithURLString:(id)arg1;
- (id)_releaseDateValue;
- (void)_setValue:(id)arg1 forTopLevelKey:(id)arg2;
- (void)_setValueCopy:(id)arg1 forMetadataKey:(id)arg2;
- (id)_stringValueForValue:(id)arg1;
- (id)_thumbnailArtworkImage;
- (id)_urlValueForValue:(id)arg1;
- (id)_valueForFirstAvailableTopLevelKey:(id)arg1;
- (id)appReceiptData;
- (id)applicationIdentifier;
- (unsigned long long)artistIdentifier;
- (id)artistName;
- (BOOL)artworkIsPrerendered;
- (id)betaExternalVersionIdentifier;
- (id)bundleIdentifier;
- (id)cancelDownloadURL;
- (id)cloudIdentifier;
- (id)collectionArtistName;
- (unsigned long long)collectionIdentifier;
- (id)collectionIndexInCollectionGroup;
- (id)collectionName;
- (unsigned long long)composerIdentifier;
- (id)composerName;
- (id)contentRating;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWritableMetadata;
- (id)copyXPCEncoding;
- (id)copyright;
- (void)dealloc;
- (id)dictionary;
- (id)documentTargetIdentifier;
- (id)downloadKey;
- (id)downloaderAccountIdentifier;
- (id)durationInMilliseconds;
- (void)encodeWithCoder:(id)arg1;
- (id)episodeIdentifier;
- (id)episodeSortIdentifier;
- (id)epubRightsData;
- (id)fileExtension;
- (id)fullSizeImageURL;
- (id)genre;
- (unsigned long long)genreIdentifier;
- (id)indexInCollection;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithItem:(id)arg1;
- (id)initWithItem:(id)arg1 offer:(id)arg2;
- (id)initWithKind:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (BOOL)isAutomaticDownload;
- (BOOL)isCompilation;
- (BOOL)isContentRestricted;
- (BOOL)isDeviceBasedVPP;
- (BOOL)isExplicitContent;
- (BOOL)isHighDefinition;
- (BOOL)isRedownloadDownload;
- (BOOL)isRental;
- (BOOL)isSample;
- (BOOL)isTvTemplate;
- (unsigned long long)itemIdentifier;
- (int)keyStyle;
- (id)kind;
- (id)launchExtrasUrl;
- (id)longDescription;
- (id)longSeasonDescription;
- (id)networkName;
- (id)newDownloadProperties;
- (id)numberOfBytesToHash;
- (id)numberOfCollectionsInCollectionGroup;
- (id)numberOfItemsInCollection;
- (id)pageProgressionDirection;
- (id)podcastEpisodeGUID;
- (id)podcastFeedURL;
- (id)podcastType;
- (unsigned long long)preOrderIdentifier;
- (id)preferredAssetFlavor;
- (id)primaryAssetDictionary;
- (id)primaryAssetURL;
- (id)purchaseDate;
- (id)redownloadActionParameters;
- (id)releaseDate;
- (id)releaseDateString;
- (id)releaseYear;
- (id)requiredDeviceCapabilities;
- (unsigned long long)sagaIdentifier;
- (id)seasonNumber;
- (id)seriesName;
- (void)setArtistIdentifier:(unsigned long long)arg1;
- (void)setArtistName:(id)arg1;
- (void)setArtworkIsPrerendered:(BOOL)arg1;
- (void)setAutomaticDownload:(BOOL)arg1;
- (void)setBetaExternalVersionIdentifier:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setCancelDownloadURL:(id)arg1;
- (void)setCloudIdentifier:(id)arg1;
- (void)setCollectionArtistName:(id)arg1;
- (void)setCollectionIdentifier:(unsigned long long)arg1;
- (void)setCollectionIndexInCollectionGroup:(id)arg1;
- (void)setCollectionName:(id)arg1;
- (void)setCompilation:(BOOL)arg1;
- (void)setComposerIdentifier:(unsigned long long)arg1;
- (void)setComposerName:(id)arg1;
- (void)setContentRating:(id)arg1;
- (void)setCopyright:(id)arg1;
- (void)setDeviceBasedVPP:(BOOL)arg1;
- (void)setDictionary:(id)arg1;
- (void)setDocumentTargetIdentifier:(id)arg1;
- (void)setDownloadKey:(id)arg1;
- (void)setDurationInMilliseconds:(id)arg1;
- (void)setEpisodeIdentifier:(id)arg1;
- (void)setEpisodeSortIdentifier:(id)arg1;
- (void)setEpubRightsData:(id)arg1;
- (void)setExplicitContent:(BOOL)arg1;
- (void)setFileExtension:(id)arg1;
- (void)setFullSizeImageURL:(id)arg1;
- (void)setGenre:(id)arg1;
- (void)setGenreIdentifier:(unsigned long long)arg1;
- (void)setHighDefinition:(BOOL)arg1;
- (void)setIndexInCollection:(id)arg1;
- (void)setItemIdentifier:(unsigned long long)arg1;
- (void)setKeyStyle:(int)arg1;
- (void)setKind:(id)arg1;
- (void)setLaunchExtrasUrl:(id)arg1;
- (void)setLongDescription:(id)arg1;
- (void)setLongSeasonDescription:(id)arg1;
- (void)setMD5HashStrings:(id)arg1 numberOfBytesToHash:(id)arg2;
- (void)setNetworkName:(id)arg1;
- (void)setNumberOfCollectionsInCollectionGroup:(id)arg1;
- (void)setNumberOfItemsInCollection:(id)arg1;
- (void)setPageProgressionDirection:(id)arg1;
- (void)setPodcastEpisodeGUID:(id)arg1;
- (void)setPodcastFeedURL:(id)arg1;
- (void)setPodcastType:(id)arg1;
- (void)setPreOrderIdentifier:(unsigned long long)arg1;
- (void)setPreferredAssetFlavor:(id)arg1;
- (void)setPrimaryAssetURL:(id)arg1;
- (void)setPurchaseDate:(id)arg1;
- (void)setRedownloadActionParameters:(id)arg1;
- (void)setRedownloadDownload:(BOOL)arg1;
- (void)setReleaseDate:(id)arg1;
- (void)setReleaseDateString:(id)arg1;
- (void)setReleaseYear:(id)arg1;
- (void)setRental:(BOOL)arg1;
- (void)setRequiredDeviceCapabilities:(id)arg1;
- (void)setSagaIdentifier:(unsigned long long)arg1;
- (void)setSample:(BOOL)arg1;
- (void)setSeasonNumber:(id)arg1;
- (void)setSeriesName:(id)arg1;
- (void)setShortDescription:(id)arg1;
- (void)setShouldDownloadAutomatically:(BOOL)arg1;
- (void)setSinfs:(id)arg1;
- (void)setSortArtistName:(id)arg1;
- (void)setSortCollectionName:(id)arg1;
- (void)setSortTitle:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setThumbnailImageURL:(id)arg1;
- (void)setThumbnailNewsstandBindingEdge:(id)arg1;
- (void)setThumbnailNewsstandBindingType:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTransactionIdentifier:(id)arg1;
- (void)setTransitMapDataURL:(id)arg1;
- (void)setTvTemplate:(BOOL)arg1;
- (void)setValue:(id)arg1 forMetadataKey:(id)arg2;
- (void)setValuesFromDownload:(id)arg1;
- (void)setVariantIdentifier:(id)arg1;
- (void)setVideoDetailsDictionary:(id)arg1;
- (void)setViewStoreItemURL:(id)arg1;
- (id)shortDescription;
- (BOOL)shouldDownloadAutomatically;
- (id)sinfs;
- (id)sortArtistName;
- (id)sortCollectionName;
- (id)sortTitle;
- (id)subtitle;
- (id)thumbnailImageCollection;
- (id)thumbnailImageURL;
- (id)thumbnailNewsstandBindingEdge;
- (id)thumbnailNewsstandBindingType;
- (id)title;
- (id)transactionIdentifier;
- (id)transitMapDataURL;
- (id)valueForFirstAvailableKey:(id)arg1;
- (id)valueForMetadataKey:(id)arg1;
- (id)variantIdentifier;
- (id)videoDetailsDictionary;
- (id)viewStoreItemURL;

@end
