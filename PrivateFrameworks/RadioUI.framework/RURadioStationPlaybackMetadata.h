/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@interface RURadioStationPlaybackMetadata : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    RadioArtworkCollection *_artworkCollection;
    BOOL _hasSetArtworkCollection;
    BOOL _hasSetStationHash;
    BOOL _hasSetStationID;
    BOOL _hasSetStationName;
    BOOL _hasSetStationStringID;
    BOOL _hasValidRadioStation;
    RadioStation *_station;
    NSString *_stationHash;
    long long _stationID;
    NSString *_stationName;
    NSString *_stationStringID;
}

@property (nonatomic, readonly) RadioArtworkCollection *artworkCollection;
@property (nonatomic, readonly) RadioStation *station;
@property (nonatomic, readonly, copy) NSDictionary *stationDictionary;
@property (nonatomic, readonly, copy) NSString *stationHash;
@property (nonatomic, readonly) long long stationID;
@property (nonatomic, readonly, copy) NSString *stationName;
@property (nonatomic, readonly, copy) NSString *stationStringID;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_copyWithZone:(struct _NSZone { }*)arg1 class:(Class)arg2;
- (id)_station;
- (id)artworkCollection;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithStation:(id)arg1;
- (id)initWithStationStringID:(id)arg1;
- (BOOL)isEffectivelyEqualStationWithPlaybackMetadata:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)station;
- (id)stationDictionary;
- (id)stationHash;
- (long long)stationID;
- (id)stationName;
- (id)stationStringID;

@end
