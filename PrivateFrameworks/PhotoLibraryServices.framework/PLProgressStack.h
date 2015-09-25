/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLProgressStack : NSObject {
    float currentMultiplier;
    float currentTotal;
    id delegate;
    NSString *mediaPathString;
    NSMutableArray *multipliers;
    BOOL notifyUsingAssetsdNotificationCenter;
}

@property (nonatomic) float currentMultiplier;
@property (nonatomic) float currentTotal;
@property (nonatomic) id delegate;
@property (nonatomic, retain) NSString *mediaPathString;
@property (nonatomic, retain) NSMutableArray *multipliers;
@property (nonatomic) BOOL notifyUsingAssetsdNotificationCenter;

+ (id)unarchiveFromDictionary:(id)arg1;

- (id)archiveToDictionary;
- (float)currentMultiplier;
- (float)currentTotal;
- (void)dealloc;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (id)mediaPathString;
- (id)multipliers;
- (BOOL)notifyUsingAssetsdNotificationCenter;
- (void)pop;
- (void)popAndUpdate;
- (void)push:(float)arg1;
- (void)setCurrentMediaPath:(id)arg1;
- (void)setCurrentMultiplier:(float)arg1;
- (void)setCurrentTotal:(float)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMediaPathString:(id)arg1;
- (void)setMultipliers:(id)arg1;
- (void)setNotifyUsingAssetsdNotificationCenter:(BOOL)arg1;
- (float)totalProgress:(float)arg1;
- (void)updateProgress:(float)arg1;

@end
