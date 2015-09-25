/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVPostOrPutTask : CoreDAVActionBackedTask {
    int _absoluteOrder;
    BOOL _forceToServer;
    NSString *_previousETag;
    NSURL *_priorOrderedURL;
    NSString *_requestDataContentType;
    NSData *_requestDataPayload;
    BOOL _sendOrder;
}

@property (nonatomic) int absoluteOrder;
@property (nonatomic) BOOL forceToServer;
@property (nonatomic, retain) NSString *previousETag;
@property (nonatomic, retain) NSURL *priorOrderedURL;
@property (nonatomic, retain) NSString *requestDataContentType;
@property (nonatomic, retain) NSData *requestDataPayload;

- (int)absoluteOrder;
- (id)additionalHeaderValues;
- (void)dealloc;
- (id)description;
- (BOOL)forceToServer;
- (id)initWithDataPayload:(id)arg1 dataContentType:(id)arg2 atURL:(id)arg3 previousETag:(id)arg4;
- (id)initWithURL:(id)arg1;
- (id)previousETag;
- (id)priorOrderedURL;
- (id)requestBody;
- (id)requestDataContentType;
- (id)requestDataPayload;
- (void)setAbsoluteOrder:(int)arg1;
- (void)setForceToServer:(BOOL)arg1;
- (void)setPreviousETag:(id)arg1;
- (void)setPriorOrderedURL:(id)arg1;
- (void)setRequestDataContentType:(id)arg1;
- (void)setRequestDataPayload:(id)arg1;

@end
