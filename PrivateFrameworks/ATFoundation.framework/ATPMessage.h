/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

@interface ATPMessage : PBCodable <NSCopying> {
    BOOL _additionalPayload;
    struct { 
        unsigned int messageID : 1; 
        unsigned int messageType : 1; 
        unsigned int sessionID : 1; 
        unsigned int additionalPayload : 1; 
    } _has;
    unsigned int _messageID;
    int _messageType;
    NSData *_parameters;
    NSData *_paramsSignature;
    NSData *_payload;
    NSData *_payloadSignature;
    ATPRequest *_request;
    ATPResponse *_response;
    unsigned int _sessionID;
    ATPError *_streamError;
}

@property (nonatomic) BOOL additionalPayload;
@property (nonatomic) BOOL hasAdditionalPayload;
@property (nonatomic) BOOL hasMessageID;
@property (nonatomic) BOOL hasMessageType;
@property (nonatomic, readonly) BOOL hasParameters;
@property (nonatomic, readonly) BOOL hasParamsSignature;
@property (nonatomic, readonly) BOOL hasPayload;
@property (nonatomic, readonly) BOOL hasPayloadSignature;
@property (nonatomic, readonly) BOOL hasRequest;
@property (nonatomic, readonly) BOOL hasResponse;
@property (nonatomic) BOOL hasSessionID;
@property (nonatomic, readonly) BOOL hasStreamError;
@property (nonatomic) unsigned int messageID;
@property (nonatomic) int messageType;
@property (nonatomic, retain) NSData *parameters;
@property (nonatomic, retain) NSData *paramsSignature;
@property (nonatomic, retain) NSData *payload;
@property (nonatomic, retain) NSData *payloadSignature;
@property (nonatomic, retain) ATPRequest *request;
@property (nonatomic, retain) ATPResponse *response;
@property (nonatomic) unsigned int sessionID;
@property (nonatomic, retain) ATPError *streamError;

- (void).cxx_destruct;
- (BOOL)additionalPayload;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)formattedDescription;
- (BOOL)hasAdditionalPayload;
- (BOOL)hasMessageID;
- (BOOL)hasMessageType;
- (BOOL)hasParameters;
- (BOOL)hasParamsSignature;
- (BOOL)hasPayload;
- (BOOL)hasPayloadSignature;
- (BOOL)hasRequest;
- (BOOL)hasResponse;
- (BOOL)hasSessionID;
- (BOOL)hasStreamError;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)messageID;
- (int)messageType;
- (id)parameters;
- (id)paramsSignature;
- (id)payload;
- (id)payloadSignature;
- (BOOL)readFrom:(id)arg1;
- (id)request;
- (id)response;
- (unsigned int)sessionID;
- (void)setAdditionalPayload:(BOOL)arg1;
- (void)setHasAdditionalPayload:(BOOL)arg1;
- (void)setHasMessageID:(BOOL)arg1;
- (void)setHasMessageType:(BOOL)arg1;
- (void)setHasSessionID:(BOOL)arg1;
- (void)setMessageID:(unsigned int)arg1;
- (void)setMessageType:(int)arg1;
- (void)setParameters:(id)arg1;
- (void)setParamsSignature:(id)arg1;
- (void)setPayload:(id)arg1;
- (void)setPayloadSignature:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setSessionID:(unsigned int)arg1;
- (void)setStreamError:(id)arg1;
- (id)streamError;
- (void)writeTo:(id)arg1;

@end
