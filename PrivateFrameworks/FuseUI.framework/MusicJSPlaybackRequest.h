/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicJSPlaybackRequest : NSObject {
    MusicStoreItemMetadataContext *_containerItem;
    NSString *_featureName;
    NSArray *_items;
    NSData *_recommendationData;
    unsigned int _shuffleMode;
    unsigned int _startIndex;
    unsigned int _upNextAction;
}

@property (nonatomic, readonly) MusicStoreItemMetadataContext *containerItem;
@property (nonatomic, readonly, copy) NSString *featureName;
@property (nonatomic, readonly, copy) NSArray *items;
@property (nonatomic, readonly, copy) NSData *recommendationData;
@property (nonatomic, readonly) unsigned int shuffleMode;
@property (nonatomic, readonly) unsigned int startIndex;
@property (nonatomic, readonly) unsigned int upNextAction;

- (void).cxx_destruct;
- (id)containerItem;
- (id)featureName;
- (id)init;
- (id)initWithJSDictionary:(id)arg1;
- (id)items;
- (id)recommendationData;
- (unsigned int)shuffleMode;
- (unsigned int)startIndex;
- (unsigned int)upNextAction;

@end
