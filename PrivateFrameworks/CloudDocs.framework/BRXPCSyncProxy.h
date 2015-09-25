/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRXPCSyncProxy : NSProxy {
    NSError *_error;
    NSObject<OS_dispatch_group> *_group;
    int _nested;
    id _result;
    NSObject *_target;
}

@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) id result;

- (void)dealloc;
- (id)error;
- (void)finalize;
- (void)forwardInvocation:(id)arg1;
- (id)initWithXPCObject:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)result;
- (id)resultWithTimeout:(int)arg1;
- (void)setBoolResult:(BOOL)arg1 error:(id)arg2;
- (void)setError:(id)arg1;
- (void)setObjResult:(id)arg1 error:(id)arg2;
- (void)setResult:(id)arg1;

@end
