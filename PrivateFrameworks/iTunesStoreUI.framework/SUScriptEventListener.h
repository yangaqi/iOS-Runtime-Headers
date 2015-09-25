/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptEventListener : NSObject {
    WebScriptObject *_callback;
    NSLock *_lock;
    NSString *_name;
    BOOL _useCapture;
}

@property (retain) WebScriptObject *callback;
@property (copy) NSString *name;
@property BOOL shouldUseCapture;

- (id)callback;
- (void)dealloc;
- (id)init;
- (id)name;
- (void)setCallback:(id)arg1;
- (void)setName:(id)arg1;
- (void)setShouldUseCapture:(BOOL)arg1;
- (BOOL)shouldUseCapture;

@end
