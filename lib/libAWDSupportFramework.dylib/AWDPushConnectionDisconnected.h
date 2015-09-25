/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDPushConnectionDisconnected : PBCodable <NSCopying> {
    unsigned int _connectionType;
    unsigned int _error;
    int _genericError;
    NSString *_guid;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int connectionType : 1; 
        unsigned int error : 1; 
        unsigned int genericError : 1; 
        unsigned int linkQuality : 1; 
        unsigned int sslError : 1; 
    } _has;
    int _linkQuality;
    unsigned int _sslError;
    unsigned long long _timestamp;
}

@property (nonatomic) unsigned int connectionType;
@property (nonatomic) unsigned int error;
@property (nonatomic) int genericError;
@property (nonatomic, retain) NSString *guid;
@property (nonatomic) BOOL hasConnectionType;
@property (nonatomic) BOOL hasError;
@property (nonatomic) BOOL hasGenericError;
@property (nonatomic, readonly) BOOL hasGuid;
@property (nonatomic) BOOL hasLinkQuality;
@property (nonatomic) BOOL hasSslError;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) int linkQuality;
@property (nonatomic) unsigned int sslError;
@property (nonatomic) unsigned long long timestamp;

- (unsigned int)connectionType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)error;
- (int)genericError;
- (id)guid;
- (BOOL)hasConnectionType;
- (BOOL)hasError;
- (BOOL)hasGenericError;
- (BOOL)hasGuid;
- (BOOL)hasLinkQuality;
- (BOOL)hasSslError;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (int)linkQuality;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setConnectionType:(unsigned int)arg1;
- (void)setError:(unsigned int)arg1;
- (void)setGenericError:(int)arg1;
- (void)setGuid:(id)arg1;
- (void)setHasConnectionType:(BOOL)arg1;
- (void)setHasError:(BOOL)arg1;
- (void)setHasGenericError:(BOOL)arg1;
- (void)setHasLinkQuality:(BOOL)arg1;
- (void)setHasSslError:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setLinkQuality:(int)arg1;
- (void)setSslError:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned int)sslError;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
