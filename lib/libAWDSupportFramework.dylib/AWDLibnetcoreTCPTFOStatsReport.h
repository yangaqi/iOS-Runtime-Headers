/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDLibnetcoreTCPTFOStatsReport : PBCodable <NSCopying> {
    struct { 
        unsigned int numTfoBlackholed : 1; 
        unsigned int numTfoCookieInvalid : 1; 
        unsigned int numTfoCookieRcv : 1; 
        unsigned int numTfoCookieReq : 1; 
        unsigned int numTfoCookieReqRcv : 1; 
        unsigned int numTfoCookieSent : 1; 
        unsigned int numTfoFallback : 1; 
        unsigned int numTfoSynDataAcked : 1; 
        unsigned int numTfoSynDataRcv : 1; 
        unsigned int numTfoSynDataSent : 1; 
    } _has;
    unsigned long long _numTfoBlackholed;
    unsigned long long _numTfoCookieInvalid;
    unsigned long long _numTfoCookieRcv;
    unsigned long long _numTfoCookieReq;
    unsigned long long _numTfoCookieReqRcv;
    unsigned long long _numTfoCookieSent;
    unsigned long long _numTfoFallback;
    unsigned long long _numTfoSynDataAcked;
    unsigned long long _numTfoSynDataRcv;
    unsigned long long _numTfoSynDataSent;
}

@property (nonatomic) BOOL hasNumTfoBlackholed;
@property (nonatomic) BOOL hasNumTfoCookieInvalid;
@property (nonatomic) BOOL hasNumTfoCookieRcv;
@property (nonatomic) BOOL hasNumTfoCookieReq;
@property (nonatomic) BOOL hasNumTfoCookieReqRcv;
@property (nonatomic) BOOL hasNumTfoCookieSent;
@property (nonatomic) BOOL hasNumTfoFallback;
@property (nonatomic) BOOL hasNumTfoSynDataAcked;
@property (nonatomic) BOOL hasNumTfoSynDataRcv;
@property (nonatomic) BOOL hasNumTfoSynDataSent;
@property (nonatomic) unsigned long long numTfoBlackholed;
@property (nonatomic) unsigned long long numTfoCookieInvalid;
@property (nonatomic) unsigned long long numTfoCookieRcv;
@property (nonatomic) unsigned long long numTfoCookieReq;
@property (nonatomic) unsigned long long numTfoCookieReqRcv;
@property (nonatomic) unsigned long long numTfoCookieSent;
@property (nonatomic) unsigned long long numTfoFallback;
@property (nonatomic) unsigned long long numTfoSynDataAcked;
@property (nonatomic) unsigned long long numTfoSynDataRcv;
@property (nonatomic) unsigned long long numTfoSynDataSent;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasNumTfoBlackholed;
- (BOOL)hasNumTfoCookieInvalid;
- (BOOL)hasNumTfoCookieRcv;
- (BOOL)hasNumTfoCookieReq;
- (BOOL)hasNumTfoCookieReqRcv;
- (BOOL)hasNumTfoCookieSent;
- (BOOL)hasNumTfoFallback;
- (BOOL)hasNumTfoSynDataAcked;
- (BOOL)hasNumTfoSynDataRcv;
- (BOOL)hasNumTfoSynDataSent;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)numTfoBlackholed;
- (unsigned long long)numTfoCookieInvalid;
- (unsigned long long)numTfoCookieRcv;
- (unsigned long long)numTfoCookieReq;
- (unsigned long long)numTfoCookieReqRcv;
- (unsigned long long)numTfoCookieSent;
- (unsigned long long)numTfoFallback;
- (unsigned long long)numTfoSynDataAcked;
- (unsigned long long)numTfoSynDataRcv;
- (unsigned long long)numTfoSynDataSent;
- (BOOL)readFrom:(id)arg1;
- (void)setHasNumTfoBlackholed:(BOOL)arg1;
- (void)setHasNumTfoCookieInvalid:(BOOL)arg1;
- (void)setHasNumTfoCookieRcv:(BOOL)arg1;
- (void)setHasNumTfoCookieReq:(BOOL)arg1;
- (void)setHasNumTfoCookieReqRcv:(BOOL)arg1;
- (void)setHasNumTfoCookieSent:(BOOL)arg1;
- (void)setHasNumTfoFallback:(BOOL)arg1;
- (void)setHasNumTfoSynDataAcked:(BOOL)arg1;
- (void)setHasNumTfoSynDataRcv:(BOOL)arg1;
- (void)setHasNumTfoSynDataSent:(BOOL)arg1;
- (void)setNumTfoBlackholed:(unsigned long long)arg1;
- (void)setNumTfoCookieInvalid:(unsigned long long)arg1;
- (void)setNumTfoCookieRcv:(unsigned long long)arg1;
- (void)setNumTfoCookieReq:(unsigned long long)arg1;
- (void)setNumTfoCookieReqRcv:(unsigned long long)arg1;
- (void)setNumTfoCookieSent:(unsigned long long)arg1;
- (void)setNumTfoFallback:(unsigned long long)arg1;
- (void)setNumTfoSynDataAcked:(unsigned long long)arg1;
- (void)setNumTfoSynDataRcv:(unsigned long long)arg1;
- (void)setNumTfoSynDataSent:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end
