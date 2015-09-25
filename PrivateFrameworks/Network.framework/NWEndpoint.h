/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Network.framework/Network
 */

@interface NWEndpoint : NSObject <NWPrettyDescription> {
    NSObject<OS_nw_endpoint> *_internalEndpoint;
}

@property (retain) NWInterface *interface;
@property (retain) NSObject<OS_nw_endpoint> *internalEndpoint;
@property (readonly, copy) NSString *privateDescription;
@property (retain) NSData *txtRecord;

+ (Class)classForEndpointType:(int)arg1;
+ (id)endpointWithInternalEndpoint:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2;
- (id)initWithEndpoint:(id)arg1;
- (id)interface;
- (id)internalEndpoint;
- (id)privateDescription;
- (void)setInterface:(id)arg1;
- (void)setInternalEndpoint:(id)arg1;
- (void)setTxtRecord:(id)arg1;
- (id)txtRecord;

@end
