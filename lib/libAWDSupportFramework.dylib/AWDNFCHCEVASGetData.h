/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDNFCHCEVASGetData : PBCodable <NSCopying> {
    unsigned int _filterType;
    unsigned int _filterValue;
    struct { 
        unsigned int timeDeltaFromReference : 1; 
        unsigned int timestamp : 1; 
        unsigned int filterType : 1; 
        unsigned int filterValue : 1; 
        unsigned int signupOnly : 1; 
        unsigned int swStatus : 1; 
        unsigned int terminalCapabilities : 1; 
        unsigned int version : 1; 
    } _has;
    NSData *_merchantID;
    NSString *_merchantURL;
    unsigned int _signupOnly;
    unsigned int _swStatus;
    unsigned int _terminalCapabilities;
    unsigned long long _timeDeltaFromReference;
    unsigned long long _timestamp;
    NSData *_uuidReference;
    unsigned int _version;
}

@property (nonatomic) unsigned int filterType;
@property (nonatomic) unsigned int filterValue;
@property (nonatomic) BOOL hasFilterType;
@property (nonatomic) BOOL hasFilterValue;
@property (nonatomic, readonly) BOOL hasMerchantID;
@property (nonatomic, readonly) BOOL hasMerchantURL;
@property (nonatomic) BOOL hasSignupOnly;
@property (nonatomic) BOOL hasSwStatus;
@property (nonatomic) BOOL hasTerminalCapabilities;
@property (nonatomic) BOOL hasTimeDeltaFromReference;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic, readonly) BOOL hasUuidReference;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic, retain) NSData *merchantID;
@property (nonatomic, retain) NSString *merchantURL;
@property (nonatomic) unsigned int signupOnly;
@property (nonatomic) unsigned int swStatus;
@property (nonatomic) unsigned int terminalCapabilities;
@property (nonatomic) unsigned long long timeDeltaFromReference;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) NSData *uuidReference;
@property (nonatomic) unsigned int version;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)filterType;
- (unsigned int)filterValue;
- (BOOL)hasFilterType;
- (BOOL)hasFilterValue;
- (BOOL)hasMerchantID;
- (BOOL)hasMerchantURL;
- (BOOL)hasSignupOnly;
- (BOOL)hasSwStatus;
- (BOOL)hasTerminalCapabilities;
- (BOOL)hasTimeDeltaFromReference;
- (BOOL)hasTimestamp;
- (BOOL)hasUuidReference;
- (BOOL)hasVersion;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)merchantID;
- (id)merchantURL;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setFilterType:(unsigned int)arg1;
- (void)setFilterValue:(unsigned int)arg1;
- (void)setHasFilterType:(BOOL)arg1;
- (void)setHasFilterValue:(BOOL)arg1;
- (void)setHasSignupOnly:(BOOL)arg1;
- (void)setHasSwStatus:(BOOL)arg1;
- (void)setHasTerminalCapabilities:(BOOL)arg1;
- (void)setHasTimeDeltaFromReference:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasVersion:(BOOL)arg1;
- (void)setMerchantID:(id)arg1;
- (void)setMerchantURL:(id)arg1;
- (void)setSignupOnly:(unsigned int)arg1;
- (void)setSwStatus:(unsigned int)arg1;
- (void)setTerminalCapabilities:(unsigned int)arg1;
- (void)setTimeDeltaFromReference:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUuidReference:(id)arg1;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)signupOnly;
- (unsigned int)swStatus;
- (unsigned int)terminalCapabilities;
- (unsigned long long)timeDeltaFromReference;
- (unsigned long long)timestamp;
- (id)uuidReference;
- (unsigned int)version;
- (void)writeTo:(id)arg1;

@end
