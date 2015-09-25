/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECFeedback : NSObject <NSSecureCoding> {
    _DECItem *_itemSelected;
    NSArray *_itemsShown;
    _DECLaunchInfo *_launchInfo;
    _DECPrediction *_prediction;
}

@property (nonatomic, retain) _DECItem *itemSelected;
@property (nonatomic, retain) NSArray *itemsShown;
@property (nonatomic, retain) _DECLaunchInfo *launchInfo;
@property (nonatomic, retain) _DECPrediction *prediction;

+ (id)feedbackWithItemSelected:(id)arg1 launchInfo:(id)arg2 itemsShown:(id)arg3 prediction:(id)arg4;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemSelected:(id)arg1 launchInfo:(id)arg2 itemsShown:(id)arg3 prediction:(id)arg4;
- (id)itemSelected;
- (id)itemsShown;
- (id)launchInfo;
- (id)predictedItemsShown;
- (id)prediction;
- (void)setItemSelected:(id)arg1;
- (void)setItemsShown:(id)arg1;
- (void)setLaunchInfo:(id)arg1;
- (void)setPrediction:(id)arg1;

@end
