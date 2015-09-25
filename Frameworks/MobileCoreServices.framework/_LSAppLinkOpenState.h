/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface _LSAppLinkOpenState : NSObject {
    NSURL *_URL;
    NSDictionary *_browserState;
    NSString *_bundleIdentifier;
    BOOL _openStrategyChanged;
}

@property (copy) NSURL *URL;
@property (copy) NSDictionary *browserState;
@property (copy) NSString *bundleIdentifier;
@property (readonly) NSData *dataRepresentation;
@property BOOL openStrategyChanged;

+ (id)openStateWithDataRepresentation:(id)arg1;

- (id)URL;
- (id)browserState;
- (id)bundleIdentifier;
- (id)dataRepresentation;
- (void)dealloc;
- (id)debugDescription;
- (BOOL)openStrategyChanged;
- (void)setBrowserState:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setOpenStrategyChanged:(BOOL)arg1;
- (void)setURL:(id)arg1;
- (BOOL)validate;

@end
