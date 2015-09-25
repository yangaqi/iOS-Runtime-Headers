/* Generated by RuntimeBrowser.
 */

@protocol EKDayViewControllerDelegate <NSObject>

@required

- (void)dayViewController:(EKDayViewController *)arg1 didChangeDisplayDate:(NSDateComponents *)arg2;
- (void)dayViewController:(EKDayViewController *)arg1 didSelectEvent:(EKEvent *)arg2 animated:(BOOL)arg3;

@optional

- (void)dayViewController:(EKDayViewController *)arg1 awaitsDeletingOccurrence:(EKEvent *)arg2;
- (void)dayViewController:(EKDayViewController *)arg1 awaitsRefreshingOccurrence:(EKEvent *)arg2;
- (void)dayViewController:(EKDayViewController *)arg1 beginEditingOccurrence:(EKEvent *)arg2;
- (EKEvent *)dayViewController:(EKDayViewController *)arg1 createEventAtDate:(NSDate *)arg2 allDay:(BOOL)arg3;
- (void)dayViewController:(EKDayViewController *)arg1 didScrollToDate:(NSDate *)arg2 normalizedOffset:(float)arg3;
- (void)dayViewController:(EKDayViewController *)arg1 didStartDeceleratingTargettingDate:(NSDateComponents *)arg2;
- (void)dayViewController:(EKDayViewController *)arg1 handleGestureCommittingOccurrence:(EKEvent *)arg2;
- (void)dayViewControllerDidBeginScrolling:(EKDayViewController *)arg1;
- (void)dayViewControllerDidChangeDisplayedOccurrences:(EKDayViewController *)arg1;
- (void)dayViewControllerDidEndScrolling:(EKDayViewController *)arg1;
- (void)dayViewControllerDidFinishPinchingDayView:(EKDayViewController *)arg1;
- (void)dayViewControllerDidReloadData:(EKDayViewController *)arg1;
- (void)dayViewControllerDidRespondToApplicationDidBecomeActiveStateChange:(EKDayViewController *)arg1;
- (void)dayViewControllerDidTapEmptySpace:(EKDayViewController *)arg1;
- (void)dayViewControllerDidUpdateScrollPosition:(EKDayViewController *)arg1;
- (void)dayViewControllerIsPinchingDayView:(EKDayViewController *)arg1;
- (BOOL)dayViewControllerShouldAllowLongPress:(EKDayViewController *)arg1;
- (BOOL)dayViewControllerShouldShowDetachDialogOnGestureDraggingEnd:(EKDayViewController *)arg1;
- (void)dayViewcontrollerDidBeginMovingEventWithGesture:(EKDayViewController *)arg1;
- (BOOL)dayviewControllerShouldAllowSwipeToChangeDays:(EKDayViewController *)arg1;
- (BOOL)delegateWantsToHandleDayViewController:(EKDayViewController *)arg1 gestureCommittingOccurrence:(EKEvent *)arg2;
- (void)updateSelectedOccurrenceView;

@end
