/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSItemMedia : NSObject {
    int _duration;
    int _fullDuration;
    long long _mediaFileSize;
    NSString *_mediaKind;
    BOOL _protected;
    NSURL *_url;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) int durationInMilliseconds;
@property (nonatomic, readonly) int fullDurationInMilliseconds;
@property (nonatomic, readonly) long long mediaFileSize;
@property (nonatomic, copy) NSString *mediaKind;
@property (getter=isProtectedMedia, nonatomic, readonly) BOOL protectedMedia;

- (id)URL;
- (void)dealloc;
- (id)description;
- (int)durationInMilliseconds;
- (int)fullDurationInMilliseconds;
- (unsigned int)hash;
- (id)init;
- (id)initWithStoreOfferDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isProtectedMedia;
- (long long)mediaFileSize;
- (id)mediaKind;
- (void)setMediaKind:(id)arg1;

@end
