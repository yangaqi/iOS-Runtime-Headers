/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKTunablePref : NSObject {
    NSMapTable *_handlers;
    NSString *_prefName;
    id _prefValue;
}

@property (retain) NSMapTable *handlers;
@property (retain) NSString *prefName;
@property (retain) id prefValue;

- (void)addObserver:(id)arg1 handler:(id /* block */)arg2;
- (id)codeDescription;
- (void)dealloc;
- (id)handlers;
- (id)initWithPrefName:(id)arg1 defaultValue:(id)arg2;
- (id)prefName;
- (id)prefValue;
- (void)pushValueToModel:(id)arg1;
- (void)restore:(id)arg1;
- (void)save:(id)arg1;
- (void)setHandlers:(id)arg1;
- (void)setPrefName:(id)arg1;
- (void)setPrefValue:(id)arg1;
- (id)viewWithContainedLabel:(id*)arg1;

@end
