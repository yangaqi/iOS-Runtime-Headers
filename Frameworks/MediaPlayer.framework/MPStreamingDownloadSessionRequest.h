/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStreamingDownloadSessionRequest : NSObject {
    NSString *_buyParameters;
    int _endpointType;
    MPMediaPlaybackItemMetadata *_playbackItemMetadata;
    unsigned int _preferredAssetQuality;
    BOOL _shouldStartLeaseSession;
    BOOL _shouldUseAccountLessStreaming;
    long long _storeAdamID;
}

@property (nonatomic, readonly, copy) NSString *buyParameters;
@property (nonatomic, readonly) int endpointType;
@property (nonatomic, retain) MPMediaPlaybackItemMetadata *playbackItemMetadata;
@property (nonatomic) unsigned int preferredAssetQuality;
@property (nonatomic) BOOL shouldStartLeaseSession;
@property (nonatomic) BOOL shouldUseAccountLessStreaming;
@property (nonatomic, readonly) long long storeAdamID;
@property (nonatomic, readonly) BOOL usesSubscriptionLease;

- (void).cxx_destruct;
- (id)buyParameters;
- (int)endpointType;
- (id)playbackItemMetadata;
- (unsigned int)preferredAssetQuality;
- (void)setPlaybackItemMetadata:(id)arg1;
- (void)setPreferredAssetQuality:(unsigned int)arg1;
- (void)setShouldStartLeaseSession:(BOOL)arg1;
- (void)setShouldUseAccountLessStreaming:(BOOL)arg1;
- (BOOL)shouldStartLeaseSession;
- (BOOL)shouldUseAccountLessStreaming;
- (long long)storeAdamID;
- (BOOL)usesSubscriptionLease;

@end
