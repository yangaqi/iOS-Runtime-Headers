/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDPushKeepAliveFailed : PBCodable <NSCopying> {
    unsigned int _connectionType;
    unsigned int _dualChannelState;
    int _error;
    NSString *_guid;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int connectionType : 1; 
        unsigned int dualChannelState : 1; 
        unsigned int error : 1; 
        unsigned int linkQuality : 1; 
    } _has;
    int _linkQuality;
    unsigned long long _timestamp;
}

@property (nonatomic) unsigned int connectionType;
@property (nonatomic) unsigned int dualChannelState;
@property (nonatomic) int error;
@property (nonatomic, retain) NSString *guid;
@property (nonatomic) BOOL hasConnectionType;
@property (nonatomic) BOOL hasDualChannelState;
@property (nonatomic) BOOL hasError;
@property (nonatomic, readonly) BOOL hasGuid;
@property (nonatomic) BOOL hasLinkQuality;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) int linkQuality;
@property (nonatomic) unsigned long long timestamp;

- (unsigned int)connectionType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)dualChannelState;
- (int)error;
- (id)guid;
- (BOOL)hasConnectionType;
- (BOOL)hasDualChannelState;
- (BOOL)hasError;
- (BOOL)hasGuid;
- (BOOL)hasLinkQuality;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (int)linkQuality;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setConnectionType:(unsigned int)arg1;
- (void)setDualChannelState:(unsigned int)arg1;
- (void)setError:(int)arg1;
- (void)setGuid:(id)arg1;
- (void)setHasConnectionType:(BOOL)arg1;
- (void)setHasDualChannelState:(BOOL)arg1;
- (void)setHasError:(BOOL)arg1;
- (void)setHasLinkQuality:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setLinkQuality:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
