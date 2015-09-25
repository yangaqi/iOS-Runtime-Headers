/* Generated by RuntimeBrowser.
 */

@protocol TSDChangeableInfo <TSDInfo>

@required

- (void)beginCollectingChanges;
- (TSSPropertySetChangeDetails *)endCollectingChanges;
- (BOOL)isUserModifiable;
- (void)willChangeProperty:(int)arg1;

@optional

- (void)willChangeProperties:(TSSPropertySet *)arg1;

@end
