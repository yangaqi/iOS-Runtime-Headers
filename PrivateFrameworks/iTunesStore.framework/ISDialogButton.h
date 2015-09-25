/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISDialogButton : NSObject <SSXPCCoding> {
    int _actionType;
    NSDictionary *_dictionary;
    id _parameter;
    NSString *_subtarget;
    NSString *_title;
    int _urlType;
}

@property int actionType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSDictionary *dictionary;
@property (readonly) unsigned int hash;
@property (retain) id parameter;
@property (copy) NSString *subtarget;
@property (readonly) Class superclass;
@property (retain) NSString *title;
@property int urlType;

+ (id)buttonWithTitle:(id)arg1;

- (int)_actionTypeForString:(id)arg1;
- (void)_openURLWithRequest:(id)arg1;
- (int)_urlTypeForString:(id)arg1;
- (int)actionType;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)dictionary;
- (id)initWithXPCEncoding:(id)arg1;
- (BOOL)isEqual:(id)arg1 superficial:(BOOL)arg2;
- (void)loadFromDictionary:(id)arg1;
- (id)parameter;
- (void)performDefaultActionForDialog:(id)arg1;
- (void)setActionType:(int)arg1;
- (void)setActionTypeWithString:(id)arg1;
- (void)setDictionary:(id)arg1;
- (void)setParameter:(id)arg1;
- (void)setSubtarget:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUrlType:(int)arg1;
- (id)subtarget;
- (id)title;
- (int)urlType;

@end
