/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTPBBulletinIdentifier : PBCodable <NSCopying> {
    NSString *_publisherBulletinID;
    NSString *_recordID;
}

@property (nonatomic, readonly) BOOL hasPublisherBulletinID;
@property (nonatomic, readonly) BOOL hasRecordID;
@property (nonatomic, retain) NSString *publisherBulletinID;
@property (nonatomic, retain) NSString *recordID;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasPublisherBulletinID;
- (BOOL)hasRecordID;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)publisherBulletinID;
- (BOOL)readFrom:(id)arg1;
- (id)recordID;
- (void)setPublisherBulletinID:(id)arg1;
- (void)setRecordID:(id)arg1;
- (void)writeTo:(id)arg1;

@end
