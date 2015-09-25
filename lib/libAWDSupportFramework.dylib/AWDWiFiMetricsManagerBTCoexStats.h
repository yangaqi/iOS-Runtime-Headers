/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiMetricsManagerBTCoexStats : PBCodable <NSCopying> {
    unsigned long long _antennaGrants;
    AWDWiFiMetricsManagerStateMachine *_antennaOwnership2BT;
    AWDWiFiMetricsManagerStateMachine *_antennaOwnership2WLAN;
    unsigned long long _antennaRequests;
    AWDWiFiMetricsManagerStateMachine *_enbledStateOff;
    AWDWiFiMetricsManagerStateMachine *_enbledStateOn;
    struct { 
        unsigned int antennaGrants : 1; 
        unsigned int antennaRequests : 1; 
        unsigned int highUcodeLatency : 1; 
        unsigned int psnullExceeded : 1; 
        unsigned int requestsA2DP : 1; 
        unsigned int requestsACL : 1; 
        unsigned int requestsBLE : 1; 
        unsigned int requestsBLEScan : 1; 
        unsigned int requestsInquiry : 1; 
        unsigned int requestsInquiryScan : 1; 
        unsigned int requestsMSS : 1; 
        unsigned int requestsOther : 1; 
        unsigned int requestsPARK : 1; 
        unsigned int requestsPage : 1; 
        unsigned int requestsPageScan : 1; 
        unsigned int requestsSCO : 1; 
        unsigned int requestsSniff : 1; 
        unsigned int requestseSCO : 1; 
        unsigned int timestamp : 1; 
        unsigned int wlanPreempted : 1; 
    } _has;
    unsigned long long _highUcodeLatency;
    AWDWiFiMetricsManagerStateMachine *_hybridStateOff;
    AWDWiFiMetricsManagerStateMachine *_hybridStateOn;
    unsigned long long _psnullExceeded;
    unsigned long long _requestsA2DP;
    unsigned long long _requestsACL;
    unsigned long long _requestsBLE;
    unsigned long long _requestsBLEScan;
    unsigned long long _requestsInquiry;
    unsigned long long _requestsInquiryScan;
    unsigned long long _requestsMSS;
    unsigned long long _requestsOther;
    unsigned long long _requestsPARK;
    unsigned long long _requestsPage;
    unsigned long long _requestsPageScan;
    unsigned long long _requestsSCO;
    unsigned long long _requestsSniff;
    unsigned long long _requestseSCO;
    AWDWiFiMetricsManagerStateMachine *_tdmStateOff;
    AWDWiFiMetricsManagerStateMachine *_tdmStateOn;
    unsigned long long _timestamp;
    unsigned long long _wlanPreempted;
}

@property (nonatomic) unsigned long long antennaGrants;
@property (nonatomic, retain) AWDWiFiMetricsManagerStateMachine *antennaOwnership2BT;
@property (nonatomic, retain) AWDWiFiMetricsManagerStateMachine *antennaOwnership2WLAN;
@property (nonatomic) unsigned long long antennaRequests;
@property (nonatomic, retain) AWDWiFiMetricsManagerStateMachine *enbledStateOff;
@property (nonatomic, retain) AWDWiFiMetricsManagerStateMachine *enbledStateOn;
@property (nonatomic) BOOL hasAntennaGrants;
@property (nonatomic, readonly) BOOL hasAntennaOwnership2BT;
@property (nonatomic, readonly) BOOL hasAntennaOwnership2WLAN;
@property (nonatomic) BOOL hasAntennaRequests;
@property (nonatomic, readonly) BOOL hasEnbledStateOff;
@property (nonatomic, readonly) BOOL hasEnbledStateOn;
@property (nonatomic) BOOL hasHighUcodeLatency;
@property (nonatomic, readonly) BOOL hasHybridStateOff;
@property (nonatomic, readonly) BOOL hasHybridStateOn;
@property (nonatomic) BOOL hasPsnullExceeded;
@property (nonatomic) BOOL hasRequestsA2DP;
@property (nonatomic) BOOL hasRequestsACL;
@property (nonatomic) BOOL hasRequestsBLE;
@property (nonatomic) BOOL hasRequestsBLEScan;
@property (nonatomic) BOOL hasRequestsInquiry;
@property (nonatomic) BOOL hasRequestsInquiryScan;
@property (nonatomic) BOOL hasRequestsMSS;
@property (nonatomic) BOOL hasRequestsOther;
@property (nonatomic) BOOL hasRequestsPARK;
@property (nonatomic) BOOL hasRequestsPage;
@property (nonatomic) BOOL hasRequestsPageScan;
@property (nonatomic) BOOL hasRequestsSCO;
@property (nonatomic) BOOL hasRequestsSniff;
@property (nonatomic) BOOL hasRequestseSCO;
@property (nonatomic, readonly) BOOL hasTdmStateOff;
@property (nonatomic, readonly) BOOL hasTdmStateOn;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasWlanPreempted;
@property (nonatomic) unsigned long long highUcodeLatency;
@property (nonatomic, retain) AWDWiFiMetricsManagerStateMachine *hybridStateOff;
@property (nonatomic, retain) AWDWiFiMetricsManagerStateMachine *hybridStateOn;
@property (nonatomic) unsigned long long psnullExceeded;
@property (nonatomic) unsigned long long requestsA2DP;
@property (nonatomic) unsigned long long requestsACL;
@property (nonatomic) unsigned long long requestsBLE;
@property (nonatomic) unsigned long long requestsBLEScan;
@property (nonatomic) unsigned long long requestsInquiry;
@property (nonatomic) unsigned long long requestsInquiryScan;
@property (nonatomic) unsigned long long requestsMSS;
@property (nonatomic) unsigned long long requestsOther;
@property (nonatomic) unsigned long long requestsPARK;
@property (nonatomic) unsigned long long requestsPage;
@property (nonatomic) unsigned long long requestsPageScan;
@property (nonatomic) unsigned long long requestsSCO;
@property (nonatomic) unsigned long long requestsSniff;
@property (nonatomic) unsigned long long requestseSCO;
@property (nonatomic, retain) AWDWiFiMetricsManagerStateMachine *tdmStateOff;
@property (nonatomic, retain) AWDWiFiMetricsManagerStateMachine *tdmStateOn;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned long long wlanPreempted;

- (unsigned long long)antennaGrants;
- (id)antennaOwnership2BT;
- (id)antennaOwnership2WLAN;
- (unsigned long long)antennaRequests;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)enbledStateOff;
- (id)enbledStateOn;
- (BOOL)hasAntennaGrants;
- (BOOL)hasAntennaOwnership2BT;
- (BOOL)hasAntennaOwnership2WLAN;
- (BOOL)hasAntennaRequests;
- (BOOL)hasEnbledStateOff;
- (BOOL)hasEnbledStateOn;
- (BOOL)hasHighUcodeLatency;
- (BOOL)hasHybridStateOff;
- (BOOL)hasHybridStateOn;
- (BOOL)hasPsnullExceeded;
- (BOOL)hasRequestsA2DP;
- (BOOL)hasRequestsACL;
- (BOOL)hasRequestsBLE;
- (BOOL)hasRequestsBLEScan;
- (BOOL)hasRequestsInquiry;
- (BOOL)hasRequestsInquiryScan;
- (BOOL)hasRequestsMSS;
- (BOOL)hasRequestsOther;
- (BOOL)hasRequestsPARK;
- (BOOL)hasRequestsPage;
- (BOOL)hasRequestsPageScan;
- (BOOL)hasRequestsSCO;
- (BOOL)hasRequestsSniff;
- (BOOL)hasRequestseSCO;
- (BOOL)hasTdmStateOff;
- (BOOL)hasTdmStateOn;
- (BOOL)hasTimestamp;
- (BOOL)hasWlanPreempted;
- (unsigned int)hash;
- (unsigned long long)highUcodeLatency;
- (id)hybridStateOff;
- (id)hybridStateOn;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)psnullExceeded;
- (BOOL)readFrom:(id)arg1;
- (unsigned long long)requestsA2DP;
- (unsigned long long)requestsACL;
- (unsigned long long)requestsBLE;
- (unsigned long long)requestsBLEScan;
- (unsigned long long)requestsInquiry;
- (unsigned long long)requestsInquiryScan;
- (unsigned long long)requestsMSS;
- (unsigned long long)requestsOther;
- (unsigned long long)requestsPARK;
- (unsigned long long)requestsPage;
- (unsigned long long)requestsPageScan;
- (unsigned long long)requestsSCO;
- (unsigned long long)requestsSniff;
- (unsigned long long)requestseSCO;
- (void)setAntennaGrants:(unsigned long long)arg1;
- (void)setAntennaOwnership2BT:(id)arg1;
- (void)setAntennaOwnership2WLAN:(id)arg1;
- (void)setAntennaRequests:(unsigned long long)arg1;
- (void)setEnbledStateOff:(id)arg1;
- (void)setEnbledStateOn:(id)arg1;
- (void)setHasAntennaGrants:(BOOL)arg1;
- (void)setHasAntennaRequests:(BOOL)arg1;
- (void)setHasHighUcodeLatency:(BOOL)arg1;
- (void)setHasPsnullExceeded:(BOOL)arg1;
- (void)setHasRequestsA2DP:(BOOL)arg1;
- (void)setHasRequestsACL:(BOOL)arg1;
- (void)setHasRequestsBLE:(BOOL)arg1;
- (void)setHasRequestsBLEScan:(BOOL)arg1;
- (void)setHasRequestsInquiry:(BOOL)arg1;
- (void)setHasRequestsInquiryScan:(BOOL)arg1;
- (void)setHasRequestsMSS:(BOOL)arg1;
- (void)setHasRequestsOther:(BOOL)arg1;
- (void)setHasRequestsPARK:(BOOL)arg1;
- (void)setHasRequestsPage:(BOOL)arg1;
- (void)setHasRequestsPageScan:(BOOL)arg1;
- (void)setHasRequestsSCO:(BOOL)arg1;
- (void)setHasRequestsSniff:(BOOL)arg1;
- (void)setHasRequestseSCO:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasWlanPreempted:(BOOL)arg1;
- (void)setHighUcodeLatency:(unsigned long long)arg1;
- (void)setHybridStateOff:(id)arg1;
- (void)setHybridStateOn:(id)arg1;
- (void)setPsnullExceeded:(unsigned long long)arg1;
- (void)setRequestsA2DP:(unsigned long long)arg1;
- (void)setRequestsACL:(unsigned long long)arg1;
- (void)setRequestsBLE:(unsigned long long)arg1;
- (void)setRequestsBLEScan:(unsigned long long)arg1;
- (void)setRequestsInquiry:(unsigned long long)arg1;
- (void)setRequestsInquiryScan:(unsigned long long)arg1;
- (void)setRequestsMSS:(unsigned long long)arg1;
- (void)setRequestsOther:(unsigned long long)arg1;
- (void)setRequestsPARK:(unsigned long long)arg1;
- (void)setRequestsPage:(unsigned long long)arg1;
- (void)setRequestsPageScan:(unsigned long long)arg1;
- (void)setRequestsSCO:(unsigned long long)arg1;
- (void)setRequestsSniff:(unsigned long long)arg1;
- (void)setRequestseSCO:(unsigned long long)arg1;
- (void)setTdmStateOff:(id)arg1;
- (void)setTdmStateOn:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setWlanPreempted:(unsigned long long)arg1;
- (id)tdmStateOff;
- (id)tdmStateOn;
- (unsigned long long)timestamp;
- (unsigned long long)wlanPreempted;
- (void)writeTo:(id)arg1;

@end
