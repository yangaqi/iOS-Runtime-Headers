/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKPersistentRecurrenceRule : EKPersistentObject <NSCopying> {
    id _helper;
    EKRecurrenceEnd *_recurrenceEnd;
}

@property (nonatomic, readonly) NSString *UUID;
@property (nonatomic, readonly) NSDate *cachedEndDate;
@property (nonatomic, readonly) NSString *calendarIdentifier;
@property (nonatomic) unsigned int count;
@property (nonatomic, copy) NSArray *daysOfTheMonth;
@property (nonatomic, copy) NSArray *daysOfTheWeek;
@property (nonatomic, copy) NSArray *daysOfTheYear;
@property (nonatomic, copy) NSDate *endDate;
@property (nonatomic) int firstDayOfTheWeek;
@property (nonatomic) int frequency;
@property (nonatomic) int interval;
@property (nonatomic, copy) NSArray *monthsOfTheYear;
@property (nonatomic, retain) EKPersistentCalendarItem *owner;
@property (nonatomic, copy) NSArray *setPositions;
@property (nonatomic, readonly) BOOL shouldPinMonthDays;
@property (nonatomic, copy) NSArray *weeksOfTheYear;

+ (id)defaultPropertiesToLoad;
+ (id)relations;

- (id)UUID;
- (id)_helper;
- (id)cachedEndDate;
- (id)calendarIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (id)daysOfTheMonth;
- (id)daysOfTheWeek;
- (id)daysOfTheYear;
- (void)dealloc;
- (id)description;
- (id)endDate;
- (int)entityType;
- (int)firstDayOfTheWeek;
- (int)frequency;
- (struct { int x1; int x2; int x3; int x4; int x5; double x6; })gregorianUnits;
- (id)init;
- (int)interval;
- (BOOL)isDirty;
- (id)monthsOfTheYear;
- (id)owner;
- (void)setCount:(unsigned int)arg1;
- (void)setDaysOfTheMonth:(id)arg1;
- (void)setDaysOfTheWeek:(id)arg1;
- (void)setDaysOfTheYear:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setFirstDayOfTheWeek:(int)arg1;
- (void)setFrequency:(int)arg1;
- (void)setInterval:(int)arg1;
- (void)setMonthsOfTheYear:(id)arg1;
- (void)setOwner:(id)arg1;
- (id)setPositions;
- (void)setSetPositions:(id)arg1;
- (void)setWeeksOfTheYear:(id)arg1;
- (BOOL)shouldPinMonthDays;
- (BOOL)validate:(id*)arg1;
- (id)weeksOfTheYear;

@end
